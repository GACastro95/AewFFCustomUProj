#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "ELShopCrateDetailWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELShopCrateDetailWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UELShopCrateDetailWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetMoveCursorValue(int32 _value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelItem();
    
};

