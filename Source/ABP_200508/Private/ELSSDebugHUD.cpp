#include "ELSSDebugHUD.h"


void AELSSDebugHUD::SetDebugText(bool InIsShow, const FText& InDebugText) {
}


AELSSDebugHUD::AELSSDebugHUD() {
    this->IsShowLog = false;
    this->UpdateLogState = false;
    this->ResetEveryFrame = true;
    this->DebugStringParamTable = NULL;
}

