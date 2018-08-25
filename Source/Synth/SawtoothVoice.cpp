#include "SawtoothVoice.h"
#include "../Common/ProperiesRegistry.h"

CSawtoothVoice::CSawtoothVoice(const std::string & name, IVoiceModuleHost & host) : CVoiceModuleBase(name,host)
{
	mDelay.Reset(GetSampleRate(), 0.005);
}

void CSawtoothVoice::SetSamplesPerCycle(int samples)
{
	mNextSamplesPerCycle = samples;
	if (mCurrentSamplesPerCycle == 0) {
		mCurrentSamplesPerCycle = mNextSamplesPerCycle;
	}
}


void CSawtoothVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	auto cyclesPerSecond = MidiMessage::getMidiNoteInHertz(midiNoteNumber)*mDetune;
	SetSamplesPerCycle(GetSampleRate() / cyclesPerSecond);

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
	registry.AddProperty(GetPropName("Volume"), new CPropertyDouble01(mDetune, 0.9,1.1));
}
