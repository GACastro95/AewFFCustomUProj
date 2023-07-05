#include "EOSNatP2PAPIVersionSettings.h"

FEOSNatP2PAPIVersionSettings::FEOSNatP2PAPIVersionSettings() {
    this->SocketID = 0;
    this->AddNotifyPeerConnectionRequest = 0;
    this->AddNotifyPeerConnectionEstablished = 0;
    this->AddNotifyPeerConnectionInterrupted = 0;
    this->AddNotifyPeerConnectionClosed = 0;
    this->AddNotifyIncomingPacketQueueFull = 0;
    this->QueryNatType = 0;
    this->GetNatType = 0;
    this->ReceivePacket = 0;
    this->GetNextReceivedPacketSize = 0;
    this->SendPacket = 0;
    this->AcceptConnection = 0;
    this->CloseConnection = 0;
    this->CloseConnections = 0;
    this->GetPacketQueueInfo = 0;
    this->SetPacketQueueSize = 0;
}

