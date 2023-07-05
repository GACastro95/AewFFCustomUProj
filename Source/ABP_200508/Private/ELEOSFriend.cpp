#include "ELEOSFriend.h"

void UELEOSFriend::UpdateInfo() {
}

bool UELEOSFriend::UpdateFriendPresence(UEOSPresenceBase* _EOSPresenceBase, const FString& _EpicAccountID) {
    return false;
}

bool UELEOSFriend::Setup(UEOSManager* _Manager, UEOSUser* _User, UEOSStats* _Stats, UEOSLeaderboard* _Leaderboard) {
    return false;
}

void UELEOSFriend::SetPersonalLastReadTime(const FDateTime& _DateTime, const FString& _PUID) {
}

bool UELEOSFriend::SendPersonalStamp(int32 _StampID, UEOSUserBase* _target) {
    return false;
}

bool UELEOSFriend::SendPersonalChat(const FString& _Message, UEOSUserBase* _target) {
    return false;
}

bool UELEOSFriend::SendNotify(EELEOSFriendNotify Notify, UEOSUserBase* Target) {
    return false;
}

void UELEOSFriend::Release() {
}

bool UELEOSFriend::QueryFriendPlayerIconStats(const FString& _PUID) {
    return false;
}

void UELEOSFriend::OpenPersonalChat(const FString& _PUID, UEOSUserBase* _UserBase) {
}

void UELEOSFriend::OnUpdatePUIDEvent(UEOSUserBase* _FriendUser) {
}

void UELEOSFriend::OnReceive(UEOSNatP2PCachedTransfer* _Transfer, UEOSUserBase* _UserBase, UEOSNatP2PBinary* _P2PBinary) {
}

void UELEOSFriend::OnFriendEvent(EEOSFriendEvent FriendEvent, UEOSFriend* Friend, UEOSUserBase* FriendUser) {
}

int32 UELEOSFriend::GetUnreadPersonalChatCount(const FDateTime& _UtcDateTime, const FString& _PUID) {
    return 0;
}

void UELEOSFriend::GetSortedFriendList(TArray<UEOSFriendUser*>& List) const {
}

void UELEOSFriend::GetPersonalPlayers(TMap<FString, FLobbyCharacterData>& _Players) {
}

void UELEOSFriend::GetPersonalLastReadTime(FDateTime& _DateTime, const FString& _PUID) {
}

void UELEOSFriend::GetPersonalChatMember(TArray<FString>& _ChatMember) const {
}

void UELEOSFriend::GetChatLog(TArray<FLobbyChatLogData>& _ChatLog, const FString& _PUID) {
}

UEOSFriendUser* UELEOSFriend::FindFriendUser(const FString& _PUID) const {
    return NULL;
}

void UELEOSFriend::ClosePersonalChat(const FString& _PUID) {
}

UELEOSFriend::UELEOSFriend() {
    this->EOSManager = NULL;
    this->EOSUser = NULL;
    this->EOSFriend = NULL;
    this->EOSStats = NULL;
    this->EOSLeaderboard = NULL;
    this->EOSNatP2P = NULL;
    this->EOSNatP2PTransfer = NULL;
    this->DefaultSocketID = TEXT("Party");
}

