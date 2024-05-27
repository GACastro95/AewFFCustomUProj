#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSSpreadTrap.generated.h"

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSSpreadTrap : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WholeRadius;
    
public:
    AELSSSpreadTrap(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

