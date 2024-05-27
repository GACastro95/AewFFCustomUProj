#include "ELSSDebugHUD.h"

AELSSDebugHUD::AELSSDebugHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->IsShowLog = false;
    this->UpdateLogState = false;
    this->ResetEveryFrame = true;
    this->DebugStringParamTable = NULL;
}


void AELSSDebugHUD::SetDebugText(bool InIsShow, const FText& InDebugText) {
}



