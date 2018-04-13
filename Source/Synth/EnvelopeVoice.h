#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/IVoiceModule.h"
#include "../Common/IVoiceModuleHost.h"

class EnvelopeVoice  : public IVoiceModule {
public:
    EnvelopeVoice(IVoiceModuleHost& host);

    void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

    void OnNoteStop(float velocity, bool allowTailOff) override;

    void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
    enum class EState {Idle, Attack, Sustain, Release};
    float mAttackTime = 1;
    double mAttackPerSample;
    double mSoundLevel;

    IVoiceModuleHost& mHost;
    EState mState = EState ::Idle;
};


