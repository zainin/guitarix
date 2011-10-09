// generated from file '../src/faust/selecteq.dsp' by dsp2cc:
// Code generated with Faust 0.9.43 (http://faust.grame.fr)

namespace selecteq {
static FAUSTFLOAT 	fslider0;
static double 	fConst0;
static FAUSTFLOAT 	fslider1;
static FAUSTFLOAT 	fslider2;
static FAUSTFLOAT 	fslider3;
static FAUSTFLOAT 	fslider4;
static FAUSTFLOAT 	fslider5;
static FAUSTFLOAT 	fslider6;
static FAUSTFLOAT 	fslider7;
static FAUSTFLOAT 	fslider8;
static FAUSTFLOAT 	fslider9;
static FAUSTFLOAT 	fslider10;
static FAUSTFLOAT 	fslider11;
static FAUSTFLOAT 	fslider12;
static FAUSTFLOAT 	fslider13;
static FAUSTFLOAT 	fslider14;
static FAUSTFLOAT 	fslider15;
static FAUSTFLOAT 	fslider16;
static FAUSTFLOAT 	fslider17;
static FAUSTFLOAT 	fslider18;
static FAUSTFLOAT 	fslider19;
static FAUSTFLOAT 	fslider20;
static FAUSTFLOAT 	fslider21;
static FAUSTFLOAT 	fslider22;
static FAUSTFLOAT 	fslider23;
static FAUSTFLOAT 	fslider24;
static FAUSTFLOAT 	fslider25;
static FAUSTFLOAT 	fslider26;
static FAUSTFLOAT 	fslider27;
static FAUSTFLOAT 	fslider28;
static FAUSTFLOAT 	fslider29;
static double 	fRec9[3];
static double 	fRec8[3];
static double 	fRec7[3];
static double 	fRec6[3];
static double 	fRec5[3];
static double 	fRec4[3];
static double 	fRec3[3];
static double 	fRec2[3];
static double 	fRec1[3];
static double 	fRec0[3];
static int	fSamplingFreq;

static void clear_state(PluginDef* = 0)
{
	for (int i=0; i<3; i++) fRec9[i] = 0;
	for (int i=0; i<3; i++) fRec8[i] = 0;
	for (int i=0; i<3; i++) fRec7[i] = 0;
	for (int i=0; i<3; i++) fRec6[i] = 0;
	for (int i=0; i<3; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<3; i++) fRec3[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
}

static void init(int samplingFreq, PluginDef* = 0)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (3.141592653589793 / min(192000, max(1, fSamplingFreq)));
	clear_state();
}

static void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = tan((fConst0 * fslider0));
	double 	fSlow1 = (2 * (faustpower<2>(fSlow0) - 1));
	double 	fSlow2 = fslider1;
	double 	fSlow3 = (pow(10,(0.05 * (0 - fslider2))) / fSlow2);
	double 	fSlow4 = (1 + (fSlow0 * (fSlow0 - fSlow3)));
	double 	fSlow5 = (1.0 / (1 + (fSlow0 * (fSlow0 + fSlow3))));
	double 	fSlow6 = tan((fConst0 * fslider3));
	double 	fSlow7 = (2 * (faustpower<2>(fSlow6) - 1));
	double 	fSlow8 = fslider4;
	double 	fSlow9 = (pow(10,(0.05 * (0 - fslider5))) / fSlow8);
	double 	fSlow10 = (1 + (fSlow6 * (fSlow6 - fSlow9)));
	double 	fSlow11 = (1.0 / (1 + (fSlow6 * (fSlow6 + fSlow9))));
	double 	fSlow12 = tan((fConst0 * fslider6));
	double 	fSlow13 = (2 * (faustpower<2>(fSlow12) - 1));
	double 	fSlow14 = fslider7;
	double 	fSlow15 = (pow(10,(0.05 * (0 - fslider8))) / fSlow14);
	double 	fSlow16 = (1 + (fSlow12 * (fSlow12 - fSlow15)));
	double 	fSlow17 = (1.0 / (1 + (fSlow12 * (fSlow12 + fSlow15))));
	double 	fSlow18 = tan((fConst0 * fslider9));
	double 	fSlow19 = (2 * (faustpower<2>(fSlow18) - 1));
	double 	fSlow20 = fslider10;
	double 	fSlow21 = (pow(10,(0.05 * (0 - fslider11))) / fSlow20);
	double 	fSlow22 = (1 + (fSlow18 * (fSlow18 - fSlow21)));
	double 	fSlow23 = (1.0 / (1 + (fSlow18 * (fSlow18 + fSlow21))));
	double 	fSlow24 = tan((fConst0 * fslider12));
	double 	fSlow25 = (2 * (faustpower<2>(fSlow24) - 1));
	double 	fSlow26 = fslider13;
	double 	fSlow27 = (pow(10,(0.05 * (0 - fslider14))) / fSlow26);
	double 	fSlow28 = (1 + (fSlow24 * (fSlow24 - fSlow27)));
	double 	fSlow29 = (1.0 / (1 + (fSlow24 * (fSlow24 + fSlow27))));
	double 	fSlow30 = tan((fConst0 * fslider15));
	double 	fSlow31 = (2 * (faustpower<2>(fSlow30) - 1));
	double 	fSlow32 = fslider16;
	double 	fSlow33 = (pow(10,(0.05 * (0 - fslider17))) / fSlow32);
	double 	fSlow34 = (1 + (fSlow30 * (fSlow30 - fSlow33)));
	double 	fSlow35 = (1.0 / (1 + (fSlow30 * (fSlow30 + fSlow33))));
	double 	fSlow36 = tan((fConst0 * fslider18));
	double 	fSlow37 = (2 * (faustpower<2>(fSlow36) - 1));
	double 	fSlow38 = fslider19;
	double 	fSlow39 = (pow(10,(0.05 * (0 - fslider20))) / fSlow38);
	double 	fSlow40 = (1 + (fSlow36 * (fSlow36 - fSlow39)));
	double 	fSlow41 = (1.0 / (1 + (fSlow36 * (fSlow36 + fSlow39))));
	double 	fSlow42 = tan((fConst0 * fslider21));
	double 	fSlow43 = (2 * (faustpower<2>(fSlow42) - 1));
	double 	fSlow44 = fslider22;
	double 	fSlow45 = (pow(10,(0.05 * (0 - fslider23))) / fSlow44);
	double 	fSlow46 = (1 + (fSlow42 * (fSlow42 - fSlow45)));
	double 	fSlow47 = (1.0 / (1 + (fSlow42 * (fSlow42 + fSlow45))));
	double 	fSlow48 = tan((fConst0 * fslider24));
	double 	fSlow49 = (2 * (faustpower<2>(fSlow48) - 1));
	double 	fSlow50 = fslider25;
	double 	fSlow51 = (pow(10,(0.05 * (0 - fslider26))) / fSlow50);
	double 	fSlow52 = (1 + (fSlow48 * (fSlow48 - fSlow51)));
	double 	fSlow53 = (1.0 / (1 + (fSlow48 * (fSlow48 + fSlow51))));
	double 	fSlow54 = tan((fConst0 * fslider27));
	double 	fSlow55 = (2 * (faustpower<2>(fSlow54) - 1));
	double 	fSlow56 = fslider28;
	double 	fSlow57 = (pow(10,(0.05 * (0 - fslider29))) / fSlow56);
	double 	fSlow58 = (1 + (fSlow54 * (fSlow54 - fSlow57)));
	double 	fSlow59 = (1.0 / (1 + (fSlow54 * (fSlow54 + fSlow57))));
	double 	fSlow60 = (1.0 / fSlow56);
	double 	fSlow61 = (1 + (fSlow54 * (fSlow54 - fSlow60)));
	double 	fSlow62 = (1 + (fSlow54 * (fSlow54 + fSlow60)));
	double 	fSlow63 = (1.0 / fSlow50);
	double 	fSlow64 = (1 + (fSlow48 * (fSlow48 - fSlow63)));
	double 	fSlow65 = (1 + (fSlow48 * (fSlow48 + fSlow63)));
	double 	fSlow66 = (1.0 / fSlow44);
	double 	fSlow67 = (1 + (fSlow42 * (fSlow42 - fSlow66)));
	double 	fSlow68 = (1 + (fSlow42 * (fSlow42 + fSlow66)));
	double 	fSlow69 = (1.0 / fSlow38);
	double 	fSlow70 = (1 + (fSlow36 * (fSlow36 - fSlow69)));
	double 	fSlow71 = (1 + (fSlow36 * (fSlow36 + fSlow69)));
	double 	fSlow72 = (1.0 / fSlow32);
	double 	fSlow73 = (1 + (fSlow30 * (fSlow30 - fSlow72)));
	double 	fSlow74 = (1 + (fSlow30 * (fSlow30 + fSlow72)));
	double 	fSlow75 = (1.0 / fSlow26);
	double 	fSlow76 = (1 + (fSlow24 * (fSlow24 - fSlow75)));
	double 	fSlow77 = (1 + (fSlow24 * (fSlow24 + fSlow75)));
	double 	fSlow78 = (1.0 / fSlow20);
	double 	fSlow79 = (1 + (fSlow18 * (fSlow18 - fSlow78)));
	double 	fSlow80 = (1 + (fSlow18 * (fSlow18 + fSlow78)));
	double 	fSlow81 = (1.0 / fSlow14);
	double 	fSlow82 = (1 + (fSlow12 * (fSlow12 - fSlow81)));
	double 	fSlow83 = (1 + (fSlow12 * (fSlow12 + fSlow81)));
	double 	fSlow84 = (1.0 / fSlow8);
	double 	fSlow85 = (1 + (fSlow6 * (fSlow6 - fSlow84)));
	double 	fSlow86 = (1 + (fSlow6 * (fSlow6 + fSlow84)));
	double 	fSlow87 = (1.0 / fSlow2);
	double 	fSlow88 = (1 + (fSlow0 * (fSlow0 - fSlow87)));
	double 	fSlow89 = (1 + (fSlow0 * (fSlow0 + fSlow87)));
	for (int i=0; i<count; i++) {
		double fTemp0 = (fSlow1 * fRec0[1]);
		double fTemp1 = (fSlow7 * fRec1[1]);
		double fTemp2 = (fSlow13 * fRec2[1]);
		double fTemp3 = (fSlow19 * fRec3[1]);
		double fTemp4 = (fSlow25 * fRec4[1]);
		double fTemp5 = (fSlow31 * fRec5[1]);
		double fTemp6 = (fSlow37 * fRec6[1]);
		double fTemp7 = (fSlow43 * fRec7[1]);
		double fTemp8 = (fSlow49 * fRec8[1]);
		double fTemp9 = (fSlow55 * fRec9[1]);
		fRec9[0] = ((double)input0[i] - (fSlow59 * ((fSlow58 * fRec9[2]) + fTemp9)));
		fRec8[0] = ((fSlow59 * ((fTemp9 + (fSlow62 * fRec9[0])) + (fSlow61 * fRec9[2]))) - (fSlow53 * ((fSlow52 * fRec8[2]) + fTemp8)));
		fRec7[0] = ((fSlow53 * ((fTemp8 + (fSlow65 * fRec8[0])) + (fSlow64 * fRec8[2]))) - (fSlow47 * ((fSlow46 * fRec7[2]) + fTemp7)));
		fRec6[0] = ((fSlow47 * ((fTemp7 + (fSlow68 * fRec7[0])) + (fSlow67 * fRec7[2]))) - (fSlow41 * ((fSlow40 * fRec6[2]) + fTemp6)));
		fRec5[0] = ((fSlow41 * ((fTemp6 + (fSlow71 * fRec6[0])) + (fSlow70 * fRec6[2]))) - (fSlow35 * ((fSlow34 * fRec5[2]) + fTemp5)));
		fRec4[0] = ((fSlow35 * ((fTemp5 + (fSlow74 * fRec5[0])) + (fSlow73 * fRec5[2]))) - (fSlow29 * ((fSlow28 * fRec4[2]) + fTemp4)));
		fRec3[0] = ((fSlow29 * ((fTemp4 + (fSlow77 * fRec4[0])) + (fSlow76 * fRec4[2]))) - (fSlow23 * ((fSlow22 * fRec3[2]) + fTemp3)));
		fRec2[0] = ((fSlow23 * ((fTemp3 + (fSlow80 * fRec3[0])) + (fSlow79 * fRec3[2]))) - (fSlow17 * ((fSlow16 * fRec2[2]) + fTemp2)));
		fRec1[0] = ((fSlow17 * ((fTemp2 + (fSlow83 * fRec2[0])) + (fSlow82 * fRec2[2]))) - (fSlow11 * ((fSlow10 * fRec1[2]) + fTemp1)));
		fRec0[0] = ((fSlow11 * ((fTemp1 + (fSlow86 * fRec1[0])) + (fSlow85 * fRec1[2]))) - (fSlow5 * ((fSlow4 * fRec0[2]) + fTemp0)));
		output0[i] = (FAUSTFLOAT)(fSlow5 * ((fTemp0 + (fSlow89 * fRec0[0])) + (fSlow88 * fRec0[2])));
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec5[2] = fRec5[1]; fRec5[1] = fRec5[0];
		fRec6[2] = fRec6[1]; fRec6[1] = fRec6[0];
		fRec7[2] = fRec7[1]; fRec7[1] = fRec7[0];
		fRec8[2] = fRec8[1]; fRec8[1] = fRec8[0];
		fRec9[2] = fRec9[1]; fRec9[1] = fRec9[0];
	}
}

