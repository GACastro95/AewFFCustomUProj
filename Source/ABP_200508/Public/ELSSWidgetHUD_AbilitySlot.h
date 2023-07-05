#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "SSAbilityParam.h"
#include "ELSSWidgetHUD_AbilitySlot.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_AbilitySlot : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AbilityGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AbilityCoolTimeMaterial_001;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AbilityCoolTimeMaterial_010;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AbilityCoolTimeMaterial_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ButtonHoldAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ButtonDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityStandbyEffectAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityStandbyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityActiveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityCoolTimeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AbilityIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* EffectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LayoutWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ButtonFontWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CoolTimeFont_001Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CoolTimeFont_010Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CoolTimeFont_100Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CoolTimeFontWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoolTimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsButtonVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsButtonDefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAbilityUsingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAbilityCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWatchGameMode;
    
public:
    UELSSWidgetHUD_AbilitySlot();
    UFUNCTION(BlueprintCallable)
    void SetStateSlotButtonVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetGaugeParam(float InRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetCoolTimeText(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonVisible(bool inIsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAbilityVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAbility(const FSSAbilityParam& inAbilityParam);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishedPlayStandByEffect();
    
    UFUNCTION(BlueprintCallable)
    void InitDefaultState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(int32 inSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWatchGameMode();
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffectiveGauge(float inRemainTime, float inDurationTime);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCoolTimeGauge(float inRemainTime, float inDurationTime);
    
};

