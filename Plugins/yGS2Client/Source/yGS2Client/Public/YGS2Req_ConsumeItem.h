#pragma once
#include "CoreMinimal.h"
#include "YGS2Record_ConsumeItem.h"
#include "YGS2RequestBase.h"
#include "YGS2Response_ConsumeItem.h"
#include "YGS2Req_ConsumeItem.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_ConsumeItem : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_ConsumeItem();

    UFUNCTION(BlueprintCallable)
    void SetListMode(int32 _sOffset, int32 _sLimit, int32 _sContentKind, const FString& _strContentID);
    
    UFUNCTION(BlueprintCallable)
    void SetFindMode(int32 _sContentKind, const FString& _strContentID);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeItemData(int32 _sContentKind, const FString& _strContentID, int32 _sContentNum_Sub, int32 _sContentNum_Before, int32 _sContentNum_After);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYGS2Record_ConsumeItem> Records() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2Response_ConsumeItem GetConsumeItemResult() const;
    
};

