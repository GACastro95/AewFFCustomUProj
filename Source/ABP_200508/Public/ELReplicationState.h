#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELReplicationPropertyInfo.h"
#include "ELReplicationState.generated.h"

UCLASS(Blueprintable)
class UELReplicationState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELReplicationPropertyInfo> PropertyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplicationTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplicationTickIntervalCount;
    
public:
    UELReplicationState();

};

