#include "EOSAntiCheatAPIVersionSettings.h"

FEOSAntiCheatAPIVersionSettings::FEOSAntiCheatAPIVersionSettings() {
    this->AddNotifyMessageToPeer = 0;
    this->AddNotifyPeerActionRequired = 0;
    this->AddNotifyPeerAuthStatusChanged = 0;
    this->AddNotifyClientIntegrityViolated = 0;
    this->ReceiveMessageFromPeer = 0;
    this->BeginSession = 0;
    this->EndSession = 0;
    this->PollStatus = 0;
    this->RegisterPeer = 0;
    this->UnregisterPeer = 0;
}

