#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "ELMatchResultParam.generated.h"

USTRUCT(BlueprintType)
struct FELMatchResultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N Loser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinTeamNo;
    
    ELITE_GAME_API FELMatchResultParam();
};

