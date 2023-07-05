#pragma once
#include "CoreMinimal.h"
#include "DescribeGameSessions_RequestParam.generated.h"

USTRUCT(BlueprintType)
struct FDescribeGameSessions_RequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameSessionId;
    
    ABP_200508_API FDescribeGameSessions_RequestParam();
};

