#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"

class EnvelopeVoice  : public CVoiceModuleBase {
public:
	EnvelopeVoice(const std::string& name, IVoiceModuleHost& host) : CVoiceModuleBase(name, host) {}

	void InitProperties(CPropertiesRegistry& registry);
    void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

    void OnNoteStop(float velocity, bool allowTailOff) override;

    void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
    enum class EState {Idle, Attack, Sustain, Release};
    double mAttackTime = 1;
    double mSoundLevel;

    EState mState = EState ::Idle;
};


