#include "EOSCommunityInfoBase.h"

bool UEOSCommunityInfoBase::IsOwnerUser(const UEOSUserBase* User) const {
    return false;
}

bool UEOSCommunityInfoBase::IsOwner(const FString& _strProductUserID) {
    return false;
}

bool UEOSCommunityInfoBase::IsJoinedIn() const {
    return false;
}

bool UEOSCommunityInfoBase::IsInvitesAllowed() const {
    return false;
}

bool UEOSCommunityInfoBase::IsActive() {
    return false;
}

bool UEOSCommunityInfoBase::HasPlayer(const FString& _strProductUserID) {
    return false;
}

FString UEOSCommunityInfoBase::GetStringOfProductUserIDForOwnerUser() const {
    return TEXT("");
}

FString UEOSCommunityInfoBase::GetStringOfInviteProductUserID() {
    return TEXT("");
}

FString UEOSCommunityInfoBase::GetStringOfCommunityID() {
    return TEXT("");
}

void UEOSCommunityInfoBase::GetSortedPlayers(TArray<UEOSCommunityUserBase*>& _cArray, const FString& _strSortAttributeName) const {
}

FString UEOSCommunityInfoBase::GetRegistKey() {
    return TEXT("");
}

void UEOSCommunityInfoBase::GetPlayersSortedByDisplayName(TArray<UEOSCommunityUserBase*>& _cArray) const {
}

TMap<FString, UEOSCommunityUserBase*> UEOSCommunityInfoBase::GetPlayers() const {
    return TMap<FString, UEOSCommunityUserBase*>();
}

int32 UEOSCommunityInfoBase::GetPlayerNum() const {
    return 0;
}

EEOSCommunityPermission UEOSCommunityInfoBase::GetPermission() const {
    return EEOSCommunityPermission::Public;
}

bool UEOSCommunityInfoBase::GetOwnerUser(UEOSCommunityUserBase*& _pcCommunityUser) {
    return false;
}

int32 UEOSCommunityInfoBase::GetMaxMember() const {
    return 0;
}

EEOSCommunityJoinType UEOSCommunityInfoBase::GetJoinType() const {
    return EEOSCommunityJoinType::Own;
}

bool UEOSCommunityInfoBase::GetInviteUser(UEOSCommunityUserBase*& _pcCommunityUser) {
    return false;
}

EEOSCommunityInfoType UEOSCommunityInfoBase::GetInfoType() const {
    return EEOSCommunityInfoType::Lobby;
}

int32 UEOSCommunityInfoBase::GetAvailableSlots() const {
    return 0;
}

TMap<FString, UEOSAttribute*> UEOSCommunityInfoBase::GetAttributes() {
    return TMap<FString, UEOSAttribute*>();
}

FString UEOSCommunityInfoBase::GetAccountDisplayNameForOwnerUser() const {
    return TEXT("");
}

bool UEOSCommunityInfoBase::FindPlayer(UEOSCommunityUserBase*& _pcPlayer, const FString& _strProductUserID) {
    return false;
}

bool UEOSCommunityInfoBase::FindAttribute(UEOSAttribute*& _pcAttribute, const FString& _strKey) {
    return false;
}

UEOSCommunityInfoBase::UEOSCommunityInfoBase() {
    this->m_pcOwnerUser = NULL;
    this->m_pcInviteUser = NULL;
}

