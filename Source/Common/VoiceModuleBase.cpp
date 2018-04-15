/*
  ==============================================================================

    VoiceModuleBase.cpp
    Created: 15 Apr 2018 3:30:19am
    Author:  maxon

  ==============================================================================
*/

#include "VoiceModuleBase.h"
#include "VoiceModuleBase.h"

std::string CVoiceModuleBase::GetPropName(const std::string & propertyName) const
  {
	return GetName() + "." + propertyName;
  }
