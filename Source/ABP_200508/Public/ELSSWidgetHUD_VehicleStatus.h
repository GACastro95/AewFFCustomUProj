#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSVehicleType.h"
#include "ELSSWidgetHUD_VehicleStatus.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_VehicleStatus : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GaugeDiffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> VehicleTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VehicleIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LayoutWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurableMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdealDurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Elapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowGauge;
    
public:
    UELSSWidgetHUD_VehicleStatus();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowOff();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleGauge(float InDurableRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleDurability(int32 InVehicleDurability, int32 InMaxDurability, bool InGaugeTransition, ESSVehicleType InVehicleType);
    
};

