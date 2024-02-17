#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_BeatTopTeamNotice.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_BeatTopTeamNotice : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayOutAnim;
    
public:
    UELSSWidgetHUD_BeatTopTeamNotice();
    UFUNCTION(BlueprintCallable)
    void PlayInNotice(bool InPlayIn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

