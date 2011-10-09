// generated from file '../src/faust/gx_outputlevel.dsp' by dsp2cc:
// Code generated with Faust 0.9.43 (http://faust.grame.fr)

namespace gx_outputlevel {
static FAUSTFLOAT 	fslider0;
static double 	fRec0[2];
static int	fSamplingFreq;

static void clear_state(PluginDef* = 0)
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
}

static void init(int samplingFreq, PluginDef* = 0)
{
	fSamplingFreq = samplingFreq;
	clear_state();
}

static void compute(int count, float *input0, float *input1, float *output0, float *output1)
{
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
		output0[i] = (FAUSTFLOAT)((double)input0[i] * fRec0[0]);
		output1[i] = (FAUSTFLOAT)((double)input1[i] * fRec0[0]);
		// post processing
		fRec0[1] = fRec0[0];
	}
}

static int register_params(const ParamReg& reg)
{
	reg.registerVar("amp.out_master","Level","S","",&fslider0, 0.0, -5e+01, 4.0, 0.1);
	return 0;
}

PluginDef plugin = {
    PLUGINDEF_VERSION,
    0,   // flags
    "gx_outputlevel",  // id
    "?gx_outputlevel",  // name
    0,  // groups
    0,  // mono_audio
    compute,  // stereo_audio
    init,  // set_samplerate
    0,  // activate plugin
    register_params,
    0,   // load_ui
    clear_state,  // clear_state
};

} // end namespace gx_outputlevel
