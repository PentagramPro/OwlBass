/*
  ==============================================================================

    SynthState.cpp
    Created: 22 Apr 2018 6:49:20pm
    Author:  maxon

  ==============================================================================
*/

#include "SynthState.h"

CSynthState::CSynthState()
{
}

void CSynthState::Deserialize(const char* data, int size)
{
	mState.clear();
	auto root = XmlDocument::parse(String(data, size));
	if (root == nullptr)
		return;

	forEachXmlChildElement(*root, child) {
		if (child->hasTagName("property")) {
			const std::string name = child->getStringAttribute("name").toStdString();
			const double val = child->getDoubleAttribute("value");
			mState[name] = val;
		}
	}
	
	delete root;
}

void CSynthState::Serialize(MemoryBlock & destData)
{
	XmlElement root("state");
	for (auto& pair : mState) {
		auto element = root.createNewChildElement("property");
		element->setAttribute("name", pair.first);
		element->setAttribute("value", pair.second);
	}
	MemoryOutputStream out(destData,true);
	root.writeToStream(out,"");
	out.flush();
}

void CSynthState::AddKeyValue(const std::string & key, double value)
{
	mState[key] = value;
}
