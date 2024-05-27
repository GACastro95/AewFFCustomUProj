#include "EOSNatP2PContentPacket.h"

UEOSNatP2PContentPacket::UEOSNatP2PContentPacket() {
    this->m_pcBinary = NULL;
}

bool UEOSNatP2PContentPacket::SetContentBinary(UEOSUserContentBinary* _pcContent) {
    return false;
}

bool UEOSNatP2PContentPacket::CreateUserContentBinary(UEOSUserContentBinary*& _pcContent, UEOSNatP2PBinary* _pcBinary) {
    return false;
}

bool UEOSNatP2PContentPacket::CreateContentPacketWithUserAndNatP2PCachedTransfer(UEOSNatP2PContentPacket*& _pcContentPacket, UEOSUserBase* _pcUserBase, UEOSNatP2PCachedTransfer* _pcCachedTransfer) {
    return false;
}

bool UEOSNatP2PContentPacket::CreateContentPacketWithNatP2PCachedTransfer(UEOSNatP2PContentPacket*& _pcContentPacket, UEOSNatP2PCachedTransfer* _pcCachedTransfer) {
    return false;
}

bool UEOSNatP2PContentPacket::CreateContentPacket(UEOSNatP2PContentPacket*& _pcContentPacket, UEOSUserContentBinary* _pcContent) {
    return false;
}


