#pragma once
#include "CoreMinimal.h"
#include "ESSGameFlowState.h"
#include "SSGameFlowStateSyncParam.generated.h"

USTRUCT(BlueprintType)
struct FSSGameFlowStateSyncParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGameFlowState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncId;
    
    ABP_200508_API FSSGameFlowStateSyncParam();
};

