#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSManagerActorInterface.h"
#include "ELSSManagerActor.generated.h"

UCLASS(Blueprintable)
class AELSSManagerActor : public AActor, public IELSSManagerActorInterface {
    GENERATED_BODY()
public:
    AELSSManagerActor();
    
    // Fix for true pure virtual functions not being implemented
};

