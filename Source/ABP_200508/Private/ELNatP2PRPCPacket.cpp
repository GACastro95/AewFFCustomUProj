#include "ELNatP2PRPCPacket.h"

UELNatP2PRPCPacket::UELNatP2PRPCPacket() {
    this->CurrentObjectMap = NULL;
    this->SentPacketSize = 0;
}

bool UELNatP2PRPCPacket::SendPacketBuffer(const TArray<uint8>& Buffer, EEOSPacketReliability Reliability) {
    return false;
}

void UELNatP2PRPCPacket::ResetSentPacketSize() {
}

int32 UELNatP2PRPCPacket::GetSentPacketSize() const {
    return 0;
}


