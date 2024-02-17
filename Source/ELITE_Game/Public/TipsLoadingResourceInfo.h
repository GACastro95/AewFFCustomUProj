#pragma once
#include "CoreMinimal.h"
#include "TipsLoadingBackGroundInfo.h"
#include "TipsLoadingDisplayTextInfo.h"
#include "TipsLoadingResourceInfo.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTipsLoadingBackGroundInfo> BackGroundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTipsLoadingDisplayTextInfo> DisplayTextList;
    
    ELITE_GAME_API FTipsLoadingResourceInfo();
};

