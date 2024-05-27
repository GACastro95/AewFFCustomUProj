#include "EOSNatP2PStringPacket.h"

UEOSNatP2PStringPacket::UEOSNatP2PStringPacket() {
}

bool UEOSNatP2PStringPacket::SetString(const FString& _strText) {
    return false;
}

FString UEOSNatP2PStringPacket::GetStringFromP2PBinary(UEOSNatP2PBinary* _pcBinary) {
    return TEXT("");
}

bool UEOSNatP2PStringPacket::CreateStringPacketWithUserAndNatP2PCachedTransfer(UEOSNatP2PStringPacket*& _pcStringPacket, UEOSUserBase* _pcUserBase, UEOSNatP2PCachedTransfer* _pcCachedTransfer) {
    return false;
}

bool UEOSNatP2PStringPacket::CreateStringPacketWithNatP2PCachedTransfer(UEOSNatP2PStringPacket*& _pcStringPacket, UEOSNatP2PCachedTransfer* _pcCachedTransfer) {
    return false;
}

bool UEOSNatP2PStringPacket::CreateStringPacket(UEOSNatP2PStringPacket*& _pcStringPacket, const FString& _strText) {
    return false;
}


