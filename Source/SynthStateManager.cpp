#include "SynthStateManager.h"

CSynthStateManager::CSynthStateManager(CPropertiesRegistry & propRegistry)
	: mPropRegistry(propRegistry)
{
}

void CSynthStateManager::LoadStateFromFile(const std::string & filePath)
{
	File file(filePath);
	MemoryBlock state;
	if (file.loadFileAsData(state)) {
		LoadStateFromMemory(state);
		mCurrentPath = filePath;
		for (auto& listener : GetListeners()) {
			listener->OnNameAndCategoryChanged();
		}
	}
}

void CSynthStateManager::SaveStateToFile(const std::string & filePath)
{
	MemoryBlock state;
	SaveStateToMemory(state);
	
	File file(filePath);
	file.replaceWithData(state.getData(), state.getSize());
}

bool CSynthStateManager::HasCurrentPath() const
{
	return !mCurrentPath.empty();
}

const std::string & CSynthStateManager::GetCurrentPath() const
{
	return mCurrentPath;
}

void CSynthStateManager::LoadStateFromMemory(const MemoryBlock& state)
{
	mState.Deserialize((const char*)state.getData(), static_cast<int>(state.getSize()));
	mPropRegistry.FromSynthState(mState);
}

void CSynthStateManager::SaveStateToMemory(MemoryBlock& state)
{
	mPropRegistry.ToSynthState(mState);
	mState.Serialize(state);
}

void CSynthStateManager::SetNameAndCategory(const std::string & name, const std::string & category)
{
	mState.SetNameAndCategory(name, category);
	for (auto& listener : GetListeners()) {
		listener->OnNameAndCategoryChanged();
	}
}
