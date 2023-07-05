#pragma once
#include "CoreMinimal.h"
#include "YGS2SSPlayerData.h"
#include "ELSSGameRankData.h"
#include "ELSSUserDataParam.generated.h"

USTRUCT(BlueprintType)
struct FELSSUserDataParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGS2SSPlayerData ssUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSGameRankData ssGameRankData;
    
    ABP_200508_API FELSSUserDataParam();
};

