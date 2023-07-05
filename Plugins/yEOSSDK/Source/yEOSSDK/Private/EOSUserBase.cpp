#include "EOSUserBase.h"

void UEOSUserBase::SetExternalPlatformType(EExternalAccountType _sExternalPlatformType) {
}

void UEOSUserBase::SetExternalDisplayName(const FString& _strExternalDisplayName) {
}

void UEOSUserBase::SetExternalAccountId(const FString& _strExternalAccountId) {
}

void UEOSUserBase::SetCustomData(const FString& _strName, UObject* _pObject) {
}

void UEOSUserBase::SetApiVersion(FEOSUserInfoAPIVersionSettings _stAPIVerSetting) {
}

void UEOSUserBase::SetAccountDisplayName(const FString& _strDispName) {
}

bool UEOSUserBase::RequestGetInfo() {
    return false;
}

bool UEOSUserBase::IsSameExternalPlatformType() const {
    return false;
}

bool UEOSUserBase::HasExternalDisplayName() {
    return false;
}

EEOSNatP2PConnectionStatus UEOSUserBase::GetP2PConnectionState() const {
    return EEOSNatP2PConnectionStatus::NotConnected;
}

EExternalAccountType UEOSUserBase::GetExternalPlatformType() const {
    return EExternalAccountType::Unknown;
}

FString UEOSUserBase::GetExternalDisplayName() const {
    return TEXT("");
}

FString UEOSUserBase::GetExternalAccountId() const {
    return TEXT("");
}

FString UEOSUserBase::GetEpicAccountDisplayName() const {
    return TEXT("");
}

UEOSUserContentsBase* UEOSUserBase::GetEOSUserContent() {
    return NULL;
}

FString UEOSUserBase::GetAccountDisplayName() const {
    return TEXT("");
}

UObject* UEOSUserBase::FindCustomData(const FString& _strName) {
    return NULL;
}

bool UEOSUserBase::CheckSendPacket() {
    return false;
}

UEOSUserBase::UEOSUserBase() {
    this->m_sExternalPlatformType = EExternalAccountType::Unknown;
    this->m_pcContents = NULL;
}

