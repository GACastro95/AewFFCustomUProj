#include "ELReplicationManager.h"

void UELReplicationManager::UpdateSessionUsers(UEOSSessionP2P* InSessionP2P) {
}

void UELReplicationManager::Update(float DeltaSeconds) {
}

bool UELReplicationManager::SetupP2P(UEOSNatP2P* InNatP2P, UEOSNatP2PCachedTransfer* InNatP2PTransfer, UEOSCommunityInfoBase* InCommnuityBase, UEOSSessionP2P* InSessionP2P) {
    return false;
}

bool UELReplicationManager::SetReplicationObject(const UObject* Object, bool bReplicate) {
    return false;
}

bool UELReplicationManager::SetReplicationInterval(const UObject* Object, int32 Interval) {
    return false;
}

FELNetworkGUID UELReplicationManager::SetGuidSeed(int32 Seed) {
    return FELNetworkGUID{};
}

void UELReplicationManager::SetEnabledReplication(bool bEnabled) {
}

void UELReplicationManager::SendReplications(float DeltaSeconds) {
}

bool UELReplicationManager::RemoveObject(const UObject* Object) {
    return false;
}

void UELReplicationManager::ReleaseP2P() {
}

void UELReplicationManager::ProcessRPC(float DeltaSeconds) {
}

void UELReplicationManager::OnReceiveRPC(UEOSNatP2PCachedTransfer* Transfer, UEOSUserBase* UserBase, UEOSNatP2PBinary* P2PBinary) {
}

bool UELReplicationManager::IsWaitingAllP2PConnections() const {
    return false;
}

void UELReplicationManager::InitializeReplicationObjects() {
}

int32 UELReplicationManager::GetSentPacketSize() const {
    return 0;
}

UELNatP2PRPCPacket* UELReplicationManager::GetRPCPacket() const {
    return NULL;
}

FELNetworkGUID UELReplicationManager::GetNextGuid() {
    return FELNetworkGUID{};
}

FELNetworkGUID UELReplicationManager::GetFirstGuid(int32 Seed) const {
    return FELNetworkGUID{};
}

UELNatP2PRPCPacket* UELReplicationManager::CreateRPCPacket() {
    return NULL;
}

FELNetworkGUID UELReplicationManager::CreateGuidFromSeedAndOffset(int32 Seed, int32 Offset) const {
    return FELNetworkGUID{};
}

bool UELReplicationManager::AddUniqueObjectToEmptyGuid(EELNetObjectGuid Guid, const UObject* Object, int32 Count, EELNetObjectGuid& OutGuid, bool bReplicate) {
    return false;
}

bool UELReplicationManager::AddUniqueObject(EELNetObjectGuid Guid, const UObject* Object, bool bReplicate) {
    return false;
}

bool UELReplicationManager::AddObject(FELNetworkGUID Guid, const UObject* Object, bool bReplicate) {
    return false;
}

UELReplicationManager::UELReplicationManager() {
    this->NatP2P = NULL;
    this->P2PRPCPacket = NULL;
    this->P2PRPCTransfer = NULL;
    this->SocketID = TEXT("RPC");
    this->GuidSeed = 121;
    this->CurrentGuidIndex = 256;
    this->SentPacketSize = 0;
    this->bEnabledReplication = true;
}

