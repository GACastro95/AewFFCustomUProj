#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "EWrestlerID_N.h"
#include "StatsUsedWrestler.generated.h"

USTRUCT(BlueprintType)
struct FStatsUsedWrestler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    ELITE_API FStatsUsedWrestler();
};

