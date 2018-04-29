#pragma once
#include <string>
#include <unordered_map>
#include <memory>
#include "../JuceLibraryCode/JuceHeader.h"
#include "ListenerRegistry.h"

class CSynthState;

struct SPropertyRecord {
	double& mReference;
	double mMaxValue;
	double mMinValue;

	SPropertyRecord(double& ref, double min, double max) : mReference(ref), mMinValue(min), mMaxValue(max) {	}
};

class IPropertiesRegistryListener {
public:
	virtual void OnPropertiesFromSynthState() = 0;
};

class CPropertiesRegistry : public CListenerRegistry<IPropertiesRegistryListener> {
public:

	void AddProperty(const std::string& name, double& propRef, double minValue, double maxValue);
	void SetProperty(const std::string& name, double value);

	void FromSynthState(const CSynthState& state);
	void ToSynthState(CSynthState& state);

	const SPropertyRecord* GetProperty(const std::string& name) const;
	bool HasProperty(const std::string & name) const;
private:
	std::unordered_map<std::string, std::unique_ptr<SPropertyRecord>> mProperties;
};