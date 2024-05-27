#include "EOSSessionP2PLatencyInfoPacket.h"

UEOSSessionP2PLatencyInfoPacket::UEOSSessionP2PLatencyInfoPacket() {
}

bool UEOSSessionP2PLatencyInfoPacket::Send(int32 _uPacketIndex) {
    return false;
}

void UEOSSessionP2PLatencyInfoPacket::Reset() {
}

void UEOSSessionP2PLatencyInfoPacket::MergeLatencyInfo(const FString& _strProductUserID, float _fAverage, float _fMin, float _fMax) {
}

int32 UEOSSessionP2PLatencyInfoPacket::GetTotalLatencyInfoNum() {
    return 0;
}

bool UEOSSessionP2PLatencyInfoPacket::GetLatencyInfo(FEOSSessionP2PLatencyInfoData& _rstInfoData, int32 _sIndex) {
    return false;
}

int32 UEOSSessionP2PLatencyInfoPacket::GetHostPriority(const FString& _strProductUserID) const {
    return 0;
}

void UEOSSessionP2PLatencyInfoPacket::AddLatencyInfo(const FString& _strProductUserID, float _fAverage, float _fMin, float _fMax) {
}


