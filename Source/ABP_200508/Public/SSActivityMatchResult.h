#pragma once
#include "CoreMinimal.h"
#include "SSActivityMatchResultPlayer.h"
#include "SSActivityMatchResult.generated.h"

USTRUCT(BlueprintType)
struct FSSActivityMatchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSActivityMatchResultPlayer> Players;
    
    ABP_200508_API FSSActivityMatchResult();
};

