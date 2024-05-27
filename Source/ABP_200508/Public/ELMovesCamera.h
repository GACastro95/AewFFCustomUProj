#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayCamera.h"
#include "GameplayCameraParam.h"
#include "ELMovesCamera.generated.h"

class AELCharacter_Native;

UCLASS(Blueprintable)
class ABP_200508_API AELMovesCamera : public AGameplayCamera {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCameraParam GameplayCameraParam;
    
public:
    AELMovesCamera(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLocation(const float DeltaSeconds, const bool HeightScale, const bool SkipInterpolation, const bool KeepLocation);
    
    UFUNCTION(BlueprintCallable)
    void GetLookAtLocation(FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetFOVAngle();
    
    UFUNCTION(BlueprintCallable)
    void GetDivingLookAtLocation(const bool HeightScale, FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCharacters(TArray<AELCharacter_Native*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetAspectRatio();
    
};

