#include "ELSSLobbyManager.h"

UELSSLobbyManager::UELSSLobbyManager() {
    this->bActiveSSLobby = false;
    this->bProcessingInitialize = false;
    this->CachedLobby = NULL;
    this->LastState = EELSSLobbyState::Default;
    this->LocalMenuState = EELSSLobbyMenuState::Idle;
    this->bEnableGameSessionMultiPlayFeature = false;
}

bool UELSSLobbyManager::UpdateMemberAttributes() {
    return false;
}

void UELSSLobbyManager::StartSSModeEOSLobby() {
}

void UELSSLobbyManager::StartOutGame() {
}

void UELSSLobbyManager::StartInGame() {
}

void UELSSLobbyManager::SetRuleSchedule(int32 ScheduleId) {
}

void UELSSLobbyManager::SetEnableGameSessionMultiPlayFeature(bool bEnable) {
}

void UELSSLobbyManager::SendCurrentWrestlerData() {
}

void UELSSLobbyManager::OnLobbyLeave(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) {
}

void UELSSLobbyManager::OnLobbyJoin(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) {
}

void UELSSLobbyManager::OnLobbyInviteReject(UEOSCommunityInfoBase* _CommunityInfo) {
}

void UELSSLobbyManager::OnLobbyInviteReceive(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) {
}

void UELSSLobbyManager::OnLobbyEvent2(EELEOSLobbyEventType lobbyEventType, UEOSUserBase* _CommunityUser, UEOSCommunityInfoBase* _CommunityInfo) {
}

void UELSSLobbyManager::OnLobbyDestroy() {
}

bool UELSSLobbyManager::IsLobbyOwner() const {
    return false;
}

bool UELSSLobbyManager::IsJoinedSSModeEOSLobby() const {
    return false;
}

bool UELSSLobbyManager::IsDigestingJoinRequest() const {
    return false;
}

bool UELSSLobbyManager::IsCreatingSSModeEOSLobby() const {
    return false;
}

bool UELSSLobbyManager::IsActive() const {
    return false;
}

int32 UELSSLobbyManager::GetSSRank(const FString& ProductUserID) const {
    return 0;
}

FString UELSSLobbyManager::GetSSPlayerId(const FString& ProductUserID) const {
    return TEXT("");
}

UELEOSLobby* UELSSLobbyManager::GetSSModeEOSLobby() const {
    return NULL;
}

int32 UELSSLobbyManager::GetSSLevel(const FString& ProductUserID) const {
    return 0;
}

int32 UELSSLobbyManager::GetRuleSchedule() const {
    return 0;
}

FString UELSSLobbyManager::GetPlayerAccountDisplayName(const FString& ProductUserID) const {
    return TEXT("");
}

EELSSLobbyMenuState UELSSLobbyManager::GetMemberMenuState(const FString& ProductUserID) const {
    return EELSSLobbyMenuState::Idle;
}

UEOSAttribute* UELSSLobbyManager::GetLobbyAttribute(const FString& Key) const {
    return NULL;
}

FString UELSSLobbyManager::GetCurrentTicketId() const {
    return TEXT("");
}

int32 UELSSLobbyManager::GetCurrentRegion() const {
    return 0;
}

void UELSSLobbyManager::FinishSSModeEOSLobby() {
}

bool UELSSLobbyManager::ExistNewerSSDataVersion() const {
    return false;
}

bool UELSSLobbyManager::CheckAllUserReady() const {
    return false;
}

bool UELSSLobbyManager::ChangeTicketId(const FString& TicketId) {
    return false;
}

bool UELSSLobbyManager::ChangeRegion(int32 Region) {
    return false;
}

bool UELSSLobbyManager::ChangeMenuState(EELSSLobbyMenuState State) {
    return false;
}


