#include "ELEOSDebugCommon.h"

AELEOSDebugCommon::AELEOSDebugCommon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSetup = false;
    this->bShow = false;
    this->DebugDisableTextFilter = false;
}


