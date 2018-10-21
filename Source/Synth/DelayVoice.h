#pragma once
#include "JuceHeader.h"
#include "VSTComponents/Owl/VoiceModuleBase.h"
#include "VSTComponents/Owl/IVoiceModuleHost.h"
#include "VSTComponents/Owl/AudioQueue.h"
#include "IVoltageController.h"
#include "VSTComponents/OwlDSP/DSPLowpassFilter2.h"
#include <vector>

class CDelayVoice : public CVoiceModuleBase {
public:
	CDelayVoice(const std::string& name, IVoiceModuleHost& host);
		


	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	virtual void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition) override;

	virtual void OnNoteStop(float velocity, bool allowTailOff) override;

	virtual void ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples) override;
private:
	std::unique_ptr<CAudioQueue> mBuffer;
	double mLengthSec = 1;
	
	double mFeedback = 0.05f;
	double mWet = 0;
	std::vector<CDSPLowpassFilter2> mFilter;
	std::vector<double> mLastSample;

};