#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingType.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_AbilityContainer.generated.h"

class UELSSWidgetHUD_AbilitySlot;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_AbilityContainer : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_AbilitySlot*> SlotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* FontAbilityWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* FontHoldWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AbilityWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> SlotVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotVisibleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWatchGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSwichGuideButton;
    
public:
    UELSSWidgetHUD_AbilityContainer();
    UFUNCTION(BlueprintCallable)
    void SetVisibleGuide(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAbility(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyConfig(EKeyMappingType InKeyMapType);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldButtonVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllAbilities();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyWatchGameMode();
    
};

