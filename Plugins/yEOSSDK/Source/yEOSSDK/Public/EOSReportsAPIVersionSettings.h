#pragma once
#include "CoreMinimal.h"
#include "EOSReportsAPIVersionSettings.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSReportsAPIVersionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SendPlayerBehaviorReport;
    
    FEOSReportsAPIVersionSettings();
};

