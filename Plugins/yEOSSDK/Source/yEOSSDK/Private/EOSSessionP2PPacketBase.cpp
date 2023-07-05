#include "EOSSessionP2PPacketBase.h"

bool UEOSSessionP2PPacketBase::UnsetUpdateFlag() {
    return false;
}

void UEOSSessionP2PPacketBase::SetDiectionType(EEOSSessionPacketDirectionType _enDirectionType) {
}

bool UEOSSessionP2PPacketBase::IsUpdate() const {
    return false;
}

bool UEOSSessionP2PPacketBase::IsSynchronizedPacket() const {
    return false;
}

bool UEOSSessionP2PPacketBase::IsAllowDelayedDelivery() const {
    return false;
}

EEOSSessionPacketTypeBP UEOSSessionP2PPacketBase::GetPacketTypeBP() const {
    return EEOSSessionPacketTypeBP::Sys_General;
}

EEOSSessionPacketDirectionType UEOSSessionP2PPacketBase::GetDiectionType() const {
    return EEOSSessionPacketDirectionType::Send;
}

bool UEOSSessionP2PPacketBase::CopyPacketData(UEOSSessionP2PPacketBase* _pcPacketBase) {
    return false;
}

UEOSSessionP2PPacketBase::UEOSSessionP2PPacketBase() {
}

