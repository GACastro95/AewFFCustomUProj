#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSPanelBase.h"
#include "ESSAreaCountDownTextType.h"
#include "ESSAttentionReason.h"
#include "ESSCharacterHpType.h"
#include "ESSInteractExecute.h"
#include "ESSInteractOperate.h"
#include "ESSLogIconType.h"
#include "ESSOperationGuideExecute.h"
#include "ESSPickupType.h"
#include "ESSVehicleType.h"
#include "SSAbilityParam.h"
#include "SSLogTextParam.h"
#include "ELSSPanelInGameBase.generated.h"

class AActor;
class AELSSPlayerState;
class AELSSStorm;
class UELSSWidgetHUD_AbilityContainer;
class UELSSWidgetHUD_AreaCountDown;
class UELSSWidgetHUD_AttentionGauge;
class UELSSWidgetHUD_CharacterHpGaugeContainer;
class UELSSWidgetHUD_HeatMeter;
class UELSSWidgetHUD_Interact;
class UELSSWidgetHUD_InteractPointContainer;
class UELSSWidgetHUD_Inventory;
class UELSSWidgetHUD_MapUI;
class UELSSWidgetHUD_OnlineIDContainer;
class UELSSWidgetHUD_OperationGuide;
class UELSSWidgetHUD_SSLogSet;
class UELSSWidgetHUD_SSSkillGetNotice;
class UELSSWidgetHUD_SSSpectateWindow;
class UELSSWidgetHUD_SSSpectators;
class UELSSWidgetHUD_VehicleStatus;
class UELSSWidgetHUD_WrestlerStatus;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSPanelInGameBase : public UELSSPanelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_AbilityContainer* AbilityContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_CharacterHpGaugeContainer* CharacterHpgaugeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_OnlineIDContainer* OnlineIDContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_InteractPointContainer* InteractPointContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_AttentionGauge* AttentionGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_AreaCountDown* AreaCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_WrestlerStatus* WrestlerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_HeatMeter* HeatMeater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_MapUI* MiniMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_Inventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_OperationGuide* OperationGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_SSLogSet* LogSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_Interact* Interact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_SSSkillGetNotice* SSSkillNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_SSSpectateWindow* SpectateWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_SSSpectators* Spectators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_VehicleStatus* VehicleStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayInAnimationElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingPlayInAnimation;
    
public:
    UELSSPanelInGameBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayInAnimation(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateKeyConfig();
    
    UFUNCTION(BlueprintCallable)
    void SwitchWrestlerHpType(bool InIsDownHpGaugeShow);
    
    UFUNCTION(BlueprintCallable)
    void SwitchMapMode(bool InIsWholeMapMode);
    
    UFUNCTION(BlueprintCallable)
    void ShowOffVehicleStatus();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleToSpectateWindow(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleToOperationGuide(ESSOperationGuideExecute InType);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleToItemInteractUI(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InPickupID, int32 InPickupDurability);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleToInteractUI(ESSInteractExecute InType);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleAimReticle(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAbilitySlot(int32 inSlotIndex, bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetupAbilityUI(const TArray<FSSAbilityParam>& inAbilityList);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActorToInteractUI(AActor* inTargetActor, const FVector& InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetStormActor(AELSSStorm* InStormActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectateWindowHoldRatio(float InRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatedInfo(AELSSPlayerState* inPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetOperationGuideVisibleInPause(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetOperationGuideGuardState(bool InGuardState);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapTexture(int32 InMinimapID);
    
    UFUNCTION(BlueprintCallable)
    void SetMapOperationButtonVisibleInPause(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMapAnnounceStormAndGuideVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryVisible(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryOperationButtonVisibleInPause(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryLimit(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryItem(ESSInteractOperate InInteractOperate, ESSInteractExecute InType, int32 InInventoryItemID, int32 InInventoryItemDurability);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryIconValue(int32 InIndex, int32 InDurableValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamerTag(const FString& InGamerTagText);
    
    UFUNCTION(BlueprintCallable)
    void SetAndApplyMaxAttentionValue(int32 InMaxAttentionValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActorUICanShow(bool InCanShow);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityHoldButtonVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityGuideVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ResetSSSkillNotice();
    
    UFUNCTION(BlueprintCallable)
    void ResetAttentionGauge();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllLogs();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllAbilities();
    
    UFUNCTION(BlueprintCallable)
    void PlaySSSkillNotice(const FString& InSkillCategory, int32 HeatSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenItemProgressBar(float InItemUsageTime, const FString& InActText);
    
    UFUNCTION(BlueprintCallable)
    void OnPushQuitMatch();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSpectateUser(bool InIsNextUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsItemProgressBarShow();
    
    UFUNCTION(BlueprintCallable)
    void DeleteInventoryIcon(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseItemProgressBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseAllExcludedSpectateWindow();
    
    UFUNCTION(BlueprintCallable)
    void CancelSpectateWindowHold();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerHp(int32 InWrestlerHp, int32 inMaxHP, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWrestlerDownHp(int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVehicleStatusDurability(int32 InVehicleDurability, int32 InMaxDurability, bool InGaugeTransition, ESSVehicleType InVehicleType);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStormTime(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    void ApplySpectators(int32 InSpectatorsNum);
    
    UFUNCTION(BlueprintCallable)
    void ApplyShieldDurableValue(int32 InShieldDurableValue, int32 InMaxShieldDurableValue, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRatioToInteractUI(float InRatio);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOnlineID(AActor* inTargetActor, const FString& InOnlineID, bool inIsVisible, bool InHasCarrot);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKOCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInventoryIcon(int32 InIndex, ESSPickupType InPickuptype, int32 InItemId, int32 InDurableValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInventoryBareIconGuideState();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractPoint(AActor* inTargetActor, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHUDWatchGameMode();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHeatMeater(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHasCarrotMedal(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterHpGauge(AActor* inTargetActor, int32 InNowHp, int32 InIdealHp, int32 inMaxHP, ESSCharacterHpType InType, bool& Out);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionGauge(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionBoostValue(float InAttentionBoostValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAnnouncePlate(bool inIsVisible, float InSecond, ESSAreaCountDownTextType InTextType);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAliveCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAbilityEffectiveGauge(int32 inSlotIndex, float inRemainTime, float inDurationTime);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAbilityCoolTimeGauge(int32 inSlotIndex, float inRemainTime, float inDurationTime);
    
    UFUNCTION(BlueprintCallable)
    void AddMultiColorLogMessage(const TArray<FSSLogTextParam>& inTextParam, ESSLogIconType InIconType);
    
    UFUNCTION(BlueprintCallable)
    void AddMessage(const FString& InNewItem, ESSLogIconType InIconType);
    
};

