#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSInteractOperate.h"
#include "ESSPickupType.h"
#include "ESSRarity.h"
#include "ELSSWidgetHUD_ItemInteractParts.generated.h"

class UDataTable;
class UImage;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_ItemInteractParts : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayActiveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInActiveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ItemDurabilityWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ArrowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CommandWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UnlockableItemRarityDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BareIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSInteractOperate PreInventoryInteractOperate;
    
public:
    UELSSWidgetHUD_ItemInteractParts();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRarityTexture(ESSRarity inRarity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetItemTexture(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability, int32 inSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemName(const FString& InItemNameText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemDurability(int32 InItemDurability);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInventoryItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractItem(ESSInteractOperate InInteractOperate, ESSPickupType InPickuptype, int32 InItemId, int32 InItemDurability);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetBareIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttentionIconVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActText(const FString& InItemNameText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTexture(int32 InID, ESSPickupType InPickuptype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSRarity GetRarity(int32 InID, ESSPickupType InPickuptype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemName(int32 InID, ESSPickupType InPickuptype);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyWatchGameMode();
    
};

