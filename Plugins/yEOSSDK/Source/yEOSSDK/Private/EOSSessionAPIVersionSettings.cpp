#include "EOSSessionAPIVersionSettings.h"

FEOSSessionAPIVersionSettings::FEOSSessionAPIVersionSettings() {
    this->AddNotifySessionInviteReceived = 0;
    this->AddNotifySessionInviteAccepted = 0;
    this->CreateSessionModification = 0;
    this->UpdateSessionModification = 0;
    this->SetMaxPlayer = 0;
    this->SetPermissionLevel = 0;
    this->SetJoininProgressAllowed = 0;
    this->SetInvitesAllowed = 0;
    this->SetHostAddress = 0;
    this->SessionAttributeData = 0;
    this->AddAttribute = 0;
    this->RemoveAttribute = 0;
    this->UpdateSession = 0;
    this->DestroySession = 0;
    this->StartSession = 0;
    this->EndSession = 0;
    this->RegiterPlayers = 0;
    this->UnregisterPlayers = 0;
    this->SnedInvite = 0;
    this->QueryInvites = 0;
    this->RejectInvite = 0;
    this->SessionSearch = 0;
    this->SetParameter = 0;
    this->AttributeData = 0;
    this->SetSessionID = 0;
    this->SearchFind = 0;
    this->JoinSession = 0;
    this->CopySessionHandleByInviteID = 0;
    this->CopySessionHandleForPresence = 0;
    this->GetSearchResultCount = 0;
    this->CopySearchResultByIndex = 0;
    this->CopyInfo = 0;
    this->GetSessionAttributeCount = 0;
    this->CopySessionAttributeByIndex = 0;
    this->GetRegisteredPlayerCount = 0;
    this->CopyRegisteredPlayerByIndex = 0;
    this->CopyActiveSessionHandle = 0;
    this->ActiveSessionCopyInfo = 0;
}

