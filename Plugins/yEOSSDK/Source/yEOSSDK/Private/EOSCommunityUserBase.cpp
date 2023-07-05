#include "EOSCommunityUserBase.h"

FString UEOSCommunityUserBase::GetInviteID() const {
    return TEXT("");
}

TMap<FString, UEOSAttribute*> UEOSCommunityUserBase::GetAttributes() {
    return TMap<FString, UEOSAttribute*>();
}

UEOSAttribute* UEOSCommunityUserBase::FindAttribute(const FString& _strAttributeName) const {
    return NULL;
}

bool UEOSCommunityUserBase::Equal(const UEOSCommunityUserBase* User) const {
    return false;
}

UEOSCommunityUserBase::UEOSCommunityUserBase() {
}

