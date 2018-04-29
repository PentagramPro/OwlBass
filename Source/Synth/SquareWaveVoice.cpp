#include "SquareWaveVoice.h"
#include "../Common/ProperiesRegistry.h"

CSquareWaveVoice::CSquareWaveVoice(const std::string& name, IVoiceModuleHost& host, float freqRate, float volume)
	: CVoiceModuleBase(name, host)
	, mFreqRate(freqRate)
	, mVolumeMultiplier(volume)
{
	mDelay.Reset(GetSampleRate(), 0.005);
	mSamplesPerCycle = 0;
}

void CSquareWaveVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int currentPitchWheelPosition)
{
	auto cyclesPerSecond = mFreqRate * MidiMessage::getMidiNoteInHertz(midiNoteNumber);
	mSamplesPerCycle = GetSampleRate() / cyclesPerSecond;
	//mSampleCounter = 0;

	StartSound();
}

void CSquareWaveVoice::OnNoteStop(float velocity, bool allowTailOff)
{
	StopSound();

}

void CSquareWaveVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
{
	int samplesCount = numSamples;
	int currentSample = startSample;


	while (--samplesCount >= 0) {
		const double samples = mDelay.Next(mSamplesPerCycle);

		mSampleCounter++;
		if (mSampleCounter >= samples) {
			mSampleCounter = 0;
		}

		float output = 0;
		if (samples != 0) {
			const float vol = mVolumeMultiplier * mVolume;
			output = mSampleCounter / samples > 0.5 ? vol : -vol;
		}

		for (auto i = outputBuffer.getNumChannels(); --i >= 0;) {
			outputBuffer.addSample(i, currentSample, output);
		}
		currentSample++;
	}
}

void CSquareWaveVoice::InitProperties(CPropertiesRegistry & registry)
{
	registry.AddProperty(GetPropName("Volume"), mVolume, 0, 1);
}
