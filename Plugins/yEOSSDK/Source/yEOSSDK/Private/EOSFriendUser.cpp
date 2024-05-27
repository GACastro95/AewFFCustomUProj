#include "EOSFriendUser.h"

UEOSFriendUser::UEOSFriendUser() {
    this->m_pcPresence = NULL;
}

bool UEOSFriendUser::RequestGetPresence() {
    return false;
}

FString UEOSFriendUser::GetStringOfFriendProductUserID() const {
    return TEXT("");
}

EEOSFriendStatus UEOSFriendUser::GetFriendStatus() {
    return EEOSFriendStatus::NotFriends;
}

EEOSQueryStatus UEOSFriendUser::GetExternalAccountIdQueryStatus() const {
    return EEOSQueryStatus::NotQueried;
}

UEOSPresenceBase* UEOSFriendUser::GetEOSPresence() {
    return NULL;
}


