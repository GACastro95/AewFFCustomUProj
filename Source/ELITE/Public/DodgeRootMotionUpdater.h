#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DodgeRootMotionUpdater.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class ELITE_API ADodgeRootMotionUpdater : public AActor {
    GENERATED_BODY()
public:
    ADodgeRootMotionUpdater(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Setup(ACharacter* myChara, ACharacter* targetChara);
    
};

