#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Response_RankMatchRecord.h"
#include "YGS2Req_RankMatchRecord.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_RankMatchRecord : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_RankMatchRecord();

    UFUNCTION(BlueprintCallable)
    void SetRankMatchRecord(int32 _sSeasonNo, int32 _sOneOnOneWinNum, int32 _sTwoOnTwoWinNum, int32 _sThreeWayWinNum, int32 _sFourWayWinNum, int32 _sCasinoBrWinNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2Response_RankMatchRecord GetRankMatchRecordResult() const;
    
};

