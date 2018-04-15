#include "FilterVoice.h"
#include "../Common/ProperiesRegistry.h"

void CFilterVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	mFilter.Reset(GetHost().GetSampleRate());
	mFilter.SetParams(mCutoffFreq, 3);
}

void CFilterVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	GetHost().SoundEnded();
}

void CFilterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;

	mFilter.SetParams(mCutoffFreq, 3);
	while (--samplesCount >= 0) {


		

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			const double res = mFilter.Next(outputBuffer.getSample(i, currentSample))*0.9;
			outputBuffer.setSample(i, currentSample, res);
		}
		currentSample++;
	}
}

void CFilterVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("CutoffFreq"), mCutoffFreq, 0, 10000);
}
