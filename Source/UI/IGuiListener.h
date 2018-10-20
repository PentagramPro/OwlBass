#pragma once
#include <string>
class IGuiListener {
public:
	virtual void OnValueChanged(const std::string& name, float value) = 0;
	virtual void OnLoadPreset(const std::string& filePath) = 0;
};