#include "DSPIntegration.h"


  CDSPIntegration::CDSPIntegration() : mAccumulator(0)
  {
  }

  void CDSPIntegration::Reset(double sampleRate, double startValue)
  {
	  mSampleRate = sampleRate;
	  mAccumulator = startValue;
  }

  double CDSPIntegration::Next(double input)
  {
	  mAccumulator += input / mSampleRate;
	  return mAccumulator;
  }
