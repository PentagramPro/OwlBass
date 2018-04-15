#pragma once

#include "DSPIntegration.h"

class CDSPLowpassFilter2 {
public:
	CDSPLowpassFilter2();

	void SetParams(double cutoff, double Q);
	void Reset(double sampleRate);
	double Next(double X);

private:
	double mCutoffRadsPerSec;
	double mQ;
	double mRate;
	
	double mAcc;
	double mYprev;
	double mXprev;
};