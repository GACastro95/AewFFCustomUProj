#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSPickupType.h"
#include "ELSSWidgetHUD_Inventory.generated.h"

class UELSSWidgetHUD_InventorySlot;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_Inventory : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInWeaponNameAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_InventorySlot*> SlotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectSlotIndex;
    
public:
    UELSSWidgetHUD_Inventory();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeaponName(const FString& InWeaponName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleOperationButton(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotKeyConfig(EKeyMappingType InKeyMapType, bool InIsLeft);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryLimit(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryIconValue(int32 InIndex, int32 inDurability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayInWeaponName();
    
    UFUNCTION(BlueprintCallable)
    FString GetItemName(int32 InItemId, ESSPickupType InPickuptype);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeleteInventoryIcon(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWatchGameMode();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInventoryIcon(int32 InIndex, ESSPickupType InPickuptype, int32 InPickupID, int32 inDurability);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBareIconGuideState();
    
};

