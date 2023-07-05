#include "ELSessionPacketPartyData.h"

TArray<FString> UELSessionPacketPartyData::GetPartyMemberPUID() {
    return TArray<FString>();
}

int32 UELSessionPacketPartyData::GetPartyMemberNum() const {
    return 0;
}

UELSessionPacketPartyData::UELSessionPacketPartyData() {
    this->JoinParty = false;
}

