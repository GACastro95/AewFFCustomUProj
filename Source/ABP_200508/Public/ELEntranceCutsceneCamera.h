#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "ELEntranceCutsceneCamera.generated.h"

class AELCharacter_Native;

UCLASS(Blueprintable)
class ABP_200508_API AELEntranceCutsceneCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
    AELEntranceCutsceneCamera();
    UFUNCTION(BlueprintCallable)
    void StopCameraOffsetHeight(float InterpolationTime);
    
    UFUNCTION(BlueprintCallable)
    void StartCameraOffsetHeight(float InterpolationTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetCastAll(TArray<AELCharacter_Native*>& Casts);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetCameraOffsetHeightRate();
    
};

