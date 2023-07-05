#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "ELShopCrateWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELShopCrateWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UELShopCrateWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopLevelSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayLevelSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveUpDownCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCategory(int32 _addIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayLevelSequence() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayLevelSequence(bool State);
    
};

