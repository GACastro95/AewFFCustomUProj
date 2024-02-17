#pragma once
#include "CoreMinimal.h"
#include "TipsLoadingBackGroundInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTipsLoadingBackGroundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackGroundTexture;
    
    ELITE_GAME_API FTipsLoadingBackGroundInfo();
};

