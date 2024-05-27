#include "EOSVoice.h"

UEOSVoice::UEOSVoice() {
    this->m_fInputVolume = 1.00f;
    this->m_fOutputVolume = 1.00f;
    this->m_sUserIndex = -1;
}

bool UEOSVoice::SetOutputVolume(const float _fVolume) {
    return false;
}

bool UEOSVoice::SetOutputDeviceId(const FString& _strDeviceId) {
    return false;
}

bool UEOSVoice::SetInputVolume(const float _fVolume) {
    return false;
}

bool UEOSVoice::SetInputDeviceId(const FString& _strDeviceId) {
    return false;
}

void UEOSVoice::SetApiVersion(FEOSVoiceAPIVersionSettings _stAPIVerSetting) {
}

float UEOSVoice::GetOutputVolume() const {
    return 0.0f;
}

bool UEOSVoice::GetOutputDeviceList(TArray<FEOSVoiceDeviceInfo>& DeviceInfoList) const {
    return false;
}

FString UEOSVoice::GetOutputDeviceId() const {
    return TEXT("");
}

float UEOSVoice::GetInputVolume() const {
    return 0.0f;
}

bool UEOSVoice::GetInputDeviceList(TArray<FEOSVoiceDeviceInfo>& DeviceInfoList) const {
    return false;
}

FString UEOSVoice::GetInputDeviceId() const {
    return TEXT("");
}


