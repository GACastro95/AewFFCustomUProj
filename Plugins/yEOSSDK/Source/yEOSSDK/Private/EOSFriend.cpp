#include "EOSFriend.h"

bool UEOSFriend::SetupInternalCallback() {
    return false;
}

void UEOSFriend::SetEnableForAutomaticGetInformationBits(int32 _enAutomaticGetInfoBit) {
}

void UEOSFriend::SetApiVersion(FEOSFriendAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSFriend::RequestGetFriends() {
    return false;
}

TMap<FString, UEOSFriendUser*> UEOSFriend::GetUsers() {
    return TMap<FString, UEOSFriendUser*>();
}

void UEOSFriend::GetProductUserIds(TArray<FString>& ProductUserIDs) {
}

void UEOSFriend::FindFriendPresenceByEpicID(UEOSPresenceBase*& _Presence, const FString& _EpicID) {
}

void UEOSFriend::FindFriendPresence(UEOSPresenceBase*& _Presence, const FString& _PUID) const {
}

void UEOSFriend::FindFriendByEpicID(UEOSFriendUser*& _FriendUser, const FString& _EpicID) {
}

void UEOSFriend::FindFriend(UEOSFriendUser*& _FriendUser, const FString& _PUID) const {
}

UEOSFriend::UEOSFriend() {
}

