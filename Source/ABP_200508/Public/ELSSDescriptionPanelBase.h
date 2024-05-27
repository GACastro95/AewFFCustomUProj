#pragma once
#include "CoreMinimal.h"
#include "ELSSPanelBase.h"
#include "ELSSDescriptionPanelBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSDescriptionPanelBase : public UELSSPanelBase {
    GENERATED_BODY()
public:
    UELSSDescriptionPanelBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDescriptionWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoneWorkDescriptionWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDescriptionWindowShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDescriptionWindow();
    
};

