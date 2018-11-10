
#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"
#include "IVoltageController.h"
#include "VSTComponents/OwlDSP/DSPDelay.h"

class CMultiModeOscillator : public CVoiceModuleBase
{
public:
	CMultiModeOscillator(const std::string& name, IVoiceModuleHost& host, IVoltageController& referenceSawtooth, double pan);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

private:
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	double mLastReference = 0;
	double mVolume = 1;
	int mDividerCounter = -1;
	int mDividerMax = 1;
	int mWaveform = 1;
	double mPan = 0;
	double mPhase = 0;
	IVoltageController& mReferenceSawtooth;
};