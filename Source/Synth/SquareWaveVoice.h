
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/IVoiceModule.h"
#include "../Common/IVoiceModuleHost.h"

class CSquareWaveVoice : public IVoiceModule
{
public:
	CSquareWaveVoice(IVoiceModuleHost& host, float freqRate);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:

	float mFreqRate = 1;
	IVoiceModuleHost& mHost;
	float mSamplesPerCycle;
	float mSampleCounter;
	bool mEnabled=false;
};