#pragma once
#include "CoreMinimal.h"
#include "ECareerHubMenuDefaultTabBottomHelp.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerHUBMenuMyWrestler.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerHUBMenuMyWrestler : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerHUBMenuMyWrestler();

protected:
    UFUNCTION(BlueprintCallable)
    void SetMenuTopState(bool IsTop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveSkillTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveSkillList(int32 _addX, int32 _addY);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSaveAndExit(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelHoldDecision();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MyWrestlerOutAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuTop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp);
    
};

