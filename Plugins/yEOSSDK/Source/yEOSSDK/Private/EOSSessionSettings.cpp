#include "EOSSessionSettings.h"

FEOSSessionSettings::FEOSSessionSettings() {
    this->MaxMembers = 0;
    this->CommunityPermission = EEOSCommunityPermission::Public;
    this->AllowJoinInProgress = false;
    this->InvitesAllowed = false;
    this->PresenceEnabled = false;
}

