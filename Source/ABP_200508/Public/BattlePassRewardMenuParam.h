#pragma once
#include "CoreMinimal.h"
#include "PossessedItemParam.h"
#include "UnlockableItemParam.h"
#include "BattlePassRewardItemParam.h"
#include "BattlePassRewardMenuParam.generated.h"

USTRUCT(BlueprintType)
struct FBattlePassRewardMenuParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattlePassRewardItemParam ItemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EarnedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockableItemParam TargetUnlockableItemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPossessedItemParam TargetPossessedItemParam;
    
    ABP_200508_API FBattlePassRewardMenuParam();
};

