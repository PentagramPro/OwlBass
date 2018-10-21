
#include "ChorusVoice.h"
#include <VSTComponents/Owl/ProperiesRegistry.h>
#include <VSTComponents/Owl/Toolbox.h>


const int Channels = 2;
	void CChorusVoice::InitProperties(CPropertiesRegistry & registry)
  {
		registry.AddProperty(GetPropName("Wet"), new CPropertyDouble01(mWet, 0, 1));
  }

  void CChorusVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
  {
	  if (!mBuffer) {
		  
		  mBuffer.reset(new CAudioQueue(Channels,mLengthSec,GetSampleRate()));
		  for (int voice = 1; voice < mVoices; voice++) {
			  mVoiceOffsets.push_back(mLengthSec/mVoices*voice);
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
		  DBG(Channels << " " << outputBuffer.getNumChannels() << " " << mBuffer->GetNumChannels());
		  jassertfalse;
		  return;
	  }

	  if (mWet == 0) {
		  return;
	  }
	  
	  
	  while (--samplesCount >= 0) { 
		  
		  mBuffer->AdvancePointer();
		  const double lfo = mPhaseLfo.GetValue(currentSample)/2.0f+1.0f;

		  for (int channel = 0; channel < Channels; channel++) {
			  
			  const double oldSample = outputBuffer.getSample(channel, currentSample);
			  mBuffer->SetSample(channel, oldSample);
			  double result = 0;
			
			  for (const double offset : mVoiceOffsets) {
				  const double delayedSample = mBuffer->GetRelativeToFront(offset*lfo, channel);
				  
				  result += delayedSample;
			  }
			  result /= (mVoices-1);

			  

			  outputBuffer.setSample(channel, currentSample, result*mWet+oldSample*(1-mWet));
			  
		  }
		  
		  
		  currentSample++;
	  }
  }
