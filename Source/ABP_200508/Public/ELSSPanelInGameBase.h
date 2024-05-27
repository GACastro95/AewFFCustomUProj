#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSPanelBase.h"
#include "ESSAreaCountDownTextType.h"
#include "ESSAttentionReason.h"
#include "ESSCharacterHpType.h"
#include "ESSFGFIconType.h"
#include "ESSGuideIconType.h"
#include "ESSInteractExecute.h"
#include "ESSInteractOperate.h"
#include "ESSLogIconType.h"
#include "ESSMatchIconType.h"
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
class UELSSWidgetHUD_FGFScoreboard;
class UELSSWidgetHUD_HeatMeter;
class UELSSWidgetHUD_Interact;
class UELSSWidgetHUD_InteractPointContainer;
class UELSSWidgetHUD_Inventory;
class UELSSWidgetHUD_JewelList;
class UELSSWidgetHUD_JewelRadar;
class UELSSWidgetHUD_MapUI;
class UELSSWidgetHUD_OnlineIDContainer;
class UELSSWidgetHUD_OperationGuide;
class UELSSWidgetHUD_RespawnCount;
class UELSSWidgetHUD_SSGuideIconContainer;
class UELSSWidgetHUD_SSLogSet;
class UELSSWidgetHUD_SSSessionMemberIconContainer;
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
    UELSSWidgetHUD_SSSessionMemberIconContainer* MemberIconContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_OnlineIDContainer* OnlineIDContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_InteractPointContainer* InteractPointContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_WrestlerStatus*> AllyWrestlerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_HeatMeter*> AllyHeatMeter;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_JewelList* JewelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_JewelRadar* JewelRadar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_SSGuideIconContainer* GuideIconContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_RespawnCount* RespawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWidgetHUD_FGFScoreboard* FGFScoreboard;
    
public:
    UELSSPanelInGameBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayInAnimation(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateKeyConfig();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAlly(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchWrestlerHpType(bool InIsDownHpGaugeShow);
    
    UFUNCTION(BlueprintCallable)
    void SwitchOtherWrestlerHpType(bool InIsDownHpGaugeShow, int32 InIndex);
    
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
    void SetVisibleRespawnCountTime(bool InPlayIn);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleOtherWrestlerStats(int32 InIndex, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleOtherWrestlerAllStats(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleOffenceInfo(bool InOwnSide, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleGuideIconMatchIcon(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleDefenceBoostText(bool InOwnSide, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleBeatTopTeamNotice();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAllyIconContainer(bool inIsVisible);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowVCOnEndPlay(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowAllyVC(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionIndex(int32 InSessionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherWrestlerVC(const FString& InProductUserID, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherWrestlerSessionIndex(int32 InSessionIndex, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherWrestlerGamerTag(const FString& InGamerTagText, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOperationGuideVisibleInPause(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetOperationGuideGuardState(bool InGuardState);
    
    UFUNCTION(BlueprintCallable)
    void SetMyWrestlerVC(const FString& InProductUserID);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllyPUID(const FString& InProductUserID, int32 InIndex);
    
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
    void ResetAllyIcon();
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnChangeActive_GuideIcon(bool IsActive);
    
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
    void ApplyWrestlerMatchIcon(bool inIsVisible, ESSMatchIconType InIconType);
    
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
    void ApplyRespawnCountTime(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRatioToInteractUI(float InRatio);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadarLevel(int32 inLevel);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOtherWrestlrStatusMatchIcon(bool inIsVisible, ESSMatchIconType InIconType, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOtherWrestlerHp(int32 InWrestlerHp, int32 inMaxHP, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOtherWrestlerHeatMeater(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOtherWrestlerHasCarrotMedal(bool inIsVisible, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOtherWrestlerDownHp(int32 InWrestlerDownHp, int32 InMaxWrestlerDownHp, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOtherShieldDurableValue(int32 InShieldDurableValue, int32 InMaxShieldDurableValue, bool InGaugeTransition, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOnlineID(AActor* inTargetActor, const FString& InOnlineID, bool inIsVisible, bool InHasCarrot, ESSMatchIconType InIconType);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMatchTimeCountDown(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKOCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void ApplyJewelRankData(int32 InRank, int32 InJewelNum, int32 InMaxJewelNum, bool InSelfData, int32 InSlot, bool InPlayChangeRankAnim);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInventoryIcon(int32 InIndex, ESSPickupType InPickuptype, int32 InItemId, int32 InDurableValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInventoryBareIconGuideState();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInventoryBareIconFGFState(bool InIsDefault, int32 InBallLevel);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteractPoint(AActor* inTargetActor, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHUDWatchGameMode();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHeatMeater(int32 inHeatLevel, float InExpRatio, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHasCarrotMedal(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGuideIcon(AActor* InActor, ESSGuideIconType InIconType, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFGFTeamIcon(ESSFGFIconType InIconType, bool InOwnSide);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFGFScore(int32 InOwnScore, int32 InOppositeScore);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFGFRoundTime(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFGFRound(int32 InRound);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFGFBallLevel(int32 inLevel, int32 inBallLevelPoint, int32 InMaxBallLevelPoint, bool InOwnSide);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterHpGauge(AActor* inTargetActor, int32 InNowHp, int32 InIdealHp, int32 inMaxHP, ESSCharacterHpType InType, bool& Out);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionGauge(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAttentionBoostValue(float InAttentionBoostValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAnnouncePlate(bool inIsVisible, float InSecond, ESSAreaCountDownTextType InTextType);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAllyIcon(AActor* InActor, int32 InPlayerIndex, bool inIsVisible);
    
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

