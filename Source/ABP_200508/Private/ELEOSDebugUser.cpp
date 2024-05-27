#include "ELEOSDebugUser.h"

AELEOSDebugUser::AELEOSDebugUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EOSUser = NULL;
    this->bSetup = false;
    this->bShow = false;
    this->ForceSanitizeText = false;
}


