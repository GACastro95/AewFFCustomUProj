// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UMaterialInterface;
class AELCharacter_Native;
struct FVector;
struct FELWrestlerMeshParam;
class UAnimMontage;
struct FStFEquipPassiveSkillData;
struct FStPassiveSkillSrcParam;
struct FStUpperBodyBlendUpdateInfo;
struct FHitResult;
enum class EAttackCollision_N : uint8;
struct FStAOnDamage;
struct FRotator;
enum class EELMatchResultType : uint8;
struct FFootCtrlParam;
struct FStLimbHP;
struct FStMatchRule;
class UAnimSequenceBase;
class ACharacter;
class UELAnimInstance_PartIK;
enum class EPassiveSkillTriggerType : uint8;
class AELMiniGameBase;
struct FLinearColor;
struct FTransform;
struct FELWrestlerNameProfileParam;
struct FELWrestlerProfile;
enum class EActionSkillType : uint8;
enum class EBodyWeightType : uint8;
struct FBox;
enum class ERopeGroggy : uint8;
enum class ETrainingReversalKind : uint8;
enum class EStickinputDir : uint8;
struct FStPassiveSkillData;
enum class ESpecialMovesType : uint8;
struct FWrestlerSetupParam;
struct FPersonParam;
struct FPresetParam;
struct FAttireParam;
class UAnimSequence;
enum class EBodyHomingType : uint8;
class USkeletalMesh;
class USceneComponent;
class ASyncMotionMontage;
class UTexture;
enum class EBasicFunctionResult : uint8;
enum class ESyncPosRotKind : uint8;
class UCableComponent;
class UELAchievementObserver;
class UELFootIK;
class UMatineeCameraShake;
class UELMomentumMeterBase;
class UELSeesawSystem;
class UELShockCounter;
enum class EWrestlerID_N : uint8;
enum class ERefereeMeshMode : uint8;
enum class ERefereeDQReactionKind_N : uint8;
#ifdef ABP_200508_ELCharacter_Native_generated_h
#error "ELCharacter_Native.generated.h already included, missing '#pragma once' in ELCharacter_Native.h"
#endif
#define ABP_200508_ELCharacter_Native_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_RPC_WRAPPERS \
	virtual void CE_M_SetORMovement_N_Implementation(bool bValue); \
	virtual bool ChangeMesh_Implementation(const FELWrestlerMeshParam WrestlerMeshParam); \
	virtual USkeletalMeshComponent* GetRefereeClonedMesh_Implementation() const; \
	virtual bool IsForceSyncMovement_Implementation() const; \
	virtual bool IsOutOfSyncMovement_Implementation() const; \
	virtual void LadderMatchMiniGameCancelServer_Implementation(); \
	virtual void LadderMatchMiniGameOnFailedEvent_Implementation(); \
	virtual void LadderMatchMiniGameOnProgressEvent_Implementation(int32 Step, bool Finish); \
	virtual void LadderMatchMiniGameSetProgress_Implementation(int32 Step, float Percent); \
	virtual void LadderMatchMiniGameStartServer_Implementation(int32 StartProgress, UAnimMontage* GrabLoopMontage); \
	virtual void M_SetActorLocation_N_Implementation(FVector const& NewLocation, bool bSweep, bool bTeleport); \
	virtual void M_SetActorLocationAndRotation_N_Implementation(FVector const& NewLocation, FRotator const& NewRotation, bool bSweep, bool bTeleport); \
	virtual void M_SetActorRotation_N_Implementation(FRotator const& NewRotation, bool bTeleport); \
	virtual void M_SetDeferredUpdateYaw_N_Implementation(float Yaw, UAnimMontage* Montage); \
	virtual void M_SetDeferredUpdateYawMainMontage_N_Implementation(float Yaw); \
	virtual bool OnSetupCharacter_Implementation(FWrestlerSetupParam const& SetupParam, bool bEntrance, bool bSpecificEntrance); \
	virtual bool OnSetupPreset_Implementation(FPersonParam const& PersonParam, FPresetParam const& PresetParam, FAttireParam const& ExtraParts, bool bEntrance); \
	virtual bool OnSetupProfiles_Implementation(FWrestlerSetupParam const& SetupParam); \
	virtual bool ResetForceSyncMovement_Implementation(); \
	virtual void S_AddActorWorldOffset_N_Implementation(FVector const& AddLocation, bool bSweep, bool bTeleport); \
	virtual void S_AddActorWorldRotation_N_Implementation(FRotator const& AddRotation, bool bSweep, bool bTeleport); \
	virtual void S_PlayUpperBodyBlendMotion_N_Implementation(UAnimSequence* AnimSequence); \
	virtual void S_StopUpperBodyBlendMotion_N_Implementation(); \
	virtual void SetCharacterMesh_Implementation(USkeletalMesh* NewMesh, TArray<FName> const& InvisibleMaterialNames); \
	virtual void ShowSkeletalMeshMaterials_Implementation(USkeletalMeshComponent* Target, TArray<FName> const& TargetMaterialNames, bool bShow); \
	virtual void Tick_ObserveTagRingInAuthority_N_Implementation(); \
 \
	DECLARE_FUNCTION(execAimTarget_N); \
	DECLARE_FUNCTION(execBeginOverlap_HitCol_N); \
	DECLARE_FUNCTION(execBindDynamicMaterial); \
	DECLARE_FUNCTION(execBindNativeCapsuleComponentOverlapEvent); \
	DECLARE_FUNCTION(execCanAllOtherTargetDown_N); \
	DECLARE_FUNCTION(execCanApronChainActionOperate_N); \
	DECLARE_FUNCTION(execCanChainGrappleActionOperate_N); \
	DECLARE_FUNCTION(execCanChainStateActionOperate_N); \
	DECLARE_FUNCTION(execCanCornerChainActionOperate_N); \
	DECLARE_FUNCTION(execCanEnvironmentActionOperate_N); \
	DECLARE_FUNCTION(execCanNaviOperate_N); \
	DECLARE_FUNCTION(execCanOperateDownPinchMove_N); \
	DECLARE_FUNCTION(execCanPlayApronSingleAvoid_N); \
	DECLARE_FUNCTION(execCanRise_N); \
	DECLARE_FUNCTION(execCanRopeChainActionOperate_N); \
	DECLARE_FUNCTION(execCanRunStrikeOperate_N); \
	DECLARE_FUNCTION(execCanTopLadderOperate_N); \
	DECLARE_FUNCTION(execCanTutorialAllComplete_N); \
	DECLARE_FUNCTION(execCanUpperBodyBlend_N); \
	DECLARE_FUNCTION(execCE_M_SetORMovement_N); \
	DECLARE_FUNCTION(execChangedTagWait); \
	DECLARE_FUNCTION(execChangeMesh); \
	DECLARE_FUNCTION(execCheckMainMontage); \
	DECLARE_FUNCTION(execCheckMainMontage_N); \
	DECLARE_FUNCTION(execCheckOtherTargetDistance_N); \
	DECLARE_FUNCTION(execCheckPassiveSkill_Over); \
	DECLARE_FUNCTION(execCheckPassiveSkill_Under); \
	DECLARE_FUNCTION(execCheckRinginOutCollisionOperate_N); \
	DECLARE_FUNCTION(execCheckTutorial_AddMomentumMeter); \
	DECLARE_FUNCTION(execCheckUpperBodyBlendCondition_HP_N); \
	DECLARE_FUNCTION(execCheckUpperBodyBlendCondition_PassiveSkill_N); \
	DECLARE_FUNCTION(execDetachPartIK); \
	DECLARE_FUNCTION(execDisableAttackCollisionList_N); \
	DECLARE_FUNCTION(execEndOverlap_HitCol_N); \
	DECLARE_FUNCTION(execExcuteBeginOverlapPlayerBarrier_N); \
	DECLARE_FUNCTION(execExcuteBeginOverlapPlayerCapsule_N); \
	DECLARE_FUNCTION(execExcuteEndOverlapPlayerCapsule_N); \
	DECLARE_FUNCTION(execExecuteOverlap); \
	DECLARE_FUNCTION(execFinishRopeIK_N); \
	DECLARE_FUNCTION(execGeneratePercent); \
	DECLARE_FUNCTION(execGetAIDifficulty_N); \
	DECLARE_FUNCTION(execGetAIFightStyle_N); \
	DECLARE_FUNCTION(execGetAimingCenterForReferee_N); \
	DECLARE_FUNCTION(execGetAnimationUpdateParam_N); \
	DECLARE_FUNCTION(execGetAOnDamageANS_N); \
	DECLARE_FUNCTION(execGetBeforeInputMoveValue_N); \
	DECLARE_FUNCTION(execGetColllidionSurfaceDirection_N); \
	DECLARE_FUNCTION(execGetControllerID_N); \
	DECLARE_FUNCTION(execGetDeadReason); \
	DECLARE_FUNCTION(execGetDebugOption_Idle_N); \
	DECLARE_FUNCTION(execGetFootIKParam_N); \
	DECLARE_FUNCTION(execGetGameplayCharIndex_N); \
	DECLARE_FUNCTION(execGetHipOffsetForCutscene); \
	DECLARE_FUNCTION(execGetHPLevelImpl); \
	DECLARE_FUNCTION(execGetHPPercent_N); \
	DECLARE_FUNCTION(execGetLimbHPPercent_N); \
	DECLARE_FUNCTION(execGetMatchRule_N); \
	DECLARE_FUNCTION(execGetMeshHeight_N); \
	DECLARE_FUNCTION(execGetMiniGameMashSpeed_N); \
	DECLARE_FUNCTION(execGetMotionEndAnimNotifyMontage_N); \
	DECLARE_FUNCTION(execGetMovedDistance); \
	DECLARE_FUNCTION(execGetMoveWorldDirectionWithCamera_N); \
	DECLARE_FUNCTION(execGetNearestTagPartner_N); \
	DECLARE_FUNCTION(execGetNeckHormingTargetPlayerCore_N); \
	DECLARE_FUNCTION(execGetNowApronToRingYaw_Impl); \
	DECLARE_FUNCTION(execGetOldAIController); \
	DECLARE_FUNCTION(execGetOpponentManager_N); \
	DECLARE_FUNCTION(execGetOtherCharaHitInApron_N); \
	DECLARE_FUNCTION(execGetOtherTargetNearest_N); \
	DECLARE_FUNCTION(execGetOverlappingActor_N); \
	DECLARE_FUNCTION(execGetOverlappingActorTag_N); \
	DECLARE_FUNCTION(execGetPartIK_N); \
	DECLARE_FUNCTION(execGetPassiveSkillMomentumAddRate_N); \
	DECLARE_FUNCTION(execGetPassiveSkillSrcParam_N); \
	DECLARE_FUNCTION(execGetPinMiniGame_N); \
	DECLARE_FUNCTION(execGetPlayerColor_N); \
	DECLARE_FUNCTION(execGetPlayerIndex_N); \
	DECLARE_FUNCTION(execGetReferee_N); \
	DECLARE_FUNCTION(execGetRefereeClonedMesh); \
	DECLARE_FUNCTION(execGetRollOutDownState_N); \
	DECLARE_FUNCTION(execGetSocketTransform_N); \
	DECLARE_FUNCTION(execGetSubmissionMiniGame_N); \
	DECLARE_FUNCTION(execGetSyncChar_N); \
	DECLARE_FUNCTION(execGetSyncCharArray); \
	DECLARE_FUNCTION(execGetSyncJAAnimNotifyMontage_N); \
	DECLARE_FUNCTION(execGetTargetActor_N); \
	DECLARE_FUNCTION(execGetTouchLeaveRing); \
	DECLARE_FUNCTION(execGetWorkHipOffsetForCutscene); \
	DECLARE_FUNCTION(execGetWrestlerName); \
	DECLARE_FUNCTION(execGetWrestlerNameProfileParam); \
	DECLARE_FUNCTION(execGetWrestlerProfile); \
	DECLARE_FUNCTION(execIsAIController_N); \
	DECLARE_FUNCTION(execIsAllowAutoTrackingMotion_N); \
	DECLARE_FUNCTION(execIsAnyApron_N); \
	DECLARE_FUNCTION(execIsApronToRing_N); \
	DECLARE_FUNCTION(execIsApronToRingChain_N); \
	DECLARE_FUNCTION(execIsApronWalk_N); \
	DECLARE_FUNCTION(execIsAttachWeapon_N); \
	DECLARE_FUNCTION(execIsAutoFinisherFlow_N); \
	DECLARE_FUNCTION(execIsAutoPinFlow_N); \
	DECLARE_FUNCTION(execIsAutoSignatureFlow_N); \
	DECLARE_FUNCTION(execIsBarricadeClimbLoop_N); \
	DECLARE_FUNCTION(execIsBattleRoyaleEntrance_N); \
	DECLARE_FUNCTION(execIsBattleRoyaleRingInRun_N); \
	DECLARE_FUNCTION(execIsBlockLoopPose_N); \
	DECLARE_FUNCTION(execIsBlockPose_N); \
	DECLARE_FUNCTION(execIsChainCheckMotion_N); \
	DECLARE_FUNCTION(execIsChainGrappleCancelMotion_N); \
	DECLARE_FUNCTION(execIsChainGrappleMove_N); \
	DECLARE_FUNCTION(execIsChainGrappleTagPartnerAttackReaction_Attacker_N); \
	DECLARE_FUNCTION(execIsChainState_N); \
	DECLARE_FUNCTION(execIsChainWrestling_N); \
	DECLARE_FUNCTION(execIsChainWrestlingLoop_N); \
	DECLARE_FUNCTION(execIsCornerChain_N); \
	DECLARE_FUNCTION(execIsCornerGroggy_N); \
	DECLARE_FUNCTION(execIsCornerGroggyBack_N); \
	DECLARE_FUNCTION(execIsCornerGroggyFront_N); \
	DECLARE_FUNCTION(execIsCornerSetupMotion_N); \
	DECLARE_FUNCTION(execIsCornerTop_N); \
	DECLARE_FUNCTION(execIsCornerTopOrRiseMotion_N); \
	DECLARE_FUNCTION(execIsDamageReaction_N); \
	DECLARE_FUNCTION(execIsDashRingOut_N); \
	DECLARE_FUNCTION(execIsDead_N); \
	DECLARE_FUNCTION(execIsDiving_N); \
	DECLARE_FUNCTION(execIsDivingInterception_N); \
	DECLARE_FUNCTION(execIsDivingInterceptionDamage_N); \
	DECLARE_FUNCTION(execIsDivingSyncAttack_N); \
	DECLARE_FUNCTION(execIsDivingSyncDamage_N); \
	DECLARE_FUNCTION(execIsDown_N); \
	DECLARE_FUNCTION(execIsDownFaceDown_N); \
	DECLARE_FUNCTION(execIsDownFaceUp_N); \
	DECLARE_FUNCTION(execIsDownJumpOver_N); \
	DECLARE_FUNCTION(execIsDownMontage_N); \
	DECLARE_FUNCTION(execIsDownPainReactionMotion_N); \
	DECLARE_FUNCTION(execIsDQCautionMotion_N); \
	DECLARE_FUNCTION(execIsEnableActionSkill_N); \
	DECLARE_FUNCTION(execIsEnableAOn_N); \
	DECLARE_FUNCTION(execIsEnableHeightAdjust_N); \
	DECLARE_FUNCTION(execIsEnablePassiveSkillSituation_N); \
	DECLARE_FUNCTION(execIsEnableRule_AnywherePin_N); \
	DECLARE_FUNCTION(execIsEnableRule_AnywhereSubmission_N); \
	DECLARE_FUNCTION(execIsEnableRule_BattleRoyale_N); \
	DECLARE_FUNCTION(execIsEnableRule_ChainWrestring_N); \
	DECLARE_FUNCTION(execIsEnableRule_ChopBattle_N); \
	DECLARE_FUNCTION(execIsEnableRule_Combination_N); \
	DECLARE_FUNCTION(execIsEnableRule_DispTargetLine_N); \
	DECLARE_FUNCTION(execIsEnableRule_DoubleTeamMove_N); \
	DECLARE_FUNCTION(execIsEnableRule_DQ_N); \
	DECLARE_FUNCTION(execIsEnableRule_ExplodingBarbedWireDeathMatch_N); \
	DECLARE_FUNCTION(execIsEnableRule_Gauntlet_N); \
	DECLARE_FUNCTION(execIsEnableRule_GroupBattleRoyale_N); \
	DECLARE_FUNCTION(execIsEnableRule_GuideHUD_N); \
	DECLARE_FUNCTION(execIsEnableRule_HostDeadQuitMatch_N); \
	DECLARE_FUNCTION(execIsEnableRule_HostOnlyPinSub_N); \
	DECLARE_FUNCTION(execIsEnableRule_Indicator_N); \
	DECLARE_FUNCTION(execIsEnableRule_Interval_N); \
	DECLARE_FUNCTION(execIsEnableRule_KnockOut_N); \
	DECLARE_FUNCTION(execIsEnableRule_Ladder_N); \
	DECLARE_FUNCTION(execIsEnableRule_LightsOut_N); \
	DECLARE_FUNCTION(execIsEnableRule_ManualTarget_N); \
	DECLARE_FUNCTION(execIsEnableRule_OvertheTopRope_N); \
	DECLARE_FUNCTION(execIsEnableRule_Pin_N); \
	DECLARE_FUNCTION(execIsEnableRule_RingEscape_N); \
	DECLARE_FUNCTION(execIsEnableRule_RingOnly_N); \
	DECLARE_FUNCTION(execIsEnableRule_SoloBattleRoyale_N); \
	DECLARE_FUNCTION(execIsEnableRule_StrikeFight_N); \
	DECLARE_FUNCTION(execIsEnableRule_Submission_N); \
	DECLARE_FUNCTION(execIsEnableRule_TagMove_N); \
	DECLARE_FUNCTION(execIsEnableRule_TornadoTag_N); \
	DECLARE_FUNCTION(execIsEnableRule_TraningMode_N); \
	DECLARE_FUNCTION(execIsEnableSyncBarrierCollision); \
	DECLARE_FUNCTION(execIsEnableTutorial); \
	DECLARE_FUNCTION(execIsEnableTutorialTrainingMode); \
	DECLARE_FUNCTION(execIsEnableUpperBodyBlend_N); \
	DECLARE_FUNCTION(execIsEnableWeightDetection_N); \
	DECLARE_FUNCTION(execIsEnvGroggy_N); \
	DECLARE_FUNCTION(execIsExplodingOvertheTopRopeMotion_N); \
	DECLARE_FUNCTION(execIsForceSyncMovement); \
	DECLARE_FUNCTION(execIsFrontBackChainAllMontage_N); \
	DECLARE_FUNCTION(execIsFrontChainAll_N); \
	DECLARE_FUNCTION(execIsGrappleGuardPose_N); \
	DECLARE_FUNCTION(execIsGroggy_N); \
	DECLARE_FUNCTION(execIsGroggyLoop_N); \
	DECLARE_FUNCTION(execIsGroggyMove_N); \
	DECLARE_FUNCTION(execIsHandsInPocketMotion_N); \
	DECLARE_FUNCTION(execIsHideGuideHudCornerTurnOver_N); \
	DECLARE_FUNCTION(execIsIdleMotion_N); \
	DECLARE_FUNCTION(execIsIrishWhipRunState_N); \
	DECLARE_FUNCTION(execIsIWThrow_N); \
	DECLARE_FUNCTION(execIsKickCatchLoopMotion_N); \
	DECLARE_FUNCTION(execIsKneekingLoopMotion_N); \
	DECLARE_FUNCTION(execIsLadderClimbStartMotion_N); \
	DECLARE_FUNCTION(execIsLadderMidEndure_N); \
	DECLARE_FUNCTION(execIsLadderMidTilt_N); \
	DECLARE_FUNCTION(execIsLadderMidTiltDamageReaction_N); \
	DECLARE_FUNCTION(execIsLadderMiniGameForceSuccess); \
	DECLARE_FUNCTION(execIsLadderTopLoopMotion_N); \
	DECLARE_FUNCTION(execIsLastChainWrestlingAttack_N); \
	DECLARE_FUNCTION(execIsLastChainWrestlingDefence_N); \
	DECLARE_FUNCTION(execIsLastChainWrestlingPositionChange_N); \
	DECLARE_FUNCTION(execIsLastRiseUpAttack_N); \
	DECLARE_FUNCTION(execIsLongDownMotion_N); \
	DECLARE_FUNCTION(execIsMainMontage_N); \
	DECLARE_FUNCTION(execIsManager_N); \
	DECLARE_FUNCTION(execIsManagerInterferedMotion_N); \
	DECLARE_FUNCTION(execIsMomentumMeterRemoveStop_N); \
	DECLARE_FUNCTION(execIsNaviDirEnd_N); \
	DECLARE_FUNCTION(execIsNaviDirStartAndLoop_N); \
	DECLARE_FUNCTION(execIsNavigation_N); \
	DECLARE_FUNCTION(execIsNavigationMontage_N); \
	DECLARE_FUNCTION(execIsNoAbilityReactionMotion_N); \
	DECLARE_FUNCTION(execIsObstructionMotion_N); \
	DECLARE_FUNCTION(execIsOutOfSyncMovement); \
	DECLARE_FUNCTION(execIsOverTheTopRopeHangRopeLoopMotion_N); \
	DECLARE_FUNCTION(execIsOverTheTopRopeHangRopePlayDamageSituation_N); \
	DECLARE_FUNCTION(execIsPin); \
	DECLARE_FUNCTION(execIsPinchMoveReach_N); \
	DECLARE_FUNCTION(execIsPlaceRing_N); \
	DECLARE_FUNCTION(execIsPlayingLadderMiniGame); \
	DECLARE_FUNCTION(execIsPlayingMiniGame_N); \
	DECLARE_FUNCTION(execIsRecuperabilityMotion_N); \
	DECLARE_FUNCTION(execIsReferee_N); \
	DECLARE_FUNCTION(execIsReplayState_N); \
	DECLARE_FUNCTION(execIsRequestRollOut_N); \
	DECLARE_FUNCTION(execIsReverseDirectionInput_N); \
	DECLARE_FUNCTION(execIsRingInOrApronToRing_N); \
	DECLARE_FUNCTION(execIsRingInOut_N); \
	DECLARE_FUNCTION(execIsRingOutCountLoopMotion_N); \
	DECLARE_FUNCTION(execIsRingOutCountMotion_N); \
	DECLARE_FUNCTION(execIsRingSideToApron_N); \
	DECLARE_FUNCTION(execIsRingToApronChain_N); \
	DECLARE_FUNCTION(execIsRiseUp_N); \
	DECLARE_FUNCTION(execIsRopeBreak); \
	DECLARE_FUNCTION(execIsRopeChain_N); \
	DECLARE_FUNCTION(execIsRopeGroggy_N); \
	DECLARE_FUNCTION(execIsRopeRebound_N); \
	DECLARE_FUNCTION(execIsRun_N); \
	DECLARE_FUNCTION(execIsRunEnd_N); \
	DECLARE_FUNCTION(execIsRunLoop_N); \
	DECLARE_FUNCTION(execIsRunOrRopeRebound_N); \
	DECLARE_FUNCTION(execIsRunState_N); \
	DECLARE_FUNCTION(execIsShowGuideHudPinfall_N); \
	DECLARE_FUNCTION(execIsSitDown_N); \
	DECLARE_FUNCTION(execIsSpecialTaunt_N); \
	DECLARE_FUNCTION(execIsStandChainGrapple_N); \
	DECLARE_FUNCTION(execIsStandChainGrappleLoop_N); \
	DECLARE_FUNCTION(execIsStandSituation_N); \
	DECLARE_FUNCTION(execIsStartOfMatchMotion_N); \
	DECLARE_FUNCTION(execIsStepMotion_N); \
	DECLARE_FUNCTION(execIsStrongSetUpActionReach_N); \
	DECLARE_FUNCTION(execIsSubmission_N); \
	DECLARE_FUNCTION(execIsSync_N); \
	DECLARE_FUNCTION(execIsSyncMainSlot_N); \
	DECLARE_FUNCTION(execIsSyncWith_N); \
	DECLARE_FUNCTION(execIsSystemChar_N); \
	DECLARE_FUNCTION(execIsTableTopDown_N); \
	DECLARE_FUNCTION(execIsTagTouch_N); \
	DECLARE_FUNCTION(execIsTagWait_N); \
	DECLARE_FUNCTION(execIsTagWakeupGroggyDamageReaction_N); \
	DECLARE_FUNCTION(execIsTaunt_N); \
	DECLARE_FUNCTION(execIsTauntMotion_N); \
	DECLARE_FUNCTION(execIsUseMouthMaskParts_N); \
	DECLARE_FUNCTION(execIsWakeUpTauntWakeUpMotion_N); \
	DECLARE_FUNCTION(execIsWalk_N); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressA); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressB); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressX); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressY); \
	DECLARE_FUNCTION(execLadderMatchMiniGameCancel); \
	DECLARE_FUNCTION(execLadderMatchMiniGameCancelServer); \
	DECLARE_FUNCTION(execLadderMatchMiniGameOnFailedEvent); \
	DECLARE_FUNCTION(execLadderMatchMiniGameOnProgressEvent); \
	DECLARE_FUNCTION(execLadderMatchMiniGameSetProgress); \
	DECLARE_FUNCTION(execLadderMatchMiniGameStart); \
	DECLARE_FUNCTION(execLadderMatchMiniGameStartServer); \
	DECLARE_FUNCTION(execM_SetActorLocation_N); \
	DECLARE_FUNCTION(execM_SetActorLocationAndRotation_N); \
	DECLARE_FUNCTION(execM_SetActorRotation_N); \
	DECLARE_FUNCTION(execM_SetDeferredUpdateYaw_N); \
	DECLARE_FUNCTION(execM_SetDeferredUpdateYawMainMontage_N); \
	DECLARE_FUNCTION(execOnChangedLastHitMovesSituationIndex); \
	DECLARE_FUNCTION(execOnChangedTrainingReversalKind); \
	DECLARE_FUNCTION(execOnDamageHPEvent_N); \
	DECLARE_FUNCTION(execOnMeterValuePenaltyEvent_N); \
	DECLARE_FUNCTION(execOnPlayActionSkillEvent_N); \
	DECLARE_FUNCTION(execOnPlayNormalTauntEvent_N); \
	DECLARE_FUNCTION(execOnPlayPassiveSkillEffectEvent_N); \
	DECLARE_FUNCTION(execOnRemoveGloveBuffEvent_N); \
	DECLARE_FUNCTION(execOnReversalEvent_N); \
	DECLARE_FUNCTION(execOnReverseDirectionEvent_N); \
	DECLARE_FUNCTION(execOnSetupCharacter); \
	DECLARE_FUNCTION(execOnSetupPreset); \
	DECLARE_FUNCTION(execOnSetupProfiles); \
	DECLARE_FUNCTION(execOnTakeControlBtn_N); \
	DECLARE_FUNCTION(execRequestTutorial_N); \
	DECLARE_FUNCTION(execResetCostume); \
	DECLARE_FUNCTION(execResetForceSyncMovement); \
	DECLARE_FUNCTION(execResetMeshMaterials); \
	DECLARE_FUNCTION(execResetWeaponDiffHeight); \
	DECLARE_FUNCTION(execS_AddActorWorldOffset_N); \
	DECLARE_FUNCTION(execS_AddActorWorldRotation_N); \
	DECLARE_FUNCTION(execS_PlayUpperBodyBlendMotion_N); \
	DECLARE_FUNCTION(execS_StopUpperBodyBlendMotion_N); \
	DECLARE_FUNCTION(execSetAttackCollisionEnable_N); \
	DECLARE_FUNCTION(execSetAttackCollisionListScale_N); \
	DECLARE_FUNCTION(execSetBattleRoyaleRingInRun_N); \
	DECLARE_FUNCTION(execSetBodyHoming_N); \
	DECLARE_FUNCTION(execSetBodyMask_N); \
	DECLARE_FUNCTION(execSetCharacterMesh); \
	DECLARE_FUNCTION(execSetCollisionsEnabled); \
	DECLARE_FUNCTION(execSetComponentsRelativeScale); \
	DECLARE_FUNCTION(execSetDamageReaction_CurrentMontage_N); \
	DECLARE_FUNCTION(execSetDeadReason); \
	DECLARE_FUNCTION(execSetDeferredUpdateDeltaLocation); \
	DECLARE_FUNCTION(execSetDeferredUpdateYaw); \
	DECLARE_FUNCTION(execSetEnableSyncBarrierCollision); \
	DECLARE_FUNCTION(execSetHipOffsetForCutscene); \
	DECLARE_FUNCTION(execSetIgnoreActorWhenMoving_N); \
	DECLARE_FUNCTION(execSetIsThreadTickAsync); \
	DECLARE_FUNCTION(execSetLadderMiniGameForceSuccess); \
	DECLARE_FUNCTION(execSetOldAIController); \
	DECLARE_FUNCTION(execSetOtherCharaHitInApron_N); \
	DECLARE_FUNCTION(execSetPinMontage); \
	DECLARE_FUNCTION(execSetPlayerBarrierCollisionSetting_N); \
	DECLARE_FUNCTION(execSetScalarParameterForMID); \
	DECLARE_FUNCTION(execSetSyncMotionAnyChar_N); \
	DECLARE_FUNCTION(execSetTextureParameterForMID); \
	DECLARE_FUNCTION(execSetTouchLeaveRing); \
	DECLARE_FUNCTION(execSetupBarrierCollisionOverlapEventBind); \
	DECLARE_FUNCTION(execSetupCharacter); \
	DECLARE_FUNCTION(execSetupPreset); \
	DECLARE_FUNCTION(execSetVectorParameterForMID); \
	DECLARE_FUNCTION(execSetWorkHipOffsetForCutscene); \
	DECLARE_FUNCTION(execSetWrestlerProfile); \
	DECLARE_FUNCTION(execShowSkeletalMeshMaterials); \
	DECLARE_FUNCTION(execSpawnSyncMotionMontage); \
	DECLARE_FUNCTION(execStartRopeIK_N); \
	DECLARE_FUNCTION(execTick_ObserveTagRingInAuthority_N); \
	DECLARE_FUNCTION(execTick_UpdateBodyHoming_N); \
	DECLARE_FUNCTION(execTick_UpdateUpperBodyBlend_N); \
	DECLARE_FUNCTION(execTickHomingOn_N); \
	DECLARE_FUNCTION(execTickUpdateAnimScaleZ_N); \
	DECLARE_FUNCTION(execTickUpdateHipOffset_N); \
	DECLARE_FUNCTION(execTickUpdateinGameDuration_N); \
	DECLARE_FUNCTION(execTickUpdateInterpolateCharaMeshLocation_N); \
	DECLARE_FUNCTION(execTickUpdateInterpolateLocationandRotation_N); \
	DECLARE_FUNCTION(execTickUpdateLiftState_N); \
	DECLARE_FUNCTION(execTickUpdateReserveReversal_N); \
	DECLARE_FUNCTION(execTriggerPassiveSkill_N); \
	DECLARE_FUNCTION(execTutorialEndEvent); \
	DECLARE_FUNCTION(execUnbindDynamicMaterial); \
	DECLARE_FUNCTION(execUpdateBothAOnHit_N); \
	DECLARE_FUNCTION(execUpdateReserveReversal_N); \
	DECLARE_FUNCTION(execUpdateTutorialHitReachCount); \
	DECLARE_FUNCTION(execUpdateUpperBodyBlend);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CE_M_SetORMovement_N_Implementation(bool bValue); \
	virtual bool ChangeMesh_Implementation(const FELWrestlerMeshParam WrestlerMeshParam); \
	virtual USkeletalMeshComponent* GetRefereeClonedMesh_Implementation() const; \
	virtual bool IsForceSyncMovement_Implementation() const; \
	virtual bool IsOutOfSyncMovement_Implementation() const; \
	virtual void LadderMatchMiniGameCancelServer_Implementation(); \
	virtual void LadderMatchMiniGameOnFailedEvent_Implementation(); \
	virtual void LadderMatchMiniGameOnProgressEvent_Implementation(int32 Step, bool Finish); \
	virtual void LadderMatchMiniGameSetProgress_Implementation(int32 Step, float Percent); \
	virtual void LadderMatchMiniGameStartServer_Implementation(int32 StartProgress, UAnimMontage* GrabLoopMontage); \
	virtual void M_SetActorLocation_N_Implementation(FVector const& NewLocation, bool bSweep, bool bTeleport); \
	virtual void M_SetActorLocationAndRotation_N_Implementation(FVector const& NewLocation, FRotator const& NewRotation, bool bSweep, bool bTeleport); \
	virtual void M_SetActorRotation_N_Implementation(FRotator const& NewRotation, bool bTeleport); \
	virtual void M_SetDeferredUpdateYaw_N_Implementation(float Yaw, UAnimMontage* Montage); \
	virtual void M_SetDeferredUpdateYawMainMontage_N_Implementation(float Yaw); \
	virtual bool OnSetupCharacter_Implementation(FWrestlerSetupParam const& SetupParam, bool bEntrance, bool bSpecificEntrance); \
	virtual bool OnSetupPreset_Implementation(FPersonParam const& PersonParam, FPresetParam const& PresetParam, FAttireParam const& ExtraParts, bool bEntrance); \
	virtual bool OnSetupProfiles_Implementation(FWrestlerSetupParam const& SetupParam); \
	virtual bool ResetForceSyncMovement_Implementation(); \
	virtual void S_AddActorWorldOffset_N_Implementation(FVector const& AddLocation, bool bSweep, bool bTeleport); \
	virtual void S_AddActorWorldRotation_N_Implementation(FRotator const& AddRotation, bool bSweep, bool bTeleport); \
	virtual void S_PlayUpperBodyBlendMotion_N_Implementation(UAnimSequence* AnimSequence); \
	virtual void S_StopUpperBodyBlendMotion_N_Implementation(); \
	virtual void SetCharacterMesh_Implementation(USkeletalMesh* NewMesh, TArray<FName> const& InvisibleMaterialNames); \
	virtual void ShowSkeletalMeshMaterials_Implementation(USkeletalMeshComponent* Target, TArray<FName> const& TargetMaterialNames, bool bShow); \
	virtual void Tick_ObserveTagRingInAuthority_N_Implementation(); \
 \
	DECLARE_FUNCTION(execAimTarget_N); \
	DECLARE_FUNCTION(execBeginOverlap_HitCol_N); \
	DECLARE_FUNCTION(execBindDynamicMaterial); \
	DECLARE_FUNCTION(execBindNativeCapsuleComponentOverlapEvent); \
	DECLARE_FUNCTION(execCanAllOtherTargetDown_N); \
	DECLARE_FUNCTION(execCanApronChainActionOperate_N); \
	DECLARE_FUNCTION(execCanChainGrappleActionOperate_N); \
	DECLARE_FUNCTION(execCanChainStateActionOperate_N); \
	DECLARE_FUNCTION(execCanCornerChainActionOperate_N); \
	DECLARE_FUNCTION(execCanEnvironmentActionOperate_N); \
	DECLARE_FUNCTION(execCanNaviOperate_N); \
	DECLARE_FUNCTION(execCanOperateDownPinchMove_N); \
	DECLARE_FUNCTION(execCanPlayApronSingleAvoid_N); \
	DECLARE_FUNCTION(execCanRise_N); \
	DECLARE_FUNCTION(execCanRopeChainActionOperate_N); \
	DECLARE_FUNCTION(execCanRunStrikeOperate_N); \
	DECLARE_FUNCTION(execCanTopLadderOperate_N); \
	DECLARE_FUNCTION(execCanTutorialAllComplete_N); \
	DECLARE_FUNCTION(execCanUpperBodyBlend_N); \
	DECLARE_FUNCTION(execCE_M_SetORMovement_N); \
	DECLARE_FUNCTION(execChangedTagWait); \
	DECLARE_FUNCTION(execChangeMesh); \
	DECLARE_FUNCTION(execCheckMainMontage); \
	DECLARE_FUNCTION(execCheckMainMontage_N); \
	DECLARE_FUNCTION(execCheckOtherTargetDistance_N); \
	DECLARE_FUNCTION(execCheckPassiveSkill_Over); \
	DECLARE_FUNCTION(execCheckPassiveSkill_Under); \
	DECLARE_FUNCTION(execCheckRinginOutCollisionOperate_N); \
	DECLARE_FUNCTION(execCheckTutorial_AddMomentumMeter); \
	DECLARE_FUNCTION(execCheckUpperBodyBlendCondition_HP_N); \
	DECLARE_FUNCTION(execCheckUpperBodyBlendCondition_PassiveSkill_N); \
	DECLARE_FUNCTION(execDetachPartIK); \
	DECLARE_FUNCTION(execDisableAttackCollisionList_N); \
	DECLARE_FUNCTION(execEndOverlap_HitCol_N); \
	DECLARE_FUNCTION(execExcuteBeginOverlapPlayerBarrier_N); \
	DECLARE_FUNCTION(execExcuteBeginOverlapPlayerCapsule_N); \
	DECLARE_FUNCTION(execExcuteEndOverlapPlayerCapsule_N); \
	DECLARE_FUNCTION(execExecuteOverlap); \
	DECLARE_FUNCTION(execFinishRopeIK_N); \
	DECLARE_FUNCTION(execGeneratePercent); \
	DECLARE_FUNCTION(execGetAIDifficulty_N); \
	DECLARE_FUNCTION(execGetAIFightStyle_N); \
	DECLARE_FUNCTION(execGetAimingCenterForReferee_N); \
	DECLARE_FUNCTION(execGetAnimationUpdateParam_N); \
	DECLARE_FUNCTION(execGetAOnDamageANS_N); \
	DECLARE_FUNCTION(execGetBeforeInputMoveValue_N); \
	DECLARE_FUNCTION(execGetColllidionSurfaceDirection_N); \
	DECLARE_FUNCTION(execGetControllerID_N); \
	DECLARE_FUNCTION(execGetDeadReason); \
	DECLARE_FUNCTION(execGetDebugOption_Idle_N); \
	DECLARE_FUNCTION(execGetFootIKParam_N); \
	DECLARE_FUNCTION(execGetGameplayCharIndex_N); \
	DECLARE_FUNCTION(execGetHipOffsetForCutscene); \
	DECLARE_FUNCTION(execGetHPLevelImpl); \
	DECLARE_FUNCTION(execGetHPPercent_N); \
	DECLARE_FUNCTION(execGetLimbHPPercent_N); \
	DECLARE_FUNCTION(execGetMatchRule_N); \
	DECLARE_FUNCTION(execGetMeshHeight_N); \
	DECLARE_FUNCTION(execGetMiniGameMashSpeed_N); \
	DECLARE_FUNCTION(execGetMotionEndAnimNotifyMontage_N); \
	DECLARE_FUNCTION(execGetMovedDistance); \
	DECLARE_FUNCTION(execGetMoveWorldDirectionWithCamera_N); \
	DECLARE_FUNCTION(execGetNearestTagPartner_N); \
	DECLARE_FUNCTION(execGetNeckHormingTargetPlayerCore_N); \
	DECLARE_FUNCTION(execGetNowApronToRingYaw_Impl); \
	DECLARE_FUNCTION(execGetOldAIController); \
	DECLARE_FUNCTION(execGetOpponentManager_N); \
	DECLARE_FUNCTION(execGetOtherCharaHitInApron_N); \
	DECLARE_FUNCTION(execGetOtherTargetNearest_N); \
	DECLARE_FUNCTION(execGetOverlappingActor_N); \
	DECLARE_FUNCTION(execGetOverlappingActorTag_N); \
	DECLARE_FUNCTION(execGetPartIK_N); \
	DECLARE_FUNCTION(execGetPassiveSkillMomentumAddRate_N); \
	DECLARE_FUNCTION(execGetPassiveSkillSrcParam_N); \
	DECLARE_FUNCTION(execGetPinMiniGame_N); \
	DECLARE_FUNCTION(execGetPlayerColor_N); \
	DECLARE_FUNCTION(execGetPlayerIndex_N); \
	DECLARE_FUNCTION(execGetReferee_N); \
	DECLARE_FUNCTION(execGetRefereeClonedMesh); \
	DECLARE_FUNCTION(execGetRollOutDownState_N); \
	DECLARE_FUNCTION(execGetSocketTransform_N); \
	DECLARE_FUNCTION(execGetSubmissionMiniGame_N); \
	DECLARE_FUNCTION(execGetSyncChar_N); \
	DECLARE_FUNCTION(execGetSyncCharArray); \
	DECLARE_FUNCTION(execGetSyncJAAnimNotifyMontage_N); \
	DECLARE_FUNCTION(execGetTargetActor_N); \
	DECLARE_FUNCTION(execGetTouchLeaveRing); \
	DECLARE_FUNCTION(execGetWorkHipOffsetForCutscene); \
	DECLARE_FUNCTION(execGetWrestlerName); \
	DECLARE_FUNCTION(execGetWrestlerNameProfileParam); \
	DECLARE_FUNCTION(execGetWrestlerProfile); \
	DECLARE_FUNCTION(execIsAIController_N); \
	DECLARE_FUNCTION(execIsAllowAutoTrackingMotion_N); \
	DECLARE_FUNCTION(execIsAnyApron_N); \
	DECLARE_FUNCTION(execIsApronToRing_N); \
	DECLARE_FUNCTION(execIsApronToRingChain_N); \
	DECLARE_FUNCTION(execIsApronWalk_N); \
	DECLARE_FUNCTION(execIsAttachWeapon_N); \
	DECLARE_FUNCTION(execIsAutoFinisherFlow_N); \
	DECLARE_FUNCTION(execIsAutoPinFlow_N); \
	DECLARE_FUNCTION(execIsAutoSignatureFlow_N); \
	DECLARE_FUNCTION(execIsBarricadeClimbLoop_N); \
	DECLARE_FUNCTION(execIsBattleRoyaleEntrance_N); \
	DECLARE_FUNCTION(execIsBattleRoyaleRingInRun_N); \
	DECLARE_FUNCTION(execIsBlockLoopPose_N); \
	DECLARE_FUNCTION(execIsBlockPose_N); \
	DECLARE_FUNCTION(execIsChainCheckMotion_N); \
	DECLARE_FUNCTION(execIsChainGrappleCancelMotion_N); \
	DECLARE_FUNCTION(execIsChainGrappleMove_N); \
	DECLARE_FUNCTION(execIsChainGrappleTagPartnerAttackReaction_Attacker_N); \
	DECLARE_FUNCTION(execIsChainState_N); \
	DECLARE_FUNCTION(execIsChainWrestling_N); \
	DECLARE_FUNCTION(execIsChainWrestlingLoop_N); \
	DECLARE_FUNCTION(execIsCornerChain_N); \
	DECLARE_FUNCTION(execIsCornerGroggy_N); \
	DECLARE_FUNCTION(execIsCornerGroggyBack_N); \
	DECLARE_FUNCTION(execIsCornerGroggyFront_N); \
	DECLARE_FUNCTION(execIsCornerSetupMotion_N); \
	DECLARE_FUNCTION(execIsCornerTop_N); \
	DECLARE_FUNCTION(execIsCornerTopOrRiseMotion_N); \
	DECLARE_FUNCTION(execIsDamageReaction_N); \
	DECLARE_FUNCTION(execIsDashRingOut_N); \
	DECLARE_FUNCTION(execIsDead_N); \
	DECLARE_FUNCTION(execIsDiving_N); \
	DECLARE_FUNCTION(execIsDivingInterception_N); \
	DECLARE_FUNCTION(execIsDivingInterceptionDamage_N); \
	DECLARE_FUNCTION(execIsDivingSyncAttack_N); \
	DECLARE_FUNCTION(execIsDivingSyncDamage_N); \
	DECLARE_FUNCTION(execIsDown_N); \
	DECLARE_FUNCTION(execIsDownFaceDown_N); \
	DECLARE_FUNCTION(execIsDownFaceUp_N); \
	DECLARE_FUNCTION(execIsDownJumpOver_N); \
	DECLARE_FUNCTION(execIsDownMontage_N); \
	DECLARE_FUNCTION(execIsDownPainReactionMotion_N); \
	DECLARE_FUNCTION(execIsDQCautionMotion_N); \
	DECLARE_FUNCTION(execIsEnableActionSkill_N); \
	DECLARE_FUNCTION(execIsEnableAOn_N); \
	DECLARE_FUNCTION(execIsEnableHeightAdjust_N); \
	DECLARE_FUNCTION(execIsEnablePassiveSkillSituation_N); \
	DECLARE_FUNCTION(execIsEnableRule_AnywherePin_N); \
	DECLARE_FUNCTION(execIsEnableRule_AnywhereSubmission_N); \
	DECLARE_FUNCTION(execIsEnableRule_BattleRoyale_N); \
	DECLARE_FUNCTION(execIsEnableRule_ChainWrestring_N); \
	DECLARE_FUNCTION(execIsEnableRule_ChopBattle_N); \
	DECLARE_FUNCTION(execIsEnableRule_Combination_N); \
	DECLARE_FUNCTION(execIsEnableRule_DispTargetLine_N); \
	DECLARE_FUNCTION(execIsEnableRule_DoubleTeamMove_N); \
	DECLARE_FUNCTION(execIsEnableRule_DQ_N); \
	DECLARE_FUNCTION(execIsEnableRule_ExplodingBarbedWireDeathMatch_N); \
	DECLARE_FUNCTION(execIsEnableRule_Gauntlet_N); \
	DECLARE_FUNCTION(execIsEnableRule_GroupBattleRoyale_N); \
	DECLARE_FUNCTION(execIsEnableRule_GuideHUD_N); \
	DECLARE_FUNCTION(execIsEnableRule_HostDeadQuitMatch_N); \
	DECLARE_FUNCTION(execIsEnableRule_HostOnlyPinSub_N); \
	DECLARE_FUNCTION(execIsEnableRule_Indicator_N); \
	DECLARE_FUNCTION(execIsEnableRule_Interval_N); \
	DECLARE_FUNCTION(execIsEnableRule_KnockOut_N); \
	DECLARE_FUNCTION(execIsEnableRule_Ladder_N); \
	DECLARE_FUNCTION(execIsEnableRule_LightsOut_N); \
	DECLARE_FUNCTION(execIsEnableRule_ManualTarget_N); \
	DECLARE_FUNCTION(execIsEnableRule_OvertheTopRope_N); \
	DECLARE_FUNCTION(execIsEnableRule_Pin_N); \
	DECLARE_FUNCTION(execIsEnableRule_RingEscape_N); \
	DECLARE_FUNCTION(execIsEnableRule_RingOnly_N); \
	DECLARE_FUNCTION(execIsEnableRule_SoloBattleRoyale_N); \
	DECLARE_FUNCTION(execIsEnableRule_StrikeFight_N); \
	DECLARE_FUNCTION(execIsEnableRule_Submission_N); \
	DECLARE_FUNCTION(execIsEnableRule_TagMove_N); \
	DECLARE_FUNCTION(execIsEnableRule_TornadoTag_N); \
	DECLARE_FUNCTION(execIsEnableRule_TraningMode_N); \
	DECLARE_FUNCTION(execIsEnableSyncBarrierCollision); \
	DECLARE_FUNCTION(execIsEnableTutorial); \
	DECLARE_FUNCTION(execIsEnableTutorialTrainingMode); \
	DECLARE_FUNCTION(execIsEnableUpperBodyBlend_N); \
	DECLARE_FUNCTION(execIsEnableWeightDetection_N); \
	DECLARE_FUNCTION(execIsEnvGroggy_N); \
	DECLARE_FUNCTION(execIsExplodingOvertheTopRopeMotion_N); \
	DECLARE_FUNCTION(execIsForceSyncMovement); \
	DECLARE_FUNCTION(execIsFrontBackChainAllMontage_N); \
	DECLARE_FUNCTION(execIsFrontChainAll_N); \
	DECLARE_FUNCTION(execIsGrappleGuardPose_N); \
	DECLARE_FUNCTION(execIsGroggy_N); \
	DECLARE_FUNCTION(execIsGroggyLoop_N); \
	DECLARE_FUNCTION(execIsGroggyMove_N); \
	DECLARE_FUNCTION(execIsHandsInPocketMotion_N); \
	DECLARE_FUNCTION(execIsHideGuideHudCornerTurnOver_N); \
	DECLARE_FUNCTION(execIsIdleMotion_N); \
	DECLARE_FUNCTION(execIsIrishWhipRunState_N); \
	DECLARE_FUNCTION(execIsIWThrow_N); \
	DECLARE_FUNCTION(execIsKickCatchLoopMotion_N); \
	DECLARE_FUNCTION(execIsKneekingLoopMotion_N); \
	DECLARE_FUNCTION(execIsLadderClimbStartMotion_N); \
	DECLARE_FUNCTION(execIsLadderMidEndure_N); \
	DECLARE_FUNCTION(execIsLadderMidTilt_N); \
	DECLARE_FUNCTION(execIsLadderMidTiltDamageReaction_N); \
	DECLARE_FUNCTION(execIsLadderMiniGameForceSuccess); \
	DECLARE_FUNCTION(execIsLadderTopLoopMotion_N); \
	DECLARE_FUNCTION(execIsLastChainWrestlingAttack_N); \
	DECLARE_FUNCTION(execIsLastChainWrestlingDefence_N); \
	DECLARE_FUNCTION(execIsLastChainWrestlingPositionChange_N); \
	DECLARE_FUNCTION(execIsLastRiseUpAttack_N); \
	DECLARE_FUNCTION(execIsLongDownMotion_N); \
	DECLARE_FUNCTION(execIsMainMontage_N); \
	DECLARE_FUNCTION(execIsManager_N); \
	DECLARE_FUNCTION(execIsManagerInterferedMotion_N); \
	DECLARE_FUNCTION(execIsMomentumMeterRemoveStop_N); \
	DECLARE_FUNCTION(execIsNaviDirEnd_N); \
	DECLARE_FUNCTION(execIsNaviDirStartAndLoop_N); \
	DECLARE_FUNCTION(execIsNavigation_N); \
	DECLARE_FUNCTION(execIsNavigationMontage_N); \
	DECLARE_FUNCTION(execIsNoAbilityReactionMotion_N); \
	DECLARE_FUNCTION(execIsObstructionMotion_N); \
	DECLARE_FUNCTION(execIsOutOfSyncMovement); \
	DECLARE_FUNCTION(execIsOverTheTopRopeHangRopeLoopMotion_N); \
	DECLARE_FUNCTION(execIsOverTheTopRopeHangRopePlayDamageSituation_N); \
	DECLARE_FUNCTION(execIsPin); \
	DECLARE_FUNCTION(execIsPinchMoveReach_N); \
	DECLARE_FUNCTION(execIsPlaceRing_N); \
	DECLARE_FUNCTION(execIsPlayingLadderMiniGame); \
	DECLARE_FUNCTION(execIsPlayingMiniGame_N); \
	DECLARE_FUNCTION(execIsRecuperabilityMotion_N); \
	DECLARE_FUNCTION(execIsReferee_N); \
	DECLARE_FUNCTION(execIsReplayState_N); \
	DECLARE_FUNCTION(execIsRequestRollOut_N); \
	DECLARE_FUNCTION(execIsReverseDirectionInput_N); \
	DECLARE_FUNCTION(execIsRingInOrApronToRing_N); \
	DECLARE_FUNCTION(execIsRingInOut_N); \
	DECLARE_FUNCTION(execIsRingOutCountLoopMotion_N); \
	DECLARE_FUNCTION(execIsRingOutCountMotion_N); \
	DECLARE_FUNCTION(execIsRingSideToApron_N); \
	DECLARE_FUNCTION(execIsRingToApronChain_N); \
	DECLARE_FUNCTION(execIsRiseUp_N); \
	DECLARE_FUNCTION(execIsRopeBreak); \
	DECLARE_FUNCTION(execIsRopeChain_N); \
	DECLARE_FUNCTION(execIsRopeGroggy_N); \
	DECLARE_FUNCTION(execIsRopeRebound_N); \
	DECLARE_FUNCTION(execIsRun_N); \
	DECLARE_FUNCTION(execIsRunEnd_N); \
	DECLARE_FUNCTION(execIsRunLoop_N); \
	DECLARE_FUNCTION(execIsRunOrRopeRebound_N); \
	DECLARE_FUNCTION(execIsRunState_N); \
	DECLARE_FUNCTION(execIsShowGuideHudPinfall_N); \
	DECLARE_FUNCTION(execIsSitDown_N); \
	DECLARE_FUNCTION(execIsSpecialTaunt_N); \
	DECLARE_FUNCTION(execIsStandChainGrapple_N); \
	DECLARE_FUNCTION(execIsStandChainGrappleLoop_N); \
	DECLARE_FUNCTION(execIsStandSituation_N); \
	DECLARE_FUNCTION(execIsStartOfMatchMotion_N); \
	DECLARE_FUNCTION(execIsStepMotion_N); \
	DECLARE_FUNCTION(execIsStrongSetUpActionReach_N); \
	DECLARE_FUNCTION(execIsSubmission_N); \
	DECLARE_FUNCTION(execIsSync_N); \
	DECLARE_FUNCTION(execIsSyncMainSlot_N); \
	DECLARE_FUNCTION(execIsSyncWith_N); \
	DECLARE_FUNCTION(execIsSystemChar_N); \
	DECLARE_FUNCTION(execIsTableTopDown_N); \
	DECLARE_FUNCTION(execIsTagTouch_N); \
	DECLARE_FUNCTION(execIsTagWait_N); \
	DECLARE_FUNCTION(execIsTagWakeupGroggyDamageReaction_N); \
	DECLARE_FUNCTION(execIsTaunt_N); \
	DECLARE_FUNCTION(execIsTauntMotion_N); \
	DECLARE_FUNCTION(execIsUseMouthMaskParts_N); \
	DECLARE_FUNCTION(execIsWakeUpTauntWakeUpMotion_N); \
	DECLARE_FUNCTION(execIsWalk_N); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressA); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressB); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressX); \
	DECLARE_FUNCTION(execLadderMatchMiniGameButtonPressY); \
	DECLARE_FUNCTION(execLadderMatchMiniGameCancel); \
	DECLARE_FUNCTION(execLadderMatchMiniGameCancelServer); \
	DECLARE_FUNCTION(execLadderMatchMiniGameOnFailedEvent); \
	DECLARE_FUNCTION(execLadderMatchMiniGameOnProgressEvent); \
	DECLARE_FUNCTION(execLadderMatchMiniGameSetProgress); \
	DECLARE_FUNCTION(execLadderMatchMiniGameStart); \
	DECLARE_FUNCTION(execLadderMatchMiniGameStartServer); \
	DECLARE_FUNCTION(execM_SetActorLocation_N); \
	DECLARE_FUNCTION(execM_SetActorLocationAndRotation_N); \
	DECLARE_FUNCTION(execM_SetActorRotation_N); \
	DECLARE_FUNCTION(execM_SetDeferredUpdateYaw_N); \
	DECLARE_FUNCTION(execM_SetDeferredUpdateYawMainMontage_N); \
	DECLARE_FUNCTION(execOnChangedLastHitMovesSituationIndex); \
	DECLARE_FUNCTION(execOnChangedTrainingReversalKind); \
	DECLARE_FUNCTION(execOnDamageHPEvent_N); \
	DECLARE_FUNCTION(execOnMeterValuePenaltyEvent_N); \
	DECLARE_FUNCTION(execOnPlayActionSkillEvent_N); \
	DECLARE_FUNCTION(execOnPlayNormalTauntEvent_N); \
	DECLARE_FUNCTION(execOnPlayPassiveSkillEffectEvent_N); \
	DECLARE_FUNCTION(execOnRemoveGloveBuffEvent_N); \
	DECLARE_FUNCTION(execOnReversalEvent_N); \
	DECLARE_FUNCTION(execOnReverseDirectionEvent_N); \
	DECLARE_FUNCTION(execOnSetupCharacter); \
	DECLARE_FUNCTION(execOnSetupPreset); \
	DECLARE_FUNCTION(execOnSetupProfiles); \
	DECLARE_FUNCTION(execOnTakeControlBtn_N); \
	DECLARE_FUNCTION(execRequestTutorial_N); \
	DECLARE_FUNCTION(execResetCostume); \
	DECLARE_FUNCTION(execResetForceSyncMovement); \
	DECLARE_FUNCTION(execResetMeshMaterials); \
	DECLARE_FUNCTION(execResetWeaponDiffHeight); \
	DECLARE_FUNCTION(execS_AddActorWorldOffset_N); \
	DECLARE_FUNCTION(execS_AddActorWorldRotation_N); \
	DECLARE_FUNCTION(execS_PlayUpperBodyBlendMotion_N); \
	DECLARE_FUNCTION(execS_StopUpperBodyBlendMotion_N); \
	DECLARE_FUNCTION(execSetAttackCollisionEnable_N); \
	DECLARE_FUNCTION(execSetAttackCollisionListScale_N); \
	DECLARE_FUNCTION(execSetBattleRoyaleRingInRun_N); \
	DECLARE_FUNCTION(execSetBodyHoming_N); \
	DECLARE_FUNCTION(execSetBodyMask_N); \
	DECLARE_FUNCTION(execSetCharacterMesh); \
	DECLARE_FUNCTION(execSetCollisionsEnabled); \
	DECLARE_FUNCTION(execSetComponentsRelativeScale); \
	DECLARE_FUNCTION(execSetDamageReaction_CurrentMontage_N); \
	DECLARE_FUNCTION(execSetDeadReason); \
	DECLARE_FUNCTION(execSetDeferredUpdateDeltaLocation); \
	DECLARE_FUNCTION(execSetDeferredUpdateYaw); \
	DECLARE_FUNCTION(execSetEnableSyncBarrierCollision); \
	DECLARE_FUNCTION(execSetHipOffsetForCutscene); \
	DECLARE_FUNCTION(execSetIgnoreActorWhenMoving_N); \
	DECLARE_FUNCTION(execSetIsThreadTickAsync); \
	DECLARE_FUNCTION(execSetLadderMiniGameForceSuccess); \
	DECLARE_FUNCTION(execSetOldAIController); \
	DECLARE_FUNCTION(execSetOtherCharaHitInApron_N); \
	DECLARE_FUNCTION(execSetPinMontage); \
	DECLARE_FUNCTION(execSetPlayerBarrierCollisionSetting_N); \
	DECLARE_FUNCTION(execSetScalarParameterForMID); \
	DECLARE_FUNCTION(execSetSyncMotionAnyChar_N); \
	DECLARE_FUNCTION(execSetTextureParameterForMID); \
	DECLARE_FUNCTION(execSetTouchLeaveRing); \
	DECLARE_FUNCTION(execSetupBarrierCollisionOverlapEventBind); \
	DECLARE_FUNCTION(execSetupCharacter); \
	DECLARE_FUNCTION(execSetupPreset); \
	DECLARE_FUNCTION(execSetVectorParameterForMID); \
	DECLARE_FUNCTION(execSetWorkHipOffsetForCutscene); \
	DECLARE_FUNCTION(execSetWrestlerProfile); \
	DECLARE_FUNCTION(execShowSkeletalMeshMaterials); \
	DECLARE_FUNCTION(execSpawnSyncMotionMontage); \
	DECLARE_FUNCTION(execStartRopeIK_N); \
	DECLARE_FUNCTION(execTick_ObserveTagRingInAuthority_N); \
	DECLARE_FUNCTION(execTick_UpdateBodyHoming_N); \
	DECLARE_FUNCTION(execTick_UpdateUpperBodyBlend_N); \
	DECLARE_FUNCTION(execTickHomingOn_N); \
	DECLARE_FUNCTION(execTickUpdateAnimScaleZ_N); \
	DECLARE_FUNCTION(execTickUpdateHipOffset_N); \
	DECLARE_FUNCTION(execTickUpdateinGameDuration_N); \
	DECLARE_FUNCTION(execTickUpdateInterpolateCharaMeshLocation_N); \
	DECLARE_FUNCTION(execTickUpdateInterpolateLocationandRotation_N); \
	DECLARE_FUNCTION(execTickUpdateLiftState_N); \
	DECLARE_FUNCTION(execTickUpdateReserveReversal_N); \
	DECLARE_FUNCTION(execTriggerPassiveSkill_N); \
	DECLARE_FUNCTION(execTutorialEndEvent); \
	DECLARE_FUNCTION(execUnbindDynamicMaterial); \
	DECLARE_FUNCTION(execUpdateBothAOnHit_N); \
	DECLARE_FUNCTION(execUpdateReserveReversal_N); \
	DECLARE_FUNCTION(execUpdateTutorialHitReachCount); \
	DECLARE_FUNCTION(execUpdateUpperBodyBlend);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_EVENT_PARMS \
	struct ELCharacter_Native_eventCE_M_SetORMovement_N_Parms \
	{ \
		bool bValue; \
	}; \
	struct ELCharacter_Native_eventChangeMesh_Parms \
	{ \
		FELWrestlerMeshParam WrestlerMeshParam; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventChangeMesh_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventExcuteBeginOverlapPlayerCapsule_Impl_Parms \
	{ \
		UPrimitiveComponent* HitComp; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventExcuteBeginOverlapPlayerCapsule_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventExcuteEndOverlapPlayerCapsule_Impl_Parms \
	{ \
		UPrimitiveComponent* HitComp; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventExcuteEndOverlapPlayerCapsule_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetAchievementObserver_Impl_Parms \
	{ \
		UELAchievementObserver* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetAchievementObserver_Impl_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetBP_FootIKImpl_Parms \
	{ \
		UELFootIK* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetBP_FootIKImpl_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetCameraShake_Impl_Parms \
	{ \
		int32 Damagev; \
		TSubclassOf<UMatineeCameraShake>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetCameraShake_Impl_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetCrossingDistance_Impl_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetCrossingDistance_Impl_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetMomentumMeter_Parms \
	{ \
		UELMomentumMeterBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetMomentumMeter_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetRefereeClonedMesh_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetRefereeClonedMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetSeesawSystem_Parms \
	{ \
		UELSeesawSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetSeesawSystem_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetShockCounter_Impl_Parms \
	{ \
		UELShockCounter* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetShockCounter_Impl_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetTouchLeaveRingTimeMax_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetTouchLeaveRingTimeMax_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetWrestlerID_Native_Parms \
	{ \
		EWrestlerID_N ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetWrestlerID_Native_Parms() \
			: ReturnValue((EWrestlerID_N)0) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetWrestlerListIndex_Impl_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetWrestlerListIndex_Impl_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventGetWrestlerVoiceID_Native_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventGetWrestlerVoiceID_Native_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsAnyLadderMotion_N_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsAnyLadderMotion_N_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsEnableFootIK_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsEnableFootIK_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsEnablePinSituationTarget_Impl_Parms \
	{ \
		const AELCharacter_Native* Target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsEnablePinSituationTarget_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsEnableTutorialGrappleReversal_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsEnableTutorialGrappleReversal_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsEnableTutorialStrikeReversal_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsEnableTutorialStrikeReversal_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsForceSyncMovement_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsForceSyncMovement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsInvincible_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsInvincible_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsOutOfSyncMovement_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsOutOfSyncMovement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsPinOrPullUpDistance_Impl_Parms \
	{ \
		const AActor* Target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsPinOrPullUpDistance_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventIsPullUpMotion_N_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventIsPullUpMotion_N_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventLadderMatchMiniGameOnProgressEvent_Parms \
	{ \
		int32 Step; \
		bool Finish; \
	}; \
	struct ELCharacter_Native_eventLadderMatchMiniGameSetProgress_Parms \
	{ \
		int32 Step; \
		float Percent; \
	}; \
	struct ELCharacter_Native_eventLadderMatchMiniGameStartServer_Parms \
	{ \
		int32 StartProgress; \
		UAnimMontage* GrabLoopMontage; \
	}; \
	struct ELCharacter_Native_eventM_SetActorLocation_N_Parms \
	{ \
		FVector NewLocation; \
		bool bSweep; \
		bool bTeleport; \
	}; \
	struct ELCharacter_Native_eventM_SetActorLocationAndRotation_N_Parms \
	{ \
		FVector NewLocation; \
		FRotator NewRotation; \
		bool bSweep; \
		bool bTeleport; \
	}; \
	struct ELCharacter_Native_eventM_SetActorRotation_N_Parms \
	{ \
		FRotator NewRotation; \
		bool bTeleport; \
	}; \
	struct ELCharacter_Native_eventM_SetDeferredUpdateYaw_N_Parms \
	{ \
		float Yaw; \
		UAnimMontage* Montage; \
	}; \
	struct ELCharacter_Native_eventM_SetDeferredUpdateYawMainMontage_N_Parms \
	{ \
		float Yaw; \
	}; \
	struct ELCharacter_Native_eventMoveForward_Parms \
	{ \
		float AxisValue; \
	}; \
	struct ELCharacter_Native_eventMoveRight_Parms \
	{ \
		float AxisValue; \
	}; \
	struct ELCharacter_Native_eventOnChangeRefereeMeshMode_Parms \
	{ \
		ERefereeMeshMode inMode; \
	}; \
	struct ELCharacter_Native_eventOnSetupCharacter_Parms \
	{ \
		FWrestlerSetupParam SetupParam; \
		bool bEntrance; \
		bool bSpecificEntrance; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventOnSetupCharacter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventOnSetupPreset_Parms \
	{ \
		FPersonParam PersonParam; \
		FPresetParam PresetParam; \
		FAttireParam ExtraParts; \
		bool bEntrance; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventOnSetupPreset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventOnSetupProfiles_Parms \
	{ \
		FWrestlerSetupParam SetupParam; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventOnSetupProfiles_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventPlayDQRefereeVoice_Impl_Parms \
	{ \
		ERefereeDQReactionKind_N Kind; \
	}; \
	struct ELCharacter_Native_eventPlayMontage_Impl_Parms \
	{ \
		const UAnimMontage* Montage; \
	}; \
	struct ELCharacter_Native_eventPlayPassiveSkillEffectandCameraImpl_Parms \
	{ \
		FStPassiveSkillData Passive; \
	}; \
	struct ELCharacter_Native_eventRequestStartTutorial_Impl_Parms \
	{ \
		FName TutorialName; \
		bool IsHostPad; \
	}; \
	struct ELCharacter_Native_eventResetForceSyncMovement_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventResetForceSyncMovement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventS_AddActorWorldOffset_N_Parms \
	{ \
		FVector AddLocation; \
		bool bSweep; \
		bool bTeleport; \
	}; \
	struct ELCharacter_Native_eventS_AddActorWorldRotation_N_Parms \
	{ \
		FRotator AddRotation; \
		bool bSweep; \
		bool bTeleport; \
	}; \
	struct ELCharacter_Native_eventS_PlayUpperBodyBlendMotion_N_Parms \
	{ \
		UAnimSequence* AnimSequence; \
	}; \
	struct ELCharacter_Native_eventSetCharacterMesh_Parms \
	{ \
		USkeletalMesh* NewMesh; \
		TArray<FName> InvisibleMaterialNames; \
	}; \
	struct ELCharacter_Native_eventShowSkeletalMeshMaterials_Parms \
	{ \
		USkeletalMeshComponent* Target; \
		TArray<FName> TargetMaterialNames; \
		bool bShow; \
	}; \
	struct ELCharacter_Native_eventTauntStick_Parms \
	{ \
		float AxisValue; \
	}; \
	struct ELCharacter_Native_eventTick_IntervalTutorial_Impl_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct ELCharacter_Native_eventTick_ObserveApronOtherCharaHit_CheckHangRopeDamage_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_ObserveApronOtherCharaHit_CheckHangRopeDamage_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_ObserveApronOtherCharaHit_CheckInApron_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_ObserveApronOtherCharaHit_CheckInApron_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateBlockPose_PlayBlockPoseEnter_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateBlockPose_PlayBlockPoseEnter_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateBlockPose_PlayBlockPoseLeave_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateBlockPose_PlayBlockPoseLeave_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateCheckTimerToPlayAnimation_CheckPullUpCount_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateCheckTimerToPlayAnimation_CheckPullUpCount_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateCheckTimerToPlayAnimation_HangRope_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateCheckTimerToPlayAnimation_HangRope_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateDivingLanding_CheckLanding_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateDivingLanding_CheckLanding_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateDivingLanding_CheckPendingHit_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateDivingLanding_CheckPendingHit_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateGrappleGuard_PlayGrappleGuardPoseEnter_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateGrappleGuard_PlayGrappleGuardPoseEnter_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateGrappleGuard_PlayGrappleGuardPoseLeave_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateGrappleGuard_PlayGrappleGuardPoseLeave_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateLadderGrabObject_FaleSafe_Impl_Parms \
	{ \
		bool DoneFaleSafe; \
	}; \
	struct ELCharacter_Native_eventTick_UpdateLadderGrabObject_UpdateDuration_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateLadderGrabObject_UpdateDuration_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateRunStop_FaleSafeApronLanding_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateRunStop_FaleSafeApronLanding_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateRunStop_SameLocationStop_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateRunStop_SameLocationStop_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventTick_UpdateRunStop_WalkToOtherChara_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventTick_UpdateRunStop_WalkToOtherChara_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventUpdateOverlapWeapon_Impl_Parms \
	{ \
		AActor* Weapon; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCharacter_Native_eventUpdateOverlapWeapon_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCharacter_Native_eventUpdatePassiveSkillTriggerCountImpl_Parms \
	{ \
		int32 PassiveSkillIndex; \
		float Time; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCharacter_Native(); \
	friend struct Z_Construct_UClass_AELCharacter_Native_Statics; \
public: \
	DECLARE_CLASS(AELCharacter_Native, AELNetCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCharacter_Native) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AnimScaleZ=NETFIELD_REP_START, \
		TargetActor, \
		LastPlayUpperBodyBlendMontage, \
		bAIController_N, \
		DamageReactionMontage_N, \
		GrappleReachMontage_N, \
		StrongGrappleReachMontage_N, \
		DownMontage_N, \
		GroggyMontage_N, \
		GroggyMontageLoop_N, \
		SubmissionMontage_N, \
		TauntMontage_N, \
		SpecialTauntMontage_N, \
		SetUpActionReachMontage_N, \
		StrongSetUpActionReachMontage_N, \
		LastRiseUpAttackMontage_N, \
		LastChainWrestlingAttackMontage_N, \
		LastChainWrestlingDefenceMontage_N, \
		LastChainWrestlingPositionChangeMontage_N, \
		ReserveLandingWhipMontage_N, \
		LastDivingSyncAttackMontage_N, \
		LastDivingSyncDamageMontage_N, \
		LastRiseUpMontage_N, \
		AnimPoseType_N, \
		MovesDamageLv_N, \
		SpecialMovesType_N, \
		MovesDownValue_N, \
		MovesGroggyValue_N, \
		MovesHitEffectValue_N, \
		MovesValue_UniqueIndex_N, \
		MovesType_N, \
		MovesCategoryValue_N, \
		AttackKind_N, \
		MiniGameMashInputs_N, \
		HP_N, \
		LimbHP_N, \
		NavigationDirectionValue_N, \
		PinMontage_N, \
		NETFIELD_REP_END=PinMontage_N	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_INCLASS \
private: \
	static void StaticRegisterNativesAELCharacter_Native(); \
	friend struct Z_Construct_UClass_AELCharacter_Native_Statics; \
public: \
	DECLARE_CLASS(AELCharacter_Native, AELNetCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCharacter_Native) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AnimScaleZ=NETFIELD_REP_START, \
		TargetActor, \
		LastPlayUpperBodyBlendMontage, \
		bAIController_N, \
		DamageReactionMontage_N, \
		GrappleReachMontage_N, \
		StrongGrappleReachMontage_N, \
		DownMontage_N, \
		GroggyMontage_N, \
		GroggyMontageLoop_N, \
		SubmissionMontage_N, \
		TauntMontage_N, \
		SpecialTauntMontage_N, \
		SetUpActionReachMontage_N, \
		StrongSetUpActionReachMontage_N, \
		LastRiseUpAttackMontage_N, \
		LastChainWrestlingAttackMontage_N, \
		LastChainWrestlingDefenceMontage_N, \
		LastChainWrestlingPositionChangeMontage_N, \
		ReserveLandingWhipMontage_N, \
		LastDivingSyncAttackMontage_N, \
		LastDivingSyncDamageMontage_N, \
		LastRiseUpMontage_N, \
		AnimPoseType_N, \
		MovesDamageLv_N, \
		SpecialMovesType_N, \
		MovesDownValue_N, \
		MovesGroggyValue_N, \
		MovesHitEffectValue_N, \
		MovesValue_UniqueIndex_N, \
		MovesType_N, \
		MovesCategoryValue_N, \
		AttackKind_N, \
		MiniGameMashInputs_N, \
		HP_N, \
		LimbHP_N, \
		NavigationDirectionValue_N, \
		PinMontage_N, \
		NETFIELD_REP_END=PinMontage_N	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCharacter_Native(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCharacter_Native) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCharacter_Native); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCharacter_Native); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCharacter_Native(AELCharacter_Native&&); \
	NO_API AELCharacter_Native(const AELCharacter_Native&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCharacter_Native(AELCharacter_Native&&); \
	NO_API AELCharacter_Native(const AELCharacter_Native&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCharacter_Native); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCharacter_Native); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCharacter_Native)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SeesawSystem_N() { return STRUCT_OFFSET(AELCharacter_Native, SeesawSystem_N); } \
	FORCEINLINE static uint32 __PPO__AchievementObserver_N() { return STRUCT_OFFSET(AELCharacter_Native, AchievementObserver_N); } \
	FORCEINLINE static uint32 __PPO__ShockCounter_N() { return STRUCT_OFFSET(AELCharacter_Native, ShockCounter_N); } \
	FORCEINLINE static uint32 __PPO__MainMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, MainMontage_N); } \
	FORCEINLINE static uint32 __PPO__SyncMotion() { return STRUCT_OFFSET(AELCharacter_Native, SyncMotion); } \
	FORCEINLINE static uint32 __PPO__AttackCollisionList() { return STRUCT_OFFSET(AELCharacter_Native, AttackCollisionList); } \
	FORCEINLINE static uint32 __PPO__HitColList() { return STRUCT_OFFSET(AELCharacter_Native, HitColList); } \
	FORCEINLINE static uint32 __PPO__PlayerBarrierList() { return STRUCT_OFFSET(AELCharacter_Native, PlayerBarrierList); } \
	FORCEINLINE static uint32 __PPO__HitCol_Top_OverlapCounter() { return STRUCT_OFFSET(AELCharacter_Native, HitCol_Top_OverlapCounter); } \
	FORCEINLINE static uint32 __PPO__HipOffsetCurve() { return STRUCT_OFFSET(AELCharacter_Native, HipOffsetCurve); } \
	FORCEINLINE static uint32 __PPO__HipOffsetProgress() { return STRUCT_OFFSET(AELCharacter_Native, HipOffsetProgress); } \
	FORCEINLINE static uint32 __PPO__bWorkHipOffset() { return STRUCT_OFFSET(AELCharacter_Native, bWorkHipOffset); } \
	FORCEINLINE static uint32 __PPO__HipOffsetLocation() { return STRUCT_OFFSET(AELCharacter_Native, HipOffsetLocation); } \
	FORCEINLINE static uint32 __PPO__bSyncLiftState() { return STRUCT_OFFSET(AELCharacter_Native, bSyncLiftState); } \
	FORCEINLINE static uint32 __PPO__bSyncFloatState() { return STRUCT_OFFSET(AELCharacter_Native, bSyncFloatState); } \
	FORCEINLINE static uint32 __PPO__bSyncLiftedState() { return STRUCT_OFFSET(AELCharacter_Native, bSyncLiftedState); } \
	FORCEINLINE static uint32 __PPO__SyncOffState() { return STRUCT_OFFSET(AELCharacter_Native, SyncOffState); } \
	FORCEINLINE static uint32 __PPO__WeightDetectionLiftSec() { return STRUCT_OFFSET(AELCharacter_Native, WeightDetectionLiftSec); } \
	FORCEINLINE static uint32 __PPO__BackupPlayRate_WeightDetection() { return STRUCT_OFFSET(AELCharacter_Native, BackupPlayRate_WeightDetection); } \
	FORCEINLINE static uint32 __PPO__SyncLiftBodyWeightType() { return STRUCT_OFFSET(AELCharacter_Native, SyncLiftBodyWeightType); } \
	FORCEINLINE static uint32 __PPO__SyncFloatBodyWeightType() { return STRUCT_OFFSET(AELCharacter_Native, SyncFloatBodyWeightType); } \
	FORCEINLINE static uint32 __PPO__BodyWeightType() { return STRUCT_OFFSET(AELCharacter_Native, BodyWeightType); } \
	FORCEINLINE static uint32 __PPO__MeshHeight_N() { return STRUCT_OFFSET(AELCharacter_Native, MeshHeight_N); } \
	FORCEINLINE static uint32 __PPO__MeshScale() { return STRUCT_OFFSET(AELCharacter_Native, MeshScale); } \
	FORCEINLINE static uint32 __PPO__AnimScaleZ() { return STRUCT_OFFSET(AELCharacter_Native, AnimScaleZ); } \
	FORCEINLINE static uint32 __PPO__bEnableWeightDetection() { return STRUCT_OFFSET(AELCharacter_Native, bEnableWeightDetection); } \
	FORCEINLINE static uint32 __PPO__InGameDuration() { return STRUCT_OFFSET(AELCharacter_Native, InGameDuration); } \
	FORCEINLINE static uint32 __PPO__PlaceRing() { return STRUCT_OFFSET(AELCharacter_Native, PlaceRing); } \
	FORCEINLINE static uint32 __PPO__BeforeLeftStickForwardValue() { return STRUCT_OFFSET(AELCharacter_Native, BeforeLeftStickForwardValue); } \
	FORCEINLINE static uint32 __PPO__BeforeLeftStickRIghtValue() { return STRUCT_OFFSET(AELCharacter_Native, BeforeLeftStickRIghtValue); } \
	FORCEINLINE static uint32 __PPO__bEnableReserveEnvironmentThrowReach() { return STRUCT_OFFSET(AELCharacter_Native, bEnableReserveEnvironmentThrowReach); } \
	FORCEINLINE static uint32 __PPO__ReserveEnvironmentThrowDirection() { return STRUCT_OFFSET(AELCharacter_Native, ReserveEnvironmentThrowDirection); } \
	FORCEINLINE static uint32 __PPO__ReserveEnvironmentThrowCollision() { return STRUCT_OFFSET(AELCharacter_Native, ReserveEnvironmentThrowCollision); } \
	FORCEINLINE static uint32 __PPO__InterpolateEnd() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateEnd); } \
	FORCEINLINE static uint32 __PPO__InterpolateSweep() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateSweep); } \
	FORCEINLINE static uint32 __PPO__InterpolateProgressTime() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateProgressTime); } \
	FORCEINLINE static uint32 __PPO__InterpolateTime() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateTime); } \
	FORCEINLINE static uint32 __PPO__InterpolateAddPosition() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateAddPosition); } \
	FORCEINLINE static uint32 __PPO__InterpolateLastAddPosition() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateLastAddPosition); } \
	FORCEINLINE static uint32 __PPO__InterpolateAddRotation() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateAddRotation); } \
	FORCEINLINE static uint32 __PPO__InterpolateLastAddRotation() { return STRUCT_OFFSET(AELCharacter_Native, InterpolateLastAddRotation); } \
	FORCEINLINE static uint32 __PPO__ChainWrestlingCount() { return STRUCT_OFFSET(AELCharacter_Native, ChainWrestlingCount); } \
	FORCEINLINE static uint32 __PPO__ReserveRapidPenaltyRemains() { return STRUCT_OFFSET(AELCharacter_Native, ReserveRapidPenaltyRemains); } \
	FORCEINLINE static uint32 __PPO__ReserveReversalResetTimes() { return STRUCT_OFFSET(AELCharacter_Native, ReserveReversalResetTimes); } \
	FORCEINLINE static uint32 __PPO__ReserveReversals_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveReversals_N); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(AELCharacter_Native, TargetActor); } \
	FORCEINLINE static uint32 __PPO__BodyHomingType_N() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingType_N); } \
	FORCEINLINE static uint32 __PPO__BodyHomingAngle() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingAngle); } \
	FORCEINLINE static uint32 __PPO__BodyHomingRange() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingRange); } \
	FORCEINLINE static uint32 __PPO__BodyHomingInterpSpeed() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__BodyHomingQuickStartSec() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingQuickStartSec); } \
	FORCEINLINE static uint32 __PPO__BodyHomingQuickStart() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingQuickStart); } \
	FORCEINLINE static uint32 __PPO__BodyHormingOponentPartner() { return STRUCT_OFFSET(AELCharacter_Native, BodyHormingOponentPartner); } \
	FORCEINLINE static uint32 __PPO__BodyHomingBackHoming() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingBackHoming); } \
	FORCEINLINE static uint32 __PPO__TeamNo() { return STRUCT_OFFSET(AELCharacter_Native, TeamNo); } \
	FORCEINLINE static uint32 __PPO__UseDivingTakeoffActorYaw() { return STRUCT_OFFSET(AELCharacter_Native, UseDivingTakeoffActorYaw); } \
	FORCEINLINE static uint32 __PPO__UseDivingTakeoffActorYawBehind() { return STRUCT_OFFSET(AELCharacter_Native, UseDivingTakeoffActorYawBehind); } \
	FORCEINLINE static uint32 __PPO__DivingTakeoffHomingEndYaw() { return STRUCT_OFFSET(AELCharacter_Native, DivingTakeoffHomingEndYaw); } \
	FORCEINLINE static uint32 __PPO__BodyHomingWorkingDuration() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingWorkingDuration); } \
	FORCEINLINE static uint32 __PPO__BodyHomingDoneStepCheck() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingDoneStepCheck); } \
	FORCEINLINE static uint32 __PPO__bIsHorming() { return STRUCT_OFFSET(AELCharacter_Native, bIsHorming); } \
	FORCEINLINE static uint32 __PPO__bDisableNeckHomingState_N() { return STRUCT_OFFSET(AELCharacter_Native, bDisableNeckHomingState_N); } \
	FORCEINLINE static uint32 __PPO__bDead() { return STRUCT_OFFSET(AELCharacter_Native, bDead); } \
	FORCEINLINE static uint32 __PPO__bDisableAnimScale() { return STRUCT_OFFSET(AELCharacter_Native, bDisableAnimScale); } \
	FORCEINLINE static uint32 __PPO__WrestlerProfileSkill() { return STRUCT_OFFSET(AELCharacter_Native, WrestlerProfileSkill); } \
	FORCEINLINE static uint32 __PPO__LastPlayUpperBodyBlendMontage() { return STRUCT_OFFSET(AELCharacter_Native, LastPlayUpperBodyBlendMontage); } \
	FORCEINLINE static uint32 __PPO__LastUseUpperBodyBlendIndex() { return STRUCT_OFFSET(AELCharacter_Native, LastUseUpperBodyBlendIndex); } \
	FORCEINLINE static uint32 __PPO__UpperBodyBlendUpdateInfo() { return STRUCT_OFFSET(AELCharacter_Native, UpperBodyBlendUpdateInfo); } \
	FORCEINLINE static uint32 __PPO__EquipPassiveSkillInfos() { return STRUCT_OFFSET(AELCharacter_Native, EquipPassiveSkillInfos); } \
	FORCEINLINE static uint32 __PPO__LastMovementInoutVector() { return STRUCT_OFFSET(AELCharacter_Native, LastMovementInoutVector); } \
	FORCEINLINE static uint32 __PPO__DamageDebuff_DirectionReverse() { return STRUCT_OFFSET(AELCharacter_Native, DamageDebuff_DirectionReverse); } \
	FORCEINLINE static uint32 __PPO__CharacterProfilesClass() { return STRUCT_OFFSET(AELCharacter_Native, CharacterProfilesClass); } \
	FORCEINLINE static uint32 __PPO__CharacterProfiles() { return STRUCT_OFFSET(AELCharacter_Native, CharacterProfiles); } \
	FORCEINLINE static uint32 __PPO__bAIController_N() { return STRUCT_OFFSET(AELCharacter_Native, bAIController_N); } \
	FORCEINLINE static uint32 __PPO__bSetupAI_N() { return STRUCT_OFFSET(AELCharacter_Native, bSetupAI_N); } \
	FORCEINLINE static uint32 __PPO__AIDifficulty_N() { return STRUCT_OFFSET(AELCharacter_Native, AIDifficulty_N); } \
	FORCEINLINE static uint32 __PPO__AIFightStyle_N() { return STRUCT_OFFSET(AELCharacter_Native, AIFightStyle_N); } \
	FORCEINLINE static uint32 __PPO__bEnableAutoFinisherFlow_N() { return STRUCT_OFFSET(AELCharacter_Native, bEnableAutoFinisherFlow_N); } \
	FORCEINLINE static uint32 __PPO__bEnableAutoSignatureFlow_N() { return STRUCT_OFFSET(AELCharacter_Native, bEnableAutoSignatureFlow_N); } \
	FORCEINLINE static uint32 __PPO__bEnableCasualeModeAutoPinFlow_N() { return STRUCT_OFFSET(AELCharacter_Native, bEnableCasualeModeAutoPinFlow_N); } \
	FORCEINLINE static uint32 __PPO__bDebugOption_Idle_N() { return STRUCT_OFFSET(AELCharacter_Native, bDebugOption_Idle_N); } \
	FORCEINLINE static uint32 __PPO__TrainingModeAIType_N() { return STRUCT_OFFSET(AELCharacter_Native, TrainingModeAIType_N); } \
	FORCEINLINE static uint32 __PPO__DonePinchMoveCount_N() { return STRUCT_OFFSET(AELCharacter_Native, DonePinchMoveCount_N); } \
	FORCEINLINE static uint32 __PPO__RequestTagWaitReturn_N() { return STRUCT_OFFSET(AELCharacter_Native, RequestTagWaitReturn_N); } \
	FORCEINLINE static uint32 __PPO__RequestRingEscape_N() { return STRUCT_OFFSET(AELCharacter_Native, RequestRingEscape_N); } \
	FORCEINLINE static uint32 __PPO__RollOutDownState_N() { return STRUCT_OFFSET(AELCharacter_Native, RollOutDownState_N); } \
	FORCEINLINE static uint32 __PPO__DamageReactionMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, DamageReactionMontage_N); } \
	FORCEINLINE static uint32 __PPO__GrappleReachMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, GrappleReachMontage_N); } \
	FORCEINLINE static uint32 __PPO__StrongGrappleReachMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, StrongGrappleReachMontage_N); } \
	FORCEINLINE static uint32 __PPO__DownMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, DownMontage_N); } \
	FORCEINLINE static uint32 __PPO__GroggyMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, GroggyMontage_N); } \
	FORCEINLINE static uint32 __PPO__GroggyMontageLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, GroggyMontageLoop_N); } \
	FORCEINLINE static uint32 __PPO__SubmissionMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, SubmissionMontage_N); } \
	FORCEINLINE static uint32 __PPO__TauntMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, TauntMontage_N); } \
	FORCEINLINE static uint32 __PPO__SpecialTauntMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, SpecialTauntMontage_N); } \
	FORCEINLINE static uint32 __PPO__SetUpActionReachMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, SetUpActionReachMontage_N); } \
	FORCEINLINE static uint32 __PPO__StrongSetUpActionReachMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, StrongSetUpActionReachMontage_N); } \
	FORCEINLINE static uint32 __PPO__LastRiseUpAttackMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastRiseUpAttackMontage_N); } \
	FORCEINLINE static uint32 __PPO__LastChainWrestlingAttackMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastChainWrestlingAttackMontage_N); } \
	FORCEINLINE static uint32 __PPO__LastChainWrestlingDefenceMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastChainWrestlingDefenceMontage_N); } \
	FORCEINLINE static uint32 __PPO__LastChainWrestlingPositionChangeMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastChainWrestlingPositionChangeMontage_N); } \
	FORCEINLINE static uint32 __PPO__ReserveLandingWhipMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveLandingWhipMontage_N); } \
	FORCEINLINE static uint32 __PPO__LastDivingSyncAttackMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastDivingSyncAttackMontage_N); } \
	FORCEINLINE static uint32 __PPO__LastDivingSyncDamageMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastDivingSyncDamageMontage_N); } \
	FORCEINLINE static uint32 __PPO__LastRiseUpMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastRiseUpMontage_N); } \
	FORCEINLINE static uint32 __PPO__AnimPoseType_N() { return STRUCT_OFFSET(AELCharacter_Native, AnimPoseType_N); } \
	FORCEINLINE static uint32 __PPO__MovesDamageLv_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesDamageLv_N); } \
	FORCEINLINE static uint32 __PPO__SpecialMovesType_N() { return STRUCT_OFFSET(AELCharacter_Native, SpecialMovesType_N); } \
	FORCEINLINE static uint32 __PPO__MovesDownValue_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesDownValue_N); } \
	FORCEINLINE static uint32 __PPO__MovesGroggyValue_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesGroggyValue_N); } \
	FORCEINLINE static uint32 __PPO__MovesHitEffectValue_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesHitEffectValue_N); } \
	FORCEINLINE static uint32 __PPO__MovesValue_UniqueIndex_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesValue_UniqueIndex_N); } \
	FORCEINLINE static uint32 __PPO__MovesType_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesType_N); } \
	FORCEINLINE static uint32 __PPO__MovesCategoryValue_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesCategoryValue_N); } \
	FORCEINLINE static uint32 __PPO__AttackKind_N() { return STRUCT_OFFSET(AELCharacter_Native, AttackKind_N); } \
	FORCEINLINE static uint32 __PPO__LastUsePinchMoveMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, LastUsePinchMoveMotion_N); } \
	FORCEINLINE static uint32 __PPO__GameSystemParam_PinchMoveMomentumPercent() { return STRUCT_OFFSET(AELCharacter_Native, GameSystemParam_PinchMoveMomentumPercent); } \
	FORCEINLINE static uint32 __PPO__WeaponSystemMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, WeaponSystemMotion_N); } \
	FORCEINLINE static uint32 __PPO__ManagerSystemAnimation_N() { return STRUCT_OFFSET(AELCharacter_Native, ManagerSystemAnimation_N); } \
	FORCEINLINE static uint32 __PPO__RefereeSystemAnimation_N() { return STRUCT_OFFSET(AELCharacter_Native, RefereeSystemAnimation_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_CornerTop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_CornerTop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_AnyApron_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_AnyApron_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RingInOut_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RingInOut_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_WeaponRingInOut_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_WeaponRingInOut_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_HandsInPocket_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_HandsInPocket_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ChainMove_Front() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ChainMove_Front); } \
	FORCEINLINE static uint32 __PPO__MontageList_ChainMove_Back() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ChainMove_Back); } \
	FORCEINLINE static uint32 __PPO__MontageList_CornerChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_CornerChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RopeChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RopeChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ApronChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ApronChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_GrappleChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_GrappleChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ChainWrestlingLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ChainWrestlingLoop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_HandsInPocketPin_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_HandsInPocketPin_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_SystemInAirDamage_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_SystemInAirDamage_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Navigation_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Navigation_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Walk_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Walk_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Run_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Run_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Idle_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Idle_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_WeaponPickUpMotionEnd_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_WeaponPickUpMotionEnd_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RopeRebound_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RopeRebound_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RopeReboundStop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RopeReboundStop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_WalkEnd_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_WalkEnd_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Corner_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Corner_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_CornerGroggyFront_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_CornerGroggyFront_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_CornerGroggyBack_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_CornerGroggyBack_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_TableDownLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_TableDownLoop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_TableDownEnd_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_TableDownEnd_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_FrontCornerChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_FrontCornerChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_BackCornerChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_BackCornerChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RopeChainState_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RopeChainState_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_FrontAprontToRingChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_FrontAprontToRingChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_BackAprontToRingChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_BackAprontToRingChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RingToApronChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RingToApronChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_FrontChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_FrontChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_BackChain_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_BackChain_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RunStart_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RunStart_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RunEnd_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RunEnd_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_NavigationAll_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_NavigationAll_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_StandardIdle_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_StandardIdle_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_DownPainReaction_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_DownPainReaction_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_StepMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_StepMotion_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_StandChainGrappleLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_StandChainGrappleLoop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_TagTouch_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_TagTouch_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_TagWakeupGroggyDamageReaction_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_TagWakeupGroggyDamageReaction_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ChainGrappleCancel_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ChainGrappleCancel_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_NoAbilityReaction_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_NoAbilityReaction_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_CornerSetupMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_CornerSetupMotion_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RunLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RunLoop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_DashRingOut_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_DashRingOut_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Recuperability_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Recuperability_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_WakeUpTauntWakeUp_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_WakeUpTauntWakeUp_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_LongDown_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_LongDown_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ExplodingOvertheTopRope_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ExplodingOvertheTopRope_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_CornerTopOrRise_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_CornerTopOrRise_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Apron_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Apron_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_DivingInterception_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_DivingInterception_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_DivingInterceptionDamage_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_DivingInterceptionDamage_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RingSideToApron_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RingSideToApron_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ApronToRing_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ApronToRing_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_RingIn_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_RingIn_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ManagerInterfered_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ManagerInterfered_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_NaviDirStartAndLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_NaviDirStartAndLoop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_NaviDirEnd_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_NaviDirEnd_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_GroggyMove_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_GroggyMove_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_BlockPose_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_BlockPose_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_BlockLoopPose_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_BlockLoopPose_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_GrappleGuardPose_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_GrappleGuardPose_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ApronWalk_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ApronWalk_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_ChainGrappleTagPartnerAttackReaction_Attacker_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_ChainGrappleTagPartnerAttackReaction_Attacker_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_LadderMidEndure_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_LadderMidEndure_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_LadderMidTilt_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_LadderMidTilt_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_LadderMidTiltDamageReaction_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_LadderMidTiltDamageReaction_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_IWThrow_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_IWThrow_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_EnvGroggy_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_EnvGroggy_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_Taunt_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_Taunt_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_IrishWhipRun_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_IrishWhipRun_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_FrontChainAll_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_FrontChainAll_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_BackChainAll_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_BackChainAll_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_DownJumpOver_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_DownJumpOver_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_LadderTopLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_LadderTopLoop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_KickCatchLoopAttacker_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_KickCatchLoopAttacker_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_KickCatchLoopDefencer_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_KickCatchLoopDefencer_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_KneelingLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_KneelingLoop_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_AllowAutoTrackingMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_AllowAutoTrackingMotion_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_AutoTracking_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_AutoTracking_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_LadderClimbStartMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_LadderClimbStartMotion_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_HangRopeLoopMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_HangRopeLoopMotion_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_HangRopeCanDamageSituationRopeMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_HangRopeCanDamageSituationRopeMotion_N); } \
	FORCEINLINE static uint32 __PPO__MontageList_HangRopeCanDamageSituationCornerMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MontageList_HangRopeCanDamageSituationCornerMotion_N); } \
	FORCEINLINE static uint32 __PPO__MovesStepMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, MovesStepMotion_N); } \
	FORCEINLINE static uint32 __PPO__LastDivingMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, LastDivingMontage_N); } \
	FORCEINLINE static uint32 __PPO__BackupUpdatePlaceLocation_N() { return STRUCT_OFFSET(AELCharacter_Native, BackupUpdatePlaceLocation_N); } \
	FORCEINLINE static uint32 __PPO__RingActor_N() { return STRUCT_OFFSET(AELCharacter_Native, RingActor_N); } \
	FORCEINLINE static uint32 __PPO__bAlreadyDonePlaceRing_N() { return STRUCT_OFFSET(AELCharacter_Native, bAlreadyDonePlaceRing_N); } \
	FORCEINLINE static uint32 __PPO__OverlapRingType() { return STRUCT_OFFSET(AELCharacter_Native, OverlapRingType); } \
	FORCEINLINE static uint32 __PPO__OverlapRingFilter() { return STRUCT_OFFSET(AELCharacter_Native, OverlapRingFilter); } \
	FORCEINLINE static uint32 __PPO__ApronDashAttackLocationFix_N() { return STRUCT_OFFSET(AELCharacter_Native, ApronDashAttackLocationFix_N); } \
	FORCEINLINE static uint32 __PPO__bHideHud_N() { return STRUCT_OFFSET(AELCharacter_Native, bHideHud_N); } \
	FORCEINLINE static uint32 __PPO__HUDSlot_N() { return STRUCT_OFFSET(AELCharacter_Native, HUDSlot_N); } \
	FORCEINLINE static uint32 __PPO__bManager_N() { return STRUCT_OFFSET(AELCharacter_Native, bManager_N); } \
	FORCEINLINE static uint32 __PPO__PinMiniGame_N() { return STRUCT_OFFSET(AELCharacter_Native, PinMiniGame_N); } \
	FORCEINLINE static uint32 __PPO__SubmissionMiniGame_N() { return STRUCT_OFFSET(AELCharacter_Native, SubmissionMiniGame_N); } \
	FORCEINLINE static uint32 __PPO__bReplayState_N() { return STRUCT_OFFSET(AELCharacter_Native, bReplayState_N); } \
	FORCEINLINE static uint32 __PPO__ControllerID_N() { return STRUCT_OFFSET(AELCharacter_Native, ControllerID_N); } \
	FORCEINLINE static uint32 __PPO__bBattleRoyaleEntrance_N() { return STRUCT_OFFSET(AELCharacter_Native, bBattleRoyaleEntrance_N); } \
	FORCEINLINE static uint32 __PPO__bBattleRoyaleRingInRun_N() { return STRUCT_OFFSET(AELCharacter_Native, bBattleRoyaleRingInRun_N); } \
	FORCEINLINE static uint32 __PPO__MiniGameMashInputs_N() { return STRUCT_OFFSET(AELCharacter_Native, MiniGameMashInputs_N); } \
	FORCEINLINE static uint32 __PPO__bBreakoutNavi_N() { return STRUCT_OFFSET(AELCharacter_Native, bBreakoutNavi_N); } \
	FORCEINLINE static uint32 __PPO__bBreakoutAttack_N() { return STRUCT_OFFSET(AELCharacter_Native, bBreakoutAttack_N); } \
	FORCEINLINE static uint32 __PPO__CheckTemporary_IsHandsInPocketMotion_Done_N() { return STRUCT_OFFSET(AELCharacter_Native, CheckTemporary_IsHandsInPocketMotion_Done_N); } \
	FORCEINLINE static uint32 __PPO__CheckTemporary_IsHandsInPocketMotion_Value_N() { return STRUCT_OFFSET(AELCharacter_Native, CheckTemporary_IsHandsInPocketMotion_Value_N); } \
	FORCEINLINE static uint32 __PPO__CheckTemporary_IsHandsInPocketMotion_Montage_N() { return STRUCT_OFFSET(AELCharacter_Native, CheckTemporary_IsHandsInPocketMotion_Montage_N); } \
	FORCEINLINE static uint32 __PPO__bRunMoveStart_N() { return STRUCT_OFFSET(AELCharacter_Native, bRunMoveStart_N); } \
	FORCEINLINE static uint32 __PPO__bReferee_N() { return STRUCT_OFFSET(AELCharacter_Native, bReferee_N); } \
	FORCEINLINE static uint32 __PPO__bSystemChar_N() { return STRUCT_OFFSET(AELCharacter_Native, bSystemChar_N); } \
	FORCEINLINE static uint32 __PPO__HP_N() { return STRUCT_OFFSET(AELCharacter_Native, HP_N); } \
	FORCEINLINE static uint32 __PPO__LimbHP_N() { return STRUCT_OFFSET(AELCharacter_Native, LimbHP_N); } \
	FORCEINLINE static uint32 __PPO__DefaultLimbHP_N() { return STRUCT_OFFSET(AELCharacter_Native, DefaultLimbHP_N); } \
	FORCEINLINE static uint32 __PPO__bTagWait_N() { return STRUCT_OFFSET(AELCharacter_Native, bTagWait_N); } \
	FORCEINLINE static uint32 __PPO__TickDeltaSeconds_N() { return STRUCT_OFFSET(AELCharacter_Native, TickDeltaSeconds_N); } \
	FORCEINLINE static uint32 __PPO__ReplayComponent_N() { return STRUCT_OFFSET(AELCharacter_Native, ReplayComponent_N); } \
	FORCEINLINE static uint32 __PPO__ReplayPoseSnapshot_N() { return STRUCT_OFFSET(AELCharacter_Native, ReplayPoseSnapshot_N); } \
	FORCEINLINE static uint32 __PPO__ReplayPoseSnapshotNextFrame_N() { return STRUCT_OFFSET(AELCharacter_Native, ReplayPoseSnapshotNextFrame_N); } \
	FORCEINLINE static uint32 __PPO__ReplayTransform_N() { return STRUCT_OFFSET(AELCharacter_Native, ReplayTransform_N); } \
	FORCEINLINE static uint32 __PPO__PoseSnapshotBlendRate_N() { return STRUCT_OFFSET(AELCharacter_Native, PoseSnapshotBlendRate_N); } \
	FORCEINLINE static uint32 __PPO__GameCharArray_N() { return STRUCT_OFFSET(AELCharacter_Native, GameCharArray_N); } \
	FORCEINLINE static uint32 __PPO__SyncCharArray_N() { return STRUCT_OFFSET(AELCharacter_Native, SyncCharArray_N); } \
	FORCEINLINE static uint32 __PPO__NowFrameCapsuleBlockHitPlayers_N() { return STRUCT_OFFSET(AELCharacter_Native, NowFrameCapsuleBlockHitPlayers_N); } \
	FORCEINLINE static uint32 __PPO__UsingWeapon_N() { return STRUCT_OFFSET(AELCharacter_Native, UsingWeapon_N); } \
	FORCEINLINE static uint32 __PPO__SpecialAttachWeapon_N() { return STRUCT_OFFSET(AELCharacter_Native, SpecialAttachWeapon_N); } \
	FORCEINLINE static uint32 __PPO__LastPlayStartOfMatchMotion_N() { return STRUCT_OFFSET(AELCharacter_Native, LastPlayStartOfMatchMotion_N); } \
	FORCEINLINE static uint32 __PPO__CallAOnNotify_N() { return STRUCT_OFFSET(AELCharacter_Native, CallAOnNotify_N); } \
	FORCEINLINE static uint32 __PPO__ReserveRemoveANSList_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveRemoveANSList_N); } \
	FORCEINLINE static uint32 __PPO__ANSList_AOn_N() { return STRUCT_OFFSET(AELCharacter_Native, ANSList_AOn_N); } \
	FORCEINLINE static uint32 __PPO__AOnColPoint_N() { return STRUCT_OFFSET(AELCharacter_Native, AOnColPoint_N); } \
	FORCEINLINE static uint32 __PPO__AOnHit_Atk_N() { return STRUCT_OFFSET(AELCharacter_Native, AOnHit_Atk_N); } \
	FORCEINLINE static uint32 __PPO__AOnHit_Def_N() { return STRUCT_OFFSET(AELCharacter_Native, AOnHit_Def_N); } \
	FORCEINLINE static uint32 __PPO__bReserveHitStop_N() { return STRUCT_OFFSET(AELCharacter_Native, bReserveHitStop_N); } \
	FORCEINLINE static uint32 __PPO__TouchLeaveRingDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, TouchLeaveRingDuration_N); } \
	FORCEINLINE static uint32 __PPO__TagMatchAutoPinBreakStep_N() { return STRUCT_OFFSET(AELCharacter_Native, TagMatchAutoPinBreakStep_N); } \
	FORCEINLINE static uint32 __PPO__TagMatchAutoPinBreakDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, TagMatchAutoPinBreakDuration_N); } \
	FORCEINLINE static uint32 __PPO__bDirectionalThrowState_N() { return STRUCT_OFFSET(AELCharacter_Native, bDirectionalThrowState_N); } \
	FORCEINLINE static uint32 __PPO__bDisableAutoTracking_N() { return STRUCT_OFFSET(AELCharacter_Native, bDisableAutoTracking_N); } \
	FORCEINLINE static uint32 __PPO__AutoTrackingObserveDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, AutoTrackingObserveDuration_N); } \
	FORCEINLINE static uint32 __PPO__AutoTrackingCheckThresholdAngle_N() { return STRUCT_OFFSET(AELCharacter_Native, AutoTrackingCheckThresholdAngle_N); } \
	FORCEINLINE static uint32 __PPO__AutoTrackingDoneDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, AutoTrackingDoneDuration_N); } \
	FORCEINLINE static uint32 __PPO__KneelingLoopDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, KneelingLoopDuration_N); } \
	FORCEINLINE static uint32 __PPO__KickCatchThrowDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, KickCatchThrowDuration_N); } \
	FORCEINLINE static uint32 __PPO__OverTheTopRopeHangRopeLoopDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, OverTheTopRopeHangRopeLoopDuration_N); } \
	FORCEINLINE static uint32 __PPO__PullUpCounter_N() { return STRUCT_OFFSET(AELCharacter_Native, PullUpCounter_N); } \
	FORCEINLINE static uint32 __PPO__PullUpCounterSubRemain_N() { return STRUCT_OFFSET(AELCharacter_Native, PullUpCounterSubRemain_N); } \
	FORCEINLINE static uint32 __PPO__SetupMotionForMePlayer_N() { return STRUCT_OFFSET(AELCharacter_Native, SetupMotionForMePlayer_N); } \
	FORCEINLINE static uint32 __PPO__bIgnoreApronMove_N() { return STRUCT_OFFSET(AELCharacter_Native, bIgnoreApronMove_N); } \
	FORCEINLINE static uint32 __PPO__bIsInputApronMove_N() { return STRUCT_OFFSET(AELCharacter_Native, bIsInputApronMove_N); } \
	FORCEINLINE static uint32 __PPO__ReserveManagerInterferedTarget_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveManagerInterferedTarget_N); } \
	FORCEINLINE static uint32 __PPO__bCheckLandingWhip_N() { return STRUCT_OFFSET(AELCharacter_Native, bCheckLandingWhip_N); } \
	FORCEINLINE static uint32 __PPO__SkillEffect_N() { return STRUCT_OFFSET(AELCharacter_Native, SkillEffect_N); } \
	FORCEINLINE static uint32 __PPO__bDoneRopeDamageReaction_N() { return STRUCT_OFFSET(AELCharacter_Native, bDoneRopeDamageReaction_N); } \
	FORCEINLINE static uint32 __PPO__bDoneDownAttack_N() { return STRUCT_OFFSET(AELCharacter_Native, bDoneDownAttack_N); } \
	FORCEINLINE static uint32 __PPO__bEnvironmentGroggyOn_N() { return STRUCT_OFFSET(AELCharacter_Native, bEnvironmentGroggyOn_N); } \
	FORCEINLINE static uint32 __PPO__bRequestGauntletDeadPlayerDestroy_N() { return STRUCT_OFFSET(AELCharacter_Native, bRequestGauntletDeadPlayerDestroy_N); } \
	FORCEINLINE static uint32 __PPO__RequestReplayState_N() { return STRUCT_OFFSET(AELCharacter_Native, RequestReplayState_N); } \
	FORCEINLINE static uint32 __PPO__bNowHitStop_N() { return STRUCT_OFFSET(AELCharacter_Native, bNowHitStop_N); } \
	FORCEINLINE static uint32 __PPO__RemainRiseUpInvincible_N() { return STRUCT_OFFSET(AELCharacter_Native, RemainRiseUpInvincible_N); } \
	FORCEINLINE static uint32 __PPO__BarbedWireTouchExplosionInterval_N() { return STRUCT_OFFSET(AELCharacter_Native, BarbedWireTouchExplosionInterval_N); } \
	FORCEINLINE static uint32 __PPO__ActionSkillEscapeCoolTime_N() { return STRUCT_OFFSET(AELCharacter_Native, ActionSkillEscapeCoolTime_N); } \
	FORCEINLINE static uint32 __PPO__bBloodStainState_N() { return STRUCT_OFFSET(AELCharacter_Native, bBloodStainState_N); } \
	FORCEINLINE static uint32 __PPO__CheckTemporary_CanNaviOpe_Done_N() { return STRUCT_OFFSET(AELCharacter_Native, CheckTemporary_CanNaviOpe_Done_N); } \
	FORCEINLINE static uint32 __PPO__CheckTemporary_CanNaviOpe_Value_N() { return STRUCT_OFFSET(AELCharacter_Native, CheckTemporary_CanNaviOpe_Value_N); } \
	FORCEINLINE static uint32 __PPO__CheckTemporary_CanNaviOpe_Breakout_N() { return STRUCT_OFFSET(AELCharacter_Native, CheckTemporary_CanNaviOpe_Breakout_N); } \
	FORCEINLINE static uint32 __PPO__CheckTemporary_CanNaviOpe_MainMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, CheckTemporary_CanNaviOpe_MainMontage_N); } \
	FORCEINLINE static uint32 __PPO__StickNeutralAfterTaunt_N() { return STRUCT_OFFSET(AELCharacter_Native, StickNeutralAfterTaunt_N); } \
	FORCEINLINE static uint32 __PPO__TauntActiveSec_N() { return STRUCT_OFFSET(AELCharacter_Native, TauntActiveSec_N); } \
	FORCEINLINE static uint32 __PPO__TopRopeGroggy_N() { return STRUCT_OFFSET(AELCharacter_Native, TopRopeGroggy_N); } \
	FORCEINLINE static uint32 __PPO__MiddleRopeGroggy_N() { return STRUCT_OFFSET(AELCharacter_Native, MiddleRopeGroggy_N); } \
	FORCEINLINE static uint32 __PPO__WhipState_N() { return STRUCT_OFFSET(AELCharacter_Native, WhipState_N); } \
	FORCEINLINE static uint32 __PPO__BarricadeClimbLoop_N() { return STRUCT_OFFSET(AELCharacter_Native, BarricadeClimbLoop_N); } \
	FORCEINLINE static uint32 __PPO__TauntParam_N() { return STRUCT_OFFSET(AELCharacter_Native, TauntParam_N); } \
	FORCEINLINE static uint32 __PPO__TargettingParam_N() { return STRUCT_OFFSET(AELCharacter_Native, TargettingParam_N); } \
	FORCEINLINE static uint32 __PPO__ReserveCriticalHitStop_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveCriticalHitStop_N); } \
	FORCEINLINE static uint32 __PPO__ReserveHitStopWeapon_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveHitStopWeapon_N); } \
	FORCEINLINE static uint32 __PPO__ReserveHitStopStartDelay_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveHitStopStartDelay_N); } \
	FORCEINLINE static uint32 __PPO__SkillEffectSec_N() { return STRUCT_OFFSET(AELCharacter_Native, SkillEffectSec_N); } \
	FORCEINLINE static uint32 __PPO__ManagerInterfered_Front() { return STRUCT_OFFSET(AELCharacter_Native, ManagerInterfered_Front); } \
	FORCEINLINE static uint32 __PPO__ManagerInterfered_Back() { return STRUCT_OFFSET(AELCharacter_Native, ManagerInterfered_Back); } \
	FORCEINLINE static uint32 __PPO__bRequestRunStopFlag_N() { return STRUCT_OFFSET(AELCharacter_Native, bRequestRunStopFlag_N); } \
	FORCEINLINE static uint32 __PPO__bBarbedWireBoardHitNowFrame_N() { return STRUCT_OFFSET(AELCharacter_Native, bBarbedWireBoardHitNowFrame_N); } \
	FORCEINLINE static uint32 __PPO__SignatureHitCount_N() { return STRUCT_OFFSET(AELCharacter_Native, SignatureHitCount_N); } \
	FORCEINLINE static uint32 __PPO__UseEntranceReplaceModel() { return STRUCT_OFFSET(AELCharacter_Native, UseEntranceReplaceModel); } \
	FORCEINLINE static uint32 __PPO__NowOverlapCanPickupWeapons_N() { return STRUCT_OFFSET(AELCharacter_Native, NowOverlapCanPickupWeapons_N); } \
	FORCEINLINE static uint32 __PPO__bIrishWhipRun_N() { return STRUCT_OFFSET(AELCharacter_Native, bIrishWhipRun_N); } \
	FORCEINLINE static uint32 __PPO__IngameTutorialParam() { return STRUCT_OFFSET(AELCharacter_Native, IngameTutorialParam); } \
	FORCEINLINE static uint32 __PPO__TagDamage_N() { return STRUCT_OFFSET(AELCharacter_Native, TagDamage_N); } \
	FORCEINLINE static uint32 __PPO__TagRecoverValue_N() { return STRUCT_OFFSET(AELCharacter_Native, TagRecoverValue_N); } \
	FORCEINLINE static uint32 __PPO__bUnlockStrongGrapple_N() { return STRUCT_OFFSET(AELCharacter_Native, bUnlockStrongGrapple_N); } \
	FORCEINLINE static uint32 __PPO__UnlockStrongGrapplePercent_N() { return STRUCT_OFFSET(AELCharacter_Native, UnlockStrongGrapplePercent_N); } \
	FORCEINLINE static uint32 __PPO__PassiveKipUpRemainSecond_N() { return STRUCT_OFFSET(AELCharacter_Native, PassiveKipUpRemainSecond_N); } \
	FORCEINLINE static uint32 __PPO__DamageLv_N() { return STRUCT_OFFSET(AELCharacter_Native, DamageLv_N); } \
	FORCEINLINE static uint32 __PPO__DamageLvDownSec_N() { return STRUCT_OFFSET(AELCharacter_Native, DamageLvDownSec_N); } \
	FORCEINLINE static uint32 __PPO__ActiveReversalBuffSec_N() { return STRUCT_OFFSET(AELCharacter_Native, ActiveReversalBuffSec_N); } \
	FORCEINLINE static uint32 __PPO__DamageCountForForceDown_N() { return STRUCT_OFFSET(AELCharacter_Native, DamageCountForForceDown_N); } \
	FORCEINLINE static uint32 __PPO__IgnoreApronMoveBeforeMoveValue_N() { return STRUCT_OFFSET(AELCharacter_Native, IgnoreApronMoveBeforeMoveValue_N); } \
	FORCEINLINE static uint32 __PPO__bUseLocalMatchRule_N() { return STRUCT_OFFSET(AELCharacter_Native, bUseLocalMatchRule_N); } \
	FORCEINLINE static uint32 __PPO__LocalMatchRule_N() { return STRUCT_OFFSET(AELCharacter_Native, LocalMatchRule_N); } \
	FORCEINLINE static uint32 __PPO__bRule_ExplodingBarbedWireDeathMatch_N() { return STRUCT_OFFSET(AELCharacter_Native, bRule_ExplodingBarbedWireDeathMatch_N); } \
	FORCEINLINE static uint32 __PPO__bRule_ForbiddenOutside_N() { return STRUCT_OFFSET(AELCharacter_Native, bRule_ForbiddenOutside_N); } \
	FORCEINLINE static uint32 __PPO__bRule_CasinoBattleRoyale_N() { return STRUCT_OFFSET(AELCharacter_Native, bRule_CasinoBattleRoyale_N); } \
	FORCEINLINE static uint32 __PPO__bRule_DQ_N() { return STRUCT_OFFSET(AELCharacter_Native, bRule_DQ_N); } \
	FORCEINLINE static uint32 __PPO__Rule_RingOutCount_N() { return STRUCT_OFFSET(AELCharacter_Native, Rule_RingOutCount_N); } \
	FORCEINLINE static uint32 __PPO__DefaultParam_HP() { return STRUCT_OFFSET(AELCharacter_Native, DefaultParam_HP); } \
	FORCEINLINE static uint32 __PPO__WeightDetectionChangeAnimSpeedSec() { return STRUCT_OFFSET(AELCharacter_Native, WeightDetectionChangeAnimSpeedSec); } \
	FORCEINLINE static uint32 __PPO__WeightDetectionChangeAnimSpeedMultiple() { return STRUCT_OFFSET(AELCharacter_Native, WeightDetectionChangeAnimSpeedMultiple); } \
	FORCEINLINE static uint32 __PPO__TagDamageHormingAttackPlayer_N() { return STRUCT_OFFSET(AELCharacter_Native, TagDamageHormingAttackPlayer_N); } \
	FORCEINLINE static uint32 __PPO__LastCheckSyncJA_Anim() { return STRUCT_OFFSET(AELCharacter_Native, LastCheckSyncJA_Anim); } \
	FORCEINLINE static uint32 __PPO__LastCheckSyncJA_Montage() { return STRUCT_OFFSET(AELCharacter_Native, LastCheckSyncJA_Montage); } \
	FORCEINLINE static uint32 __PPO__LastCheckMotionEnd_Anim() { return STRUCT_OFFSET(AELCharacter_Native, LastCheckMotionEnd_Anim); } \
	FORCEINLINE static uint32 __PPO__LastCheckMotionEnd_Montage() { return STRUCT_OFFSET(AELCharacter_Native, LastCheckMotionEnd_Montage); } \
	FORCEINLINE static uint32 __PPO__bUseRefereeModel_N() { return STRUCT_OFFSET(AELCharacter_Native, bUseRefereeModel_N); } \
	FORCEINLINE static uint32 __PPO__bReserveAutoPositionChangeToFinisher_N() { return STRUCT_OFFSET(AELCharacter_Native, bReserveAutoPositionChangeToFinisher_N); } \
	FORCEINLINE static uint32 __PPO__ChainGrappleMoveEnvPushDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, ChainGrappleMoveEnvPushDuration_N); } \
	FORCEINLINE static uint32 __PPO__bNotAim_N() { return STRUCT_OFFSET(AELCharacter_Native, bNotAim_N); } \
	FORCEINLINE static uint32 __PPO__bUpdateAimRotation_N() { return STRUCT_OFFSET(AELCharacter_Native, bUpdateAimRotation_N); } \
	FORCEINLINE static uint32 __PPO__NavigationDirectionValue_N() { return STRUCT_OFFSET(AELCharacter_Native, NavigationDirectionValue_N); } \
	FORCEINLINE static uint32 __PPO__ChainGrappleReversalRemainSecond_N() { return STRUCT_OFFSET(AELCharacter_Native, ChainGrappleReversalRemainSecond_N); } \
	FORCEINLINE static uint32 __PPO__ChainGrappleProgressTime_N() { return STRUCT_OFFSET(AELCharacter_Native, ChainGrappleProgressTime_N); } \
	FORCEINLINE static uint32 __PPO__ChainWrestlingProgressTime_N() { return STRUCT_OFFSET(AELCharacter_Native, ChainWrestlingProgressTime_N); } \
	FORCEINLINE static uint32 __PPO__LastDownDragTargetPlayer_N() { return STRUCT_OFFSET(AELCharacter_Native, LastDownDragTargetPlayer_N); } \
	FORCEINLINE static uint32 __PPO__bCheckDownDragContinuousInput_N() { return STRUCT_OFFSET(AELCharacter_Native, bCheckDownDragContinuousInput_N); } \
	FORCEINLINE static uint32 __PPO__DownDragDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, DownDragDuration_N); } \
	FORCEINLINE static uint32 __PPO__LastJumpOverPlayerForMe_N() { return STRUCT_OFFSET(AELCharacter_Native, LastJumpOverPlayerForMe_N); } \
	FORCEINLINE static uint32 __PPO__FirstRingOutActor_N() { return STRUCT_OFFSET(AELCharacter_Native, FirstRingOutActor_N); } \
	FORCEINLINE static uint32 __PPO__bDebug_RingOutCountStop_N() { return STRUCT_OFFSET(AELCharacter_Native, bDebug_RingOutCountStop_N); } \
	FORCEINLINE static uint32 __PPO__RingOutPlayerCount_N() { return STRUCT_OFFSET(AELCharacter_Native, RingOutPlayerCount_N); } \
	FORCEINLINE static uint32 __PPO__bAllRingOut_N() { return STRUCT_OFFSET(AELCharacter_Native, bAllRingOut_N); } \
	FORCEINLINE static uint32 __PPO__bOutOfSyncMovement() { return STRUCT_OFFSET(AELCharacter_Native, bOutOfSyncMovement); } \
	FORCEINLINE static uint32 __PPO__bForceSyncMovement() { return STRUCT_OFFSET(AELCharacter_Native, bForceSyncMovement); } \
	FORCEINLINE static uint32 __PPO__bNotExcuteBarrierCollisionOverlapEvent_N() { return STRUCT_OFFSET(AELCharacter_Native, bNotExcuteBarrierCollisionOverlapEvent_N); } \
	FORCEINLINE static uint32 __PPO__bBarrierCollisionIgnoreWorld_N() { return STRUCT_OFFSET(AELCharacter_Native, bBarrierCollisionIgnoreWorld_N); } \
	FORCEINLINE static uint32 __PPO__bReserveScalingHeadBarrierBlockCollisionDelayedSyncOff_N() { return STRUCT_OFFSET(AELCharacter_Native, bReserveScalingHeadBarrierBlockCollisionDelayedSyncOff_N); } \
	FORCEINLINE static uint32 __PPO__ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetPlayer_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetPlayer_N); } \
	FORCEINLINE static uint32 __PPO__ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetMontage_N); } \
	FORCEINLINE static uint32 __PPO__HeadBarrierCollisionScalingRemain() { return STRUCT_OFFSET(AELCharacter_Native, HeadBarrierCollisionScalingRemain); } \
	FORCEINLINE static uint32 __PPO__NeedDisableOverlapEventCapsuleWhenAlwaySweep() { return STRUCT_OFFSET(AELCharacter_Native, NeedDisableOverlapEventCapsuleWhenAlwaySweep); } \
	FORCEINLINE static uint32 __PPO__bUseWeaponHitCol() { return STRUCT_OFFSET(AELCharacter_Native, bUseWeaponHitCol); } \
	FORCEINLINE static uint32 __PPO__WeaponHitCol_N() { return STRUCT_OFFSET(AELCharacter_Native, WeaponHitCol_N); } \
	FORCEINLINE static uint32 __PPO__RunProgressTime_N() { return STRUCT_OFFSET(AELCharacter_Native, RunProgressTime_N); } \
	FORCEINLINE static uint32 __PPO__BeforeRunLocation_N() { return STRUCT_OFFSET(AELCharacter_Native, BeforeRunLocation_N); } \
	FORCEINLINE static uint32 __PPO__RunSameLocationDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, RunSameLocationDuration_N); } \
	FORCEINLINE static uint32 __PPO__WalkHitOtherCharaPrograssTime_N() { return STRUCT_OFFSET(AELCharacter_Native, WalkHitOtherCharaPrograssTime_N); } \
	FORCEINLINE static uint32 __PPO__bIsContinuousPressStrikeReversal_N() { return STRUCT_OFFSET(AELCharacter_Native, bIsContinuousPressStrikeReversal_N); } \
	FORCEINLINE static uint32 __PPO__bIsContinuousPressGrappleGuard_N() { return STRUCT_OFFSET(AELCharacter_Native, bIsContinuousPressGrappleGuard_N); } \
	FORCEINLINE static uint32 __PPO__LadderGrabObjectDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, LadderGrabObjectDuration_N); } \
	FORCEINLINE static uint32 __PPO__DivingTakeoffFlag_N() { return STRUCT_OFFSET(AELCharacter_Native, DivingTakeoffFlag_N); } \
	FORCEINLINE static uint32 __PPO__PendingDivingHit_N() { return STRUCT_OFFSET(AELCharacter_Native, PendingDivingHit_N); } \
	FORCEINLINE static uint32 __PPO__AllowExcuteObserveInjuryReaction_N() { return STRUCT_OFFSET(AELCharacter_Native, AllowExcuteObserveInjuryReaction_N); } \
	FORCEINLINE static uint32 __PPO__ThumbtacksOverlapDownDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, ThumbtacksOverlapDownDuration_N); } \
	FORCEINLINE static uint32 __PPO__ApronMoveStateTimeCount_N() { return STRUCT_OFFSET(AELCharacter_Native, ApronMoveStateTimeCount_N); } \
	FORCEINLINE static uint32 __PPO__MouthMaskPartsCategorys() { return STRUCT_OFFSET(AELCharacter_Native, MouthMaskPartsCategorys); } \
	FORCEINLINE static uint32 __PPO__PreZVelocity_N() { return STRUCT_OFFSET(AELCharacter_Native, PreZVelocity_N); } \
	FORCEINLINE static uint32 __PPO__CharaMeshInterpolateTime_N() { return STRUCT_OFFSET(AELCharacter_Native, CharaMeshInterpolateTime_N); } \
	FORCEINLINE static uint32 __PPO__CharaMeshInterpolateProgressTime_N() { return STRUCT_OFFSET(AELCharacter_Native, CharaMeshInterpolateProgressTime_N); } \
	FORCEINLINE static uint32 __PPO__bCharaMeshInterpolateEnd_N() { return STRUCT_OFFSET(AELCharacter_Native, bCharaMeshInterpolateEnd_N); } \
	FORCEINLINE static uint32 __PPO__AddCharaMeshInterpolateVector_N() { return STRUCT_OFFSET(AELCharacter_Native, AddCharaMeshInterpolateVector_N); } \
	FORCEINLINE static uint32 __PPO__AddLastCharaMeshInterpolateVector_N() { return STRUCT_OFFSET(AELCharacter_Native, AddLastCharaMeshInterpolateVector_N); } \
	FORCEINLINE static uint32 __PPO__bClimbNearSteelStepBarricade() { return STRUCT_OFFSET(AELCharacter_Native, bClimbNearSteelStepBarricade); } \
	FORCEINLINE static uint32 __PPO__bEnableCheckOverlapTable() { return STRUCT_OFFSET(AELCharacter_Native, bEnableCheckOverlapTable); } \
	FORCEINLINE static uint32 __PPO__bPreEnableCheckOverlapTable() { return STRUCT_OFFSET(AELCharacter_Native, bPreEnableCheckOverlapTable); } \
	FORCEINLINE static uint32 __PPO__CloseTableTime_N() { return STRUCT_OFFSET(AELCharacter_Native, CloseTableTime_N); } \
	FORCEINLINE static uint32 __PPO__bPreEnableTagWaitRingInAuthority_N() { return STRUCT_OFFSET(AELCharacter_Native, bPreEnableTagWaitRingInAuthority_N); } \
	FORCEINLINE static uint32 __PPO__bDisableDivingHoming() { return STRUCT_OFFSET(AELCharacter_Native, bDisableDivingHoming); } \
	FORCEINLINE static uint32 __PPO__EnableSyncBarrierCollision() { return STRUCT_OFFSET(AELCharacter_Native, EnableSyncBarrierCollision); } \
	FORCEINLINE static uint32 __PPO__ReserveDQReactions_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveDQReactions_N); } \
	FORCEINLINE static uint32 __PPO__ReserveWeaponReactions_N() { return STRUCT_OFFSET(AELCharacter_Native, ReserveWeaponReactions_N); } \
	FORCEINLINE static uint32 __PPO__DQReactionObserveDuration_N() { return STRUCT_OFFSET(AELCharacter_Native, DQReactionObserveDuration_N); } \
	FORCEINLINE static uint32 __PPO__LastDQReactionPlayer_N() { return STRUCT_OFFSET(AELCharacter_Native, LastDQReactionPlayer_N); } \
	FORCEINLINE static uint32 __PPO__DQMeterValueForPlayers_N() { return STRUCT_OFFSET(AELCharacter_Native, DQMeterValueForPlayers_N); } \
	FORCEINLINE static uint32 __PPO__DQMeter_N() { return STRUCT_OFFSET(AELCharacter_Native, DQMeter_N); } \
	FORCEINLINE static uint32 __PPO__LastWeaponReactionPlayer_N() { return STRUCT_OFFSET(AELCharacter_Native, LastWeaponReactionPlayer_N); } \
	FORCEINLINE static uint32 __PPO__ClonedRefereeMeshComp() { return STRUCT_OFFSET(AELCharacter_Native, ClonedRefereeMeshComp); } \
	FORCEINLINE static uint32 __PPO__RefereeMeshMode() { return STRUCT_OFFSET(AELCharacter_Native, RefereeMeshMode); } \
	FORCEINLINE static uint32 __PPO__RefereeOpacityStateTimeCount() { return STRUCT_OFFSET(AELCharacter_Native, RefereeOpacityStateTimeCount); } \
	FORCEINLINE static uint32 __PPO__TutorialInputEvent() { return STRUCT_OFFSET(AELCharacter_Native, TutorialInputEvent); } \
	FORCEINLINE static uint32 __PPO__DeferredUpdateTransformTargetMontage() { return STRUCT_OFFSET(AELCharacter_Native, DeferredUpdateTransformTargetMontage); } \
	FORCEINLINE static uint32 __PPO__PinMontage_N() { return STRUCT_OFFSET(AELCharacter_Native, PinMontage_N); } \
	FORCEINLINE static uint32 __PPO__BuildBody() { return STRUCT_OFFSET(AELCharacter_Native, BuildBody); } \
	FORCEINLINE static uint32 __PPO__CustomCostumeClass() { return STRUCT_OFFSET(AELCharacter_Native, CustomCostumeClass); } \
	FORCEINLINE static uint32 __PPO__CustomCostume() { return STRUCT_OFFSET(AELCharacter_Native, CustomCostume); } \
	FORCEINLINE static uint32 __PPO__BodyHomingDataTable() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingDataTable); } \
	FORCEINLINE static uint32 __PPO__BodyHomingTypeList() { return STRUCT_OFFSET(AELCharacter_Native, BodyHomingTypeList); } \
	FORCEINLINE static uint32 __PPO__PlayerColorDataTable() { return STRUCT_OFFSET(AELCharacter_Native, PlayerColorDataTable); } \
	FORCEINLINE static uint32 __PPO__IsThreadTickAsync() { return STRUCT_OFFSET(AELCharacter_Native, IsThreadTickAsync); } \
	FORCEINLINE static uint32 __PPO__BarrierCollisionOverlapCheckTypes() { return STRUCT_OFFSET(AELCharacter_Native, BarrierCollisionOverlapCheckTypes); } \
	FORCEINLINE static uint32 __PPO__BarrierCollisionOverlapCheckTypes_IgnoreWorld() { return STRUCT_OFFSET(AELCharacter_Native, BarrierCollisionOverlapCheckTypes_IgnoreWorld); } \
	FORCEINLINE static uint32 __PPO__BarrierCollisionOverlapWarpThreshold_Self() { return STRUCT_OFFSET(AELCharacter_Native, BarrierCollisionOverlapWarpThreshold_Self); } \
	FORCEINLINE static uint32 __PPO__BarrierCollisionOverlapWarpThreshold_Other() { return STRUCT_OFFSET(AELCharacter_Native, BarrierCollisionOverlapWarpThreshold_Other); } \
	FORCEINLINE static uint32 __PPO__BarrierCollisionOverlapMoveInterpolateTime() { return STRUCT_OFFSET(AELCharacter_Native, BarrierCollisionOverlapMoveInterpolateTime); } \
	FORCEINLINE static uint32 __PPO__BarrierCollisionOverlapMoveInterpolateTime_World() { return STRUCT_OFFSET(AELCharacter_Native, BarrierCollisionOverlapMoveInterpolateTime_World); } \
	FORCEINLINE static uint32 __PPO__BarrierCollisionResponseSyncCharaChannel() { return STRUCT_OFFSET(AELCharacter_Native, BarrierCollisionResponseSyncCharaChannel); } \
	FORCEINLINE static uint32 __PPO__HeadBarrierCollisionDefaultRadius() { return STRUCT_OFFSET(AELCharacter_Native, HeadBarrierCollisionDefaultRadius); } \
	FORCEINLINE static uint32 __PPO__HeadBarrierCollisionBigRadius() { return STRUCT_OFFSET(AELCharacter_Native, HeadBarrierCollisionBigRadius); } \
	FORCEINLINE static uint32 __PPO__HeadBarrierCollisionScalingTime() { return STRUCT_OFFSET(AELCharacter_Native, HeadBarrierCollisionScalingTime); } \
	FORCEINLINE static uint32 __PPO__SyncBarrierCollisionInterpolateTime() { return STRUCT_OFFSET(AELCharacter_Native, SyncBarrierCollisionInterpolateTime); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_114_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCharacter_Native>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCharacter_Native_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
