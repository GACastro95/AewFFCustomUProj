#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "ELSSMainMenuWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSMainMenuWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UELSSMainMenuWidgetBase();
    UFUNCTION(BlueprintCallable)
    void UpdateTick(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPlaySSMode();
    
};

