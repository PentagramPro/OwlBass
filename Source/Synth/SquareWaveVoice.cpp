#include "SquareWaveVoice.h"

CSquareWaveVoice::CSquareWaveVoice(IVoiceModuleHost & host, float freqRate)
	: mHost(host)
	, mFreqRate(freqRate)
{
}

void CSquareWaveVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	auto cyclesPerSecond = mFreqRate * MidiMessage::getMidiNoteInHertz(midiNoteNumber);
	mSamplesPerCycle = mHost.GetSampleRate() / cyclesPerSecond;
	mSampleCounter = 0;
	mEnabled = true;
}

void CSquareWaveVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	mHost.SoundEnded();
	mEnabled = false;
}

void CSquareWaveVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;

	if (!mEnabled) {
		return;
	}

	while (--samplesCount >= 0) {

		mSampleCounter++;
		if (mSampleCounter >= mSamplesPerCycle) {
			mSampleCounter = 0;
		}

		float output = mSampleCounter / mSamplesPerCycle > 0.5 ? 1 : 0;

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			outputBuffer.addSample(i, currentSample, output);
		}
		currentSample++;
	}
}
