#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "IVoiceModule.h"
#include "IVoiceModuleHost.h"

class CVoiceModuleHost : public SynthesiserVoice, public IVoiceModuleHost {
public:
    CVoiceModuleHost(const std::vector<IVoiceModule*>& modules);

    bool canPlaySound(SynthesiserSound* sound) override;

    void startNote(int midiNoteNumber, float velocity,
            SynthesiserSound* sound, int currentPitchWheelPosition) override;

    void stopNote(float velocity, bool allowTailOff) override;

    void pitchWheelMoved(int newPitchWheelValue) override;
    void controllerMoved(int controllerNumber, int newControllerValue) override;

    void renderNextBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
    std::vector<std::unique_ptr<IVoiceModule>> mVoiceModules;
};