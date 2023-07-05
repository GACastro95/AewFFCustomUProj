#pragma once
#include "CoreMinimal.h"
#include "ELSSPanelBase.h"
#include "SSPanelEventDispatcherDelegate.h"
#include "ELSSPausePanelBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSPausePanelBase : public UELSSPanelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPanelEventDispatcher OnClosePauseMenuEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPanelEventDispatcher OnCloseOptionMenuEventDispatcher;
    
public:
    UELSSPausePanelBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKeyConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPauseWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnClosePauseMenuNative();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseOptionMenuNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPauseWindowShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePauseWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbortPauseWindow();
    
};

