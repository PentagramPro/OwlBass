#pragma once
#include <string>
#include <unordered_map>
#include <memory>

struct SPropertyRecord {
	double& mReference;
	double mMaxValue;
	double mMinValue;

	SPropertyRecord(double& ref, double min, double max) : mReference(ref), mMinValue(min), mMaxValue(max) {	}
};
class CPropertiesRegistry {
public:

	void AddProperty(const std::string& name, double& propRef, double minValue, double maxValue);
	void SetProperty(const std::string& name, double value);

	const SPropertyRecord* GetProperty(const std::string& name) const;
private:
	std::unordered_map<std::string, std::unique_ptr<SPropertyRecord>> mProperties;
};