/*
  ==============================================================================

    VoiceModuleBase.cpp
    Created: 15 Apr 2018 3:30:19am
    Author:  maxon

  ==============================================================================
*/

#include "VoiceModuleBase.h"
#include "IVoiceModuleHost.h"

double CVoiceModuleBase::GetSampleRate()
{
	return mHost.GetSampleRate();
}

std::string CVoiceModuleBase::GetPropName(const std::string & propertyName) const
  {
	return GetName() + "." + propertyName;
  }

  void CVoiceModuleBase::StartSound()
  {
	  mIsBusy = true;
  }

  void CVoiceModuleBase::StopSound()
  {
	  mIsBusy = false;
	  mHost.SoundEnded();
  }
