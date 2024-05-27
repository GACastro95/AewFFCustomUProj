#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RibbonBase.generated.h"

class UPhysicsAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API ARibbonBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefaultPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* SimulatedPhysics;
    
    ARibbonBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartPhysicsSimulation();
    
};

