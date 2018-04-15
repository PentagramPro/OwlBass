#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/IVoiceModule.h"
#include "../Common/IVoiceModuleHost.h"
#include "../DSP/DSPLowpassFilter.h"

class CFilterVoice : public IVoiceModule {
public:
	CFilterVoice(IVoiceModuleHost& host);

	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
	CDSPLowpassFilter mFilter;
	IVoiceModuleHost& mHost;
};
