#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"
#include "../Common/AudioQueue.h"
#include "../DSP/DSPLowpassFilter2.h"
#include "../DSP/DSPDelay.h"
#include <vector>

class CChorusVoice : public CVoiceModuleBase {
public:
	CChorusVoice(const std::string& name, IVoiceModuleHost& host, double lengthSec, int voices)
		: CVoiceModuleBase(name, host), mLengthSec(lengthSec), mVoices(voices) {}


	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;

	virtual void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition) override;

	virtual void OnNoteStop(float velocity, bool allowTailOff) override;

	virtual void ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples) override;
private:
	std::unique_ptr<CAudioQueue> mBuffer;
	std::vector<int> mVoiceOffsets;
	double mLengthSec;
	int mVoices;
};


