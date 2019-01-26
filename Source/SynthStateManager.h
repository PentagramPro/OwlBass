
#pragma once

#include "JuceHeader.h"
#include "VSTComponents/Owl/ListenerRegistry.h"
#include "VSTComponents/Owl/SynthState.h"
#include  "ISynthStateManagerListener.h"

class CPropertiesRegistry;

class CSynthStateManager : public CListenerRegistry<ISynthStateManagerListener> {
public:
	CSynthStateManager(CPropertiesRegistry& propRegistry);
	virtual ~CSynthStateManager() {}

	void LoadStateFromFile(const std::string & filePath);
	void SaveStateToFile(const std::string & filePath);

	bool HasCurrentPath() const;
	const std::string& GetCurrentPath() const;

	void LoadStateFromMemory(const MemoryBlock& state);
	void SaveStateToMemory(MemoryBlock& state);

	void SetNameAndCategory(const std::string & name, const std::string & category);
	const CSynthState& GetState() const { return mState; }

private:
	CSynthState mState;
	std::string mCurrentPath;
	CPropertiesRegistry& mPropRegistry;
};