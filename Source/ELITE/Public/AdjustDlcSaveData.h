#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AdjustDlcSaveData.generated.h"

USTRUCT(BlueprintType)
struct ELITE_API FAdjustDlcSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath ObjectClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
    FAdjustDlcSaveData();
};

