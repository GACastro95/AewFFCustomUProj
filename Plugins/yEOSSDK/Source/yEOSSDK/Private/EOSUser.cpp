#include "EOSUser.h"

bool UEOSUser::RequestSetPresenceStatus(EEOSPresenceStatus _enStatus) {
    return false;
}

bool UEOSUser::RequestSetPresenceData(TMap<FString, FString> _cMapData) {
    return false;
}

bool UEOSUser::RequestSetPresence(const FString& _strRichText) {
    return false;
}

bool UEOSUser::RequestGetPresence() {
    return false;
}

bool UEOSUser::RequestGetFriends() {
    return false;
}

bool UEOSUser::RequestDeletePresenceData(TArray<FString> _cArrayData) {
    return false;
}

bool UEOSUser::RequestContentsList() {
    return false;
}

void UEOSUser::OnEOSAuthEvent(EEOSAuthEvent _enEvent, UEOSAuth* _pcAuth) {
}

TMap<FString, FString> UEOSUser::GetPresenceCache() const {
    return TMap<FString, FString>();
}

UEOSPresenceBase* UEOSUser::GetEOSPresence() {
    return NULL;
}

UEOSFriend* UEOSUser::GetEOSFriend() {
    return NULL;
}

UEOSUser::UEOSUser() {
    this->m_pcFriends = NULL;
    this->m_pcPresence = NULL;
}

