/*
  ==============================================================================

    SineWaveSound.h
    Created: 11 Apr 2018 7:45:13pm
    Author:  maxon

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

struct SineWaveSound : public SynthesiserSound
{
	SineWaveSound() {}
	bool appliesToNote(int) override { return true; }
	bool appliesToChannel(int) override { return true; }
};