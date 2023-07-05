#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_KOAnnouncement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_KOAnnouncement : public UELSSWidgetBase {
    GENERATED_BODY()
public:
    UELSSWidgetHUD_KOAnnouncement();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKOAnnounceAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsVisibleKOAnnounce();
    
};

