#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELReplicationComponent.generated.h"

class UELReplicationManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UELReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELReplicationManager* ReplicationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickRPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickReplication;
    
public:
    UELReplicationComponent();
    UFUNCTION(BlueprintCallable)
    void EnableTickFunctions(bool bRPC, bool bReplication);
    
};

