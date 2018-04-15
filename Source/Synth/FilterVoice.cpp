#include "FilterVoice.h"

CFilterVoice::CFilterVoice(IVoiceModuleHost & host) : mHost(host)
{
}

void CFilterVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
{
	mFilter.Reset(mHost.GetSampleRate());
	mFilter.SetParams(500, 3);
}

void CFilterVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	mHost.SoundEnded();
}

void CFilterVoice::ProcessBlock(AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;

	
	while (--samplesCount >= 0) {


		

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			const double res = mFilter.Next(outputBuffer.getSample(i, currentSample))*0.9;
			outputBuffer.setSample(i, currentSample, res);
		}
		currentSample++;
	}
}
