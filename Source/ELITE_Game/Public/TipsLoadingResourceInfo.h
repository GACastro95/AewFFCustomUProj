#pragma once
#include "CoreMinimal.h"
#include "TipsLoadingDisplayTextInfo.h"
#include "TipsLoadingResourceInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTipsLoadingResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackGoundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTipsLoadingDisplayTextInfo> DisplayTextList;
    
    ELITE_GAME_API FTipsLoadingResourceInfo();
};

