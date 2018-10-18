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
	mStateInfo = {};
	std::unique_ptr<XmlElement> root(XmlDocument::parse(String(data, size)));
	if (root == nullptr)
		return;

	forEachXmlChildElement(*root, child) {
		if (child->hasTagName("property")) {
			const std::string name = child->getStringAttribute("name").toStdString();
			const double val = child->getDoubleAttribute("value");
			mState[name] = val;
		}
		else if (child->hasTagName("info")) {
			auto category = child->getChildByName("category");
			if (category) {
				mStateInfo.category = category->getAllSubText().toStdString();
			}
			auto name = child->getChildByName("name");
			if (name) {
				mStateInfo.name = name->getAllSubText().toStdString();
			}
		}
	}
	
}

void CSynthState::Serialize(MemoryBlock & destData)
{
	
	XmlElement root("state");
	for (auto& pair : mState) {
		auto element = root.createNewChildElement("property");
		element->setAttribute("name", pair.first);
		element->setAttribute("value", pair.second);
	}

	auto info = root.createNewChildElement("info");
	info->createNewChildElement("category")->addTextElement(mStateInfo.category);
	info->createNewChildElement("name")->addTextElement(mStateInfo.name);

	MemoryOutputStream out(destData,true);
	root.writeToStream(out,"");
	out.flush();
	
}

void CSynthState::AddKeyValue(const std::string & key, double value)
{
	mState[key] = value;
}

StateInfo CSynthState::GetStateInfoFromData(const char * data, int size) 
{
	StateInfo res;
	
	std::unique_ptr<XmlElement> root(XmlDocument::parse(String(data, size)));
	if (root == nullptr)
		return StateInfo();

	
	
	auto info = root->getChildByName("info");
	if (info == nullptr) 
		return StateInfo();

	auto category = info->getChildByName("category");
	if (category)
		res.category = category->getAllSubText().toStdString();

	auto name = info->getChildByName("name");
	if (name)
		res.name = name->getAllSubText().toStdString();

	
	return res;
}
