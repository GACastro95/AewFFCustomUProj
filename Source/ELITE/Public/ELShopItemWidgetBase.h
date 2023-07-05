#pragma once
#include "CoreMinimal.h"
#include "EUnlockableItemCurrencyType.h"
#include "EUnlockableItemRarityType.h"
#include "Blueprint/UserWidget.h"
#include "ShopGeneralItemManageData.h"
#include "ELShopItemWidgetBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELShopItemWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UELShopItemWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void GetUniqueID(const FShopGeneralItemManageData& _targetData, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void GetThumnail(const FShopGeneralItemManageData& _targetData, TSoftObjectPtr<UTexture2D>& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void GetRarity(const FShopGeneralItemManageData& _targetData, EUnlockableItemRarityType& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void GetPrice(const FShopGeneralItemManageData& _targetData, int32& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void GetName(const FShopGeneralItemManageData& _targetData, FText& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrencyType(const FShopGeneralItemManageData& _targetData, EUnlockableItemCurrencyType& OutResult);
    
};

