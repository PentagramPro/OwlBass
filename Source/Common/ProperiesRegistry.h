#pragma once
#include <string>
#include <unordered_map>
#include <memory>
#include "../JuceLibraryCode/JuceHeader.h"
#include "ListenerRegistry.h"
#include <functional>

class CSynthState;


struct SPropertyRecord {
	double& mReference;
	double mMaxValue;
	double mMinValue;
	std::function<double(double)> mFunction;
	SPropertyRecord(double& ref, double min, double max) : mReference(ref), mMinValue(min), mMaxValue(max), mFunction([](double x) {return x; }) {	}
	SPropertyRecord(double& ref, double min, double max, std::function<double(double)> function) 
		: mReference(ref), mMinValue(min), mMaxValue(max), mFunction(function) {	}
};

class IPropertiesRegistryListener {
public:
	virtual void OnPropertiesFromSynthState() = 0;
};

class CPropertiesRegistry : public CListenerRegistry<IPropertiesRegistryListener> {
public:

	void AddProperty(const std::string& name, double& propRef, double minValue, double maxValue, std::function<double(double)> function = [](double x) {return x; });
	
	void SetProperty(const std::string& name, double value);

	void FromSynthState(const CSynthState& state);
	void ToSynthState(CSynthState& state);

	const SPropertyRecord* GetProperty(const std::string& name) const;
	bool HasProperty(const std::string & name) const;
private:
	std::unordered_map<std::string, std::unique_ptr<SPropertyRecord>> mProperties;
};