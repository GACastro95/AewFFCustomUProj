#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.h"
#include "ESaveDataType.h"
#include "SaveDataAccessResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataAccessResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataProcResult ProcResult;
    
    ELITE_API FSaveDataAccessResultInfo();
};

