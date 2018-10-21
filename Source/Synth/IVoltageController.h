#pragma once

#include "JuceHeader.h"

class IVoltageController {
public:
	//virtual const AudioBuffer<float>& GetVoltageBuffer() const = 0;
	virtual float GetValue(int sampleNumber) const = 0;
};