#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"

class CLimiterVoice : public CVoiceModuleBase {
public:
	CLimiterVoice(const std::string& name, IVoiceModuleHost& host, double preVolume) : CVoiceModuleBase(name, host) , mPreVolume(preVolume){}

	void InitProperties(CPropertiesRegistry& registry) {};
	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override {};

	void OnNoteStop(float velocity, bool allowTailOff) override {};

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
	double mPreVolume;
};


