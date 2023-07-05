#pragma once
#include "CoreMinimal.h"
#include "TipsLoadingExecCountInfo.h"
#include "TipsLoadingSaveData.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTipsLoadingExecCountInfo> ExecCountInfoList;
    
    ELITE_GAME_API FTipsLoadingSaveData();
};

