#include "ProperiesRegistry.h"


#include "../Common/SynthState.h"

void CPropertiesRegistry::AddProperty(const std::string & name, IPropertyRecord * prop)
{
	auto propList = mProperties.find(name);
	if (propList == mProperties.end()) {
		std::unique_ptr<CPropertiesList> newProperty(new CPropertiesList(prop));
		mProperties[name] = std::move(newProperty);
	}
	else {
		propList->second->AddProperty(prop);
	}
	
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
		DBG("Setting property " << name << " to " << value);
		p->second->SetReference(value);
	}
	else {
		DBG("Cannot find property " << name);
	}

}

void CPropertiesRegistry::ForceProperty(const std::string & name, float value)
{
	mForcedProperties[name] = value;
}

void CPropertiesRegistry::FromSynthState(const CSynthState & state)
{
	for (const auto& record : state.GetState()) {
		auto p = mProperties.find(record.first);
		if (p != mProperties.end()) {
			p->second->SetRaw(record.second);
		}
		
	}

	for (const auto& forced : mForcedProperties) {
		auto p = mProperties.find(forced.first);
		if (p != mProperties.end()) {
			p->second->SetRaw(forced.second);
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



