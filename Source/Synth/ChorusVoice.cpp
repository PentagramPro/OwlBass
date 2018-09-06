
#include "ChorusVoice.h"
#include "../Common/ProperiesRegistry.h"

const int Channels = 2;
	void CChorusVoice::InitProperties(CPropertiesRegistry & registry)
  {
		registry.AddProperty(GetPropName("Wet"), new CPropertyDouble01(mWet, 0, 1));
  }

  void CChorusVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
  {
	  if (!mBuffer) {
		  const int bufferSize = GetSampleRate()*mLengthSec;
		  mBuffer.reset(new CAudioQueue(Channels, bufferSize));
		  for (int voice = 0; voice < mVoices; voice++) {
			  int offset = 0;
			  if (mVoices > 1) {
				  offset = bufferSize / (mVoices - 1) * voice;
			  }
			  if (voice == mVoices - 1) {
				  offset = bufferSize - 1;
			  }
			  mVoiceOffsets.push_back(offset);
		  }
	  }
  }

  void CChorusVoice::OnNoteStop(float velocity, bool allowTailOff)
  {
  }

  void CChorusVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
  {
	  int samplesCount = numSamples;
	  int currentSample = startSample;

	  if (!mBuffer) {
		  return;
	  }
	  if (outputBuffer.getNumChannels() < Channels || mBuffer->GetNumChannels() < Channels) {
		  jassertfalse;
		  return;
	  }

	  if (mWet == 0) {
		  return;
	  }
	  auto phaseLfoBuffer = mPhaseLfo.GetVoltageBuffer();

	  while (--samplesCount >= 0) {
		  
		  mBuffer->AdvancePointer();
		  
		  for (int channel = 0; channel < Channels; channel++) {
			  
			  const double oldSample = outputBuffer.getSample(channel, currentSample);
			  mBuffer->SetSample(channel, oldSample);
			  double result = 0;
			  for (const int offset : mVoiceOffsets) {
				  result += mBuffer->GetRelativeToFront(offset, channel);
			  }
			  result /= mVoices;

			  

			  outputBuffer.setSample(channel, currentSample, result*mWet*mVoices+oldSample*(1-mWet));
			  
		  }
		  

		  currentSample++;
	  }
  }
