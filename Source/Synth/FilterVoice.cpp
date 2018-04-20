#include "FilterVoice.h"
#include "../Common/ProperiesRegistry.h"
#include "../Common/Toolbox.h"
void CFilterVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	mFilter.Reset(GetSampleRate());

	mFilter.SetParams(mCutoffFreq, 3);
	mCutoffSmooth = mCutoffFreq;
	mPlayingNote = true;
	StartSound();
}

void CFilterVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	mPlayingNote = false;
	StopSound();
}

void CFilterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;
	double hzPerSample = 0.0001;

	
	
	while (--samplesCount >= 0) {

		mCutoffSmooth += (mCutoffFreq - mCutoffSmooth) * 0.01;

		mFilter.SetParams(mCutoffSmooth, 3);

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
