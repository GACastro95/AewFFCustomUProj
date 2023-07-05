#pragma once
#include "CoreMinimal.h"
#include "EOSMetricsAPIVersionSettings.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSMetricsAPIVersionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginPlayerSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndPlayerSession;
    
    FEOSMetricsAPIVersionSettings();
};

