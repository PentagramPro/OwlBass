
#pragma once

class CDSPIntegration {
public:
	CDSPIntegration();

	void Reset(double sampleRate, double startValue = 0);

	double Next(double input);
private:
	double mAccumulator;
	double mSampleRate;
};