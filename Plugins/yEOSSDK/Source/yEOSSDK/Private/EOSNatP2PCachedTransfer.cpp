#include "EOSNatP2PCachedTransfer.h"

void UEOSNatP2PCachedTransfer::Update() {
}

bool UEOSNatP2PCachedTransfer::SetUsers(TArray<UEOSCommunityUserBase*> _pcUserBases) {
    return false;
}

bool UEOSNatP2PCachedTransfer::Setup(UEOSNatP2P* _pcNatP2P, UEOSCommunityInfoBase* _pcCommnuityBase, const FString& _strSocketID, uint8 _uChannel) {
    return false;
}

bool UEOSNatP2PCachedTransfer::SendPacket(UEOSNatP2PPacketBase* _pcData, bool _bAllUser, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2PCachedTransfer::SendContentBinary(const UEOSUserContentBinary* _pcData, UEOSUserBase* _pcUserBase, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2PCachedTransfer::SendBinary(const UEOSNatP2PBinary* _pcData, UEOSUserBase* _pcUserBase, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2PCachedTransfer::SendArray(const TArray<uint8>& _cData, UEOSUserBase* _pcUserBase, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2PCachedTransfer::RemoveUser(UEOSUserBase* _pcUserBase, bool _bSystemUpdate) {
    return false;
}

bool UEOSNatP2PCachedTransfer::RemoveAllUsers(bool _bSystemUpdate) {
    return false;
}

void UEOSNatP2PCachedTransfer::OnReceive(UEOSNatP2PBinary* _pcBinary, UEOSUserBase* _pcUserBase) {
}

bool UEOSNatP2PCachedTransfer::IsSameSocketID(const FString& _strSocketID) const {
    return false;
}

FString UEOSNatP2PCachedTransfer::GetStringOfOwnerProductUserID() const {
    return TEXT("");
}

FString UEOSNatP2PCachedTransfer::GetSocketID() const {
    return TEXT("");
}

uint8 UEOSNatP2PCachedTransfer::GetChannel() const {
    return 0;
}

bool UEOSNatP2PCachedTransfer::ContainsUser(UEOSUserBase* _pcUserBase) {
    return false;
}

bool UEOSNatP2PCachedTransfer::ClearPacketQueue() {
    return false;
}

bool UEOSNatP2PCachedTransfer::AddUser(UEOSUserBase* _pcUserBase, bool _bSystemUpdate) {
    return false;
}

UEOSNatP2PCachedTransfer::UEOSNatP2PCachedTransfer() {
    this->m_pcReceiveBuffer = NULL;
    this->m_pcNatP2P = NULL;
    this->m_pcCommnuityBase = NULL;
}

