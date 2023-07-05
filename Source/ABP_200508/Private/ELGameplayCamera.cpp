#include "ELGameplayCamera.h"

void AELGameplayCamera::SetNativeParam(UCameraComponent* Camera) {
}

AELGameplayCamera::AELGameplayCamera() {
    this->GameplayCameraParamDataTable = NULL;
    this->DebugDispCollision = false;
    this->RequestSkipInterpolationFlag = false;
    this->SkipInterpolation = false;
    this->OnlyViewSec = 0.00f;
    this->ZoomDelaySubmissionEnd = false;
    this->bIncludeManagerCharacters_N = false;
}

