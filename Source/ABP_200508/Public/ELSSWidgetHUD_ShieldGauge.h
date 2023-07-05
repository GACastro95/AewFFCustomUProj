#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_ShieldGauge.generated.h"

class AActor;
class APlayerController;
class UCanvasPanel;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_ShieldGauge : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShieldGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShieldGaugeDiffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* GaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShieldDurableMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealShieldDurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDurableValueDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDurableElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteShieldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarShowElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGaugeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAXSCALE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MINSCALE;
    
public:
    UELSSWidgetHUD_ShieldGauge();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateShow(float inDistance, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateShield(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    float UpdatePos();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOffset();
    
public:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowOff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibleGauge(bool inIsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* inTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(APlayerController* NewPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetScale(float inDistance);
    
    UFUNCTION(BlueprintCallable)
    void ApplyShieldGauge(float InShieldDurableValueRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyShieldDurableValue(int32 InNowShieldDurableValue, int32 InShieldDurableValue, int32 InMaxShieldDurableValue);
    
};

