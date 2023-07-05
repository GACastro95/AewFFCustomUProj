#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattlePassLevelProgressParam.generated.h"

USTRUCT(BlueprintType)
struct FBattlePassLevelProgressParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CumulativeRequiredPoints;
    
    ABP_200508_API FBattlePassLevelProgressParam();
};

