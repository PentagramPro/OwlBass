#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class EnvelopeVoice  : public SynthesiserVoice {
public:


    bool canPlaySound(SynthesiserSound *sound) override;

    void startNote(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

    void stopNote(float velocity, bool allowTailOff) override;

    void pitchWheelMoved(int newPitchWheelValue) override;

    void controllerMoved(int controllerNumber, int newControllerValue) override;

    void renderNextBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
    enum class EState {Idle, Attack, Sustain, Release};
    float mAttackTime = 1;
    double mAttackPerSample;
    double mSoundLevel;


    EState mState = EState ::Idle;
};


