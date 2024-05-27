#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "ELTipsLoadingWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELTipsLoadingWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELTipsLoadingWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetCheckMode(bool IsValid);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveNextLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveCursorIndex(int32 _addIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceEndScreen();
    
};

