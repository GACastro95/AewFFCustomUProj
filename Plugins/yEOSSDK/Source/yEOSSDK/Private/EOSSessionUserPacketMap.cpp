#include "EOSSessionUserPacketMap.h"

UEOSSessionUserPacketMap::UEOSSessionUserPacketMap() {
    this->m_pcSessionUser = NULL;
}

bool UEOSSessionUserPacketMap::Setup(UEOSSessionUser* _pcSessionUser) {
    return false;
}

bool UEOSSessionUserPacketMap::SetP2PConnectionStatus(EEOSNatP2PConnectionStatus _enConnectionStatus) {
    return false;
}

bool UEOSSessionUserPacketMap::SetP2PActiveFlag(EEOSP2PActiveFlag _enActiveFlag) {
    return false;
}

bool UEOSSessionUserPacketMap::IsSynchronizedAllPlayerPackets(bool _bHost) {
    return false;
}

bool UEOSSessionUserPacketMap::IsOwner(UEOSSessionP2P* _pcSessionP2P) {
    return false;
}

bool UEOSSessionUserPacketMap::GetSessionUser(UEOSSessionUser*& _pcSessionUser) {
    return false;
}

TMap<int32, UEOSSessionP2PSynchronizedPacketBase*> UEOSSessionUserPacketMap::GetSendSynchronizedPackets() {
    return TMap<int32, UEOSSessionP2PSynchronizedPacketBase*>();
}

bool UEOSSessionUserPacketMap::GetSendSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, UEOSSessionP2P* _pcSessionP2P) {
    return false;
}

TMap<int32, UEOSSessionP2PPacketBase*> UEOSSessionUserPacketMap::GetSendPackets() {
    return TMap<int32, UEOSSessionP2PPacketBase*>();
}

bool UEOSSessionUserPacketMap::GetSendPacket(UEOSSessionP2PPacketBase*& _pcPacketBase, int32 _sPacketType, UEOSSessionP2P* _pcSessionP2P) {
    return false;
}

bool UEOSSessionUserPacketMap::GetReceivedSynchronizedPacket(UEOSSessionP2PSynchronizedPacketBase*& _pcPacketBase, int32 _sPacketType, UEOSSessionP2P* _pcSessionP2P) {
    return false;
}

bool UEOSSessionUserPacketMap::GetReceivedPacket(TArray<UEOSSessionP2PPacketBase*>& _pcPackets) {
    return false;
}

EEOSNatP2PConnectionStatus UEOSSessionUserPacketMap::GetP2PConnectionStatus() const {
    return EEOSNatP2PConnectionStatus::NotConnected;
}

EEOSP2PActiveFlag UEOSSessionUserPacketMap::GetP2PActiveFlag() const {
    return EEOSP2PActiveFlag::Invalid;
}

bool UEOSSessionUserPacketMap::FindReceivedPacket(UEOSSessionP2PPacketBase*& _pcPackets, int32 _sPacketType, bool _bRemovePacket) {
    return false;
}


