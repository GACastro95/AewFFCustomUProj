#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELGaugeRoster.generated.h"

class UELTagMatchIconBase;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELGaugeRoster : public UUserWidget {
    GENERATED_BODY()
public:
    UELGaugeRoster();

    UFUNCTION(BlueprintCallable)
    void SetTagActive_N(bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNativeParam(UELTagMatchIconBase* TagMatchIcon);
    
};

