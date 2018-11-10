#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"
#include "VSTComponents/OwlDSP/DSPLowpassFilter2.h"
#include "VSTComponents/OwlDSP/DSPDelay.h"
#include "IVoltageController.h"
#include "ControlVoltageSource.h"
#include <vector>

class CFilterVoice : public CVoiceModuleBase {
public:
	CFilterVoice(const std::string& name, IVoiceModuleHost& host, IVoltageController& cutoffEnvelope);

	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;
	void SetLfo(IVoltageController& lfo) { mCutoffLfo = &lfo; }
private:
	std::vector<CDSPLowpassFilter2> mFilter;
	CDSPDelay mCutoffDelay;
	double mCutoffFreq = 1;
	double mQ = 1;
	int mEnvelopeScale = 0;
	
	const double mCutoffFreqMax = 5000;
	const double mCutoffFreqMin = 100;
	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	
	IVoltageController& mCutoffEnvelope;
	IVoltageController* mCutoffLfo = &CCVZero::instance;
};
