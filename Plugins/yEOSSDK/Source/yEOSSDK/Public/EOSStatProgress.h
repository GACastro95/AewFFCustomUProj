#pragma once
#include "CoreMinimal.h"
#include "EOSStatProgress.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSStatProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThresholdValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FEOSStatProgress();
};

