#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSInteractExecute.h"
#include "ESSInteractOperate.h"
#include "ELSSWidgetHUD_Interact.generated.h"

class AActor;
class APlayerController;
class UELSSWidgetHUD_ItemInteract;
class UELSSWidgetHUD_Vehicle;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_Interact : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* GeneralInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TeamTreasureBoxInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LayoutWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_ItemInteract* ItemInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_Vehicle* VehicleGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FinisherColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSInteractExecute InteractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSInteractExecute PreInteractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpacityAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreWorldPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VEHICLEGAUGEOFFSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeoutLengthTime;
    
public:
    UELSSWidgetHUD_Interact();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOpacityAnimation(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Update();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleToItemInteract(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InPickupID, int32 InPickupDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleToInteract(ESSInteractExecute InType);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAllInteract(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* inTargetActor, const FVector& InOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryItem(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InInventoryItemID, int32 InInventoryItemDurability);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishOut();
    
    UFUNCTION(BlueprintCallable)
    void GetInteractParam(ESSInteractExecute InType, bool& Hold, FSlateColor& Color, FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyWatchGameModeGeneralFont();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyWatchGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyRatio(float InRatio);
    
};

