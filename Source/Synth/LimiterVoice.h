#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"
#include "VSTComponents/OwlDSP/DSPDelay.h"
class CLimiterVoice : public CVoiceModuleBase {
public:
	CLimiterVoice(const std::string& name, IVoiceModuleHost& host, double preVolume);

	void InitProperties(CPropertiesRegistry& registry);
	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override {};

	void OnNoteStop(float velocity, bool allowTailOff) override {};

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
	double mPreVolume;
	double mVolume = 0.75;
	double mLevelChannel0 = 0;
	double mLevelChannel1 = 0;
	CDSPDelay mDelayChannel0;
	CDSPDelay mDelayChannel1;
};


