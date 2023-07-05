#pragma once
#include "CoreMinimal.h"
#include "TipsLoadingExecCountInfo_Ref.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingExecCountInfo_Ref {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> DisplayedCountMap;
    
    ELITE_GAME_API FTipsLoadingExecCountInfo_Ref();
};

