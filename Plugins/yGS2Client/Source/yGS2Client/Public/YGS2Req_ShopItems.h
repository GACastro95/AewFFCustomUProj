#pragma once
#include "CoreMinimal.h"
#include "YGS2Record_ShopItems.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_ShopItems.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_ShopItems : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_ShopItems();
    UFUNCTION(BlueprintCallable)
    void SetListMode(int32 _sOffset, int32 _sLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFindMode(int32 _sKind, const FString& _strItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYGS2Record_ShopItems> Records() const;
    
};

