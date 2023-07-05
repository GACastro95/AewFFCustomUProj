#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DivingRootMotionUpdater.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class ELITE_API ADivingRootMotionUpdater : public AActor {
    GENERATED_BODY()
public:
    ADivingRootMotionUpdater();
protected:
    UFUNCTION(BlueprintCallable)
    void Setup(ACharacter* Chara, bool ignoreEndResetMovementMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableSweep(bool Enable);
    
};

