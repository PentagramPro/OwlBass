#pragma once
#include <string>
class IGuiListener {
public:
	virtual void OnValueChanged(const std::string& name, float value) = 0;
};