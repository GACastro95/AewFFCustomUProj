#pragma once
#include "CoreMinimal.h"
#include "GameLiftGameProperty.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftGameProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ABP_200508_API FGameLiftGameProperty();
};

