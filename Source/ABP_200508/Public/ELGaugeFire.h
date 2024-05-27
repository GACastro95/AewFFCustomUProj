#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELGaugeFire.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELGaugeFire : public UUserWidget {
    GENERATED_BODY()
public:
    UELGaugeFire();

protected:
    UFUNCTION(BlueprintCallable)
    void SetNativeParam(UWidgetAnimation* StartEnd);
    
};

