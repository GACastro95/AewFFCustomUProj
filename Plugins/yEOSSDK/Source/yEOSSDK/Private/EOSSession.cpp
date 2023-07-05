#include "EOSSession.h"

bool UEOSSession::SetupInternalCallback() {
    return false;
}

bool UEOSSession::SetSessionP2PChannelList(const TArray<uint8>& _cChannelList) {
    return false;
}

void UEOSSession::SetAutoCreationSessionP2P(bool _bUseSessionP2P, bool _bUseSessionP2PWithAutoConnection, uint8 _uAdditionalFunctionTypeBits) {
}

void UEOSSession::SetApiVersionForSession(FEOSSessionAPIVersionSettings _stAPIVerSetting) {
}

void UEOSSession::SetApiVersionForMetrics(FEOSMetricsAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSSession::RequestUpdateSession(UEOSCommunityInfoBase* _pcCommunityInfo, const FEOSSessionSettings& _stSetting, bool _bForce, UEOSAPIRequestCallback* _Callback) {
    return false;
}

bool UEOSSession::RequestUnregistUser(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID, bool _bForce) {
    return false;
}

bool UEOSSession::RequestStartSession(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSSession::RequestSetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<UEOSAttribute*>& _cAttributes) {
    return false;
}

bool UEOSSession::RequestSearchSessionBySessionID(UEOSSessionSearchResults*& _pcSearchResults, const FString& _strSearchName, const FString& _strSessionID, int32 _sMaxResults) {
    return false;
}

bool UEOSSession::RequestSearchSession(UEOSSessionSearchResults*& _pcSearchResults, const FString& _strSearchName, const TArray<UEOSAttribute*>& _cAttributes, int32 _sMaxResults) {
    return false;
}

bool UEOSSession::RequestRemovetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<FString>& _cAttributes) {
    return false;
}

bool UEOSSession::RequestRejectInvite(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSSession::RequestRegistUser(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID) {
    return false;
}

bool UEOSSession::RequestQueryInvites() {
    return false;
}

bool UEOSSession::RequestLeaveSession(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _PUID) {
    return false;
}

bool UEOSSession::RequestJoinSession(UEOSCommunityInfoBase* _pcCommunityInfo, bool _bPresenceSession, UEOSAPIRequestCallback* _Callback) {
    return false;
}

bool UEOSSession::RequestInviteSession(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID) {
    return false;
}

bool UEOSSession::RequestEndSession(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSSession::RequestDestroySession(UEOSCommunityInfoBase* _pcCommunityInfo, bool _bForce) {
    return false;
}

bool UEOSSession::RequestCreateSession(UEOSCommunityInfoBase*& _pcCommunityInfo, const FEOSSessionSettings& _stSetting) {
    return false;
}

FEOSMetricsSettings UEOSSession::GetLastMetricsSettings() const {
    return FEOSMetricsSettings{};
}

bool UEOSSession::GetDetailsCurrent(UEOSCommunityInfoBase*& _pcCommunityInfo, const FString& _strSessionName) {
    return false;
}

bool UEOSSession::GetDetailsBySearchIndex(UEOSCommunityInfoBase*& _pcCommunityInfo, UEOSSessionSearchResults* _pcSearchResults, int32 _sSearchIndex) {
    return false;
}

bool UEOSSession::GetDetailsByInvite(UEOSCommunityInfoBase*& _pcCommunityInfo) {
    return false;
}

FString UEOSSession::GetAccountDisplayNameForSession() {
    return TEXT("");
}

bool UEOSSession::GenerateRandomStringForSessionName(FString& _rstrCommunityInfo) {
    return false;
}

bool UEOSSession::EndPlayerSession() {
    return false;
}

bool UEOSSession::CreateSessionP2P(UEOSSessionP2P*& _pcSessionP2P, UEOSCommunityInfoBase*& _pcCommunityInfo) {
    return false;
}

bool UEOSSession::BeginPlayerSession(const FEOSMetricsSettings& _rstSettings) {
    return false;
}

UEOSSession::UEOSSession() {
    this->DebugSessionCreateErr = false;
    this->DebugSessionDestroyErr = false;
    this->DebugSessionJoinErr = false;
    this->DebugSessionLeaveErr = false;
    this->DebugSessionStartErr = false;
}

