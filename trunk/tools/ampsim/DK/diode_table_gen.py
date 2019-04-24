# -*- coding: utf-8 -*-
from __future__ import division

import math
import pylab as pl
import sys
import numpy as np
from models import *
import dk_simulator, dk_lib

class gen(object):
    FS = 96000
    max_error = 1e-7
    result_count = 10
    timespan = 0.01
    solver = None  ## use default

    def get_samples(self, data):
        return data[np.array(np.linspace(0, len(data)-1, self.result_count).round(), dtype=int)]

    def op_signal(self, op=None, samples=None, timespan=None):
        if timespan is None:
            timespan = self.timespan
        if op is None:
            op = self.V["OP"]
        if samples is None:
            samples = timespan*self.FS
        return np.array((op,),dtype=np.float64).repeat(samples, axis=0)

    def constant_signal(self, *values):
        a = np.zeros((int(self.timespan*self.FS), len(values)))
        for i, v in enumerate(values):
            a[:,i] = v
        return a

    def timeline(self):
        return np.linspace(0, self.timespan, self.timespan*self.FS)

    def finish_plot(self, args, loc=None, timeline=None):
        pl.grid()
        pl.legend(args, loc=loc)
        pl.show()

mag_dict = {
    "M": "e6",
    "k": "e3",
    "m": "e-3",
    "u": "e-6",
    "n": "e-9",
    "p": "e-12",
    "f": "e-15",
    "" : "",
    }

Diodes = {
    "D237A"    : dict(Is=31.69e-12, mUt=26e-3, N=1.0),
    "1N4001"   : dict(Is=29.5e-9, mUt=26e-3, N=1.984),
    "1N34A"    : dict(Is=2.6e-6, mUt=26e-3, N=1.6),
    "1N4148"   : dict(Is=2.52e-9, mUt=26e-3, N=1.752),
    "LedRed"   : dict(Is=93.2e-12, mUt=26e-3, N=3.73),
    "LedWHITE" : dict(Is=0.27e-9, mUt=26e-3, N=6.79),
    "D311A"    : dict(Is=8e-6, mUt=26e-3, N=1.483),
    "AA112"    : dict(Is=1.2e-6, mUt=26e-3, N=1.4),
    "OA90-G"   : dict(Is=54.12e-6, mUt=26e-3, N=4.209),
    "OA90-M"   : dict(Is=120.5e-6, mUt=26e-3, N=7.405),
    }


class Diode_clipper(gen): # diode clipper
    # set max_sig and max_op to fetch the sweep point (saturated)
    max_sig = 1.2 # max test signal
    max_op = 1.0  # operation range 
    operator = max_op / max_sig  # set table istep

    S = ''
    V = ''
    model = ''

    def set_model(self,model):
        self.model = model
        D_ = D2  # 2 antisymmetric diodes
        #D_ = D  # one diode
        self.S = (#(C(), 0, 1),
             (R(1), 1, 2),
             (D_(), 2, GND),
             #(R(2), 2, GND),
             (IN, 1),
             (OUT, 1, IN(1), 2),
             )

        self.V = {R(): 100,
             R(1): 0.1,
             R(2): 10.,
             D_(): Diodes[self.model],
             C(): 0.0000001,
             "OP": [0],
             }

    table_define = """
struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};
"""

    table_use = """
double always_inline diodeclip(double x) {
    double f = fabs(x);
    f = f * diode_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = diode_table.data[0];
    } else if (i >= diode_table.size-1) {
        f = diode_table.data[diode_table.size-1];
    } else {
	f -= i;
	f = diode_table.data[i]*(1-f) + diode_table.data[i+1]*f;
    }
    return copysign(f, x);
}
"""

    def signal(self):
        self.sig = np.linspace(0, self.max_sig, 100)
        a = self.op_signal([0], samples=len(self.sig))
        a[:,0] = self.sig
        return a

    def generate_table(self, p, filename=None):
        n = 'dkbuild/%s_table.h' % self.model
        if filename:
            n = filename
        sys.stdout = open(n, 'w')
        y = p(self.signal())
        c = 0;
        s = ""
        z = 0
        sys.stdout.write("\n")
        sys.stdout.write("// %s table generated by DK/diode_table_gen.py -- do not modify manually\n" % self.model )
        sys.stdout.write(self.table_define)
        sys.stdout.write("\n")
        sys.stdout.write("static table1d_imp<%d> diode_table __rt_data = {\n" % len(self.sig))
        for i in range(len(y[0])):
            c += 1
            if c == 3:
                sys.stdout.write('\t%g,%g,%g,%d, {' % (y[0][i], y[len(self.sig)-1][i], (len(self.sig)-1)*(self.operator), len(self.sig)))
                #sys.stdout.write("\t{")
                for item in y:
                    if z % 5 == 0:
                        sys.stdout.write(s+"\n\t" )
                        s = ""
                        z = 0
                    sys.stdout.write(s+"%s" % ("{:.12f}".format(item[i])))
                    s = ","
                    z +=1
                sys.stdout.write("\n\t}\n};")
        sys.stdout.write("\n")
        sys.stdout.write(self.table_use)
        sys.stdout.write("\n")
        sys.stdout = sys.__stdout__

    def plot(self, p):
        y = p(self.signal())
        pl.plot(self.sig, y)
        self.finish_plot(p.out_labels, timeline=self.sig)

    def __init__(self, name):
        self.set_model(name)

def main(argv):
    if len(sys.argv) < 2:
        arg = "D237A" # default transistor model
    else:
        arg = str(sys.argv[1])
    argoky = 0
    if arg in Diodes.keys():
        argoky = 1
    if not argoky:
        print (' please give on of the Diode model name')
        print (Diodes.keys())
        exit()
        
    t = "Diode_clipper"
    v = Diode_clipper(arg)
    parser = dk_simulator.Parser(v.S, v.V, v.FS)
    p = dk_simulator.get_executor(
        t, parser, v.solver, '-p', c_tempdir='/tmp', c_verbose='--c-verbose',
        c_debug_load='', linearize='', c_real=("double"))
    v.generate_table(p)
    v.plot(p)

if __name__ == "__main__":
    main(sys.argv[1:])