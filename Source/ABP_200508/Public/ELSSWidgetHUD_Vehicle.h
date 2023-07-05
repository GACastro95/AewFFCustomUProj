#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ESSVehicleType.h"
#include "ELSSWidgetHUD_Vehicle.generated.h"

class AActor;
class APlayerController;
class UImage;
class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_Vehicle : public UELSSWidgetBase {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
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
    
public:
    UELSSWidgetHUD_Vehicle();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePos();
    
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* inTargetActor, const FVector& InOffset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleGauge(float InDurableRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleDurability(int32 InVehicleDurability, int32 InMaxDurability, bool InGaugeTransition, ESSVehicleType InVehicleType);
    
};

