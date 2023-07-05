#pragma once
#include "CoreMinimal.h"
#include "GameLiftFilterConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftFilterConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> allowedLocations;
    
    ABP_200508_API FGameLiftFilterConfiguration();
};

