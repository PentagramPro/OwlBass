#pragma once

class IVoiceModuleHost {
public:
    virtual double GetSampleRate() const = 0;
    virtual void SoundEnded() = 0;
};