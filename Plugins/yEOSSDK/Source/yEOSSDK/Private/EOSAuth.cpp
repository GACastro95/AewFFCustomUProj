#include "EOSAuth.h"

void UEOSAuth::SetLoginUserDisplayName(const FString& _strDisplayName) {
}

void UEOSAuth::SetLoginExternalAccountId(const FString& _strExternalAccountId) {
}

void UEOSAuth::SetApiVersion(FEOSAuthAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSAuth::RequestPersistentAuthLogin(const FString& _cToken) {
    return false;
}

bool UEOSAuth::RequestLogout() {
    return false;
}

bool UEOSAuth::RequestLogin(const FString& _cUserID, const FString& _cPassword) {
    return false;
}

bool UEOSAuth::RequestLinkEpicAccount() {
    return false;
}

bool UEOSAuth::RequestExternalConnectLoginWithBinaryToken(EEOSExternalCredentialType _enType, const TArray<uint8>& _pcToken) {
    return false;
}

bool UEOSAuth::RequestExternalConnectLogin(EEOSExternalCredentialType _enType, const FString& _cToken) {
    return false;
}

bool UEOSAuth::RequestExternalAuthLoginWithBinaryToken(EEOSExternalCredentialType _enType, const TArray<uint8>& _pcToken) {
    return false;
}

bool UEOSAuth::RequestExternalAuthLogin(EEOSExternalCredentialType _enType, const FString& _cToken) {
    return false;
}

bool UEOSAuth::RequestExchangeCodeLogin(const FString& _cExchangeCode) {
    return false;
}

bool UEOSAuth::RequestDeviceCodeLogin() {
    return false;
}

bool UEOSAuth::RequestDevAuthLogin(const FString& _cID, const FString& _cToken) {
    return false;
}

bool UEOSAuth::RequestCreateUser() {
    return false;
}

bool UEOSAuth::RequestConnectUnlinkAccount() {
    return false;
}

bool UEOSAuth::RequestConnectLogin() {
    return false;
}

bool UEOSAuth::RequestConnectLinkAccount() {
    return false;
}

bool UEOSAuth::RequestAccountPortalLogin() {
    return false;
}

bool UEOSAuth::IsConnected() const {
    return false;
}

FString UEOSAuth::GetRefreshToken() const {
    return TEXT("");
}

FEOSAuthPinGrantInfo UEOSAuth::GetPinGrantInfo() const {
    return FEOSAuthPinGrantInfo{};
}

FString UEOSAuth::GetLoginUserDisplayName() const {
    return TEXT("");
}

EEOSLoginStatus UEOSAuth::GetLoginStatus() const {
    return EEOSLoginStatus::NotLoggedin;
}

FString UEOSAuth::GetLoginExternalAccountId() const {
    return TEXT("");
}

EEOSLoginType UEOSAuth::GetLastLoginType() const {
    return EEOSLoginType::None;
}

EEOSExternalCredentialType UEOSAuth::GetLastCredentialType() const {
    return EEOSExternalCredentialType::None;
}

EEOSLoginStatus UEOSAuth::GetConnectLoginStatus(const FString& _strProductUserID) {
    return EEOSLoginStatus::NotLoggedin;
}

EEOSLoginStatus UEOSAuth::GetAuthLoginStatus(const FString& _strEpicAccountID) {
    return EEOSLoginStatus::NotLoggedin;
}

UEOSAuth::UEOSAuth() {
    this->m_sConnectLoggingCount = 0;
}

