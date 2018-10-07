#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "../DSP/DSPLowpassFilter2.h"
#include "../DSP/DSPDelay.h"
#include "IVoltageController.h"
#include <vector>

class CFilterVoice : public CVoiceModuleBase {
public:
	CFilterVoice(const std::string& name, IVoiceModuleHost& host, IVoltageController& cutoffEnvelope);

	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

private:
	std::vector<CDSPLowpassFilter2> mFilter;
	CDSPDelay mCutoffDelay;
	double mCutoffFreq = 1;
	double mQ = 1;
	double mEnvelopeScale = 0;
	
	const double mCutoffFreqMax = 5000;
	const double mCutoffFreqMin = 20;
	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	
	IVoltageController& mCutoffEnvelope;
};
