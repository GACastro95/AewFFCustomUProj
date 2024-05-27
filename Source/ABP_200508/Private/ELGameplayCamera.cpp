#include "ELGameplayCamera.h"

AELGameplayCamera::AELGameplayCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayCameraParamDataTable = NULL;
    this->DebugDispCollision = false;
    this->RequestSkipInterpolationFlag = false;
    this->SkipInterpolation = false;
    this->OnlyViewSec = 0.00f;
    this->ZoomDelaySubmissionEnd = false;
    this->bIncludeManagerCharacters_N = false;
}

void AELGameplayCamera::SetNativeParam(UCameraComponent* Camera) {
}


