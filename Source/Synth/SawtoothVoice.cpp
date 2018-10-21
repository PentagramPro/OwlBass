#include "SawtoothVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"

CSawtoothVoice::CSawtoothVoice(const std::string & name, IVoiceModuleHost & host, double detuneScale) : CVoiceModuleBase(name,host)
, mDetuneScale(detuneScale)
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
	const double detune = (mDetune - 1)*mDetuneScale + 1;
	auto cyclesPerSecond = MidiMessage::getMidiNoteInHertz(midiNoteNumber)*detune;
	DBG("Sawtooth voice cycles per second: " << cyclesPerSecond);
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

	if (mCurrentSamplesPerCycle <= 0 && mNextSamplesPerCycle <= 0) {
		return;
	}

	while (--samplesCount >= 0) {
		mSampleCounter++;
		if (mSampleCounter >= mCurrentSamplesPerCycle) {
			mSampleCounter = mSampleCounter - mCurrentSamplesPerCycle;
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
	registry.AddProperty(GetPropName("Detune"), new CPropertyDouble01(mDetune, 1,1.02));
}
