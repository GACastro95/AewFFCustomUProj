#pragma once
#include "CoreMinimal.h"
#include "ECareerHubMenuDefaultTabBottomHelp.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerHUBMenuOption.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerHUBMenuOption : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerHUBMenuOption();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveAndExitOutAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveCareerSubtitlesCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveCareerDifficultyCursor(int32 _move);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSaveAndExit(bool bFlag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackToOption();
    
};

