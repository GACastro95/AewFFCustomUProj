#include "EOSSessionP2PObjectParamPacket.h"

UEOSSessionP2PObjectParamPacket::UEOSSessionP2PObjectParamPacket() {
}

bool UEOSSessionP2PObjectParamPacket::SetPacketInfo(int32 _sIndex, int32 _sMaxNum) {
    return false;
}

bool UEOSSessionP2PObjectParamPacket::Send() {
    return false;
}

uint8 UEOSSessionP2PObjectParamPacket::GetUserParam(int32 _sIndex) {
    return 0;
}

EEOSSessionObjectParamType UEOSSessionP2PObjectParamPacket::GetType(int32 _sIndex) {
    return EEOSSessionObjectParamType::None;
}

FTransform UEOSSessionP2PObjectParamPacket::GetTransform(int32 _sIndex) {
    return FTransform{};
}

FString UEOSSessionP2PObjectParamPacket::GetProductUserID(int32 _sIndex) {
    return TEXT("");
}

bool UEOSSessionP2PObjectParamPacket::GetObjectData(FEOSSessionP2PObjectParamData& _stObjectParamData, int32 _sIndex) {
    return false;
}

int32 UEOSSessionP2PObjectParamPacket::GetNumberOfObjects() {
    return 0;
}

int32 UEOSSessionP2PObjectParamPacket::GetNumberOfDeta() {
    return 0;
}

int32 UEOSSessionP2PObjectParamPacket::GetKind(int32 _sIndex) {
    return 0;
}

int32 UEOSSessionP2PObjectParamPacket::GetDataIndex() {
    return 0;
}

bool UEOSSessionP2PObjectParamPacket::AddObject(int32 _sIndex, const FTransform& _stTransform, const FString& _strProductUserID, int32 _sKind, uint8 _sUserParam) {
    return false;
}

bool UEOSSessionP2PObjectParamPacket::AddCharacter(int32 _sIndex, const FTransform& _stTransform, const FString& _strProductUserID, int32 _sKind, uint8 _sUserParam) {
    return false;
}


