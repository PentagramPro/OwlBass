#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "../DSP/DSPLowpassFilter.h"
#include "../DSP/DSPLowpassFilter2.h"

class CFilterVoice : public CVoiceModuleBase {
public:
	CFilterVoice(const std::string& name, IVoiceModuleHost& host) : CVoiceModuleBase(name, host) {}

	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
	CDSPLowpassFilter2 mFilter;
	double mCutoffFreq = 1;

	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	bool mPlayingNote = false;
};
