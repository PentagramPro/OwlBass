#include "ProperiesRegistry.h"

void CPropertiesRegistry::AddProperty(const std::string & name, double & propRef, double minValue, double maxValue)
{
	mProperties[name] = std::unique_ptr<SPropertyRecord>(new SPropertyRecord(propRef, minValue, maxValue));
}

void CPropertiesRegistry::SetProperty(const std::string & name, double value)
{
	auto p = mProperties.find(name);
	if (p != mProperties.end()) {
		p->second->mReference = value;
	}
}

const SPropertyRecord * CPropertiesRegistry::GetProperty(const std::string & name) const
{
	auto p = mProperties.find(name);
	if (p != mProperties.end()) {
		return p->second.get();
	}
	return nullptr;
}