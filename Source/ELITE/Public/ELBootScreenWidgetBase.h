#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "ELBootScreenWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELBootScreenWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
    UELBootScreenWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedSkip();
    
};

