#pragma once
#include "CoreMinimal.h"
#include "EELReplicationCondition.h"
#include "ELReplicationPropertyInfo.generated.h"

USTRUCT(BlueprintType)
struct FELReplicationPropertyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELReplicationCondition Conditions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> HashArray;
    
    ABP_200508_API FELReplicationPropertyInfo();
};

