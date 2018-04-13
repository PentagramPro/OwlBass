#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class IVoiceModule {
public:
    virtual void OnNoteStart(int midiNoteNumber, float velocity,
            SynthesiserSound* sound, int currentPitchWheelPosition) = 0;
    virtual void OnNoteStop(float velocity, bool allowTailOff) = 0;
    virtual void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) = 0;
};