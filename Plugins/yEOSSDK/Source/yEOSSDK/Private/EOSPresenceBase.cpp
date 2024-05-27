#include "EOSPresenceBase.h"

UEOSPresenceBase::UEOSPresenceBase() {
}

bool UEOSPresenceBase::SetupInternalCallback() {
    return false;
}

void UEOSPresenceBase::SetApiVersion(FEOSPresenceAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSPresenceBase::RequestGetPresence(const FString& _strRequestEpicAccountID) {
    return false;
}

FString UEOSPresenceBase::GetRichText() const {
    return TEXT("");
}

TMap<FString, FString> UEOSPresenceBase::GetRecords() const {
    return TMap<FString, FString>();
}

EEOSPresenceStatus UEOSPresenceBase::GetPresenceStatus() const {
    return EEOSPresenceStatus::Offline;
}

FString UEOSPresenceBase::GetJoinedInSession() const {
    return TEXT("");
}

bool UEOSPresenceBase::FindRecord(const FString& _strKey, FString& _strValue) const {
    return false;
}


