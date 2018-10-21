#pragma once
#include <string>

class IPresetBrowserListener {
public:
	virtual void OnLoadPreset(const std::string& filePath) = 0;
};