#pragma once
#include "CoreMinimal.h"
#include "ETipsLoadingCategory.h"
#include "TipsLoadingReplaceParam.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingReplaceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DLCLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETipsLoadingCategory DLC_ReplaceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UserTipsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETipsLoadingCategory UserTips_ReplaceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CommunityWrestlerLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETipsLoadingCategory CommunityWrestler_ReplaceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TitleDLCLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETipsLoadingCategory TitleDLC_ReplaceCategory;
    
    ELITE_GAME_API FTipsLoadingReplaceParam();
};

