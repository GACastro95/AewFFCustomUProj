#include "EOSSessionP2PAFBindPlayers.h"

UEOSSessionP2PAFBindPlayers::UEOSSessionP2PAFBindPlayers() {
    this->m_pcMemberInfos = NULL;
}

bool UEOSSessionP2PAFBindPlayers::RetrySendMemberInfo() {
    return false;
}

bool UEOSSessionP2PAFBindPlayers::GetMemberInfo(UEOSSessionP2PMemberInfoPacket*& _pcMemberInfos) {
    return false;
}


