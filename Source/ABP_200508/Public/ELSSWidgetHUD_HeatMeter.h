#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_HeatMeter.generated.h"

class UMaterialInstanceDynamic;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_HeatMeter : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HeatMeterGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HeatMeterGaugeDiffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HeatMeaterLvUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HeatMeaterAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealHeatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatExpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealHeatExpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Elapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteDuration;
    
public:
    UELSSWidgetHUD_HeatMeter();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkipLvUPAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnHeatLevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHeatMeterGauge(float InRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyHeatMeter(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyHeatLevelText(int32 inHeatLevel);
    
};

