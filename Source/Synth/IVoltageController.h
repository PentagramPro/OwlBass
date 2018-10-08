#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class IVoltageController {
public:
	//virtual const AudioBuffer<float>& GetVoltageBuffer() const = 0;
	virtual float GetValue(int sampleNumber) const = 0;
};