
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "IVoltageController.h"
#include "../DSP/DSPDelay.h"

class CMultiModeOscillator : public CVoiceModuleBase
{
public:
	CMultiModeOscillator(const std::string& name, IVoiceModuleHost& host, IVoltageController& referenceSawtooth);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	double mVolume = 1;
	int mDividerCounter = -1;
	int mDividerMax = 1;
	IVoltageController& mReferenceSawtooth;
};