#pragma once
#include "CoreMinimal.h"
#include "YGS2Record_ConsumeGold.h"
#include "YGS2RequestBase.h"
#include "YGS2Response_ConsumeGold.h"
#include "YGS2Req_ConsumeGold.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_ConsumeGold : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_ConsumeGold();

    UFUNCTION(BlueprintCallable)
    void SetListMode(int32 _sOffset, int32 _sLimit, int32 _sContentKind, const FString& _strContentID);
    
    UFUNCTION(BlueprintCallable)
    void SetFindMode(int32 _sContentKind, const FString& _strContentID);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeGoldData(int32 _sContentKind, const FString& _strContentID, int32 _sGoldSub, int32 _sGoldBefore, int32 _sGoldAfter, int32 _sContentNum_Add, int32 _sContentNum_Before, int32 _sContentNum_After);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYGS2Record_ConsumeGold> Records() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2Response_ConsumeGold GetConsumeGoldResult() const;
    
};

