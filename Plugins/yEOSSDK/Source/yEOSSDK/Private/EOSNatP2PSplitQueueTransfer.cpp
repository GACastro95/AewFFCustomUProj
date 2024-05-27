#include "EOSNatP2PSplitQueueTransfer.h"

UEOSNatP2PSplitQueueTransfer::UEOSNatP2PSplitQueueTransfer() {
    this->m_sCurrentSendPacketId = 0;
    this->m_bWaitAllP2PConnections = false;
    this->m_bWaitingAllP2PConnections = false;
    this->m_sCompressionPacketSizeThreshold = 64;
}


