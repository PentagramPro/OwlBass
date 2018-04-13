#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

struct CVoiceModuleHostSound : public SynthesiserSound
{
    CVoiceModuleHostSound() {}
    bool appliesToNote(int) override { return true; }
    bool appliesToChannel(int) override { return true; }
};