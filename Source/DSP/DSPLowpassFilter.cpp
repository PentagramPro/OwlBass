
#include "DSPLowpassFilter.h"
#include "../JuceLibraryCode/JuceHeader.h"

CDSPLowpassFilter::CDSPLowpassFilter()
{
}

void CDSPLowpassFilter::SetParams(double cutoff, double Q)
{
	mQ = Q;
	mCutoffRadsPerSec = MathConstants<double>::twoPi*cutoff;
	mFeedback = 0;
}

void CDSPLowpassFilter::Reset(double sampleRate)
{
	mIntFeedback1.Reset(sampleRate);
	mIntFeedback2.Reset(sampleRate);
	mIntFeedbackQ.Reset(sampleRate);
	mIntGate1.Reset(sampleRate);
	mIntGate2.Reset(sampleRate);
}

double CDSPLowpassFilter::Next(double input)
{
	const double squareCutoff = mCutoffRadsPerSec * mCutoffRadsPerSec;
	double output = input;

	output=mIntGate1.Next(output);
	output=mIntGate2.Next(output);
	output *= squareCutoff;
	output -= mFeedback;



	double feedbackQ = output * mCutoffRadsPerSec/mQ;
	double feedback12 = output * squareCutoff;

	feedbackQ = mIntFeedbackQ.Next(feedbackQ);
	feedback12 = mIntFeedback1.Next(feedback12);
	feedback12 = mIntFeedback2.Next(feedback12);
	mFeedback = feedbackQ + feedback12;

	return output;
}
