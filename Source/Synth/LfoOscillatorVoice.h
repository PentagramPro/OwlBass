
#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"

class CLfoOscillatorVoice : public CVoiceModuleBase
{
public:
	enum class EWaveform {Sine, Square, Triangle, Sawtooth, RandomSquare};
	CLfoOscillatorVoice(const std::string& name, IVoiceModuleHost& host, const std::vector<EWaveform>& waveformMapping);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int /*currentPitchWheelPosition*/) override;

	void OnNoteStop(float /*velocity*/, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	void UpdateFrequency();

	double mFrequency = 1;
	double mVolume = 0;
	double mSamplesPerCycle;
	double mSampleCounter = 0;
	double mLastValue = 0;
	double mRandomizedValue = 0;
	int mRetrigger = 1;

	std::vector<EWaveform> mWaveformMapping;
	int mWaveformRaw = 1;
	juce::Random mRandom;

};