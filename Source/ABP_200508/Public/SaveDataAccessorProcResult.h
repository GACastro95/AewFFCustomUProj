#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.h"
#include "ESaveDataAccessorEvent.h"
#include "SaveDataAccessorProcResult.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FSaveDataAccessorProcResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataAccessorEvent SaveDataAccessorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataProcResult Result;
    
    FSaveDataAccessorProcResult();
};

