
#include "StereoEffectsVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"
#include "VSTComponents/Owl/Toolbox.h"

CStereoEffectsVoice::CStereoEffectsVoice(const std::string & name, IVoiceModuleHost & host)
	: CVoiceModuleBase(name, host)
{
}

void CStereoEffectsVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
}

void CStereoEffectsVoice::OnNoteStop(float velocity, bool allowTailOff)
{
}

void CStereoEffectsVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	const double left = Toolbox::clamp(1 - mPan,0.0,1.0);
	const double right = Toolbox::clamp(1 + mPan, 0.0, 1.0);
	outputBuffer.applyGain(0, startSample, numSamples, left);
	outputBuffer.applyGain(1, startSample, numSamples, right);
}

void CStereoEffectsVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Pan"), new CPropertyDouble01(mPan, -1.0, 1.0));
}
