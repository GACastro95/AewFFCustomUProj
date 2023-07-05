#include "EOSVoiceAPIVersionSettings.h"

FEOSVoiceAPIVersionSettings::FEOSVoiceAPIVersionSettings() {
    this->SetAudioInputSettings = 0;
    this->SetAudioOutputSettings = 0;
    this->AddNotifyAudioDevicesChanged = 0;
    this->GetAudioInputDevicesCount = 0;
    this->GetAudioInputDeviceByIndex = 0;
    this->GetAudioOutputDevicesCount = 0;
    this->GetAudioOutputDeviceByIndex = 0;
}

