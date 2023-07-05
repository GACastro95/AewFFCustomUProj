#pragma once
#include "CoreMinimal.h"
#include "AutoMatchSettings.generated.h"

USTRUCT(BlueprintType)
struct FAutoMatchSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlineModeTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlinePlayerNoArray;
    
    ABP_200508_API FAutoMatchSettings();
};

