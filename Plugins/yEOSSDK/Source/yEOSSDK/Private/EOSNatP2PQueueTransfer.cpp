#include "EOSNatP2PQueueTransfer.h"

bool UEOSNatP2PQueueTransfer::AddToSendPacketQueue(UEOSNatP2PPacketBase* _pcData, bool _bAllUser, EEOSPacketReliability _enReliability) {
    return false;
}

UEOSNatP2PQueueTransfer::UEOSNatP2PQueueTransfer() {
    this->m_pcPacketQueue = NULL;
    this->m_bSendPacketFromQueueOnUpdate = true;
    this->m_sSendPacketNumMaxPerTick = 0;
    this->m_sSendPacketSizeMaxPerTick = 0;
}

