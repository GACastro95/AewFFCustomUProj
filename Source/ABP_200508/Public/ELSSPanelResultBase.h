#pragma once
#include "CoreMinimal.h"
#include "ELSSPanelBase.h"
#include "ELSSPanelResultBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSPanelResultBase : public UELSSPanelBase {
    GENERATED_BODY()
public:
    UELSSPanelResultBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowResultWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsResultWindowShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoneResultWindowWork();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseResultWindow();
    
};

