
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"

class CSquareWaveVoice : public CVoiceModuleBase
{
public:
	CSquareWaveVoice(const std::string& name, IVoiceModuleHost& host, float freqRate, float volume);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	float mFreqRate = 1;
	float mVolume = 1;
	float mSamplesPerCycle;
	float mSampleCounter;


	// Inherited via CVoiceModuleBase
	
};