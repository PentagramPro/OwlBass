#pragma once
#include "IVoiceModule.h"

class IVoiceModuleHost;

class CVoiceModuleBase : public IVoiceModule {
public:
	CVoiceModuleBase(const std::string& name, IVoiceModuleHost& host) : mName(name), mHost(host) {}
	virtual ~CVoiceModuleBase() {}

	const std::string& GetName() const { return mName; }
	bool IsBusy() const override { return mIsBusy; }

protected:
	double GetSampleRate();
	std::string GetPropName(const std::string& propertyName) const;
	void StartSound();
	void StopSound();

private:
	IVoiceModuleHost & mHost;
	const std::string mName;
	bool mIsBusy = false;
};