static int register_params(const ParamReg& reg)
{
	reg.registerVar("eqs.Qs31_25","","S","",&fslider28, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.fs31_25","","S","gain (dB) at 31.25 Hz",&fslider29, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.fs62_5","","S","gain (dB) at 62.5 Hz",&fslider26, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.freq31_25","","S","Hz",&fslider27, 31.0, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.freq62_5","","S","Hz",&fslider24, 62.0, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.Qs62_5","","S","",&fslider25, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.Qs125","","S","",&fslider22, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.fs125","","S","gain (dB) at 125 Hz",&fslider23, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.fs250","","S","gain (dB) at 250 Hz",&fslider20, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.freq125","","S","Hz",&fslider21, 125.0, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.Qs1k","","S","",&fslider13, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.freq1k","","S","Hz",&fslider12, 1e+03, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.fs2k","","S","gain (dB) at 2 kHz",&fslider11, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.Qs2k","","S","",&fslider10, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.fs500","","S","gain (dB) at 500 Hz",&fslider17, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.Qs500","","S","",&fslider16, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.freq500","","S","Hz",&fslider15, 5e+02, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.fs1k","","S","gain (dB) at 1 kHz",&fslider14, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.Qs250","","S","",&fslider19, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.freq250","","S","Hz",&fslider18, 2.5e+02, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.Qs4k","","S","",&fslider7, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.freq4k","","S","Hz",&fslider6, 4e+03, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.fs8k","","S","gain (dB) at 8 kHz",&fslider5, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.Qs8k","","S","",&fslider4, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.freq8k","","S","Hz",&fslider3, 8e+03, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.fs16k","","S","gain (dB) at 16 kHz",&fslider2, 0.0, -5e+01, 1e+01, 0.1);
	reg.registerVar("eqs.Qs16k","","S","",&fslider1, 5e+01, 1.0, 1e+02, 1.0);
	reg.registerVar("eqs.freq16k","","S","Hz",&fslider0, 1.6e+04, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.freq2k","","S","Hz",&fslider9, 2e+03, 2e+01, 2e+04, 1.0);
	reg.registerVar("eqs.fs4k","","S","gain (dB) at 4 kHz",&fslider8, 0.0, -5e+01, 1e+01, 0.1);
	return 0;
}

PluginDef plugin = {
    PLUGINDEF_VERSION,
    0,   // flags
    "eqs",  // id
    N_("Scaleable EQ"),  // name
    0,  // groups
    compute,  // mono_audio
    0,  // stereo_audio
    init,  // set_samplerate
    0,  // activate plugin
    register_params,
    0,   // load_ui
    clear_state,  // clear_state
};

} // end namespace selecteq
