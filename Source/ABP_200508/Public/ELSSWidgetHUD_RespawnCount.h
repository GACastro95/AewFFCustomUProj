#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_RespawnCount.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_RespawnCount : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
public:
    UELSSWidgetHUD_RespawnCount();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRespawnCountText(int32 InSecond);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInOutAnimation(bool InPlayIn);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRespawnCountTime(float InSecond);
    
};

