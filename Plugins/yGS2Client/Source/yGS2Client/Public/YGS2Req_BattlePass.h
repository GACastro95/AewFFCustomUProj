#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Response_BattlePass.h"
#include "YGS2Req_BattlePass.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_BattlePass : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_BattlePass();
    UFUNCTION(BlueprintCallable)
    void SetBattlePassData(int32 _sSeasonNo, int32 _sBattlePassPointNum, int32 _sBattlePassLevel, bool _bPremiumPassPurchase, int32 _sFreeRewardLevelLevel, int32 _sPremiumRewardLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2Response_BattlePass GetBattlePassDataResult() const;
    
};

