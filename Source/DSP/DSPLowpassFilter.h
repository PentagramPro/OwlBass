#pragma once

#include "DSPIntegration.h"

class CDSPLowpassFilter{
public:
	CDSPLowpassFilter();

	void SetParams(double cutoff, double Q);
	void Reset(double sampleRate);
	double Next(double input);

private:
	double mCutoffRadsPerSec;
	double mQ;
	double mFeedback;

	CDSPIntegration mIntGate1, mIntGate2;
	CDSPIntegration mIntFeedbackQ;
	CDSPIntegration mIntFeedback1, mIntFeedback2;
};