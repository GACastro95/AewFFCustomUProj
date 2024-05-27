#include "EOSNatP2PPacketBase.h"

UEOSNatP2PPacketBase::UEOSNatP2PPacketBase() {
    this->m_pcUserBase = NULL;
    this->m_pcCachedTransfer = NULL;
    this->m_Reliability = EEOSPacketReliability::UnreliableUnordered;
}

bool UEOSNatP2PPacketBase::SetupByCachedTransfer(UEOSUserBase* _pcUserBase, UEOSNatP2PCachedTransfer* _pcCachedTransfer, EEOSPacketReliability _Reliability) {
    return false;
}

bool UEOSNatP2PPacketBase::Setup(UEOSUserBase* _pcUserBase, const FString& _strSocketID, uint8 _uChannel, EEOSPacketReliability _Reliability) {
    return false;
}

bool UEOSNatP2PPacketBase::SendAllUser() {
    return false;
}

bool UEOSNatP2PPacketBase::Send() {
    return false;
}

bool UEOSNatP2PPacketBase::IsSameSocketID(const FString& _strSocketID) const {
    return false;
}

bool UEOSNatP2PPacketBase::IsNoTarget() const {
    return false;
}

bool UEOSNatP2PPacketBase::GetUserBase(UEOSUserBase*& _pcUserBase) {
    return false;
}

FString UEOSNatP2PPacketBase::GetSocketID() const {
    return TEXT("");
}


