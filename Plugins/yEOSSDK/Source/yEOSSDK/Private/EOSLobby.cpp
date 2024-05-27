#include "EOSLobby.h"

UEOSLobby::UEOSLobby() {
}

void UEOSLobby::SetVoiceChatStartMuted(bool _bMuted) {
}

void UEOSLobby::SetVoiceChatEnabled(bool _bEnabled) {
}

bool UEOSLobby::SetupInternalCallback() {
    return false;
}

void UEOSLobby::SetApiVersion(FEOSLobbyAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSLobby::RequestSetMuteVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag) {
    return false;
}

bool UEOSLobby::RequestSetMemberAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<UEOSAttribute*>& _cAttributes) {
    return false;
}

bool UEOSLobby::RequestSetLobbyParam(UEOSCommunityInfoBase* _pcCommunityInfo, int32 _sMaxMembers, EEOSCommunityPermission _enPermission) {
    return false;
}

bool UEOSLobby::RequestSetBlockVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag) {
    return false;
}

bool UEOSLobby::RequestSetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<UEOSAttribute*>& _cAttributes) {
    return false;
}

bool UEOSLobby::RequestSearchLobbyByUser(UEOSLobbySearchResults*& _pcSearchResults, const FString& _strSearchName, const FString& _strProductUserID, int32 _sMaxResults) {
    return false;
}

bool UEOSLobby::RequestSearchLobbyByLobbyID(UEOSLobbySearchResults*& _pcSearchResults, const FString& _strSearchName, const FString& _strLobbyID, int32 _sMaxResults) {
    return false;
}

bool UEOSLobby::RequestSearchLobby(UEOSLobbySearchResults*& _pcSearchResults, const FString& _strSearchName, const TArray<UEOSAttribute*>& _cAttributes, int32 _sMaxResults) {
    return false;
}

bool UEOSLobby::RequestRemovetMemberAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<FString>& _cAttributes) {
    return false;
}

bool UEOSLobby::RequestRemovetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<FString>& _cAttributes) {
    return false;
}

bool UEOSLobby::RequestRejectInvite(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSLobby::RequestQueryInvites() {
    return false;
}

bool UEOSLobby::RequestMuteVoiceUser(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, bool _bMute) {
    return false;
}

bool UEOSLobby::RequestMuteVoiceSelf(UEOSCommunityInfoBase* _pcCommunityInfo, bool _bMute) {
    return false;
}

bool UEOSLobby::RequestLeaveLobby(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSLobby::RequestLeaveAllLobbies() {
    return false;
}

bool UEOSLobby::RequestJoinLobby(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSLobby::RequestInviteLobby(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID) {
    return false;
}

bool UEOSLobby::RequestDestroyLobbyForce(const FString& _strKey) {
    return false;
}

bool UEOSLobby::RequestDestroyLobby(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSLobby::RequestDeleteUser(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser) {
    return false;
}

bool UEOSLobby::RequestCreateLobby(UEOSCommunityInfoBase*& _pcCommunityInfo, const FString& _strKey, int32 _sMaxMembers, EEOSCommunityPermission _enPermission) {
    return false;
}

bool UEOSLobby::RequestClearMuteVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag) {
    return false;
}

bool UEOSLobby::RequestClearBlockVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag) {
    return false;
}

bool UEOSLobby::RequestChangeOwner(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser) {
    return false;
}

bool UEOSLobby::RequestBlockVoice(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, bool _bBlock) {
    return false;
}

void UEOSLobby::RemoveInvite(const FString& CommunityID) {
}

bool UEOSLobby::GetVoiceChatStartMuted() const {
    return false;
}

bool UEOSLobby::GetVoiceChatEnabled() const {
    return false;
}

bool UEOSLobby::GetDetailsCurrent(UEOSCommunityInfoBase*& _pcCommunityInfo, const FString& _strLobbyID) {
    return false;
}

bool UEOSLobby::GetDetailsByInvite(UEOSCommunityInfoBase*& _pcCommunityInfo) {
    return false;
}


