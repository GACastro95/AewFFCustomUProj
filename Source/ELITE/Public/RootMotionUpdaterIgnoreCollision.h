#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RootMotionUpdaterIgnoreCollision.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class ELITE_API ARootMotionUpdaterIgnoreCollision : public AActor {
    GENERATED_BODY()
public:
    ARootMotionUpdaterIgnoreCollision();
protected:
    UFUNCTION(BlueprintCallable)
    void Setup(ACharacter* Chara, bool ignoreEndResetMovementMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableSweep(bool Enable);
    
};

