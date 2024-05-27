#pragma once
#include "CoreMinimal.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerHUBMenuMain.generated.h"

class AELCareerStateManager;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerHUBMenuMain : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerHUBMenuMain();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupChildWidgetBroadcast(AELCareerStateManager* pManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishRodeToElite();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInAnimation();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTabIndex(bool bLeft);
    
};

