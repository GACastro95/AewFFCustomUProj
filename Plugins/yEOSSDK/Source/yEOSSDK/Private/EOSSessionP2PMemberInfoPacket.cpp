#include "EOSSessionP2PMemberInfoPacket.h"

bool UEOSSessionP2PMemberInfoPacket::UpdateMember(int32 _sIndex, int32 _sMemberIndex, const FString& _strProductUserID, bool _bRemvoed, bool _bDisconnected) {
    return false;
}

bool UEOSSessionP2PMemberInfoPacket::Send() {
    return false;
}

uint8 UEOSSessionP2PMemberInfoPacket::GetTotalMemberNum() const {
    return 0;
}

bool UEOSSessionP2PMemberInfoPacket::GetMemberInfoData(FEOSSessionP2PMemberInfoData& _stMemberData, int32 _sIndex) {
    return false;
}

int32 UEOSSessionP2PMemberInfoPacket::FindMember(const FString& _strProductUserID) {
    return 0;
}

bool UEOSSessionP2PMemberInfoPacket::AddMember(int32 _sMemberIndex, const FString& _strProductUserID, bool _bRemvoed, bool _bDisconnected) {
    return false;
}

UEOSSessionP2PMemberInfoPacket::UEOSSessionP2PMemberInfoPacket() {
}

