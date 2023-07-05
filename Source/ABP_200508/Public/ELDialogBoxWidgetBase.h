#pragma once
#include "CoreMinimal.h"
#include "DialogBoxExternalResultDelegateDelegate.h"
#include "ELMainMenuWidgetBase.h"
#include "ELDialogBoxWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELDialogBoxWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogBoxExternalResultDelegate ExternalResultDelegate;
    
    UELDialogBoxWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestClose();
    
};

