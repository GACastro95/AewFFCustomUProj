#pragma once
#include "CoreMinimal.h"
#include "ECareerCutsceneExtraInfo.h"
#include "ECareerCutsceneMessageCastType.h"
#include "ECareerEventActionMember.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerEventMessageWindowWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerEventMessageWindowWidgetBase : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
    UELCareerEventMessageWindowWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTextCutscene(FName MessageKey, ECareerCutsceneMessageCastType eMessageCast, ECareerCutsceneExtraInfo eExtraInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupText();
    
    UFUNCTION(BlueprintCallable)
    void SetNowSpeaker(ECareerEventActionMember eMember);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMenuCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCutOffMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCanDecision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMenuCutscene();
    
};

