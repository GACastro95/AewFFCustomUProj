#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "ELShopAEWGoldWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELShopAEWGoldWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UELShopAEWGoldWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedBackTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveUpDownCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCategory(int32 _addIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelItem();
    
};

