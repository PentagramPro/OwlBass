
#include "LfoOscillatorVoice.h"
#include "VSTComponents/Owl/ProperiesRegistry.h"

CLfoOscillatorVoice::CLfoOscillatorVoice(const std::string& name, IVoiceModuleHost& host, const std::vector<EWaveform>& waveformMapping)
		: CVoiceModuleBase(name, host), mWaveformMapping(waveformMapping){
	
}




  void CLfoOscillatorVoice::OnNoteStart(int midiNoteNumber, float velocity, SynthesiserSound *, int)
  {
	  if (mRetrigger == 1) {
		  mSampleCounter = 0;
	  }
	  StartSound();
  }

  void CLfoOscillatorVoice::OnNoteStop(float, bool allowTailOff)
  {
	  StopSound();
  }

  void CLfoOscillatorVoice::ProcessBlock(AudioSampleBuffer & outputBuffer, int startSample, int numSamples)
  {
	  const EWaveform waveform = mWaveformMapping[mWaveformRaw - 1];
	  

	  UpdateFrequency();
	  
	  while (--numSamples >= 0) 
	  {
		  double currentValue = mSampleCounter / mSamplesPerCycle;

		  switch (waveform) {
		  case EWaveform::Sine: 
			  currentValue = std::sin(currentValue * 2 * MathConstants<double>::pi);
			  break;
		  case EWaveform::Square: 
			  currentValue = currentValue > 0.5 ? 1 : -1;
			  break;
		  case EWaveform::Triangle: 
			  currentValue = (currentValue > 0.5? currentValue-0.5: 0.5-currentValue)*4-1;
			  break;
		  case EWaveform::Sawtooth: 
			  currentValue = currentValue * 2 - 1;
			  break;
		  case EWaveform::RandomSquare:
			  const double value = currentValue;
			  if (value < mLastValue) {
				  mRandomizedValue = mRandom.nextDouble()*2-1;
			  }
			  currentValue = mRandomizedValue;
			  mLastValue = value;
			  break;
		  }
		  currentValue *= mVolume;

		  for (auto i = outputBuffer.getNumChannels(); --i >= 0;)
			  outputBuffer.addSample(i, startSample, currentValue);

		  mSampleCounter++;
		  if (mSampleCounter > mSamplesPerCycle) {
			  mSampleCounter -= mSamplesPerCycle;
		  }
		  
		  ++startSample;
	  }
		  
	  
  }

  void CLfoOscillatorVoice::InitProperties(CPropertiesRegistry & registry)
  {
	  registry.AddProperty(GetPropName("Frequency"), new CPropertySquareDouble01(mFrequency, 0.1, 5.0));
	  registry.AddProperty(GetPropName("Volume"), new CPropertySquareDouble01(mVolume, 0, 1));
	  registry.AddProperty(GetPropName("Waveform"), new CPropertyInt(mWaveformRaw, 1, mWaveformMapping.size()));
  }

  void CLfoOscillatorVoice::UpdateFrequency()
  {
	  mSamplesPerCycle = GetSampleRate()/ mFrequency;
  }


