#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "SSWrestlerSetupParam.h"
#include "SSPreloadAssetPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSPreloadAssetPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSetupParam WrestlerSetupParam;
    
    ABP_200508_API FSSPreloadAssetPlayerInfo();
};

