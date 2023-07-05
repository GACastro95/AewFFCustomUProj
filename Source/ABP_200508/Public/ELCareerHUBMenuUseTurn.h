#pragma once
#include "CoreMinimal.h"
#include "ECareerHUBMenuGotoLogo.h"
#include "ECareerHubMenuDefaultTabBottomHelp.h"
#include "ECareerPostCommandEventMark.h"
#include "ECareerPostCommandEventType.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerHUBMenuUseTurn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerHUBMenuUseTurn : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerHUBMenuUseTurn();
    UFUNCTION(BlueprintCallable)
    void SetMenuTopState(bool IsTop);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveCareerMenuItemCursor(int32 _move);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSaveAndExit(bool bFlag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEvent(ECareerPostCommandEventType _PostCommandType, int32& _StoryCardNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GotoDynamiteOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostCommandEventNumber(ECareerPostCommandEventType _PostCommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerHUBMenuGotoLogo GetGotoLogo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerPostCommandEventMark GetEventMark(ECareerPostCommandEventType _PostCommandType, int32& _StoryCardNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp);
    
};

