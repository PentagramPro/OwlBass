#include "ProperiesRegistry.h"


#include "../Common/SynthState.h"

void CPropertiesRegistry::AddProperty(const std::string & name, IPropertyRecord * prop)
{
	mProperties[name] = std::unique_ptr<IPropertyRecord>(prop);
}

bool CPropertiesRegistry::HasProperty(const std::string & name) const
{
	auto p = mProperties.find(name);
	return p != mProperties.end();
}




void CPropertiesRegistry::SetProperty(const std::string & name, float value)
{
	auto p = mProperties.find(name);
	if (p != mProperties.end()) {
		p->second->SetReference(value);
	}

}

void CPropertiesRegistry::FromSynthState(const CSynthState & state)
{
	for (const auto& record : state.GetState()) {
		auto p = mProperties.find(record.first);
		if (p != mProperties.end()) {
			p->second->SetRaw(record.second);
		}
		
	}
	for (auto& listener : GetListeners()) {
		listener->OnPropertiesFromSynthState();
	}
}

void CPropertiesRegistry::ToSynthState(CSynthState & state)
{
	for (auto& record : mProperties) {
		state.AddKeyValue(record.first, record.second->GetRaw());
	}
}



