#pragma once
#include "CoreMinimal.h"
#include "ESSFgfRoundFlowState.h"
#include "SSFgfFlowStateSyncParam.generated.h"

USTRUCT(BlueprintType)
struct FSSFgfFlowStateSyncParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstHalfFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSFgfRoundFlowState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncId;
    
    ABP_200508_API FSSFgfFlowStateSyncParam();
};

