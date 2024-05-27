#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ESSCharacterHpType.h"
#include "ELSSWidgetHUD_HpGauge.generated.h"

class AActor;
class APlayerController;
class UCanvasPanel;
class UMaterialInstanceDynamic;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_HpGauge : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HpGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HpGaugeDiffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* KOGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* GaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* KOGaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HPGaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HpMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownHpMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealDownHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrestlerHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrestlerDownHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownHpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownHpElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteHpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteDownHpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarShowElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowDownHp;
    
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
    UELSSWidgetHUD_HpGauge();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWrestlerHp(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateShow(float inDistance, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    float UpdatePos();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOffset();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDownHp(float InDeltaTime);
    
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
    
    UFUNCTION(BlueprintCallable)
    void SetDurationType(ESSCharacterHpType InHpType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(APlayerController* NewPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetScale(float inDistance);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerHpGauge(float InWrestlerHpRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerHp(int32 InNowWrestlerHp, int32 InWrestlerHp, int32 inMaxHP);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerDownHpGauge(float InWrestlerDownHpRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyDownHp(int32 InNowWrestlerDownHp, int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp);
    
};

