#include "EOSCommunityBase.h"

UEOSCommunityBase::UEOSCommunityBase() {
    this->m_pcUserManager = NULL;
}

TMap<FString, UEOSCommunityInfoBase*> UEOSCommunityBase::GetOwnCommunities() {
    return TMap<FString, UEOSCommunityInfoBase*>();
}

TMap<FString, UEOSCommunityInfoBase*> UEOSCommunityBase::GetJoinCommunities() {
    return TMap<FString, UEOSCommunityInfoBase*>();
}

TMap<FString, UEOSCommunityInfoBase*> UEOSCommunityBase::GetInviteCommunities() {
    return TMap<FString, UEOSCommunityInfoBase*>();
}


