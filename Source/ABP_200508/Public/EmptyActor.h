#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmptyActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ABP_200508_API AEmptyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    AEmptyActor();
};

