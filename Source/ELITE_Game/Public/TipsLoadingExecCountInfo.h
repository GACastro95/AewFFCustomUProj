#pragma once
#include "CoreMinimal.h"
#include "ETipsLoadingCategory.h"
#include "TipsLoadingExecCountBase.h"
#include "TipsLoadingExecCountInfo.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingExecCountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETipsLoadingCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTipsLoadingExecCountBase> DisplayedCountList;
    
    ELITE_GAME_API FTipsLoadingExecCountInfo();
};

