#pragma once
#include "CoreMinimal.h"
#include "TipsLoadingDisplayTextInfo.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingDisplayTextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DetailText;
    
    ELITE_GAME_API FTipsLoadingDisplayTextInfo();
};

