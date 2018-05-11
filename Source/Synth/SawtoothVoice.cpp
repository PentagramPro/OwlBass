#include "SawtoothVoice.h"

CSawtoothVoice::CSawtoothVoice(const std::string & name, IVoiceModuleHost & host) : CVoiceModuleBase(name,host)
{
	mDelay.Reset(GetSampleRate(), 0.005);
}

void CSawtoothVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	auto cyclesPerSecond = MidiMessage::getMidiNoteInHertz(midiNoteNumber);
	mNextSamplesPerCycle = GetSampleRate() / cyclesPerSecond;
	if (mCurrentSamplesPerCycle == 0) {
		mCurrentSamplesPerCycle = mNextSamplesPerCycle;
	}

	StartSound();
}

void CSawtoothVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	StopSound();
}

void CSawtoothVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;


	while (--samplesCount >= 0) {
		mSampleCounter++;
		if (mSampleCounter >= mCurrentSamplesPerCycle) {
			mSampleCounter = 0;
			mCurrentSamplesPerCycle = mDelay.Next(mNextSamplesPerCycle);
		}
		else {
			mDelay.Next(mNextSamplesPerCycle);
		}
		double value = mSampleCounter / mCurrentSamplesPerCycle;

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			outputBuffer.addSample(i, currentSample, value);
		}
		currentSample++;
	}
}

void CSawtoothVoice::InitProperties(CPropertiesRegistry & registry)
{
}
