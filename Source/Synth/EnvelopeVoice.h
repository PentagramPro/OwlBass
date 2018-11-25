#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"

class EnvelopeVoice  : public CVoiceModuleBase {
public:
	EnvelopeVoice(const std::string& name, IVoiceModuleHost& host) : CVoiceModuleBase(name, host) {}

	void InitProperties(CPropertiesRegistry& registry);
    void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;
	
    void OnNoteStop(float velocity, bool allowTailOff) override;

    void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
    enum class EState {Idle, Attack, Decay, Sustain, Release};
    double mAttackTime = 1;
	double mDecayTime = 0;
	double mReleaseTime = 1;
	double mSustainLevel = 1;
	int mRetrigger = 1;
    double mSoundLevel = 0;

	double mReleaseStep = 1;
    EState mState = EState ::Idle;
};


