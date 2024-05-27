#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSPoolActorInterface.h"
#include "ELSSPoolBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSPoolBlueprintBase : public AActor, public IELSSPoolActorInterface {
    GENERATED_BODY()
public:
    AELSSPoolBlueprintBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

