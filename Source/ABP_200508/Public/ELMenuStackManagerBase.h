#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELMenuStackManagerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELMenuStackManagerBase : public AActor {
    GENERATED_BODY()
public:
    AELMenuStackManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFade(bool FadeIn, int32 TransitionType, float& Delay, float& DelayIn, float& DelayOut);
    
};

