#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_SSSpectateWindow.generated.h"

class AELSSPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSSpectateWindow : public UELSSWidgetBase {
    GENERATED_BODY()
public:
    UELSSWidgetHUD_SSSpectateWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpectatedUserInfo(AELSSPlayerState* inPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoldButtonRatio(float InRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushQuitMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushPrevUser();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushNextUser();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelHold();
    
};

