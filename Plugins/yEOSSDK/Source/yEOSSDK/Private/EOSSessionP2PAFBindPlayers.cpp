#include "EOSSessionP2PAFBindPlayers.h"

bool UEOSSessionP2PAFBindPlayers::RetrySendMemberInfo() {
    return false;
}

bool UEOSSessionP2PAFBindPlayers::GetMemberInfo(UEOSSessionP2PMemberInfoPacket*& _pcMemberInfos) {
    return false;
}

UEOSSessionP2PAFBindPlayers::UEOSSessionP2PAFBindPlayers() {
    this->m_pcMemberInfos = NULL;
}

