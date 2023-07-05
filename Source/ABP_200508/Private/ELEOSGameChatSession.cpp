#include "ELEOSGameChatSession.h"

bool UELEOSGameChatSession::Unmute(const FString& ProductUserID) {
    return false;
}

bool UELEOSGameChatSession::Unblock(const FString& ProductUserID) {
    return false;
}

bool UELEOSGameChatSession::StartMatchmaking(const TArray<FString>& ProductUserIDs) {
    return false;
}

bool UELEOSGameChatSession::SetVoiceChatStartMuted(bool _bMuted) {
    return false;
}

bool UELEOSGameChatSession::SetVoiceChatEnabled(bool _bEnabled) {
    return false;
}

bool UELEOSGameChatSession::SetMuteAll(EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSGameChatSession::SetMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSGameChatSession::SetBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

void UELEOSGameChatSession::OnCommunityEvent(EEOSCommunityEvent EOSCommunityEvent, UEOSCommunityBase* EOSCommunityBase, UEOSCommunityInfoBase* EOSCommunityInfo, UEOSCommunityUserBase* EOSLobbyUser) {
}

bool UELEOSGameChatSession::Mute(const FString& ProductUserID) {
    return false;
}

bool UELEOSGameChatSession::IsSpeaking(const FString& ProductUserID) const {
    return false;
}

bool UELEOSGameChatSession::IsMuted(const FString& ProductUserID) const {
    return false;
}

bool UELEOSGameChatSession::IsJoined() const {
    return false;
}

bool UELEOSGameChatSession::IsBlocked(const FString& ProductUserID) const {
    return false;
}

bool UELEOSGameChatSession::HasPlayer(const FString& ProductUserID) {
    return false;
}

EEOSLobbyUserAudioStatus UELEOSGameChatSession::GetVoiceStatus(const FString& ProductUserID) const {
    return EEOSLobbyUserAudioStatus::Unsupported;
}

bool UELEOSGameChatSession::GetVoiceChatStartMuted() const {
    return false;
}

bool UELEOSGameChatSession::GetVoiceChatEnabled() const {
    return false;
}

bool UELEOSGameChatSession::GetSpeakingUsers(UEOSCommunityInfoBase*& EOSCommunityInfo, TArray<UEOSCommunityUserBase*>& SpeakingUsers) {
    return false;
}

void UELEOSGameChatSession::GetPlayers(TArray<UEOSCommunityUserBase*>& _Players) {
}

int32 UELEOSGameChatSession::GetPlayerNum() const {
    return 0;
}

EEOSLobbyUserMuteFlag UELEOSGameChatSession::GetMuteFlag(const FString& ProductUserID) const {
    return EEOSLobbyUserMuteFlag::None;
}

EEOSLobbyUserMuteFlag UELEOSGameChatSession::GetBlockFlag(const FString& ProductUserID) const {
    return EEOSLobbyUserMuteFlag::None;
}

bool UELEOSGameChatSession::ContainsPlayer(const FString& ProductUserID) const {
    return false;
}

bool UELEOSGameChatSession::ClearMuteAll(EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSGameChatSession::ClearMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSGameChatSession::ClearBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSGameChatSession::Block(const FString& ProductUserID) {
    return false;
}

UELEOSGameChatSession::UELEOSGameChatSession() {
    this->EOSLobby = NULL;
    this->EOSLobbyInfo = NULL;
    this->EOSUser = NULL;
    this->bVoiceChatStartMuted = false;
    this->MuteFlag = EEOSLobbyUserMuteFlag::None;
}

