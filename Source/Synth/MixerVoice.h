#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>

class MixerVoice : public SynthesiserVoice {

public:
    MixerVoice(const std::vector<SynthesiserVoice*>& subvoices);

    bool canPlaySound(SynthesiserSound* sound) override;

    void startNote(int midiNoteNumber, float velocity,
            SynthesiserSound* sound, int currentPitchWheelPosition) override;

    void stopNote(float velocity, bool allowTailOff) override;

    void pitchWheelMoved(int newPitchWheelValue) override;
    void controllerMoved(int controllerNumber, int newControllerValue) override;

    void renderNextBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;
private:
    std::vector<std::unique_ptr<SynthesiserVoice>> mSubvoices;
};

