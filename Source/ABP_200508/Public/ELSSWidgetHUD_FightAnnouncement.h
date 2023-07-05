#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_FightAnnouncement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_FightAnnouncement : public UELSSWidgetBase {
    GENERATED_BODY()
public:
    UELSSWidgetHUD_FightAnnouncement();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFightAnnounceAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsVisibleFightAnnounce();
    
};

