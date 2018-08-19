
#include "ChorusVoice.h"
const int Channels = 2;
void CChorusVoice::InitProperties(CPropertiesRegistry & registry)
  {
  }

  void CChorusVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound * sound, int currentPitchWheelPosition)
  {
	  if (!mBuffer) {
		  const int bufferSize = GetSampleRate()*mLengthSec;
		  mBuffer.reset(new CAudioQueue(Channels, bufferSize));
		  for (int voice = 0; voice < mVoices; voice++) {
			  int offset = 0;
			  if (mVoices > 1) {
				  bufferSize / (mVoices - 1) * voice;
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

	  while (--samplesCount >= 0) {
		  
		  double result[Channels];
		  
		  for (int channel = 0; channel < Channels; channel++) {
			  result[channel] = 0;
			  for (const int offset : mVoiceOffsets) {
				  result[channel] += offset==0?outputBuffer.getSample(channel,currentSample) : mBuffer->GetRelativeToFront(offset, channel);
			  }
			  result[channel] /= mVoices;

			  outputBuffer.setSample(channel, currentSample, result[channel]);
			  mBuffer->PushToFront(result);
		  }
		  

		  currentSample++;
	  }
  }
