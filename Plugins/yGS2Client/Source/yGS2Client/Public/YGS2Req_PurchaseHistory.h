#pragma once
#include "CoreMinimal.h"
#include "YGS2Record_PurchaseHistory.h"
#include "YGS2RequestBase.h"
#include "YGS2Response_PurchaseHistory.h"
#include "YGS2Req_PurchaseHistory.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_PurchaseHistory : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_PurchaseHistory();
    UFUNCTION(BlueprintCallable)
    void SetPurchaseData(const FString& _strPlatform, const FString& _strTransactionID, const FString& _strShopItemID, int32 _sGoldAdd, int32 _sGoldBefore, int32 _sGoldAfter, int32 _sCurrencyValue, const FString& _strCurrencyType);
    
    UFUNCTION(BlueprintCallable)
    void SetListMode(int32 _sOffset, int32 _sLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFindMode(const FString& _strPlatform, const FString& _strTransactionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYGS2Record_PurchaseHistory> Records() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2Response_PurchaseHistory GetPurchaseHistoryResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAEWGoldAdd() const;
    
};

