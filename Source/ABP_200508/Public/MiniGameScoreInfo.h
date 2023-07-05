#pragma once
#include "CoreMinimal.h"
#include "MiniGameScoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FMiniGameScoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Score;
    
    ABP_200508_API FMiniGameScoreInfo();
};

