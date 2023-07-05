#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.h"
#include "SaveDataAccessData.h"
#include "SaveDataAccessParam.generated.h"

USTRUCT(BlueprintType)
struct ELITE_API FSaveDataAccessParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataType SaveDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataAccessData Data;
    
    FSaveDataAccessParam();
};

