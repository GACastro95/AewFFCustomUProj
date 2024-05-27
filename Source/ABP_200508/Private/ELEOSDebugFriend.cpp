#include "ELEOSDebugFriend.h"

AELEOSDebugFriend::AELEOSDebugFriend(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ELEOSFriend = NULL;
    this->ELEOSLobby = NULL;
    this->bSetup = false;
    this->bShow = false;
}


