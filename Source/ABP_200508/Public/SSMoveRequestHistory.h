#pragma once
#include "CoreMinimal.h"
#include "SSMoveRequestData.h"
#include "SSMoveRequestHistory.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FSSMoveRequestHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMoveRequestData> RequestDatas;
    
    FSSMoveRequestHistory();
};

