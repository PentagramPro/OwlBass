#pragma once
#include "IVoiceModule.h"

class IVoiceModuleHost;

class CVoiceModuleBase : public IVoiceModule {
public:
	CVoiceModuleBase(const std::string& name, IVoiceModuleHost& host) : mName(name), mHost(host) {}
	virtual ~CVoiceModuleBase() {}

	const std::string& GetName() const { return mName; }

protected:
	IVoiceModuleHost & GetHost() const { return mHost; }
	std::string GetPropName(const std::string& propertyName) const;
private:
	IVoiceModuleHost & mHost;
	const std::string mName;
};