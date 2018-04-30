#include "ProperiesRegistry.h"
#include "Toolbox.h"

#include "../Common/SynthState.h"

void CPropertiesRegistry::AddProperty(const std::string & name, double & propRef, double minValue, double maxValue, std::function<double(double)> function)
{
	mProperties[name] = std::unique_ptr<SPropertyRecord>(new SPropertyRecord(propRef, minValue, maxValue, function));
}

void CPropertiesRegistry::SetProperty(const std::string & name, double value)
{
	auto p = mProperties.find(name);
	if (p != mProperties.end()) {
		const double convertedVal = Toolbox::clamp(p->second->mFunction(value), 0.0, 1.0);
		p->second->mReference = p->second->mMinValue+(p->second->mMaxValue- p->second->mMinValue)*convertedVal;
	}
}

void CPropertiesRegistry::FromSynthState(const CSynthState & state)
{
	for (const auto& record : state.GetState()) {
		SetProperty(record.first, record.second);
	}
	for (auto& listener : GetListeners()) {
		listener->OnPropertiesFromSynthState();
	}
}

void CPropertiesRegistry::ToSynthState(CSynthState & state)
{
	for (auto& record : mProperties) {
		state.AddKeyValue(record.first, record.second->mReference);
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

bool CPropertiesRegistry::HasProperty(const std::string & name) const
{
	auto p = mProperties.find(name);
	return p != mProperties.end();
}
