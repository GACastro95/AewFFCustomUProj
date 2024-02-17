#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ESSPickupType.h"
#include "ESSRarity.h"
#include "ELSSWidgetHUD_InventorySlot.generated.h"

class UDataTable;
class UImage;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_InventorySlot : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* StateActiveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* StateInActiveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EmptyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DurabilityWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* GuideButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemThumbnailTexImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemThumbnailShadowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RarityTexImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RarityTexAddImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UnlockableItemRarityDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurabilityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPickupType PickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEmptyFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWatchGameMode;
    
public:
    UELSSWidgetHUD_InventorySlot();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipPlayInActiveAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipPlayEmptyAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipPlayActiveAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetThumbnail(int32 InPickupID, ESSPickupType InPickuptype, bool InIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectState(bool InIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRarity(ESSRarity inRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType, bool InIsLeft);
    
    UFUNCTION(BlueprintCallable)
    void SetGuideVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
    UFUNCTION(BlueprintCallable)
    void SetDurabilityVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDurabilityValue(int32 inDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDurability(int32 inDurability);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultIcon(UTexture2D* InIcon);
    
    UFUNCTION(BlueprintCallable)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTexture(int32 InID, ESSPickupType InPickuptype);
    
public:
    UFUNCTION(BlueprintCallable)
    ESSPickupType GetPickupType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemId();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSelected();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDurability();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckDonePlayAnimations();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyWatchGameMode();
    
};

