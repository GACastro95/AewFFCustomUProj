#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.h"
#include "AdjustDlcSaveData.h"
#include "AdjustDlcSaveDataParam.generated.h"

USTRUCT(BlueprintType)
struct ELITE_API FAdjustDlcSaveDataParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataType SaveDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdjustDlcSaveData Data;
    
    FAdjustDlcSaveDataParam();
};

