#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELCareerCutSceneUtilityBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerCutSceneUtilityBase : public AActor {
    GENERATED_BODY()
public:
    AELCareerCutSceneUtilityBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSkip(float fFadeTime);
    
};

