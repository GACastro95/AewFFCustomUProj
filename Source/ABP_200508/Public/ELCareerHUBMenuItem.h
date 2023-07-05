#pragma once
#include "CoreMinimal.h"
#include "CareerItemData.h"
#include "ECareerHUBMenuItemMode.h"
#include "ECareerHUBMenuItemOperation.h"
#include "ECareerHubMenuDefaultTabBottomHelp.h"
#include "ECareerItemEffect.h"
#include "ECareerItemPurchaseState.h"
#include "ELCareerWidgetBase.h"
#include "ELCareerHUBMenuItem.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELCareerHUBMenuItem : public UELCareerWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHorizontalItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumVerticalItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerHUBMenuItemMode CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerHUBMenuItemOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TShirtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOpenDirLeft;
    
public:
    UELCareerHUBMenuItem();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCanMoveCursor(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseItem(const FCareerItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OpenMenuLR(bool _bOpenDirLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedMoveTab(bool _isLeft);
    
    UFUNCTION(BlueprintCallable)
    void OnHoverdCursor(int32 InCursorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSaveAndExit(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelHoldDecision();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemOutAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuTop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerItemPurchaseState GetPurchaseItemState(const FCareerItemData& ItemData) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPurchasableTShirt(int32& UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemPrice(const FCareerItemData& ItemData) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerItemEffect CheckMomentumEffect(const FCareerItemData& ItemData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPurchaseItem(const FCareerItemData& ItemData) const;
    
};

