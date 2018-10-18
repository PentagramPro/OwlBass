
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include <unordered_map>
#include <string>

struct StateInfo {
	std::string category;
	std::string name;
};

class CSynthState {
public:
	CSynthState();
	
	void Deserialize(const char* data, int size);
	void Serialize(MemoryBlock& destData);

	void AddKeyValue(const std::string& key, double value);
	const std::unordered_map<std::string, double>& GetState() const { return mState; }

	static StateInfo GetStateInfoFromData(const char* data, int size);
private:
	
	std::unordered_map<std::string, double> mState;
	StateInfo mStateInfo;
};