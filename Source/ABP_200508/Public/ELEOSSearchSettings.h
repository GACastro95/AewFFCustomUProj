#pragma once
#include "CoreMinimal.h"
#include "ELEOSSearchSettings.generated.h"

class UEOSAttribute;

USTRUCT(BlueprintType)
struct FELEOSSearchSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSAttribute*> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoJoinSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionSearchRetryCount;
    
    ABP_200508_API FELEOSSearchSettings();
};

