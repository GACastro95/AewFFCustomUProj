#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_WrestlerStatus.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_WrestlerStatus : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShieldGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShieldGaugeDiffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HpGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HpGaugeDiffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* KOGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MedalGetAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MedalReleaseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HpGaugeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DownHpGaugeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ShieldWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShieldDurableMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HpMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownHpMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealShieldDurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealDownHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrestlerHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrestlerDownHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDurableValueDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownHpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDurableElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownHpElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteShieldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteHpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteDownHpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowDownHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowShieldGauge;
    
public:
    UELSSWidgetHUD_WrestlerStatus();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWrestlerHp(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateShield(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDownHp(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchHpType(bool InIsDownHpShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUserGamerTag(const FString& InGamerTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGamerTag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseGetMedalAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerHpGauge(float InWrestlerHpRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerHp(int32 InWrestlerHp, int32 inMaxHP, bool InGaugeTransition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerDownHpGauge(float InWrestlerDownHpRatio);
    
    UFUNCTION(BlueprintCallable)
    void ApplyShieldGauge(float InShieldDurableValueRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyShieldDurableValue(int32 InShieldDurableValue, int32 InMaxShieldDurableValue, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDownHp(int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCarrotMedal(bool inIsVisible);
    
};

