#include "EOSPresence.h"

bool UEOSPresence::RequestSetStatus(EEOSPresenceStatus _enStatus) {
    return false;
}

bool UEOSPresence::RequestSetSession(UEOSCommunityInfoBase* _pcCommunityInfo) {
    return false;
}

bool UEOSPresence::RequestSetPresence(const FString& _strRichText) {
    return false;
}

bool UEOSPresence::RequestSetData(TMap<FString, FString> _cMapData) {
    return false;
}

bool UEOSPresence::RequestDeleteData(TArray<FString> _cArrayData) {
    return false;
}

UEOSPresence::UEOSPresence() {
}

