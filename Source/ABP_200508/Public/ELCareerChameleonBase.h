#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerScreenEffect.h"
#include "ELCareerChameleonBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerChameleonBase : public AActor {
    GENERATED_BODY()
public:
    AELCareerChameleonBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableEffect(ECareerScreenEffect eScreenEfffect);
    
};

