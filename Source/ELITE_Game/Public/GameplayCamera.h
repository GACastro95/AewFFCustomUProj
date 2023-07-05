#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayCamera.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API AGameplayCamera : public AActor {
    GENERATED_BODY()
public:
    AGameplayCamera();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSkipInterpolation();
    
    UFUNCTION(BlueprintCallable)
    float GetMinProjection(FVector Normal, const TArray<FVector>& Points, float Size);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcCameraLocationByTargetPoints(const TArray<FVector>& Points, float Size, const FRotator CameraRotation, const float FovXDegrees, const float AspectRatio, const float FovLeftMargin, const float FovRightMargin, const float FovBottomMargin, const float FovTopMargin);
    
};

