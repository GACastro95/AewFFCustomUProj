#include "ELSSOptimizeManager.h"

UELSSOptimizeManager::UELSSOptimizeManager() {
    this->CharaOptLevelParams.AddDefaulted(6);
    this->AddLevel = 0;
    this->FrameCount = 0;
    this->LastTargetId = 0;
    this->LargeTickDetectedRate = 0.00f;
    this->DefferedSetupWaitingCount = 0.00f;
    this->CurrentDynamicShadow = false;
}

