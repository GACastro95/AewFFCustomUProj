#include "ELEOSDebugLobby.h"

AELEOSDebugLobby::AELEOSDebugLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ELEOSLobby = NULL;
    this->bSetup = false;
    this->bShow = false;
}


