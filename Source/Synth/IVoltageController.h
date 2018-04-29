#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class IVoltageController {
public:
	virtual const AudioBuffer<float>& GetVoltageBuffer() const = 0;
};