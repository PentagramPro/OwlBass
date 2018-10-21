#include "DSPLowpassFilter2.h"
#include "JuceHeader.h"

CDSPLowpassFilter2::CDSPLowpassFilter2()
  {
  }

void CDSPLowpassFilter2::SetParams(double cutoff, double Q)
{
	mQ = Q;
	mCutoffRadsPerSec = MathConstants<double>::twoPi*cutoff;
}

void CDSPLowpassFilter2::Reset(double sampleRate)
{
	mRate = 1 / sampleRate;
	mAcc = 0;
	mYprev = 0;
	mXprev = 0;
}

double CDSPLowpassFilter2::Next(double X)
{
	mAcc = mAcc + mXprev - mYprev;
	double res = mCutoffRadsPerSec * mRate*mRate*(mCutoffRadsPerSec*mAcc - mYprev / (mQ*mRate) + mCutoffRadsPerSec * X) + mYprev;
	mXprev = X;
	mYprev = res;
	if (std::isnan(mAcc)) {
		mAcc = 0;
	}
	if (std::isnan(mYprev)) {
		mYprev = 0;
	}
	
	return res;
}
