#include "ELEOSLobbyEvent.h"

UELEOSLobbyEvent::UELEOSLobbyEvent() {
    this->CommunityEvent = EEOSCommunityEvent::InviteReceived;
    this->Community = NULL;
    this->CommunityInfo = NULL;
    this->CommunityUser = NULL;
}

