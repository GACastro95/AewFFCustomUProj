#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSStatsOwnRequest.generated.h"

class UEOSStats;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSStatsOwnRequest : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSStats* m_pcStats;
    
    UEOSStatsOwnRequest();
};

