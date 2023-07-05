#include "EOSUserManager.h"

bool UEOSUserManager::RemoveUser(UEOSUserBase* _pcUser) {
    return false;
}

void UEOSUserManager::OnUserEvent(EEOSUserEvent _eEvent, UEOSUserBase* _pcUser) {
}

void UEOSUserManager::OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstUserContentProgress) {
}

void UEOSUserManager::OnPresenceEvent(EEOSPresenceEvent _enPresenceEvent, UEOSPresenceBase* _pcPresence, const FString& _strFriendEpicAccountID) {
}

void UEOSUserManager::OnFriendUpdatePUIDEvent(UEOSUserBase* _pcFriendUser) {
}

void UEOSUserManager::OnFriendEvent(EEOSFriendEvent _eEvent, UEOSFriend* _pcFriend, UEOSUserBase* _pcFriendUser) {
}

bool UEOSUserManager::IsAddedProductUserID(const FString& _strProductUserID, EEOSUserType _enUserType) {
    return false;
}

bool UEOSUserManager::IsAddedEpicAccountUser(const FString& _strEpicAccountID) {
    return false;
}

TMap<FString, UEOSUserTypeToUserBaseMap*> UEOSUserManager::GetProductUsers() const {
    return TMap<FString, UEOSUserTypeToUserBaseMap*>();
}

TMap<FString, UEOSUserBase*> UEOSUserManager::GetEpicAccountUsers() const {
    return TMap<FString, UEOSUserBase*>();
}

EExternalAccountType UEOSUserManager::GetCurrentPlatformAccountType() const {
    return EExternalAccountType::Unknown;
}

bool UEOSUserManager::FindProductUserID(UEOSUserBase*& _pcEOSUser, const FString& _strProductUserID, EEOSUserType _enUserType) {
    return false;
}

bool UEOSUserManager::FindEpicAccountUser(UEOSUserBase*& _pcEOSUser, const FString& _strEpicAccountID) {
    return false;
}

bool UEOSUserManager::CreateUser(UEOSUserBase*& _pcUser, const FString& _strEpicAccountID, const FString& _strLocalAccountID, const FString& _strProductUserID, const FString& _strLocalProductUserID, EEOSUserType _enUserType, UEOSAuth* _pcEOSAuth) {
    return false;
}

bool UEOSUserManager::AddProductUser(UEOSUserBase* _pcUser) {
    return false;
}

UEOSUserBase* UEOSUserManager::AddLocalUser(UEOSAuth* _pcAuth) {
    return NULL;
}

bool UEOSUserManager::AddEpicAccountUser(UEOSUserBase* _pcUser) {
    return false;
}

UEOSUserManager::UEOSUserManager() {
    this->m_pcRefAPIRequestManager = NULL;
}

