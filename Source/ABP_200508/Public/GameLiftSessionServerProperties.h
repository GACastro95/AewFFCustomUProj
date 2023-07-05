#pragma once
#include "CoreMinimal.h"
#include "GameLiftSessionServerProperties.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftSessionServerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ABP_200508_API FGameLiftSessionServerProperties();
};

