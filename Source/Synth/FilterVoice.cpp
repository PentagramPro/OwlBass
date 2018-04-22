#include "FilterVoice.h"
#include "../Common/ProperiesRegistry.h"
#include "../Common/Toolbox.h"
CFilterVoice::CFilterVoice(const std::string & name, IVoiceModuleHost & host) : CVoiceModuleBase(name, host)
{
	mFilter.Reset(GetSampleRate());
	mCutoffDelay.Reset(GetSampleRate(), 0.1);
}
void CFilterVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	

	mFilter.SetParams(mCutoffFreq, 3);
	
	StartSound();
}

void CFilterVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	
	StopSound();
}

void CFilterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;
	

	
	
	while (--samplesCount >= 0) {

		const double cutoff = mCutoffDelay.Next(mCutoffFreq);

		mFilter.SetParams(cutoff, 3);

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			double res = outputBuffer.getSample(i, currentSample);

			res = mFilter.Next(res);
			outputBuffer.setSample(i, currentSample, res);
		}
		currentSample++;
	}
}

void CFilterVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("CutoffFreq"), mCutoffFreq, 0, 10000);
}
