
#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"
#include "VSTComponents/OwlDSP/DSPDelay.h"

class CSawtoothVoice : public CVoiceModuleBase
{
public:
	CSawtoothVoice(const std::string& name, IVoiceModuleHost& host, double detuneScale);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

	// used to directly control frequency in LFO
	void SetSamplesPerCycle(int samples);
private:
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	double mCurrentSamplesPerCycle = 0;
	double mNextSamplesPerCycle = 0;
	double mSampleCounter = 0;
	double mDetune = 1;
	const double mDetuneScale = 1;
	CDSPDelay mDelay;

	// Inherited via CVoiceModuleBase

};