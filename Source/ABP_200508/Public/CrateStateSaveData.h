#pragma once
#include "CoreMinimal.h"
#include "CrateStateSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCrateStateSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    ABP_200508_API FCrateStateSaveData();
};

