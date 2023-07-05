#pragma once
#include "CoreMinimal.h"
#include "GameLiftPriorityConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftPriorityConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> priorityOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> locationOrder;
    
    ABP_200508_API FGameLiftPriorityConfiguration();
};

