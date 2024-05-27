#include "GameplayCamera.h"

AGameplayCamera::AGameplayCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


float AGameplayCamera::GetMinProjection(FVector Normal, const TArray<FVector>& Points, float Size) {
    return 0.0f;
}

FVector AGameplayCamera::CalcCameraLocationByTargetPoints(const TArray<FVector>& Points, float Size, const FRotator CameraRotation, const float FovXDegrees, const float AspectRatio, const float FovLeftMargin, const float FovRightMargin, const float FovBottomMargin, const float FovTopMargin) {
    return FVector{};
}


