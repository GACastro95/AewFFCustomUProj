#include "EOSNatP2P.h"

bool UEOSNatP2P::Update() {
    return false;
}

bool UEOSNatP2P::SetupInternalCallback() {
    return false;
}

bool UEOSNatP2P::SetUpdateType(EEOSUpdateType _enType) {
    return false;
}

void UEOSNatP2P::SetTargetUserType(EEOSUserType _enUserType) {
}

void UEOSNatP2P::SetOnlyTransferUpdates(bool _bEnable) {
}

void UEOSNatP2P::SetApiVersion(FEOSNatP2PAPIVersionSettings _stAPIVerSetting) {
}

void UEOSNatP2P::SetAcceptAnyUser(bool _bAccept) {
}

bool UEOSNatP2P::SendPacket(UEOSNatP2PPacketBase* _pcData, bool _bAllUser, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2P::SendContentBinary(const UEOSUserContentBinary* _pcData, const UEOSUserBase* _pcUser, const FString& _strSocketID, uint8 _uChannel, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2P::SendBinary(const UEOSNatP2PBinary* _pcData, const UEOSUserBase* _pcUser, const FString& _strSocketID, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2P::SendArray(const TArray<uint8>& _cData, const UEOSUserBase* _pcUser, const FString& _strSocketID, uint8 _uChannel, EEOSPacketReliability _enReliability) {
    return false;
}

bool UEOSNatP2P::RequestNatType() {
    return false;
}

bool UEOSNatP2P::RemoveUserById(const FString& _strUserId) {
    return false;
}

bool UEOSNatP2P::RemoveUser(UEOSUserBase* _pcUser) {
    return false;
}

bool UEOSNatP2P::RemoveTransfer(UEOSNatP2PCachedTransfer* _pcCachedTransfer) {
    return false;
}

bool UEOSNatP2P::RemoveRequestChannel(uint8 _uChannel) {
    return false;
}

bool UEOSNatP2P::RemoveAcceptSocket(const FString& _strSocketID) {
    return false;
}

bool UEOSNatP2P::InitializeP2PCachedTransfer(UEOSNatP2PCachedTransfer* _pcCachedTransfer, UEOSCommunityInfoBase* _pcCommnuityBase, const FString& _strSocketID, uint8 _uChannel, int32 _sOptionBits) {
    return false;
}

EEOSNatType UEOSNatP2P::GetNatType() const {
    return EEOSNatType::Unknown;
}

bool UEOSNatP2P::CreateP2PCachedTransfer(UEOSNatP2PCachedTransfer*& _pcCachedTransfer, UEOSCommunityInfoBase* _pcCommnuityBase, const FString& _strSocketID, uint8 _uChannel, int32 _sOptionBits) {
    return false;
}

bool UEOSNatP2P::AddUser(UEOSUserBase* _pcUser) {
    return false;
}

bool UEOSNatP2P::AddTransfer(UEOSNatP2PCachedTransfer* _pcCachedTransfer) {
    return false;
}

bool UEOSNatP2P::AddRequestChannel(uint8 _uChannel) {
    return false;
}

bool UEOSNatP2P::AddAcceptSocket(const FString& _strSocketID) {
    return false;
}

UEOSNatP2P::UEOSNatP2P() {
    this->m_pcUserManager = NULL;
}

