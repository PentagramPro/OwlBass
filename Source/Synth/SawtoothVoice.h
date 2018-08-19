
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "../DSP/DSPDelay.h"

class CSawtoothVoice : public CVoiceModuleBase
{
public:
	CSawtoothVoice(const std::string& name, IVoiceModuleHost& host);

	void OnNoteStart(int midiNoteNumber, float velocity,
		SynthesiserSound*, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioSampleBuffer& outputBuffer, int startSample, int numSamples) override;

	// used to directly control frequency in LFO
	void SetSamplesPerCycle(int samples);
private:
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	double mCurrentSamplesPerCycle;
	double mNextSamplesPerCycle;
	double mSampleCounter = 0;

	CDSPDelay mDelay;

	// Inherited via CVoiceModuleBase

};