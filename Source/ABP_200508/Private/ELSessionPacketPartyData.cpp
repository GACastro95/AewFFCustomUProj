#include "ELSessionPacketPartyData.h"

UELSessionPacketPartyData::UELSessionPacketPartyData() {
    this->JoinParty = false;
}

TArray<FString> UELSessionPacketPartyData::GetPartyMemberPUID() {
    return TArray<FString>();
}

int32 UELSessionPacketPartyData::GetPartyMemberNum() const {
    return 0;
}


