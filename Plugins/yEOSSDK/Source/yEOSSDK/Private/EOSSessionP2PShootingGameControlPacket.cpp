#include "EOSSessionP2PShootingGameControlPacket.h"

void UEOSSessionP2PShootingGameControlPacket::SetTransform(FTransform _stTransform) {
}

void UEOSSessionP2PShootingGameControlPacket::SetTime(int32 _sGameFrame) {
}

void UEOSSessionP2PShootingGameControlPacket::SetControlValue(int32 _sControlType, float _fValue) {
}

void UEOSSessionP2PShootingGameControlPacket::SetControlBits(int32 _sControlBits) {
}

bool UEOSSessionP2PShootingGameControlPacket::Send() {
    return false;
}

float UEOSSessionP2PShootingGameControlPacket::GetValue(int32 _sControlType) {
    return 0.0f;
}

FTransform UEOSSessionP2PShootingGameControlPacket::GetTransform() {
    return FTransform{};
}

bool UEOSSessionP2PShootingGameControlPacket::GetControlData(FEOSSessionP2PShootingGameControlData& _stControlData) {
    return false;
}

int32 UEOSSessionP2PShootingGameControlPacket::GetControlBits() {
    return 0;
}

void UEOSSessionP2PShootingGameControlPacket::AppendControlBits(int32 _sControlBits) {
}

UEOSSessionP2PShootingGameControlPacket::UEOSSessionP2PShootingGameControlPacket() {
}

