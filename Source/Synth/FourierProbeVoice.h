
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "../Common/VoiceModuleBase.h"
#include "../Common/IVoiceModuleHost.h"

#include <vector>

class CFourierProbeVoice : public CVoiceModuleBase {
public:
	CFourierProbeVoice(const std::string& name, IVoiceModuleHost& host, int sizeInPowersOfTwo);

	void OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;

	void OnNoteStop(float velocity, bool allowTailOff) override;

	void ProcessBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;

	const AudioBuffer<float> & GetOutputBuffer() const { return mOutputBuffer; }
private:

	// Inherited via CVoiceModuleBase
	virtual void InitProperties(CPropertiesRegistry & registry) override;
	AudioBuffer<float> mInputBuffer;
	AudioBuffer<float> mOutputBuffer;
	juce::dsp::FFT mFft;

	const int mFullSize;

	int mInputBufferPos = 0;
};
