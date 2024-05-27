#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSMatchIconType.h"
#include "ELSSWidgetHUD_OtherWrestlerStatus.generated.h"

class UELSSWidgetHUD_HeatMeter;
class UELSSWidgetHUD_WrestlerStatus;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_OtherWrestlerStatus : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_WrestlerStatus*> StatusArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_HeatMeter*> HeatArray;
    
public:
    UELSSWidgetHUD_OtherWrestlerStatus();

protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchHpType(bool InIsDownHpShow, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleStats(int32 InIndex, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleAllStats(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUserVCandSessionIndex(const FString& InProductUserID, int32 InSessionIndex, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUserVC(const FString& InProductUserID, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUserGamerTag(const FString& InGamerTag, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSessionIndex(int32 InSessionIndex, int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerHp(int32 InWrestlerHp, int32 inMaxHP, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyShieldDurableValue(int32 InShieldDurableValue, int32 InMaxShieldDurableValue, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMatchIcon(bool inIsVisible, ESSMatchIconType InIconType, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHeatMeter(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDownHp(int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCarrotMedal(bool inIsVisible, int32 InIndex);
    
};

