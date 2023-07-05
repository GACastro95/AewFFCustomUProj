// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSBadStatus : uint8;
class AELSSPlayer;
enum class ESSAttentionReason : uint8;
class UPrimitiveComponent;
class AELSSPickupBase;
class AELSSPlayerController;
enum class ESSActionCameraID : uint8;
struct FVector;
class AELSSSituationMoveTrigger;
struct FSSMoveParam;
struct FSSAttackParam;
struct FVector_NetQuantize;
enum class ESSButtonHold : uint8;
class AActor;
class AELSSShieldBase;
class AELSSWeaponThrowProjectile_Pushpin;
struct FSSWrestlerSetupParam;
struct FWrestlerSetupParam;
enum class ESSDamageReason : uint8;
struct FSSDamageResult;
struct FSSDebugMoveIdOverrideParam;
enum class ESSPlayerStartLocatorType : uint8;
enum class ESSPlayerStartLocatorAreaId : uint8;
enum class ESSMoveCommand : uint8;
enum class ESSWeaponType : uint8;
class AController;
class AELSSPlayerState;
class UELSSAttackerComponent;
class USkeletalMeshComponent;
class AELSSItemBase;
class APawn;
struct FHitResult;
class AELSSWeaponBase;
class UELSSDamageComponent;
class UELSSCharacterMovementComponent;
class AELSSStationalCamera;
enum class ESSInteractExecute : uint8;
struct FTransform;
class UELSSTargetComponent;
enum class EWrestlerID_N : uint8;
enum class ESSWrestlerType : uint8;
enum class ESSPlayerDebugFlag : uint8;
enum class ESSPlayerFlag : uint8;
struct FRotator;
class UELSSAnimNotify_Camera;
class AELSSItemBox;
enum class ESSCameraShakeType : uint8;
enum class ESSDamageSE : uint8;
class UMeshComponent;
enum class ESSHitGroundSE : uint8;
enum class ESSLogIconType : uint8;
enum class ESSActionDownFaceUpType : uint8;
class UAnimMontage;
struct FSSCharacterAdjust;
class UELSSFootIK;
enum class ESSPlayerMeshMode : uint8;
#ifdef ABP_200508_ELSSPlayer_generated_h
#error "ELSSPlayer.generated.h already included, missing '#pragma once' in ELSSPlayer.h"
#endif
#define ABP_200508_ELSSPlayer_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_RPC_WRAPPERS \
	virtual void ActivateBadStatus_Multicast_Implementation(ESSBadStatus InType, float InValue, int32 inMoveId, int32 inAttackHitId, float InDuration, AELSSPlayer* inInstigator, float inSyncTime); \
	virtual void ApplyAdjustParam_Implementation(); \
	virtual void BeginGunFireMove_Server_Implementation(int32 inMoveId); \
	virtual void BeginPutTrapMove_Server_Implementation(int32 inMoveId); \
	virtual void BeginSyncMoveMulticast_Implementation(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, int32 inAttackerMoveId, FVector_NetQuantize const& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger); \
	virtual void BeginThrowWeaponMove_Server_Implementation(int32 inMoveId); \
	virtual void DeactivateBadStatus_Multicast_Implementation(ESSBadStatus InType, float inSyncTime); \
	virtual void DebugAssembleThemAll_Implementation(); \
	virtual void DebugCall_ReliableClientRPC_Implementation(int32 inSendId); \
	virtual void DebugCall_ReliableServerRPC_Implementation(int32 inSendId); \
	virtual void DebugCall_UnreliableClientRPC_Implementation(int32 inSendId); \
	virtual void DebugCall_UnreliableServerRPC_Implementation(int32 inSendId); \
	virtual void DebugDelayKill_Implementation(float inTimer); \
	virtual void DebugDestroyThemAll_Implementation(bool excludeMyself); \
	virtual void DebugDispAttention_Implementation(ESSAttentionReason inAttentionReason, int32 inPointValue); \
	virtual void DebugDispDamage_Implementation(FVector const& inHitLocation, ESSDamageReason inDamageReason, FSSDamageResult const& inDamageResult); \
	virtual void DebugForceGuardToTarget_Implementation(float guardTime); \
	virtual void DebugPlayerTeleport_Implementation(FVector const& Pos); \
	virtual void DebugRotationThemAll_Implementation(float degree); \
	virtual void DebugSetHeatLevel_Multicast_Implementation(int32 inHeatLevel); \
	virtual void DebugSetHP_Implementation(float Ratio); \
	virtual void DebugSetMoveIdOverride_Implementation(FSSDebugMoveIdOverrideParam const& inOverrideParam); \
	virtual void DebugSetNearKo_Implementation(); \
	virtual void DebugTeleportToSelectPlayerStartLocator_Implementation(ESSPlayerStartLocatorType inLocatorType, ESSPlayerStartLocatorAreaId inAreaId, int32 inFilterID, const FString& inActorName); \
	virtual void DebugToggleGuardToTarget_Implementation(); \
	virtual void DebugUnlimitedUseItemAndWeapon_Server_Implementation(bool IsOn); \
	virtual void DoInteract_Server_Implementation(AActor* inInteractTargetActor); \
	virtual void DropCurrentPickup_Server_Implementation(); \
	virtual void EndHoldInteract_Client_Implementation(); \
	virtual void EndHoldInteract_Server_Implementation(); \
	virtual void EndTickUseItem_Client_Implementation(); \
	virtual void ExecuteAbility_Multicast_Implementation(int32 inSlotIndex); \
	virtual void ExecuteInteractEffect_Server_Implementation(AActor* inInteractTarget); \
	virtual void FailedKoFinisher_Client_Implementation(AELSSPlayer* Target); \
	virtual void FailedPutTrapMove_Client_Implementation(); \
	virtual void FailedUseAbility_Client_Implementation(int32 inSlotIndex); \
	virtual void FailedUseItem_Client_Implementation(); \
	virtual USkeletalMeshComponent* GetClonedMesh_Implementation() const; \
	virtual void GetOnVehicle_Multicast_Implementation(APawn* vehiclePawn); \
	virtual void LaunchThrowWeaponProjectile_Server_Implementation(FRotator const& InRotation); \
	virtual void MoveCurrentInventory_Server_Implementation(bool isRightMove); \
	virtual void NotifyAddExp_Client_Implementation(int32 itemDatabaseId); \
	virtual void NotifyRecoveredHp_Multicast_Implementation(int32 itemDatabaseId); \
	virtual void NotifyRecoveredShield_Multicast_Implementation(int32 itemDatabaseId); \
	virtual void OnHeatLevelUp_Client_Implementation(int32 inNewLevel, int32 inNewHP); \
	virtual void OnPostDamaged_Implementation(FSSDamageResult const& damageResult); \
	virtual void PutTrap_Server_Implementation(FVector_NetQuantize const& InLocation, float inTargetYaw, int32 inMoveId, int32 inStateHash); \
	virtual void RequestDie_Multicast_Implementation(); \
	virtual void RequestKo_Multicast_Implementation(); \
	virtual void ResponseSyncRotationMulticast_Implementation(float inYaw); \
	virtual void Revive_Multicast_Implementation(float inHpRecoverRate); \
	virtual void ServerUpdateSyncRotation_Implementation(float inYaw); \
	virtual void SetDebugFlag_Server_Implementation(ESSPlayerDebugFlag Type, bool IsOn); \
	virtual void SetFlag_Server_Implementation(ESSPlayerFlag Type, bool IsOn); \
	virtual void SetGunAimMode_Server_Implementation(bool inEnable); \
	virtual void SetPutTrapAimMode_Server_Implementation(bool inEnable); \
	virtual void SetThrowWeaponAimMode_Server_Implementation(bool inEnable); \
	virtual void SpawnGunBullet_Server_Implementation(FVector_NetQuantize const& InLocation, FRotator const& InRotation, int32 inMoveId, int32 inStateHash); \
	virtual void SuccessKoFinisher_Multicast_Implementation(AELSSPlayer* Target); \
	virtual void Suicide_Implementation(); \
	virtual void SyncGunAimState_Server_Implementation(FVector_NetQuantize const& inActorLocation, FVector_NetQuantize const& inAimTargetLocation, float inGameplayTime); \
	virtual void SyncPutTrapAimState_Server_Implementation(FVector_NetQuantize const& inActorLocation, float inAimTargetYaw, float inGameplayTime); \
	virtual void SyncThrowWeaponAimState_Server_Implementation(FVector_NetQuantize const& inActorLocation, FVector_NetQuantize const& inAimTargetLocation, float inGameplayTime); \
	virtual void TeleportToPlayerStartLocator_Implementation(); \
	virtual void TryGetOnVehicle_Server_Implementation(APawn* vehiclePawn); \
	virtual void TryKoFinisher_Server_Implementation(AELSSPlayer* Target); \
	virtual void UseAbility_Server_Implementation(int32 inSlotIndex); \
	virtual void UseCurrentItem_Server_Implementation(); \
 \
	DECLARE_FUNCTION(execActivateBadStatus_Multicast); \
	DECLARE_FUNCTION(execAddAttentionPoint); \
	DECLARE_FUNCTION(execAddExp); \
	DECLARE_FUNCTION(execAddExpByItem); \
	DECLARE_FUNCTION(execAddHP); \
	DECLARE_FUNCTION(execAddHPByRate); \
	DECLARE_FUNCTION(execAddIgnoreVehiclePhysics); \
	DECLARE_FUNCTION(execAddKoHP); \
	DECLARE_FUNCTION(execAddKoHPByRate); \
	DECLARE_FUNCTION(execAddPickupToInventory); \
	DECLARE_FUNCTION(execAddPickupToInventoryAt); \
	DECLARE_FUNCTION(execApplyAdjustParam); \
	DECLARE_FUNCTION(execApplyCurrentInventory); \
	DECLARE_FUNCTION(execApplyCurrentInventoryIfUpdate); \
	DECLARE_FUNCTION(execApplyStatusToUIFirst); \
	DECLARE_FUNCTION(execApplyWatchTargetStatusToUI); \
	DECLARE_FUNCTION(execAttachFeverEffect); \
	DECLARE_FUNCTION(execAttachReviveEffect); \
	DECLARE_FUNCTION(execAttachStunEffect); \
	DECLARE_FUNCTION(execBeginActionCamera); \
	DECLARE_FUNCTION(execBeginGunFireMove_Server); \
	DECLARE_FUNCTION(execBeginPutTrapMove_Server); \
	DECLARE_FUNCTION(execBeginReviveArea); \
	DECLARE_FUNCTION(execBeginSyncMoveForPreview); \
	DECLARE_FUNCTION(execBeginSyncMoveMulticast); \
	DECLARE_FUNCTION(execBeginSyncMoveOnServer); \
	DECLARE_FUNCTION(execBeginSyncRotate); \
	DECLARE_FUNCTION(execBeginThrowWeaponMove_Server); \
	DECLARE_FUNCTION(execBeginVehicleCameraAndUI); \
	DECLARE_FUNCTION(execCalcCurrentInventoryIndex); \
	DECLARE_FUNCTION(execCalcHeatLevelFromExp); \
	DECLARE_FUNCTION(execCalcInventoryAvailableCount); \
	DECLARE_FUNCTION(execCanAddToInventory); \
	DECLARE_FUNCTION(execCanApplyCurrentInventory); \
	DECLARE_FUNCTION(execCanBeEffectedFromReviveArea); \
	DECLARE_FUNCTION(execCancelHold); \
	DECLARE_FUNCTION(execCanControllInventory); \
	DECLARE_FUNCTION(execCanDie); \
	DECLARE_FUNCTION(execCanDropPickup); \
	DECLARE_FUNCTION(execCanDropShield); \
	DECLARE_FUNCTION(execCanHitKoFinisher); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execCanKo); \
	DECLARE_FUNCTION(execCanKoFinisher); \
	DECLARE_FUNCTION(execCanPickupObject); \
	DECLARE_FUNCTION(execCanPickupShield); \
	DECLARE_FUNCTION(execCanPutTrap); \
	DECLARE_FUNCTION(execCanRevive); \
	DECLARE_FUNCTION(execCanUseAbility); \
	DECLARE_FUNCTION(execCanUseCurrentItem); \
	DECLARE_FUNCTION(execChangeToPickupObject); \
	DECLARE_FUNCTION(execCheckAllowCharacterControll); \
	DECLARE_FUNCTION(execCheckAlreadyHitKoFinisher); \
	DECLARE_FUNCTION(execCheckAttackedLocalPlayer); \
	DECLARE_FUNCTION(execCheckForSpecialCaseDoInteract); \
	DECLARE_FUNCTION(execCheckHitCollision); \
	DECLARE_FUNCTION(execCheckInSight); \
	DECLARE_FUNCTION(execCheckInteractDegree); \
	DECLARE_FUNCTION(execCheckPushpinUnderfoot); \
	DECLARE_FUNCTION(execClearAttack); \
	DECLARE_FUNCTION(execClearHold); \
	DECLARE_FUNCTION(execClearReservedTransformOnNotifyCamera); \
	DECLARE_FUNCTION(execConsumeCarrot); \
	DECLARE_FUNCTION(execCreateWrestlerSetupParam); \
	DECLARE_FUNCTION(execDeactivateBadStatus_Multicast); \
	DECLARE_FUNCTION(execDebugAssembleThemAll); \
	DECLARE_FUNCTION(execDebugCall_ReliableClientRPC); \
	DECLARE_FUNCTION(execDebugCall_ReliableServerRPC); \
	DECLARE_FUNCTION(execDebugCall_UnreliableClientRPC); \
	DECLARE_FUNCTION(execDebugCall_UnreliableServerRPC); \
	DECLARE_FUNCTION(execDebugDelayKill); \
	DECLARE_FUNCTION(execDebugDestroyThemAll); \
	DECLARE_FUNCTION(execDebugDispAttention); \
	DECLARE_FUNCTION(execDebugDispDamage); \
	DECLARE_FUNCTION(execDebugForceGuardToTarget); \
	DECLARE_FUNCTION(execDebugPlayerTeleport); \
	DECLARE_FUNCTION(execDebugRotationThemAll); \
	DECLARE_FUNCTION(execDebugSetHeatLevel_Multicast); \
	DECLARE_FUNCTION(execDebugSetHP); \
	DECLARE_FUNCTION(execDebugSetMoveIdOverride); \
	DECLARE_FUNCTION(execDebugSetNearKo); \
	DECLARE_FUNCTION(execDebugTeleportToSelectPlayerStartLocator); \
	DECLARE_FUNCTION(execDebugToggleGuardToTarget); \
	DECLARE_FUNCTION(execDebugUnlimitedUseItemAndWeapon_Server); \
	DECLARE_FUNCTION(execDetachEffectAllFromMesh); \
	DECLARE_FUNCTION(execDetachFeverEffect); \
	DECLARE_FUNCTION(execDetachReviveEffect); \
	DECLARE_FUNCTION(execDetachStunEffect); \
	DECLARE_FUNCTION(execDoInteract); \
	DECLARE_FUNCTION(execDoInteract_Server); \
	DECLARE_FUNCTION(execDropAllPickupsFromInventory); \
	DECLARE_FUNCTION(execDropCarrot); \
	DECLARE_FUNCTION(execDropCurrentPickup); \
	DECLARE_FUNCTION(execDropCurrentPickup_Server); \
	DECLARE_FUNCTION(execDropFromInventory); \
	DECLARE_FUNCTION(execDropShield); \
	DECLARE_FUNCTION(execEndActionCamera); \
	DECLARE_FUNCTION(execEndHoldInteract_Client); \
	DECLARE_FUNCTION(execEndHoldInteract_Server); \
	DECLARE_FUNCTION(execEndReviveArea); \
	DECLARE_FUNCTION(execEndSyncMotion); \
	DECLARE_FUNCTION(execEndTickUseItem_Client); \
	DECLARE_FUNCTION(execEndVehicleCameraAndUI); \
	DECLARE_FUNCTION(execExecuteAbility_Multicast); \
	DECLARE_FUNCTION(execExecuteInteractEffect_Server); \
	DECLARE_FUNCTION(execFailedKoFinisher_Client); \
	DECLARE_FUNCTION(execFailedPutTrapMove_Client); \
	DECLARE_FUNCTION(execFailedUseAbility_Client); \
	DECLARE_FUNCTION(execFailedUseItem_Client); \
	DECLARE_FUNCTION(execFindEmptyInventoryIndex); \
	DECLARE_FUNCTION(execFindFirstInventoryActor); \
	DECLARE_FUNCTION(execFindInventoryIndex); \
	DECLARE_FUNCTION(execGetActionDesiredInputVec); \
	DECLARE_FUNCTION(execGetActionSpeedRate); \
	DECLARE_FUNCTION(execGetActorBottomLocation); \
	DECLARE_FUNCTION(execGetActorCameraBasisLocation); \
	DECLARE_FUNCTION(execGetActorCenterLocation); \
	DECLARE_FUNCTION(execGetAddExpRate); \
	DECLARE_FUNCTION(execGetAirAttackMinHeight); \
	DECLARE_FUNCTION(execGetAssociatedController); \
	DECLARE_FUNCTION(execGetAssociatedSSPlayerState); \
	DECLARE_FUNCTION(execGetAttackerComponent); \
	DECLARE_FUNCTION(execGetAttackPower); \
	DECLARE_FUNCTION(execGetAutoHpRecoverRate); \
	DECLARE_FUNCTION(execGetAvailableAbilitiyIndices); \
	DECLARE_FUNCTION(execGetClonedMesh); \
	DECLARE_FUNCTION(execGetCostumeID); \
	DECLARE_FUNCTION(execGetCurrentFloorPhysicalSurfaceType); \
	DECLARE_FUNCTION(execGetCurrentItem); \
	DECLARE_FUNCTION(execGetCurrentPickup); \
	DECLARE_FUNCTION(execGetCurrentShield); \
	DECLARE_FUNCTION(execGetCurrentShieldDurabilityRatio); \
	DECLARE_FUNCTION(execGetCurrentSituationMoveTrigger); \
	DECLARE_FUNCTION(execGetCurrentVehiclePawn); \
	DECLARE_FUNCTION(execGetCurrentWallHitResult); \
	DECLARE_FUNCTION(execGetCurrentWallPhysicalSurfaceType); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetDamageComponent); \
	DECLARE_FUNCTION(execGetDamageVector); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execGetELSSCharacterMovement); \
	DECLARE_FUNCTION(execGetEnemyVisibleDistance); \
	DECLARE_FUNCTION(execGetExpRateToNext); \
	DECLARE_FUNCTION(execGetExternalStationalCamera); \
	DECLARE_FUNCTION(execGetGravityScaleByNotify); \
	DECLARE_FUNCTION(execGetGuardLevel); \
	DECLARE_FUNCTION(execGetGuardReduceDamageRate); \
	DECLARE_FUNCTION(execGetHP); \
	DECLARE_FUNCTION(execGetHPRatio); \
	DECLARE_FUNCTION(execGetHudHpGaugeOffset); \
	DECLARE_FUNCTION(execGetInteractTarget); \
	DECLARE_FUNCTION(execGetInventoryActorAt); \
	DECLARE_FUNCTION(execGetInvolveDamage); \
	DECLARE_FUNCTION(execGetInvolveDamageFeedback); \
	DECLARE_FUNCTION(execGetInvolveInstigator); \
	DECLARE_FUNCTION(execGetIsInReviveArea); \
	DECLARE_FUNCTION(execGetItemVisibleDistance); \
	DECLARE_FUNCTION(execGetJumpPowerRate); \
	DECLARE_FUNCTION(execGetKoHP); \
	DECLARE_FUNCTION(execGetKoHPRatio); \
	DECLARE_FUNCTION(execGetKoMaxHP); \
	DECLARE_FUNCTION(execGetLastInteractExecute); \
	DECLARE_FUNCTION(execGetMaxHP); \
	DECLARE_FUNCTION(execGetMoveId); \
	DECLARE_FUNCTION(execGetOffVehicle); \
	DECLARE_FUNCTION(execGetOnVehicle); \
	DECLARE_FUNCTION(execGetOnVehicle_Multicast); \
	DECLARE_FUNCTION(execGetRandomBadgeId); \
	DECLARE_FUNCTION(execGetReduceDamageRate); \
	DECLARE_FUNCTION(execGetSeeThroughDistance); \
	DECLARE_FUNCTION(execGetSlipBrakingDecelerationWalking); \
	DECLARE_FUNCTION(execGetSlipBrakingFriction); \
	DECLARE_FUNCTION(execGetSlipBrakingFrictionFactor); \
	DECLARE_FUNCTION(execGetSlipGroundFriction); \
	DECLARE_FUNCTION(execGetSpeedRate); \
	DECLARE_FUNCTION(execGetSSPlayerControllerForUIUpdate); \
	DECLARE_FUNCTION(execGetSSWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetStationalCameraBaseTransform); \
	DECLARE_FUNCTION(execGetStationalCameraBaseTransformOwnerInitial); \
	DECLARE_FUNCTION(execGetStationalCameraBaseTransformReceiverInitial); \
	DECLARE_FUNCTION(execGetStationalCameraDisable); \
	DECLARE_FUNCTION(execGetStationalCameraLocatorOffset); \
	DECLARE_FUNCTION(execGetStationalCameraLocatorOwner); \
	DECLARE_FUNCTION(execGetStormReduceDamageRate); \
	DECLARE_FUNCTION(execGetSyncTargetPlayer); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execGetTargetComponent); \
	DECLARE_FUNCTION(execGetWatcherPlayerController); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerType); \
	DECLARE_FUNCTION(execGuard); \
	DECLARE_FUNCTION(execHasAnyPickupInInventory); \
	DECLARE_FUNCTION(execHasAnyWeaponInInventory); \
	DECLARE_FUNCTION(execHasCarrot); \
	DECLARE_FUNCTION(execHasDebugFlag); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execHitResultToSurfaceType); \
	DECLARE_FUNCTION(execIsAIPlayerForServer); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsDown); \
	DECLARE_FUNCTION(execIsEnableSafeLanding); \
	DECLARE_FUNCTION(execIsEnableSlip); \
	DECLARE_FUNCTION(execIsForceDown); \
	DECLARE_FUNCTION(execIsFullHP); \
	DECLARE_FUNCTION(execIsGuard); \
	DECLARE_FUNCTION(execIsKo); \
	DECLARE_FUNCTION(execIsLocallyPlayerControlled); \
	DECLARE_FUNCTION(execIsNearlyIdle); \
	DECLARE_FUNCTION(execIsPlayingSyncMotion); \
	DECLARE_FUNCTION(execIsPlayingSyncMotionAfterSyncOff); \
	DECLARE_FUNCTION(execIsRestrictWaitSituationMove); \
	DECLARE_FUNCTION(execIsTargetable); \
	DECLARE_FUNCTION(execKoFinisher); \
	DECLARE_FUNCTION(execLaunchThrowWeaponProjectile_Server); \
	DECLARE_FUNCTION(execLostCurrentItem); \
	DECLARE_FUNCTION(execLostCurrentItemIfUsed); \
	DECLARE_FUNCTION(execLostCurrentWeapon); \
	DECLARE_FUNCTION(execLostCurrentWeaponIfBroke); \
	DECLARE_FUNCTION(execLostShield); \
	DECLARE_FUNCTION(execLostWeaponIfBroke); \
	DECLARE_FUNCTION(execLostWeaponIfBrokeAll); \
	DECLARE_FUNCTION(execMoveCurrentInventory); \
	DECLARE_FUNCTION(execMoveCurrentInventory_Server); \
	DECLARE_FUNCTION(execNotifyAddExp_Client); \
	DECLARE_FUNCTION(execNotifyRecoveredHp_Multicast); \
	DECLARE_FUNCTION(execNotifyRecoveredShield_Multicast); \
	DECLARE_FUNCTION(execOnAnimNotify_Camera); \
	DECLARE_FUNCTION(execOnBeginAttack); \
	DECLARE_FUNCTION(execOnBeginInteractState); \
	DECLARE_FUNCTION(execOnBeginJump); \
	DECLARE_FUNCTION(execOnBeginWaitSituationMove); \
	DECLARE_FUNCTION(execOnCompletedDownStandUp); \
	DECLARE_FUNCTION(execOnDeactivateAttack); \
	DECLARE_FUNCTION(execOnDeathDropPickups); \
	DECLARE_FUNCTION(execOnDownDropPickups); \
	DECLARE_FUNCTION(execOnEndAttack); \
	DECLARE_FUNCTION(execOnEndDownStandUp); \
	DECLARE_FUNCTION(execOnEndInteractState); \
	DECLARE_FUNCTION(execOnEnterInteractArea); \
	DECLARE_FUNCTION(execOnExitInteractArea); \
	DECLARE_FUNCTION(execOnFailedKoFinisher); \
	DECLARE_FUNCTION(execOnHeatLevelUp_Client); \
	DECLARE_FUNCTION(execOnHitKoFinisher); \
	DECLARE_FUNCTION(execOnKoDropPickups); \
	DECLARE_FUNCTION(execOnMomentOfDeath); \
	DECLARE_FUNCTION(execOnMomentOfKo); \
	DECLARE_FUNCTION(execOnNotifyGravityScaleBegin); \
	DECLARE_FUNCTION(execOnNotifyGravityScaleEnd); \
	DECLARE_FUNCTION(execOnNotifyRunBegin); \
	DECLARE_FUNCTION(execOnNotifyRunEnd); \
	DECLARE_FUNCTION(execOnPostDamaged); \
	DECLARE_FUNCTION(execOnRep_AbilityUsedTime1); \
	DECLARE_FUNCTION(execOnRep_AbilityUsedTime2); \
	DECLARE_FUNCTION(execOnRep_AbilityUsedTime3); \
	DECLARE_FUNCTION(execOnRep_CurrentInventoryIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentPickup); \
	DECLARE_FUNCTION(execOnRep_CurrentShield); \
	DECLARE_FUNCTION(execOnRep_Exp); \
	DECLARE_FUNCTION(execOnRep_ForceThinMode); \
	DECLARE_FUNCTION(execOnRep_HP); \
	DECLARE_FUNCTION(execOnRep_InteractHoldBeginTime); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execOnRep_KoHP); \
	DECLARE_FUNCTION(execOnRep_PickupedCarrot); \
	DECLARE_FUNCTION(execOnRep_PlayerDebugFlags); \
	DECLARE_FUNCTION(execOnRep_PlayerFlags); \
	DECLARE_FUNCTION(execOnRep_UseItemBeginTimeRep); \
	DECLARE_FUNCTION(execOnSuccessCauseDamage); \
	DECLARE_FUNCTION(execOnSuccessInteractTreasureBox); \
	DECLARE_FUNCTION(execOnSuccessKoFinisher); \
	DECLARE_FUNCTION(execOnTickInteractState); \
	DECLARE_FUNCTION(execOnTryKoFinisher); \
	DECLARE_FUNCTION(execPerformDamage); \
	DECLARE_FUNCTION(execPickupCarrot); \
	DECLARE_FUNCTION(execPickupObject); \
	DECLARE_FUNCTION(execPickupShield); \
	DECLARE_FUNCTION(execPlay3DSEAttached_ForString); \
	DECLARE_FUNCTION(execPlayCameraShake); \
	DECLARE_FUNCTION(execPlayDamageImpact); \
	DECLARE_FUNCTION(execPlayDamageSE); \
	DECLARE_FUNCTION(execPlayHitGroundSE); \
	DECLARE_FUNCTION(execProgressActionCamera); \
	DECLARE_FUNCTION(execPutTrap_Server); \
	DECLARE_FUNCTION(execRecoveryHpByItem); \
	DECLARE_FUNCTION(execRecoveryShieldByItem); \
	DECLARE_FUNCTION(execRefreshCurrentPickupVisibility); \
	DECLARE_FUNCTION(execReleaseHold); \
	DECLARE_FUNCTION(execRemoveAllFromInventory); \
	DECLARE_FUNCTION(execRemovePickupFromInventory); \
	DECLARE_FUNCTION(execRemoveStickedWeapon); \
	DECLARE_FUNCTION(execReplaceMontageOnChangeCurrentPickup); \
	DECLARE_FUNCTION(execRequestDie); \
	DECLARE_FUNCTION(execRequestDie_Multicast); \
	DECLARE_FUNCTION(execRequestKo); \
	DECLARE_FUNCTION(execRequestKo_Multicast); \
	DECLARE_FUNCTION(execReserveAddShield); \
	DECLARE_FUNCTION(execReserveAddToInventory); \
	DECLARE_FUNCTION(execReserveTransformOnNotifyCamera); \
	DECLARE_FUNCTION(execResetDownStateValue); \
	DECLARE_FUNCTION(execResetInteractStateLocalInfo); \
	DECLARE_FUNCTION(execResetRestrictWaitSituationMove); \
	DECLARE_FUNCTION(execResetStationalCamera); \
	DECLARE_FUNCTION(execResponseSyncRotationMulticast); \
	DECLARE_FUNCTION(execRevive); \
	DECLARE_FUNCTION(execRevive_Multicast); \
	DECLARE_FUNCTION(execSearchSituationMoveTrigger); \
	DECLARE_FUNCTION(execServerUpdateSyncRotation); \
	DECLARE_FUNCTION(execSetCurrentPickup); \
	DECLARE_FUNCTION(execSetCurrentPickupHideFlagByActionState); \
	DECLARE_FUNCTION(execSetCurrentShield); \
	DECLARE_FUNCTION(execSetDebugFlag_Server); \
	DECLARE_FUNCTION(execSetDisableShieldVisible); \
	DECLARE_FUNCTION(execSetDisableStickAttach); \
	DECLARE_FUNCTION(execSetDownFaceUpType); \
	DECLARE_FUNCTION(execSetEnableSyncMove); \
	DECLARE_FUNCTION(execSetExternalStationalCamera); \
	DECLARE_FUNCTION(execSetFlag); \
	DECLARE_FUNCTION(execSetFlag_Server); \
	DECLARE_FUNCTION(execSetForceDefaultMoveCollision); \
	DECLARE_FUNCTION(execSetGunAimMode_Server); \
	DECLARE_FUNCTION(execSetHeatLevel); \
	DECLARE_FUNCTION(execSetHP); \
	DECLARE_FUNCTION(execSetInteractTarget); \
	DECLARE_FUNCTION(execSetKoHP); \
	DECLARE_FUNCTION(execSetMoveCollisionHeightScale); \
	DECLARE_FUNCTION(execSetPickupedCarrot); \
	DECLARE_FUNCTION(execSetPutTrapAimMode_Server); \
	DECLARE_FUNCTION(execSetReserveRequestDuration); \
	DECLARE_FUNCTION(execSetReserveRequestDurationDefault); \
	DECLARE_FUNCTION(execSetStandbyKoFinisher); \
	DECLARE_FUNCTION(execSetStationalCameraBaseTransform); \
	DECLARE_FUNCTION(execSetStationalCameraInitialBaseTransform); \
	DECLARE_FUNCTION(execSetStickedWeapon); \
	DECLARE_FUNCTION(execSetSyncTarget); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execSetThrowWeaponAimMode_Server); \
	DECLARE_FUNCTION(execSetupInventory); \
	DECLARE_FUNCTION(execSetupMoveCollisionSize); \
	DECLARE_FUNCTION(execSetWalkSpeedScale); \
	DECLARE_FUNCTION(execSpawnGunBullet_Server); \
	DECLARE_FUNCTION(execStartHold); \
	DECLARE_FUNCTION(execStartSyncMotion); \
	DECLARE_FUNCTION(execStartSyncMotionForPreview); \
	DECLARE_FUNCTION(execSteppingOnPushpin); \
	DECLARE_FUNCTION(execStickPickupToOtherActor); \
	DECLARE_FUNCTION(execSuccessKoFinisher_Multicast); \
	DECLARE_FUNCTION(execSuicide); \
	DECLARE_FUNCTION(execSwapShield); \
	DECLARE_FUNCTION(execSyncGunAimState_Server); \
	DECLARE_FUNCTION(execSyncOffReceiver); \
	DECLARE_FUNCTION(execSyncPutTrapAimState_Server); \
	DECLARE_FUNCTION(execSyncThrowWeaponAimState_Server); \
	DECLARE_FUNCTION(execTeleportToPlayerStartLocator); \
	DECLARE_FUNCTION(execTickHoldTime); \
	DECLARE_FUNCTION(execTickInteract); \
	DECLARE_FUNCTION(execTickKo); \
	DECLARE_FUNCTION(execTickKoDamageCycle); \
	DECLARE_FUNCTION(execTickOperationGuideExecute); \
	DECLARE_FUNCTION(execTickReviveArea); \
	DECLARE_FUNCTION(execTickUseItem); \
	DECLARE_FUNCTION(execTickVehiclePhysics); \
	DECLARE_FUNCTION(execTryGetOnVehicle_Server); \
	DECLARE_FUNCTION(execTryKoFinisher_Server); \
	DECLARE_FUNCTION(execUpdateAutonomousSyncRotate); \
	DECLARE_FUNCTION(execUpdateCarrotUI); \
	DECLARE_FUNCTION(execUpdateCurrentShieldDurabilityUI); \
	DECLARE_FUNCTION(execUpdateCurrentVehicleDurabilityUI); \
	DECLARE_FUNCTION(execUpdateInteractTarget); \
	DECLARE_FUNCTION(execUpdateInteractUI); \
	DECLARE_FUNCTION(execUpdateInteractUIIfInteract); \
	DECLARE_FUNCTION(execUpdateInventoryIconValueUI); \
	DECLARE_FUNCTION(execUpdateInventoryPositionUI); \
	DECLARE_FUNCTION(execUpdateInventoryUI); \
	DECLARE_FUNCTION(execUpdateKoFinisherTarget); \
	DECLARE_FUNCTION(execUpdateMoveCollisionSize); \
	DECLARE_FUNCTION(execUpdateSlipFlag); \
	DECLARE_FUNCTION(execUpdateTargetOnLocalAttack); \
	DECLARE_FUNCTION(execUsableCurrentWeaponMove); \
	DECLARE_FUNCTION(execUseAbility); \
	DECLARE_FUNCTION(execUseAbility_Server); \
	DECLARE_FUNCTION(execUseCurrentItem); \
	DECLARE_FUNCTION(execUseCurrentItem_Server);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ActivateBadStatus_Multicast_Implementation(ESSBadStatus InType, float InValue, int32 inMoveId, int32 inAttackHitId, float InDuration, AELSSPlayer* inInstigator, float inSyncTime); \
	virtual void ApplyAdjustParam_Implementation(); \
	virtual void BeginGunFireMove_Server_Implementation(int32 inMoveId); \
	virtual void BeginPutTrapMove_Server_Implementation(int32 inMoveId); \
	virtual void BeginSyncMoveMulticast_Implementation(AELSSPlayer* inAttacker, AELSSPlayer* inReceiver, int32 inAttackerMoveId, FVector_NetQuantize const& InLocation, float inYaw, bool inIsFinisher, AELSSSituationMoveTrigger* inTrigger); \
	virtual void BeginThrowWeaponMove_Server_Implementation(int32 inMoveId); \
	virtual void DeactivateBadStatus_Multicast_Implementation(ESSBadStatus InType, float inSyncTime); \
	virtual void DebugAssembleThemAll_Implementation(); \
	virtual void DebugCall_ReliableClientRPC_Implementation(int32 inSendId); \
	virtual void DebugCall_ReliableServerRPC_Implementation(int32 inSendId); \
	virtual void DebugCall_UnreliableClientRPC_Implementation(int32 inSendId); \
	virtual void DebugCall_UnreliableServerRPC_Implementation(int32 inSendId); \
	virtual void DebugDelayKill_Implementation(float inTimer); \
	virtual void DebugDestroyThemAll_Implementation(bool excludeMyself); \
	virtual void DebugDispAttention_Implementation(ESSAttentionReason inAttentionReason, int32 inPointValue); \
	virtual void DebugDispDamage_Implementation(FVector const& inHitLocation, ESSDamageReason inDamageReason, FSSDamageResult const& inDamageResult); \
	virtual void DebugForceGuardToTarget_Implementation(float guardTime); \
	virtual void DebugPlayerTeleport_Implementation(FVector const& Pos); \
	virtual void DebugRotationThemAll_Implementation(float degree); \
	virtual void DebugSetHeatLevel_Multicast_Implementation(int32 inHeatLevel); \
	virtual void DebugSetHP_Implementation(float Ratio); \
	virtual void DebugSetMoveIdOverride_Implementation(FSSDebugMoveIdOverrideParam const& inOverrideParam); \
	virtual void DebugSetNearKo_Implementation(); \
	virtual void DebugTeleportToSelectPlayerStartLocator_Implementation(ESSPlayerStartLocatorType inLocatorType, ESSPlayerStartLocatorAreaId inAreaId, int32 inFilterID, const FString& inActorName); \
	virtual void DebugToggleGuardToTarget_Implementation(); \
	virtual void DebugUnlimitedUseItemAndWeapon_Server_Implementation(bool IsOn); \
	virtual void DoInteract_Server_Implementation(AActor* inInteractTargetActor); \
	virtual void DropCurrentPickup_Server_Implementation(); \
	virtual void EndHoldInteract_Client_Implementation(); \
	virtual void EndHoldInteract_Server_Implementation(); \
	virtual void EndTickUseItem_Client_Implementation(); \
	virtual void ExecuteAbility_Multicast_Implementation(int32 inSlotIndex); \
	virtual void ExecuteInteractEffect_Server_Implementation(AActor* inInteractTarget); \
	virtual void FailedKoFinisher_Client_Implementation(AELSSPlayer* Target); \
	virtual void FailedPutTrapMove_Client_Implementation(); \
	virtual void FailedUseAbility_Client_Implementation(int32 inSlotIndex); \
	virtual void FailedUseItem_Client_Implementation(); \
	virtual USkeletalMeshComponent* GetClonedMesh_Implementation() const; \
	virtual void GetOnVehicle_Multicast_Implementation(APawn* vehiclePawn); \
	virtual void LaunchThrowWeaponProjectile_Server_Implementation(FRotator const& InRotation); \
	virtual void MoveCurrentInventory_Server_Implementation(bool isRightMove); \
	virtual void NotifyAddExp_Client_Implementation(int32 itemDatabaseId); \
	virtual void NotifyRecoveredHp_Multicast_Implementation(int32 itemDatabaseId); \
	virtual void NotifyRecoveredShield_Multicast_Implementation(int32 itemDatabaseId); \
	virtual void OnHeatLevelUp_Client_Implementation(int32 inNewLevel, int32 inNewHP); \
	virtual void OnPostDamaged_Implementation(FSSDamageResult const& damageResult); \
	virtual void PutTrap_Server_Implementation(FVector_NetQuantize const& InLocation, float inTargetYaw, int32 inMoveId, int32 inStateHash); \
	virtual void RequestDie_Multicast_Implementation(); \
	virtual void RequestKo_Multicast_Implementation(); \
	virtual void ResponseSyncRotationMulticast_Implementation(float inYaw); \
	virtual void Revive_Multicast_Implementation(float inHpRecoverRate); \
	virtual void ServerUpdateSyncRotation_Implementation(float inYaw); \
	virtual void SetDebugFlag_Server_Implementation(ESSPlayerDebugFlag Type, bool IsOn); \
	virtual void SetFlag_Server_Implementation(ESSPlayerFlag Type, bool IsOn); \
	virtual void SetGunAimMode_Server_Implementation(bool inEnable); \
	virtual void SetPutTrapAimMode_Server_Implementation(bool inEnable); \
	virtual void SetThrowWeaponAimMode_Server_Implementation(bool inEnable); \
	virtual void SpawnGunBullet_Server_Implementation(FVector_NetQuantize const& InLocation, FRotator const& InRotation, int32 inMoveId, int32 inStateHash); \
	virtual void SuccessKoFinisher_Multicast_Implementation(AELSSPlayer* Target); \
	virtual void Suicide_Implementation(); \
	virtual void SyncGunAimState_Server_Implementation(FVector_NetQuantize const& inActorLocation, FVector_NetQuantize const& inAimTargetLocation, float inGameplayTime); \
	virtual void SyncPutTrapAimState_Server_Implementation(FVector_NetQuantize const& inActorLocation, float inAimTargetYaw, float inGameplayTime); \
	virtual void SyncThrowWeaponAimState_Server_Implementation(FVector_NetQuantize const& inActorLocation, FVector_NetQuantize const& inAimTargetLocation, float inGameplayTime); \
	virtual void TeleportToPlayerStartLocator_Implementation(); \
	virtual void TryGetOnVehicle_Server_Implementation(APawn* vehiclePawn); \
	virtual void TryKoFinisher_Server_Implementation(AELSSPlayer* Target); \
	virtual void UseAbility_Server_Implementation(int32 inSlotIndex); \
	virtual void UseCurrentItem_Server_Implementation(); \
 \
	DECLARE_FUNCTION(execActivateBadStatus_Multicast); \
	DECLARE_FUNCTION(execAddAttentionPoint); \
	DECLARE_FUNCTION(execAddExp); \
	DECLARE_FUNCTION(execAddExpByItem); \
	DECLARE_FUNCTION(execAddHP); \
	DECLARE_FUNCTION(execAddHPByRate); \
	DECLARE_FUNCTION(execAddIgnoreVehiclePhysics); \
	DECLARE_FUNCTION(execAddKoHP); \
	DECLARE_FUNCTION(execAddKoHPByRate); \
	DECLARE_FUNCTION(execAddPickupToInventory); \
	DECLARE_FUNCTION(execAddPickupToInventoryAt); \
	DECLARE_FUNCTION(execApplyAdjustParam); \
	DECLARE_FUNCTION(execApplyCurrentInventory); \
	DECLARE_FUNCTION(execApplyCurrentInventoryIfUpdate); \
	DECLARE_FUNCTION(execApplyStatusToUIFirst); \
	DECLARE_FUNCTION(execApplyWatchTargetStatusToUI); \
	DECLARE_FUNCTION(execAttachFeverEffect); \
	DECLARE_FUNCTION(execAttachReviveEffect); \
	DECLARE_FUNCTION(execAttachStunEffect); \
	DECLARE_FUNCTION(execBeginActionCamera); \
	DECLARE_FUNCTION(execBeginGunFireMove_Server); \
	DECLARE_FUNCTION(execBeginPutTrapMove_Server); \
	DECLARE_FUNCTION(execBeginReviveArea); \
	DECLARE_FUNCTION(execBeginSyncMoveForPreview); \
	DECLARE_FUNCTION(execBeginSyncMoveMulticast); \
	DECLARE_FUNCTION(execBeginSyncMoveOnServer); \
	DECLARE_FUNCTION(execBeginSyncRotate); \
	DECLARE_FUNCTION(execBeginThrowWeaponMove_Server); \
	DECLARE_FUNCTION(execBeginVehicleCameraAndUI); \
	DECLARE_FUNCTION(execCalcCurrentInventoryIndex); \
	DECLARE_FUNCTION(execCalcHeatLevelFromExp); \
	DECLARE_FUNCTION(execCalcInventoryAvailableCount); \
	DECLARE_FUNCTION(execCanAddToInventory); \
	DECLARE_FUNCTION(execCanApplyCurrentInventory); \
	DECLARE_FUNCTION(execCanBeEffectedFromReviveArea); \
	DECLARE_FUNCTION(execCancelHold); \
	DECLARE_FUNCTION(execCanControllInventory); \
	DECLARE_FUNCTION(execCanDie); \
	DECLARE_FUNCTION(execCanDropPickup); \
	DECLARE_FUNCTION(execCanDropShield); \
	DECLARE_FUNCTION(execCanHitKoFinisher); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execCanKo); \
	DECLARE_FUNCTION(execCanKoFinisher); \
	DECLARE_FUNCTION(execCanPickupObject); \
	DECLARE_FUNCTION(execCanPickupShield); \
	DECLARE_FUNCTION(execCanPutTrap); \
	DECLARE_FUNCTION(execCanRevive); \
	DECLARE_FUNCTION(execCanUseAbility); \
	DECLARE_FUNCTION(execCanUseCurrentItem); \
	DECLARE_FUNCTION(execChangeToPickupObject); \
	DECLARE_FUNCTION(execCheckAllowCharacterControll); \
	DECLARE_FUNCTION(execCheckAlreadyHitKoFinisher); \
	DECLARE_FUNCTION(execCheckAttackedLocalPlayer); \
	DECLARE_FUNCTION(execCheckForSpecialCaseDoInteract); \
	DECLARE_FUNCTION(execCheckHitCollision); \
	DECLARE_FUNCTION(execCheckInSight); \
	DECLARE_FUNCTION(execCheckInteractDegree); \
	DECLARE_FUNCTION(execCheckPushpinUnderfoot); \
	DECLARE_FUNCTION(execClearAttack); \
	DECLARE_FUNCTION(execClearHold); \
	DECLARE_FUNCTION(execClearReservedTransformOnNotifyCamera); \
	DECLARE_FUNCTION(execConsumeCarrot); \
	DECLARE_FUNCTION(execCreateWrestlerSetupParam); \
	DECLARE_FUNCTION(execDeactivateBadStatus_Multicast); \
	DECLARE_FUNCTION(execDebugAssembleThemAll); \
	DECLARE_FUNCTION(execDebugCall_ReliableClientRPC); \
	DECLARE_FUNCTION(execDebugCall_ReliableServerRPC); \
	DECLARE_FUNCTION(execDebugCall_UnreliableClientRPC); \
	DECLARE_FUNCTION(execDebugCall_UnreliableServerRPC); \
	DECLARE_FUNCTION(execDebugDelayKill); \
	DECLARE_FUNCTION(execDebugDestroyThemAll); \
	DECLARE_FUNCTION(execDebugDispAttention); \
	DECLARE_FUNCTION(execDebugDispDamage); \
	DECLARE_FUNCTION(execDebugForceGuardToTarget); \
	DECLARE_FUNCTION(execDebugPlayerTeleport); \
	DECLARE_FUNCTION(execDebugRotationThemAll); \
	DECLARE_FUNCTION(execDebugSetHeatLevel_Multicast); \
	DECLARE_FUNCTION(execDebugSetHP); \
	DECLARE_FUNCTION(execDebugSetMoveIdOverride); \
	DECLARE_FUNCTION(execDebugSetNearKo); \
	DECLARE_FUNCTION(execDebugTeleportToSelectPlayerStartLocator); \
	DECLARE_FUNCTION(execDebugToggleGuardToTarget); \
	DECLARE_FUNCTION(execDebugUnlimitedUseItemAndWeapon_Server); \
	DECLARE_FUNCTION(execDetachEffectAllFromMesh); \
	DECLARE_FUNCTION(execDetachFeverEffect); \
	DECLARE_FUNCTION(execDetachReviveEffect); \
	DECLARE_FUNCTION(execDetachStunEffect); \
	DECLARE_FUNCTION(execDoInteract); \
	DECLARE_FUNCTION(execDoInteract_Server); \
	DECLARE_FUNCTION(execDropAllPickupsFromInventory); \
	DECLARE_FUNCTION(execDropCarrot); \
	DECLARE_FUNCTION(execDropCurrentPickup); \
	DECLARE_FUNCTION(execDropCurrentPickup_Server); \
	DECLARE_FUNCTION(execDropFromInventory); \
	DECLARE_FUNCTION(execDropShield); \
	DECLARE_FUNCTION(execEndActionCamera); \
	DECLARE_FUNCTION(execEndHoldInteract_Client); \
	DECLARE_FUNCTION(execEndHoldInteract_Server); \
	DECLARE_FUNCTION(execEndReviveArea); \
	DECLARE_FUNCTION(execEndSyncMotion); \
	DECLARE_FUNCTION(execEndTickUseItem_Client); \
	DECLARE_FUNCTION(execEndVehicleCameraAndUI); \
	DECLARE_FUNCTION(execExecuteAbility_Multicast); \
	DECLARE_FUNCTION(execExecuteInteractEffect_Server); \
	DECLARE_FUNCTION(execFailedKoFinisher_Client); \
	DECLARE_FUNCTION(execFailedPutTrapMove_Client); \
	DECLARE_FUNCTION(execFailedUseAbility_Client); \
	DECLARE_FUNCTION(execFailedUseItem_Client); \
	DECLARE_FUNCTION(execFindEmptyInventoryIndex); \
	DECLARE_FUNCTION(execFindFirstInventoryActor); \
	DECLARE_FUNCTION(execFindInventoryIndex); \
	DECLARE_FUNCTION(execGetActionDesiredInputVec); \
	DECLARE_FUNCTION(execGetActionSpeedRate); \
	DECLARE_FUNCTION(execGetActorBottomLocation); \
	DECLARE_FUNCTION(execGetActorCameraBasisLocation); \
	DECLARE_FUNCTION(execGetActorCenterLocation); \
	DECLARE_FUNCTION(execGetAddExpRate); \
	DECLARE_FUNCTION(execGetAirAttackMinHeight); \
	DECLARE_FUNCTION(execGetAssociatedController); \
	DECLARE_FUNCTION(execGetAssociatedSSPlayerState); \
	DECLARE_FUNCTION(execGetAttackerComponent); \
	DECLARE_FUNCTION(execGetAttackPower); \
	DECLARE_FUNCTION(execGetAutoHpRecoverRate); \
	DECLARE_FUNCTION(execGetAvailableAbilitiyIndices); \
	DECLARE_FUNCTION(execGetClonedMesh); \
	DECLARE_FUNCTION(execGetCostumeID); \
	DECLARE_FUNCTION(execGetCurrentFloorPhysicalSurfaceType); \
	DECLARE_FUNCTION(execGetCurrentItem); \
	DECLARE_FUNCTION(execGetCurrentPickup); \
	DECLARE_FUNCTION(execGetCurrentShield); \
	DECLARE_FUNCTION(execGetCurrentShieldDurabilityRatio); \
	DECLARE_FUNCTION(execGetCurrentSituationMoveTrigger); \
	DECLARE_FUNCTION(execGetCurrentVehiclePawn); \
	DECLARE_FUNCTION(execGetCurrentWallHitResult); \
	DECLARE_FUNCTION(execGetCurrentWallPhysicalSurfaceType); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetDamageComponent); \
	DECLARE_FUNCTION(execGetDamageVector); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execGetELSSCharacterMovement); \
	DECLARE_FUNCTION(execGetEnemyVisibleDistance); \
	DECLARE_FUNCTION(execGetExpRateToNext); \
	DECLARE_FUNCTION(execGetExternalStationalCamera); \
	DECLARE_FUNCTION(execGetGravityScaleByNotify); \
	DECLARE_FUNCTION(execGetGuardLevel); \
	DECLARE_FUNCTION(execGetGuardReduceDamageRate); \
	DECLARE_FUNCTION(execGetHP); \
	DECLARE_FUNCTION(execGetHPRatio); \
	DECLARE_FUNCTION(execGetHudHpGaugeOffset); \
	DECLARE_FUNCTION(execGetInteractTarget); \
	DECLARE_FUNCTION(execGetInventoryActorAt); \
	DECLARE_FUNCTION(execGetInvolveDamage); \
	DECLARE_FUNCTION(execGetInvolveDamageFeedback); \
	DECLARE_FUNCTION(execGetInvolveInstigator); \
	DECLARE_FUNCTION(execGetIsInReviveArea); \
	DECLARE_FUNCTION(execGetItemVisibleDistance); \
	DECLARE_FUNCTION(execGetJumpPowerRate); \
	DECLARE_FUNCTION(execGetKoHP); \
	DECLARE_FUNCTION(execGetKoHPRatio); \
	DECLARE_FUNCTION(execGetKoMaxHP); \
	DECLARE_FUNCTION(execGetLastInteractExecute); \
	DECLARE_FUNCTION(execGetMaxHP); \
	DECLARE_FUNCTION(execGetMoveId); \
	DECLARE_FUNCTION(execGetOffVehicle); \
	DECLARE_FUNCTION(execGetOnVehicle); \
	DECLARE_FUNCTION(execGetOnVehicle_Multicast); \
	DECLARE_FUNCTION(execGetRandomBadgeId); \
	DECLARE_FUNCTION(execGetReduceDamageRate); \
	DECLARE_FUNCTION(execGetSeeThroughDistance); \
	DECLARE_FUNCTION(execGetSlipBrakingDecelerationWalking); \
	DECLARE_FUNCTION(execGetSlipBrakingFriction); \
	DECLARE_FUNCTION(execGetSlipBrakingFrictionFactor); \
	DECLARE_FUNCTION(execGetSlipGroundFriction); \
	DECLARE_FUNCTION(execGetSpeedRate); \
	DECLARE_FUNCTION(execGetSSPlayerControllerForUIUpdate); \
	DECLARE_FUNCTION(execGetSSWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetStationalCameraBaseTransform); \
	DECLARE_FUNCTION(execGetStationalCameraBaseTransformOwnerInitial); \
	DECLARE_FUNCTION(execGetStationalCameraBaseTransformReceiverInitial); \
	DECLARE_FUNCTION(execGetStationalCameraDisable); \
	DECLARE_FUNCTION(execGetStationalCameraLocatorOffset); \
	DECLARE_FUNCTION(execGetStationalCameraLocatorOwner); \
	DECLARE_FUNCTION(execGetStormReduceDamageRate); \
	DECLARE_FUNCTION(execGetSyncTargetPlayer); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execGetTargetComponent); \
	DECLARE_FUNCTION(execGetWatcherPlayerController); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerType); \
	DECLARE_FUNCTION(execGuard); \
	DECLARE_FUNCTION(execHasAnyPickupInInventory); \
	DECLARE_FUNCTION(execHasAnyWeaponInInventory); \
	DECLARE_FUNCTION(execHasCarrot); \
	DECLARE_FUNCTION(execHasDebugFlag); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execHitResultToSurfaceType); \
	DECLARE_FUNCTION(execIsAIPlayerForServer); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsDown); \
	DECLARE_FUNCTION(execIsEnableSafeLanding); \
	DECLARE_FUNCTION(execIsEnableSlip); \
	DECLARE_FUNCTION(execIsForceDown); \
	DECLARE_FUNCTION(execIsFullHP); \
	DECLARE_FUNCTION(execIsGuard); \
	DECLARE_FUNCTION(execIsKo); \
	DECLARE_FUNCTION(execIsLocallyPlayerControlled); \
	DECLARE_FUNCTION(execIsNearlyIdle); \
	DECLARE_FUNCTION(execIsPlayingSyncMotion); \
	DECLARE_FUNCTION(execIsPlayingSyncMotionAfterSyncOff); \
	DECLARE_FUNCTION(execIsRestrictWaitSituationMove); \
	DECLARE_FUNCTION(execIsTargetable); \
	DECLARE_FUNCTION(execKoFinisher); \
	DECLARE_FUNCTION(execLaunchThrowWeaponProjectile_Server); \
	DECLARE_FUNCTION(execLostCurrentItem); \
	DECLARE_FUNCTION(execLostCurrentItemIfUsed); \
	DECLARE_FUNCTION(execLostCurrentWeapon); \
	DECLARE_FUNCTION(execLostCurrentWeaponIfBroke); \
	DECLARE_FUNCTION(execLostShield); \
	DECLARE_FUNCTION(execLostWeaponIfBroke); \
	DECLARE_FUNCTION(execLostWeaponIfBrokeAll); \
	DECLARE_FUNCTION(execMoveCurrentInventory); \
	DECLARE_FUNCTION(execMoveCurrentInventory_Server); \
	DECLARE_FUNCTION(execNotifyAddExp_Client); \
	DECLARE_FUNCTION(execNotifyRecoveredHp_Multicast); \
	DECLARE_FUNCTION(execNotifyRecoveredShield_Multicast); \
	DECLARE_FUNCTION(execOnAnimNotify_Camera); \
	DECLARE_FUNCTION(execOnBeginAttack); \
	DECLARE_FUNCTION(execOnBeginInteractState); \
	DECLARE_FUNCTION(execOnBeginJump); \
	DECLARE_FUNCTION(execOnBeginWaitSituationMove); \
	DECLARE_FUNCTION(execOnCompletedDownStandUp); \
	DECLARE_FUNCTION(execOnDeactivateAttack); \
	DECLARE_FUNCTION(execOnDeathDropPickups); \
	DECLARE_FUNCTION(execOnDownDropPickups); \
	DECLARE_FUNCTION(execOnEndAttack); \
	DECLARE_FUNCTION(execOnEndDownStandUp); \
	DECLARE_FUNCTION(execOnEndInteractState); \
	DECLARE_FUNCTION(execOnEnterInteractArea); \
	DECLARE_FUNCTION(execOnExitInteractArea); \
	DECLARE_FUNCTION(execOnFailedKoFinisher); \
	DECLARE_FUNCTION(execOnHeatLevelUp_Client); \
	DECLARE_FUNCTION(execOnHitKoFinisher); \
	DECLARE_FUNCTION(execOnKoDropPickups); \
	DECLARE_FUNCTION(execOnMomentOfDeath); \
	DECLARE_FUNCTION(execOnMomentOfKo); \
	DECLARE_FUNCTION(execOnNotifyGravityScaleBegin); \
	DECLARE_FUNCTION(execOnNotifyGravityScaleEnd); \
	DECLARE_FUNCTION(execOnNotifyRunBegin); \
	DECLARE_FUNCTION(execOnNotifyRunEnd); \
	DECLARE_FUNCTION(execOnPostDamaged); \
	DECLARE_FUNCTION(execOnRep_AbilityUsedTime1); \
	DECLARE_FUNCTION(execOnRep_AbilityUsedTime2); \
	DECLARE_FUNCTION(execOnRep_AbilityUsedTime3); \
	DECLARE_FUNCTION(execOnRep_CurrentInventoryIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentPickup); \
	DECLARE_FUNCTION(execOnRep_CurrentShield); \
	DECLARE_FUNCTION(execOnRep_Exp); \
	DECLARE_FUNCTION(execOnRep_ForceThinMode); \
	DECLARE_FUNCTION(execOnRep_HP); \
	DECLARE_FUNCTION(execOnRep_InteractHoldBeginTime); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execOnRep_KoHP); \
	DECLARE_FUNCTION(execOnRep_PickupedCarrot); \
	DECLARE_FUNCTION(execOnRep_PlayerDebugFlags); \
	DECLARE_FUNCTION(execOnRep_PlayerFlags); \
	DECLARE_FUNCTION(execOnRep_UseItemBeginTimeRep); \
	DECLARE_FUNCTION(execOnSuccessCauseDamage); \
	DECLARE_FUNCTION(execOnSuccessInteractTreasureBox); \
	DECLARE_FUNCTION(execOnSuccessKoFinisher); \
	DECLARE_FUNCTION(execOnTickInteractState); \
	DECLARE_FUNCTION(execOnTryKoFinisher); \
	DECLARE_FUNCTION(execPerformDamage); \
	DECLARE_FUNCTION(execPickupCarrot); \
	DECLARE_FUNCTION(execPickupObject); \
	DECLARE_FUNCTION(execPickupShield); \
	DECLARE_FUNCTION(execPlay3DSEAttached_ForString); \
	DECLARE_FUNCTION(execPlayCameraShake); \
	DECLARE_FUNCTION(execPlayDamageImpact); \
	DECLARE_FUNCTION(execPlayDamageSE); \
	DECLARE_FUNCTION(execPlayHitGroundSE); \
	DECLARE_FUNCTION(execProgressActionCamera); \
	DECLARE_FUNCTION(execPutTrap_Server); \
	DECLARE_FUNCTION(execRecoveryHpByItem); \
	DECLARE_FUNCTION(execRecoveryShieldByItem); \
	DECLARE_FUNCTION(execRefreshCurrentPickupVisibility); \
	DECLARE_FUNCTION(execReleaseHold); \
	DECLARE_FUNCTION(execRemoveAllFromInventory); \
	DECLARE_FUNCTION(execRemovePickupFromInventory); \
	DECLARE_FUNCTION(execRemoveStickedWeapon); \
	DECLARE_FUNCTION(execReplaceMontageOnChangeCurrentPickup); \
	DECLARE_FUNCTION(execRequestDie); \
	DECLARE_FUNCTION(execRequestDie_Multicast); \
	DECLARE_FUNCTION(execRequestKo); \
	DECLARE_FUNCTION(execRequestKo_Multicast); \
	DECLARE_FUNCTION(execReserveAddShield); \
	DECLARE_FUNCTION(execReserveAddToInventory); \
	DECLARE_FUNCTION(execReserveTransformOnNotifyCamera); \
	DECLARE_FUNCTION(execResetDownStateValue); \
	DECLARE_FUNCTION(execResetInteractStateLocalInfo); \
	DECLARE_FUNCTION(execResetRestrictWaitSituationMove); \
	DECLARE_FUNCTION(execResetStationalCamera); \
	DECLARE_FUNCTION(execResponseSyncRotationMulticast); \
	DECLARE_FUNCTION(execRevive); \
	DECLARE_FUNCTION(execRevive_Multicast); \
	DECLARE_FUNCTION(execSearchSituationMoveTrigger); \
	DECLARE_FUNCTION(execServerUpdateSyncRotation); \
	DECLARE_FUNCTION(execSetCurrentPickup); \
	DECLARE_FUNCTION(execSetCurrentPickupHideFlagByActionState); \
	DECLARE_FUNCTION(execSetCurrentShield); \
	DECLARE_FUNCTION(execSetDebugFlag_Server); \
	DECLARE_FUNCTION(execSetDisableShieldVisible); \
	DECLARE_FUNCTION(execSetDisableStickAttach); \
	DECLARE_FUNCTION(execSetDownFaceUpType); \
	DECLARE_FUNCTION(execSetEnableSyncMove); \
	DECLARE_FUNCTION(execSetExternalStationalCamera); \
	DECLARE_FUNCTION(execSetFlag); \
	DECLARE_FUNCTION(execSetFlag_Server); \
	DECLARE_FUNCTION(execSetForceDefaultMoveCollision); \
	DECLARE_FUNCTION(execSetGunAimMode_Server); \
	DECLARE_FUNCTION(execSetHeatLevel); \
	DECLARE_FUNCTION(execSetHP); \
	DECLARE_FUNCTION(execSetInteractTarget); \
	DECLARE_FUNCTION(execSetKoHP); \
	DECLARE_FUNCTION(execSetMoveCollisionHeightScale); \
	DECLARE_FUNCTION(execSetPickupedCarrot); \
	DECLARE_FUNCTION(execSetPutTrapAimMode_Server); \
	DECLARE_FUNCTION(execSetReserveRequestDuration); \
	DECLARE_FUNCTION(execSetReserveRequestDurationDefault); \
	DECLARE_FUNCTION(execSetStandbyKoFinisher); \
	DECLARE_FUNCTION(execSetStationalCameraBaseTransform); \
	DECLARE_FUNCTION(execSetStationalCameraInitialBaseTransform); \
	DECLARE_FUNCTION(execSetStickedWeapon); \
	DECLARE_FUNCTION(execSetSyncTarget); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execSetThrowWeaponAimMode_Server); \
	DECLARE_FUNCTION(execSetupInventory); \
	DECLARE_FUNCTION(execSetupMoveCollisionSize); \
	DECLARE_FUNCTION(execSetWalkSpeedScale); \
	DECLARE_FUNCTION(execSpawnGunBullet_Server); \
	DECLARE_FUNCTION(execStartHold); \
	DECLARE_FUNCTION(execStartSyncMotion); \
	DECLARE_FUNCTION(execStartSyncMotionForPreview); \
	DECLARE_FUNCTION(execSteppingOnPushpin); \
	DECLARE_FUNCTION(execStickPickupToOtherActor); \
	DECLARE_FUNCTION(execSuccessKoFinisher_Multicast); \
	DECLARE_FUNCTION(execSuicide); \
	DECLARE_FUNCTION(execSwapShield); \
	DECLARE_FUNCTION(execSyncGunAimState_Server); \
	DECLARE_FUNCTION(execSyncOffReceiver); \
	DECLARE_FUNCTION(execSyncPutTrapAimState_Server); \
	DECLARE_FUNCTION(execSyncThrowWeaponAimState_Server); \
	DECLARE_FUNCTION(execTeleportToPlayerStartLocator); \
	DECLARE_FUNCTION(execTickHoldTime); \
	DECLARE_FUNCTION(execTickInteract); \
	DECLARE_FUNCTION(execTickKo); \
	DECLARE_FUNCTION(execTickKoDamageCycle); \
	DECLARE_FUNCTION(execTickOperationGuideExecute); \
	DECLARE_FUNCTION(execTickReviveArea); \
	DECLARE_FUNCTION(execTickUseItem); \
	DECLARE_FUNCTION(execTickVehiclePhysics); \
	DECLARE_FUNCTION(execTryGetOnVehicle_Server); \
	DECLARE_FUNCTION(execTryKoFinisher_Server); \
	DECLARE_FUNCTION(execUpdateAutonomousSyncRotate); \
	DECLARE_FUNCTION(execUpdateCarrotUI); \
	DECLARE_FUNCTION(execUpdateCurrentShieldDurabilityUI); \
	DECLARE_FUNCTION(execUpdateCurrentVehicleDurabilityUI); \
	DECLARE_FUNCTION(execUpdateInteractTarget); \
	DECLARE_FUNCTION(execUpdateInteractUI); \
	DECLARE_FUNCTION(execUpdateInteractUIIfInteract); \
	DECLARE_FUNCTION(execUpdateInventoryIconValueUI); \
	DECLARE_FUNCTION(execUpdateInventoryPositionUI); \
	DECLARE_FUNCTION(execUpdateInventoryUI); \
	DECLARE_FUNCTION(execUpdateKoFinisherTarget); \
	DECLARE_FUNCTION(execUpdateMoveCollisionSize); \
	DECLARE_FUNCTION(execUpdateSlipFlag); \
	DECLARE_FUNCTION(execUpdateTargetOnLocalAttack); \
	DECLARE_FUNCTION(execUsableCurrentWeaponMove); \
	DECLARE_FUNCTION(execUseAbility); \
	DECLARE_FUNCTION(execUseAbility_Server); \
	DECLARE_FUNCTION(execUseCurrentItem); \
	DECLARE_FUNCTION(execUseCurrentItem_Server);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_EVENT_PARMS \
	struct ELSSPlayer_eventActivateBadStatus_Multicast_Parms \
	{ \
		ESSBadStatus InType; \
		float InValue; \
		int32 inMoveId; \
		int32 inAttackHitId; \
		float InDuration; \
		AELSSPlayer* inInstigator; \
		float inSyncTime; \
	}; \
	struct ELSSPlayer_eventBeginGunFireMove_Server_Parms \
	{ \
		int32 inMoveId; \
	}; \
	struct ELSSPlayer_eventBeginPutTrapMove_Server_Parms \
	{ \
		int32 inMoveId; \
	}; \
	struct ELSSPlayer_eventBeginSyncMoveMulticast_Parms \
	{ \
		AELSSPlayer* inAttacker; \
		AELSSPlayer* inReceiver; \
		int32 inAttackerMoveId; \
		FVector_NetQuantize InLocation; \
		float inYaw; \
		bool inIsFinisher; \
		AELSSSituationMoveTrigger* inTrigger; \
	}; \
	struct ELSSPlayer_eventBeginThrowWeaponMove_Server_Parms \
	{ \
		int32 inMoveId; \
	}; \
	struct ELSSPlayer_eventDeactivateBadStatus_Multicast_Parms \
	{ \
		ESSBadStatus InType; \
		float inSyncTime; \
	}; \
	struct ELSSPlayer_eventDebugCall_ReliableClientRPC_Parms \
	{ \
		int32 inSendId; \
	}; \
	struct ELSSPlayer_eventDebugCall_ReliableServerRPC_Parms \
	{ \
		int32 inSendId; \
	}; \
	struct ELSSPlayer_eventDebugCall_UnreliableClientRPC_Parms \
	{ \
		int32 inSendId; \
	}; \
	struct ELSSPlayer_eventDebugCall_UnreliableServerRPC_Parms \
	{ \
		int32 inSendId; \
	}; \
	struct ELSSPlayer_eventDebugDelayKill_Parms \
	{ \
		float inTimer; \
	}; \
	struct ELSSPlayer_eventDebugDestroyThemAll_Parms \
	{ \
		bool excludeMyself; \
	}; \
	struct ELSSPlayer_eventDebugDispAttention_Parms \
	{ \
		ESSAttentionReason inAttentionReason; \
		int32 inPointValue; \
	}; \
	struct ELSSPlayer_eventDebugDispDamage_Parms \
	{ \
		FVector inHitLocation; \
		ESSDamageReason inDamageReason; \
		FSSDamageResult inDamageResult; \
	}; \
	struct ELSSPlayer_eventDebugForceGuardToTarget_Parms \
	{ \
		float guardTime; \
	}; \
	struct ELSSPlayer_eventDebugPlayerTeleport_Parms \
	{ \
		FVector Pos; \
	}; \
	struct ELSSPlayer_eventDebugRotationThemAll_Parms \
	{ \
		float degree; \
	}; \
	struct ELSSPlayer_eventDebugSetHeatLevel_Multicast_Parms \
	{ \
		int32 inHeatLevel; \
	}; \
	struct ELSSPlayer_eventDebugSetHP_Parms \
	{ \
		float Ratio; \
	}; \
	struct ELSSPlayer_eventDebugSetMoveIdOverride_Parms \
	{ \
		FSSDebugMoveIdOverrideParam inOverrideParam; \
	}; \
	struct ELSSPlayer_eventDebugTeleportToSelectPlayerStartLocator_Parms \
	{ \
		ESSPlayerStartLocatorType inLocatorType; \
		ESSPlayerStartLocatorAreaId inAreaId; \
		int32 inFilterID; \
		FString inActorName; \
	}; \
	struct ELSSPlayer_eventDebugUnlimitedUseItemAndWeapon_Server_Parms \
	{ \
		bool IsOn; \
	}; \
	struct ELSSPlayer_eventDoInteract_Server_Parms \
	{ \
		AActor* inInteractTargetActor; \
	}; \
	struct ELSSPlayer_eventExecuteAbility_Multicast_Parms \
	{ \
		int32 inSlotIndex; \
	}; \
	struct ELSSPlayer_eventExecuteInteractEffect_Server_Parms \
	{ \
		AActor* inInteractTarget; \
	}; \
	struct ELSSPlayer_eventFailedKoFinisher_Client_Parms \
	{ \
		AELSSPlayer* Target; \
	}; \
	struct ELSSPlayer_eventFailedUseAbility_Client_Parms \
	{ \
		int32 inSlotIndex; \
	}; \
	struct ELSSPlayer_eventGetAdjustParamFromDataTable_Parms \
	{ \
		FSSCharacterAdjust outAdjustParam; \
	}; \
	struct ELSSPlayer_eventGetClonedMesh_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayer_eventGetClonedMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSPlayer_eventGetFootIKComponent_Parms \
	{ \
		UELSSFootIK* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayer_eventGetFootIKComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSPlayer_eventGetOnVehicle_Multicast_Parms \
	{ \
		APawn* vehiclePawn; \
	}; \
	struct ELSSPlayer_eventGetSystemMotionRowNameByWrestlerProfile_Parms \
	{ \
		FName ReturnValue; \
	}; \
	struct ELSSPlayer_eventGetSystemMotionRowNameByWrestlerType_Parms \
	{ \
		FName ReturnValue; \
	}; \
	struct ELSSPlayer_eventLaunchThrowWeaponProjectile_Server_Parms \
	{ \
		FRotator InRotation; \
	}; \
	struct ELSSPlayer_eventMoveCurrentInventory_Server_Parms \
	{ \
		bool isRightMove; \
	}; \
	struct ELSSPlayer_eventNotifyAddExp_Client_Parms \
	{ \
		int32 itemDatabaseId; \
	}; \
	struct ELSSPlayer_eventNotifyRecoveredHp_Multicast_Parms \
	{ \
		int32 itemDatabaseId; \
	}; \
	struct ELSSPlayer_eventNotifyRecoveredShield_Multicast_Parms \
	{ \
		int32 itemDatabaseId; \
	}; \
	struct ELSSPlayer_eventOnChangeMeshMode_Parms \
	{ \
		ESSPlayerMeshMode inMode; \
	}; \
	struct ELSSPlayer_eventOnHeatLevelUp_Client_Parms \
	{ \
		int32 inNewLevel; \
		int32 inNewHP; \
	}; \
	struct ELSSPlayer_eventOnPostDamaged_Parms \
	{ \
		FSSDamageResult damageResult; \
	}; \
	struct ELSSPlayer_eventOnTickPlayerMeshMode_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayer_eventPlayFeverLoopSE_Parms \
	{ \
		bool InPlaySE; \
	}; \
	struct ELSSPlayer_eventPutTrap_Server_Parms \
	{ \
		FVector_NetQuantize InLocation; \
		float inTargetYaw; \
		int32 inMoveId; \
		int32 inStateHash; \
	}; \
	struct ELSSPlayer_eventResponseSyncRotationMulticast_Parms \
	{ \
		float inYaw; \
	}; \
	struct ELSSPlayer_eventRevive_Multicast_Parms \
	{ \
		float inHpRecoverRate; \
	}; \
	struct ELSSPlayer_eventServerUpdateSyncRotation_Parms \
	{ \
		float inYaw; \
	}; \
	struct ELSSPlayer_eventSetDebugFlag_Server_Parms \
	{ \
		ESSPlayerDebugFlag Type; \
		bool IsOn; \
	}; \
	struct ELSSPlayer_eventSetEnableSilhouetteActor_Parms \
	{ \
		bool inEnable; \
	}; \
	struct ELSSPlayer_eventSetFlag_Server_Parms \
	{ \
		ESSPlayerFlag Type; \
		bool IsOn; \
	}; \
	struct ELSSPlayer_eventSetGunAimMode_Server_Parms \
	{ \
		bool inEnable; \
	}; \
	struct ELSSPlayer_eventSetPutTrapAimMode_Server_Parms \
	{ \
		bool inEnable; \
	}; \
	struct ELSSPlayer_eventSetThrowWeaponAimMode_Server_Parms \
	{ \
		bool inEnable; \
	}; \
	struct ELSSPlayer_eventSpawnGunBullet_Server_Parms \
	{ \
		FVector_NetQuantize InLocation; \
		FRotator InRotation; \
		int32 inMoveId; \
		int32 inStateHash; \
	}; \
	struct ELSSPlayer_eventSpawnSilhouetteActor_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayer_eventSpawnSilhouetteActor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSPlayer_eventSuccessKoFinisher_Multicast_Parms \
	{ \
		AELSSPlayer* Target; \
	}; \
	struct ELSSPlayer_eventSyncGunAimState_Server_Parms \
	{ \
		FVector_NetQuantize inActorLocation; \
		FVector_NetQuantize inAimTargetLocation; \
		float inGameplayTime; \
	}; \
	struct ELSSPlayer_eventSyncPutTrapAimState_Server_Parms \
	{ \
		FVector_NetQuantize inActorLocation; \
		float inAimTargetYaw; \
		float inGameplayTime; \
	}; \
	struct ELSSPlayer_eventSyncThrowWeaponAimState_Server_Parms \
	{ \
		FVector_NetQuantize inActorLocation; \
		FVector_NetQuantize inAimTargetLocation; \
		float inGameplayTime; \
	}; \
	struct ELSSPlayer_eventTryGetOnVehicle_Server_Parms \
	{ \
		APawn* vehiclePawn; \
	}; \
	struct ELSSPlayer_eventTryKoFinisher_Server_Parms \
	{ \
		AELSSPlayer* Target; \
	}; \
	struct ELSSPlayer_eventUseAbility_Server_Parms \
	{ \
		int32 inSlotIndex; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSPlayer(); \
	friend struct Z_Construct_UClass_AELSSPlayer_Statics; \
public: \
	DECLARE_CLASS(AELSSPlayer, AELSSCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ForceThinMode=NETFIELD_REP_START, \
		SSPlayerProfileForInGame, \
		WrestlerID, \
		Exp, \
		SSWrestlerSetupParam, \
		UseDefaultUserSettings, \
		HP, \
		KoHP, \
		AbilityUsedTime1_Rep, \
		AbilityUsedTime2_Rep, \
		AbilityUsedTime3_Rep, \
		EquippedAbilityId_1, \
		EquippedAbilityId_2, \
		EquippedAbilityId_3, \
		UseItemBeginTimeRep, \
		CurrentShield, \
		Inventory, \
		currentInventoryIndex, \
		CurrentPickup, \
		PickupedCarrot, \
		InteractHoldBeginTimeRep, \
		MoveSetSettings, \
		equipSettings, \
		ReplicatedSyncMotionPlayState, \
		PlayerFlags, \
		PlayerDebugFlags, \
		DebugReceivedServerRPCReliable, \
		DebugReceivedServerRPCUnreliable, \
		NETFIELD_REP_END=DebugReceivedServerRPCUnreliable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_INCLASS \
private: \
	static void StaticRegisterNativesAELSSPlayer(); \
	friend struct Z_Construct_UClass_AELSSPlayer_Statics; \
public: \
	DECLARE_CLASS(AELSSPlayer, AELSSCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSPlayer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ForceThinMode=NETFIELD_REP_START, \
		SSPlayerProfileForInGame, \
		WrestlerID, \
		Exp, \
		SSWrestlerSetupParam, \
		UseDefaultUserSettings, \
		HP, \
		KoHP, \
		AbilityUsedTime1_Rep, \
		AbilityUsedTime2_Rep, \
		AbilityUsedTime3_Rep, \
		EquippedAbilityId_1, \
		EquippedAbilityId_2, \
		EquippedAbilityId_3, \
		UseItemBeginTimeRep, \
		CurrentShield, \
		Inventory, \
		currentInventoryIndex, \
		CurrentPickup, \
		PickupedCarrot, \
		InteractHoldBeginTimeRep, \
		MoveSetSettings, \
		equipSettings, \
		ReplicatedSyncMotionPlayState, \
		PlayerFlags, \
		PlayerDebugFlags, \
		DebugReceivedServerRPCReliable, \
		DebugReceivedServerRPCUnreliable, \
		NETFIELD_REP_END=DebugReceivedServerRPCUnreliable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPlayer(AELSSPlayer&&); \
	NO_API AELSSPlayer(const AELSSPlayer&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPlayer(AELSSPlayer&&); \
	NO_API AELSSPlayer(const AELSSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSPlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FallInfo() { return STRUCT_OFFSET(AELSSPlayer, FallInfo); } \
	FORCEINLINE static uint32 __PPO__LastFallReason() { return STRUCT_OFFSET(AELSSPlayer, LastFallReason); } \
	FORCEINLINE static uint32 __PPO__FallingSpdHistory() { return STRUCT_OFFSET(AELSSPlayer, FallingSpdHistory); } \
	FORCEINLINE static uint32 __PPO__FallingPrevLocation() { return STRUCT_OFFSET(AELSSPlayer, FallingPrevLocation); } \
	FORCEINLINE static uint32 __PPO__FallingStartLocation() { return STRUCT_OFFSET(AELSSPlayer, FallingStartLocation); } \
	FORCEINLINE static uint32 __PPO__LandingFrameCount() { return STRUCT_OFFSET(AELSSPlayer, LandingFrameCount); } \
	FORCEINLINE static uint32 __PPO__ForceThinMode() { return STRUCT_OFFSET(AELSSPlayer, ForceThinMode); } \
	FORCEINLINE static uint32 __PPO__TempActorsToIgnore() { return STRUCT_OFFSET(AELSSPlayer, TempActorsToIgnore); } \
	FORCEINLINE static uint32 __PPO__ActorsToIgnoreSelf() { return STRUCT_OFFSET(AELSSPlayer, ActorsToIgnoreSelf); } \
	FORCEINLINE static uint32 __PPO__EventOnAttack() { return STRUCT_OFFSET(AELSSPlayer, EventOnAttack); } \
	FORCEINLINE static uint32 __PPO__EventOnJumped() { return STRUCT_OFFSET(AELSSPlayer, EventOnJumped); } \
	FORCEINLINE static uint32 __PPO__EventOnLanded() { return STRUCT_OFFSET(AELSSPlayer, EventOnLanded); } \
	FORCEINLINE static uint32 __PPO__CostumeID() { return STRUCT_OFFSET(AELSSPlayer, CostumeID); } \
	FORCEINLINE static uint32 __PPO__SSPlayerProfileForInGame() { return STRUCT_OFFSET(AELSSPlayer, SSPlayerProfileForInGame); } \
	FORCEINLINE static uint32 __PPO__WrestlerID() { return STRUCT_OFFSET(AELSSPlayer, WrestlerID); } \
	FORCEINLINE static uint32 __PPO__HeatLevel() { return STRUCT_OFFSET(AELSSPlayer, HeatLevel); } \
	FORCEINLINE static uint32 __PPO__Exp() { return STRUCT_OFFSET(AELSSPlayer, Exp); } \
	FORCEINLINE static uint32 __PPO__WrestlerParam() { return STRUCT_OFFSET(AELSSPlayer, WrestlerParam); } \
	FORCEINLINE static uint32 __PPO__WrestlerTypeParam() { return STRUCT_OFFSET(AELSSPlayer, WrestlerTypeParam); } \
	FORCEINLINE static uint32 __PPO__HeatLevelParam() { return STRUCT_OFFSET(AELSSPlayer, HeatLevelParam); } \
	FORCEINLINE static uint32 __PPO__SSWrestlerSetupParam() { return STRUCT_OFFSET(AELSSPlayer, SSWrestlerSetupParam); } \
	FORCEINLINE static uint32 __PPO__DefaultMaxWalkSpeed() { return STRUCT_OFFSET(AELSSPlayer, DefaultMaxWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__UseDefaultUserSettings() { return STRUCT_OFFSET(AELSSPlayer, UseDefaultUserSettings); } \
	FORCEINLINE static uint32 __PPO__HeatLevelUpEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSPlayer, HeatLevelUpEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__FootIKComp() { return STRUCT_OFFSET(AELSSPlayer, FootIKComp); } \
	FORCEINLINE static uint32 __PPO__AdjustParam() { return STRUCT_OFFSET(AELSSPlayer, AdjustParam); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(AELSSPlayer, HP); } \
	FORCEINLINE static uint32 __PPO__maxHP() { return STRUCT_OFFSET(AELSSPlayer, maxHP); } \
	FORCEINLINE static uint32 __PPO__KoHP() { return STRUCT_OFFSET(AELSSPlayer, KoHP); } \
	FORCEINLINE static uint32 __PPO__KoMaxHP() { return STRUCT_OFFSET(AELSSPlayer, KoMaxHP); } \
	FORCEINLINE static uint32 __PPO__AttackPowerBase() { return STRUCT_OFFSET(AELSSPlayer, AttackPowerBase); } \
	FORCEINLINE static uint32 __PPO__AbilityUsedTime1_Rep() { return STRUCT_OFFSET(AELSSPlayer, AbilityUsedTime1_Rep); } \
	FORCEINLINE static uint32 __PPO__AbilityUsedTime2_Rep() { return STRUCT_OFFSET(AELSSPlayer, AbilityUsedTime2_Rep); } \
	FORCEINLINE static uint32 __PPO__AbilityUsedTime3_Rep() { return STRUCT_OFFSET(AELSSPlayer, AbilityUsedTime3_Rep); } \
	FORCEINLINE static uint32 __PPO__EquippedAbilityId_1() { return STRUCT_OFFSET(AELSSPlayer, EquippedAbilityId_1); } \
	FORCEINLINE static uint32 __PPO__EquippedAbilityId_2() { return STRUCT_OFFSET(AELSSPlayer, EquippedAbilityId_2); } \
	FORCEINLINE static uint32 __PPO__EquippedAbilityId_3() { return STRUCT_OFFSET(AELSSPlayer, EquippedAbilityId_3); } \
	FORCEINLINE static uint32 __PPO__EquippedAbilityParam() { return STRUCT_OFFSET(AELSSPlayer, EquippedAbilityParam); } \
	FORCEINLINE static uint32 __PPO__CurrentAbilityEffectValue() { return STRUCT_OFFSET(AELSSPlayer, CurrentAbilityEffectValue); } \
	FORCEINLINE static uint32 __PPO__AttachedAbilityEffectActor() { return STRUCT_OFFSET(AELSSPlayer, AttachedAbilityEffectActor); } \
	FORCEINLINE static uint32 __PPO__AbilitySpeedupParticleEffectIntervalTime() { return STRUCT_OFFSET(AELSSPlayer, AbilitySpeedupParticleEffectIntervalTime); } \
	FORCEINLINE static uint32 __PPO__AbilityJumpPowerupParticleEffectName() { return STRUCT_OFFSET(AELSSPlayer, AbilityJumpPowerupParticleEffectName); } \
	FORCEINLINE static uint32 __PPO__AbilityJumpPowerupParticleEffectName2() { return STRUCT_OFFSET(AELSSPlayer, AbilityJumpPowerupParticleEffectName2); } \
	FORCEINLINE static uint32 __PPO__AbilitySpeedupParticleEffectName() { return STRUCT_OFFSET(AELSSPlayer, AbilitySpeedupParticleEffectName); } \
	FORCEINLINE static uint32 __PPO__SeeThroughSilhouetteActor() { return STRUCT_OFFSET(AELSSPlayer, SeeThroughSilhouetteActor); } \
	FORCEINLINE static uint32 __PPO__SilhouetteActorManagerClass() { return STRUCT_OFFSET(AELSSPlayer, SilhouetteActorManagerClass); } \
	FORCEINLINE static uint32 __PPO__SilhouetteActorManager() { return STRUCT_OFFSET(AELSSPlayer, SilhouetteActorManager); } \
	FORCEINLINE static uint32 __PPO__ClonedMeshComp() { return STRUCT_OFFSET(AELSSPlayer, ClonedMeshComp); } \
	FORCEINLINE static uint32 __PPO__MeshMode() { return STRUCT_OFFSET(AELSSPlayer, MeshMode); } \
	FORCEINLINE static uint32 __PPO__EquippedHeatSkill() { return STRUCT_OFFSET(AELSSPlayer, EquippedHeatSkill); } \
	FORCEINLINE static uint32 __PPO__EffectiveHeatSkill() { return STRUCT_OFFSET(AELSSPlayer, EffectiveHeatSkill); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_MoveLevelUp() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_MoveLevelUp); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_DamageBoost() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_DamageBoost); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_DamageBoostToShield() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_DamageBoostToShield); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_BlowBoost() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_BlowBoost); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_AttentionBoost() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_AttentionBoost); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_AttentionBoostAll() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_AttentionBoostAll); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_AttackCapsuleExpand() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_AttackCapsuleExpand); } \
	FORCEINLINE static uint32 __PPO__HeatSkillValue_MotionSpeedUp() { return STRUCT_OFFSET(AELSSPlayer, HeatSkillValue_MotionSpeedUp); } \
	FORCEINLINE static uint32 __PPO__MaxLandingLevelWhenSafeLanding() { return STRUCT_OFFSET(AELSSPlayer, MaxLandingLevelWhenSafeLanding); } \
	FORCEINLINE static uint32 __PPO__AttachedEffectActor() { return STRUCT_OFFSET(AELSSPlayer, AttachedEffectActor); } \
	FORCEINLINE static uint32 __PPO__BadStatusArray() { return STRUCT_OFFSET(AELSSPlayer, BadStatusArray); } \
	FORCEINLINE static uint32 __PPO__BadStatusEffectRowName_FireBottle1() { return STRUCT_OFFSET(AELSSPlayer, BadStatusEffectRowName_FireBottle1); } \
	FORCEINLINE static uint32 __PPO__BadStatusEffectRowName_FireBottle2() { return STRUCT_OFFSET(AELSSPlayer, BadStatusEffectRowName_FireBottle2); } \
	FORCEINLINE static uint32 __PPO__BadStatusEffectRowName_FireBottle3() { return STRUCT_OFFSET(AELSSPlayer, BadStatusEffectRowName_FireBottle3); } \
	FORCEINLINE static uint32 __PPO__BadStatusEffectRowName_FireBottle4() { return STRUCT_OFFSET(AELSSPlayer, BadStatusEffectRowName_FireBottle4); } \
	FORCEINLINE static uint32 __PPO__BadStatusEffectRowName_Slow() { return STRUCT_OFFSET(AELSSPlayer, BadStatusEffectRowName_Slow); } \
	FORCEINLINE static uint32 __PPO__IsTickUsingItem() { return STRUCT_OFFSET(AELSSPlayer, IsTickUsingItem); } \
	FORCEINLINE static uint32 __PPO__UseItemNeedTime() { return STRUCT_OFFSET(AELSSPlayer, UseItemNeedTime); } \
	FORCEINLINE static uint32 __PPO__UseItemBeginTimeRep() { return STRUCT_OFFSET(AELSSPlayer, UseItemBeginTimeRep); } \
	FORCEINLINE static uint32 __PPO__UseItemBeginTimePrev() { return STRUCT_OFFSET(AELSSPlayer, UseItemBeginTimePrev); } \
	FORCEINLINE static uint32 __PPO__UseItemBeginTimeLocal() { return STRUCT_OFFSET(AELSSPlayer, UseItemBeginTimeLocal); } \
	FORCEINLINE static uint32 __PPO__CurrentShield() { return STRUCT_OFFSET(AELSSPlayer, CurrentShield); } \
	FORCEINLINE static uint32 __PPO__ReserveAddShieldObject() { return STRUCT_OFFSET(AELSSPlayer, ReserveAddShieldObject); } \
	FORCEINLINE static uint32 __PPO__AimOffsetInterpSpeed() { return STRUCT_OFFSET(AELSSPlayer, AimOffsetInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__GunAimTarget_LineTraceChannel() { return STRUCT_OFFSET(AELSSPlayer, GunAimTarget_LineTraceChannel); } \
	FORCEINLINE static uint32 __PPO__GunFireMoveCommand() { return STRUCT_OFFSET(AELSSPlayer, GunFireMoveCommand); } \
	FORCEINLINE static uint32 __PPO__ThrowWeaponMoveCommand() { return STRUCT_OFFSET(AELSSPlayer, ThrowWeaponMoveCommand); } \
	FORCEINLINE static uint32 __PPO__ThrowPrediction() { return STRUCT_OFFSET(AELSSPlayer, ThrowPrediction); } \
	FORCEINLINE static uint32 __PPO__ThrowPredictionClass() { return STRUCT_OFFSET(AELSSPlayer, ThrowPredictionClass); } \
	FORCEINLINE static uint32 __PPO__ThrowPredictionSimFrequency() { return STRUCT_OFFSET(AELSSPlayer, ThrowPredictionSimFrequency); } \
	FORCEINLINE static uint32 __PPO__DirectionalThrow_GuideOffset() { return STRUCT_OFFSET(AELSSPlayer, DirectionalThrow_GuideOffset); } \
	FORCEINLINE static uint32 __PPO__DirectionalThrow_PredictionSimFrequency() { return STRUCT_OFFSET(AELSSPlayer, DirectionalThrow_PredictionSimFrequency); } \
	FORCEINLINE static uint32 __PPO__DirectionalThrow_BlowPowerScale() { return STRUCT_OFFSET(AELSSPlayer, DirectionalThrow_BlowPowerScale); } \
	FORCEINLINE static uint32 __PPO__PredictPutTrapHeightLimitTop() { return STRUCT_OFFSET(AELSSPlayer, PredictPutTrapHeightLimitTop); } \
	FORCEINLINE static uint32 __PPO__PredictPutTrapHeightLimitBottom() { return STRUCT_OFFSET(AELSSPlayer, PredictPutTrapHeightLimitBottom); } \
	FORCEINLINE static uint32 __PPO__PredictPutTrapHeightOffset() { return STRUCT_OFFSET(AELSSPlayer, PredictPutTrapHeightOffset); } \
	FORCEINLINE static uint32 __PPO__StickedWeapon() { return STRUCT_OFFSET(AELSSPlayer, StickedWeapon); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AELSSPlayer, Inventory); } \
	FORCEINLINE static uint32 __PPO__ReserveAddToInventoryObjects() { return STRUCT_OFFSET(AELSSPlayer, ReserveAddToInventoryObjects); } \
	FORCEINLINE static uint32 __PPO__InventoryAvailableLocalCount() { return STRUCT_OFFSET(AELSSPlayer, InventoryAvailableLocalCount); } \
	FORCEINLINE static uint32 __PPO__currentInventoryIndex() { return STRUCT_OFFSET(AELSSPlayer, currentInventoryIndex); } \
	FORCEINLINE static uint32 __PPO__CurrentPickup() { return STRUCT_OFFSET(AELSSPlayer, CurrentPickup); } \
	FORCEINLINE static uint32 __PPO__StatePlayer() { return STRUCT_OFFSET(AELSSPlayer, StatePlayer); } \
	FORCEINLINE static uint32 __PPO__IsRunning() { return STRUCT_OFFSET(AELSSPlayer, IsRunning); } \
	FORCEINLINE static uint32 __PPO__GravityScaleByNotify() { return STRUCT_OFFSET(AELSSPlayer, GravityScaleByNotify); } \
	FORCEINLINE static uint32 __PPO__DownFaceUpType() { return STRUCT_OFFSET(AELSSPlayer, DownFaceUpType); } \
	FORCEINLINE static uint32 __PPO__UnderfootCheckTraceObjectTypes() { return STRUCT_OFFSET(AELSSPlayer, UnderfootCheckTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__UnderfootCheckTraceDistance() { return STRUCT_OFFSET(AELSSPlayer, UnderfootCheckTraceDistance); } \
	FORCEINLINE static uint32 __PPO__SlipBrakingFriction() { return STRUCT_OFFSET(AELSSPlayer, SlipBrakingFriction); } \
	FORCEINLINE static uint32 __PPO__SlipBrakingFrictionFactor() { return STRUCT_OFFSET(AELSSPlayer, SlipBrakingFrictionFactor); } \
	FORCEINLINE static uint32 __PPO__SlipBrakingDecelerationWalking() { return STRUCT_OFFSET(AELSSPlayer, SlipBrakingDecelerationWalking); } \
	FORCEINLINE static uint32 __PPO__SlipGroundFriction() { return STRUCT_OFFSET(AELSSPlayer, SlipGroundFriction); } \
	FORCEINLINE static uint32 __PPO__SlipSETriggerWaitTimeCount() { return STRUCT_OFFSET(AELSSPlayer, SlipSETriggerWaitTimeCount); } \
	FORCEINLINE static uint32 __PPO__DamageReceiverStateOverride() { return STRUCT_OFFSET(AELSSPlayer, DamageReceiverStateOverride); } \
	FORCEINLINE static uint32 __PPO__DamageComponent() { return STRUCT_OFFSET(AELSSPlayer, DamageComponent); } \
	FORCEINLINE static uint32 __PPO__AttackedPlayers() { return STRUCT_OFFSET(AELSSPlayer, AttackedPlayers); } \
	FORCEINLINE static uint32 __PPO__ReservedSuicideTimeByDisconnect() { return STRUCT_OFFSET(AELSSPlayer, ReservedSuicideTimeByDisconnect); } \
	FORCEINLINE static uint32 __PPO__AliveType() { return STRUCT_OFFSET(AELSSPlayer, AliveType); } \
	FORCEINLINE static uint32 __PPO__KoFinisherSearchLength() { return STRUCT_OFFSET(AELSSPlayer, KoFinisherSearchLength); } \
	FORCEINLINE static uint32 __PPO__KoFinisherSearchAngle() { return STRUCT_OFFSET(AELSSPlayer, KoFinisherSearchAngle); } \
	FORCEINLINE static uint32 __PPO__KoFinisherSearchZ() { return STRUCT_OFFSET(AELSSPlayer, KoFinisherSearchZ); } \
	FORCEINLINE static uint32 __PPO__KoFinisherSearchTraceChannel() { return STRUCT_OFFSET(AELSSPlayer, KoFinisherSearchTraceChannel); } \
	FORCEINLINE static uint32 __PPO__KoStunEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSPlayer, KoStunEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__KoStunEffect() { return STRUCT_OFFSET(AELSSPlayer, KoStunEffect); } \
	FORCEINLINE static uint32 __PPO__KoStunLoopSEUniqueId() { return STRUCT_OFFSET(AELSSPlayer, KoStunLoopSEUniqueId); } \
	FORCEINLINE static uint32 __PPO__KoDamageCycleTimer() { return STRUCT_OFFSET(AELSSPlayer, KoDamageCycleTimer); } \
	FORCEINLINE static uint32 __PPO__ReviveEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSPlayer, ReviveEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__ReviveEffect() { return STRUCT_OFFSET(AELSSPlayer, ReviveEffect); } \
	FORCEINLINE static uint32 __PPO__IsInReviveArea() { return STRUCT_OFFSET(AELSSPlayer, IsInReviveArea); } \
	FORCEINLINE static uint32 __PPO__ReviveTimer() { return STRUCT_OFFSET(AELSSPlayer, ReviveTimer); } \
	FORCEINLINE static uint32 __PPO__ReviveHpRecoverRateFromArea() { return STRUCT_OFFSET(AELSSPlayer, ReviveHpRecoverRateFromArea); } \
	FORCEINLINE static uint32 __PPO__ReviveRecoveryKoHPCycle() { return STRUCT_OFFSET(AELSSPlayer, ReviveRecoveryKoHPCycle); } \
	FORCEINLINE static uint32 __PPO__ReviveRecoveryKoHPRate() { return STRUCT_OFFSET(AELSSPlayer, ReviveRecoveryKoHPRate); } \
	FORCEINLINE static uint32 __PPO__DeadTimeCount() { return STRUCT_OFFSET(AELSSPlayer, DeadTimeCount); } \
	FORCEINLINE static uint32 __PPO__DisappearTimeCount() { return STRUCT_OFFSET(AELSSPlayer, DisappearTimeCount); } \
	FORCEINLINE static uint32 __PPO__AttackerComponent() { return STRUCT_OFFSET(AELSSPlayer, AttackerComponent); } \
	FORCEINLINE static uint32 __PPO__CharaBaseSceneComponent() { return STRUCT_OFFSET(AELSSPlayer, CharaBaseSceneComponent); } \
	FORCEINLINE static uint32 __PPO__HitCollision() { return STRUCT_OFFSET(AELSSPlayer, HitCollision); } \
	FORCEINLINE static uint32 __PPO__PhysicsCollision() { return STRUCT_OFFSET(AELSSPlayer, PhysicsCollision); } \
	FORCEINLINE static uint32 __PPO__CurrentVehiclePawn() { return STRUCT_OFFSET(AELSSPlayer, CurrentVehiclePawn); } \
	FORCEINLINE static uint32 __PPO__PickupedCarrot() { return STRUCT_OFFSET(AELSSPlayer, PickupedCarrot); } \
	FORCEINLINE static uint32 __PPO__InteractTargetCandidateList() { return STRUCT_OFFSET(AELSSPlayer, InteractTargetCandidateList); } \
	FORCEINLINE static uint32 __PPO__InteractTarget() { return STRUCT_OFFSET(AELSSPlayer, InteractTarget); } \
	FORCEINLINE static uint32 __PPO__LastInteractExecute() { return STRUCT_OFFSET(AELSSPlayer, LastInteractExecute); } \
	FORCEINLINE static uint32 __PPO__InteractHoldBeginTimeRep() { return STRUCT_OFFSET(AELSSPlayer, InteractHoldBeginTimeRep); } \
	FORCEINLINE static uint32 __PPO__InteractHoldDuration() { return STRUCT_OFFSET(AELSSPlayer, InteractHoldDuration); } \
	FORCEINLINE static uint32 __PPO__IsLockInteractTarget() { return STRUCT_OFFSET(AELSSPlayer, IsLockInteractTarget); } \
	FORCEINLINE static uint32 __PPO__InteractDegree() { return STRUCT_OFFSET(AELSSPlayer, InteractDegree); } \
	FORCEINLINE static uint32 __PPO__InteractSoundCue() { return STRUCT_OFFSET(AELSSPlayer, InteractSoundCue); } \
	FORCEINLINE static uint32 __PPO__FeverEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSPlayer, FeverEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__FeverEffect() { return STRUCT_OFFSET(AELSSPlayer, FeverEffect); } \
	FORCEINLINE static uint32 __PPO__FeverLoopSEUniqueID() { return STRUCT_OFFSET(AELSSPlayer, FeverLoopSEUniqueID); } \
	FORCEINLINE static uint32 __PPO__FeverLoopSEIsPlaying() { return STRUCT_OFFSET(AELSSPlayer, FeverLoopSEIsPlaying); } \
	FORCEINLINE static uint32 __PPO__MoveSetEffectSlot() { return STRUCT_OFFSET(AELSSPlayer, MoveSetEffectSlot); } \
	FORCEINLINE static uint32 __PPO__MoveSetSettings() { return STRUCT_OFFSET(AELSSPlayer, MoveSetSettings); } \
	FORCEINLINE static uint32 __PPO__equipSettings() { return STRUCT_OFFSET(AELSSPlayer, equipSettings); } \
	FORCEINLINE static uint32 __PPO__HeatMoveSet() { return STRUCT_OFFSET(AELSSPlayer, HeatMoveSet); } \
	FORCEINLINE static uint32 __PPO__SyncAttacker() { return STRUCT_OFFSET(AELSSPlayer, SyncAttacker); } \
	FORCEINLINE static uint32 __PPO__SyncReceiver() { return STRUCT_OFFSET(AELSSPlayer, SyncReceiver); } \
	FORCEINLINE static uint32 __PPO__SyncTransform() { return STRUCT_OFFSET(AELSSPlayer, SyncTransform); } \
	FORCEINLINE static uint32 __PPO__SyncInterpTime() { return STRUCT_OFFSET(AELSSPlayer, SyncInterpTime); } \
	FORCEINLINE static uint32 __PPO__CurrentSituationMoveTrigger() { return STRUCT_OFFSET(AELSSPlayer, CurrentSituationMoveTrigger); } \
	FORCEINLINE static uint32 __PPO__CurrentSyncReceiverFloorHeight() { return STRUCT_OFFSET(AELSSPlayer, CurrentSyncReceiverFloorHeight); } \
	FORCEINLINE static uint32 __PPO__SyncReceiverFloorHeightAdjustRate() { return STRUCT_OFFSET(AELSSPlayer, SyncReceiverFloorHeightAdjustRate); } \
	FORCEINLINE static uint32 __PPO__SyncReceiverFloorHeightAdjustInterpSpeed() { return STRUCT_OFFSET(AELSSPlayer, SyncReceiverFloorHeightAdjustInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__SyncReceiverFloorHeightAdjustLowerMax() { return STRUCT_OFFSET(AELSSPlayer, SyncReceiverFloorHeightAdjustLowerMax); } \
	FORCEINLINE static uint32 __PPO__StationalCameraDisable() { return STRUCT_OFFSET(AELSSPlayer, StationalCameraDisable); } \
	FORCEINLINE static uint32 __PPO__StationalCameraLocatorOwner() { return STRUCT_OFFSET(AELSSPlayer, StationalCameraLocatorOwner); } \
	FORCEINLINE static uint32 __PPO__StationalCameraLocatorOffset() { return STRUCT_OFFSET(AELSSPlayer, StationalCameraLocatorOffset); } \
	FORCEINLINE static uint32 __PPO__StationalCameraBaseTransform() { return STRUCT_OFFSET(AELSSPlayer, StationalCameraBaseTransform); } \
	FORCEINLINE static uint32 __PPO__StationalCameraBaseTransformOwnerInitial() { return STRUCT_OFFSET(AELSSPlayer, StationalCameraBaseTransformOwnerInitial); } \
	FORCEINLINE static uint32 __PPO__StationalCameraBaseTransformReceiverInitial() { return STRUCT_OFFSET(AELSSPlayer, StationalCameraBaseTransformReceiverInitial); } \
	FORCEINLINE static uint32 __PPO__SSSyncMotion() { return STRUCT_OFFSET(AELSSPlayer, SSSyncMotion); } \
	FORCEINLINE static uint32 __PPO__ActionAreaClass() { return STRUCT_OFFSET(AELSSPlayer, ActionAreaClass); } \
	FORCEINLINE static uint32 __PPO__ActionArea() { return STRUCT_OFFSET(AELSSPlayer, ActionArea); } \
	FORCEINLINE static uint32 __PPO__ExternalStationalCamera() { return STRUCT_OFFSET(AELSSPlayer, ExternalStationalCamera); } \
	FORCEINLINE static uint32 __PPO__ReplicatedSyncMotionPlayState() { return STRUCT_OFFSET(AELSSPlayer, ReplicatedSyncMotionPlayState); } \
	FORCEINLINE static uint32 __PPO__bDisableSyncMotionFloorCheck() { return STRUCT_OFFSET(AELSSPlayer, bDisableSyncMotionFloorCheck); } \
	FORCEINLINE static uint32 __PPO__SyncOriginLocationLerp() { return STRUCT_OFFSET(AELSSPlayer, SyncOriginLocationLerp); } \
	FORCEINLINE static uint32 __PPO__ServerSyncRotationYaw() { return STRUCT_OFFSET(AELSSPlayer, ServerSyncRotationYaw); } \
	FORCEINLINE static uint32 __PPO__ClientDesiredSyncRotationYaw() { return STRUCT_OFFSET(AELSSPlayer, ClientDesiredSyncRotationYaw); } \
	FORCEINLINE static uint32 __PPO__CollisionCheckSockets() { return STRUCT_OFFSET(AELSSPlayer, CollisionCheckSockets); } \
	FORCEINLINE static uint32 __PPO__CurrentSocketCollisionCheckDistances() { return STRUCT_OFFSET(AELSSPlayer, CurrentSocketCollisionCheckDistances); } \
	FORCEINLINE static uint32 __PPO__MinSocketCollisionCheckDistance() { return STRUCT_OFFSET(AELSSPlayer, MinSocketCollisionCheckDistance); } \
	FORCEINLINE static uint32 __PPO__SituationMoveTriggerTraceChannel() { return STRUCT_OFFSET(AELSSPlayer, SituationMoveTriggerTraceChannel); } \
	FORCEINLINE static uint32 __PPO__DefaultMoveCollisionHalfHeight() { return STRUCT_OFFSET(AELSSPlayer, DefaultMoveCollisionHalfHeight); } \
	FORCEINLINE static uint32 __PPO__DefaultMoveCollisionRadius() { return STRUCT_OFFSET(AELSSPlayer, DefaultMoveCollisionRadius); } \
	FORCEINLINE static uint32 __PPO__NotifiedMoveCollisionHeightScale() { return STRUCT_OFFSET(AELSSPlayer, NotifiedMoveCollisionHeightScale); } \
	FORCEINLINE static uint32 __PPO__NotifiedMoveCollisionRadiusScale() { return STRUCT_OFFSET(AELSSPlayer, NotifiedMoveCollisionRadiusScale); } \
	FORCEINLINE static uint32 __PPO__DefaultMeshLocation() { return STRUCT_OFFSET(AELSSPlayer, DefaultMeshLocation); } \
	FORCEINLINE static uint32 __PPO__ForceDefaultMoveCollision() { return STRUCT_OFFSET(AELSSPlayer, ForceDefaultMoveCollision); } \
	FORCEINLINE static uint32 __PPO__ShrinkedHalfHeightDiff() { return STRUCT_OFFSET(AELSSPlayer, ShrinkedHalfHeightDiff); } \
	FORCEINLINE static uint32 __PPO__TargetComponent() { return STRUCT_OFFSET(AELSSPlayer, TargetComponent); } \
	FORCEINLINE static uint32 __PPO__ActionDesiredInputFlg() { return STRUCT_OFFSET(AELSSPlayer, ActionDesiredInputFlg); } \
	FORCEINLINE static uint32 __PPO__ActionDesiredInputYaw() { return STRUCT_OFFSET(AELSSPlayer, ActionDesiredInputYaw); } \
	FORCEINLINE static uint32 __PPO__HitStopDuration() { return STRUCT_OFFSET(AELSSPlayer, HitStopDuration); } \
	FORCEINLINE static uint32 __PPO__CameraNearCullingDistance() { return STRUCT_OFFSET(AELSSPlayer, CameraNearCullingDistance); } \
	FORCEINLINE static uint32 __PPO__CameraCullingRate() { return STRUCT_OFFSET(AELSSPlayer, CameraCullingRate); } \
	FORCEINLINE static uint32 __PPO__CameraBasisLocationSocketName() { return STRUCT_OFFSET(AELSSPlayer, CameraBasisLocationSocketName); } \
	FORCEINLINE static uint32 __PPO__CameraBasisLocationSocketRate() { return STRUCT_OFFSET(AELSSPlayer, CameraBasisLocationSocketRate); } \
	FORCEINLINE static uint32 __PPO__CameraBasisLocationInterpSpeed() { return STRUCT_OFFSET(AELSSPlayer, CameraBasisLocationInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__CameraBasisLocation() { return STRUCT_OFFSET(AELSSPlayer, CameraBasisLocation); } \
	FORCEINLINE static uint32 __PPO__CameraBasisLocationLocal() { return STRUCT_OFFSET(AELSSPlayer, CameraBasisLocationLocal); } \
	FORCEINLINE static uint32 __PPO__CurrentFloorCheckMaxDistance() { return STRUCT_OFFSET(AELSSPlayer, CurrentFloorCheckMaxDistance); } \
	FORCEINLINE static uint32 __PPO__CurrentWallCheckMaxDistance() { return STRUCT_OFFSET(AELSSPlayer, CurrentWallCheckMaxDistance); } \
	FORCEINLINE static uint32 __PPO__CurrentFloorCheck_ObjectTypes() { return STRUCT_OFFSET(AELSSPlayer, CurrentFloorCheck_ObjectTypes); } \
	FORCEINLINE static uint32 __PPO__CurrentFloorCheck_SoundTraceChannel() { return STRUCT_OFFSET(AELSSPlayer, CurrentFloorCheck_SoundTraceChannel); } \
	FORCEINLINE static uint32 __PPO__OverlappingMapAreaVolume() { return STRUCT_OFFSET(AELSSPlayer, OverlappingMapAreaVolume); } \
	FORCEINLINE static uint32 __PPO__CurrentMapAreaId() { return STRUCT_OFFSET(AELSSPlayer, CurrentMapAreaId); } \
	FORCEINLINE static uint32 __PPO__CurrentMiniMapId() { return STRUCT_OFFSET(AELSSPlayer, CurrentMiniMapId); } \
	FORCEINLINE static uint32 __PPO__ChangeAreaCheckIntervalTime() { return STRUCT_OFFSET(AELSSPlayer, ChangeAreaCheckIntervalTime); } \
	FORCEINLINE static uint32 __PPO__OverlappingCameraCorrectVolume() { return STRUCT_OFFSET(AELSSPlayer, OverlappingCameraCorrectVolume); } \
	FORCEINLINE static uint32 __PPO__CurrentCameraPlaceType() { return STRUCT_OFFSET(AELSSPlayer, CurrentCameraPlaceType); } \
	FORCEINLINE static uint32 __PPO__PlayerFlags() { return STRUCT_OFFSET(AELSSPlayer, PlayerFlags); } \
	FORCEINLINE static uint32 __PPO__HudHpGaugeOffsetZ() { return STRUCT_OFFSET(AELSSPlayer, HudHpGaugeOffsetZ); } \
	FORCEINLINE static uint32 __PPO__HudHpGaugeOffsetZOnVehicle() { return STRUCT_OFFSET(AELSSPlayer, HudHpGaugeOffsetZOnVehicle); } \
	FORCEINLINE static uint32 __PPO__Purpose() { return STRUCT_OFFSET(AELSSPlayer, Purpose); } \
	FORCEINLINE static uint32 __PPO__LeftStickInput() { return STRUCT_OFFSET(AELSSPlayer, LeftStickInput); } \
	FORCEINLINE static uint32 __PPO__LastLeftStickInput() { return STRUCT_OFFSET(AELSSPlayer, LastLeftStickInput); } \
	FORCEINLINE static uint32 __PPO__RightStickInput() { return STRUCT_OFFSET(AELSSPlayer, RightStickInput); } \
	FORCEINLINE static uint32 __PPO__LastRightStickInput() { return STRUCT_OFFSET(AELSSPlayer, LastRightStickInput); } \
	FORCEINLINE static uint32 __PPO__MoveInputVector() { return STRUCT_OFFSET(AELSSPlayer, MoveInputVector); } \
	FORCEINLINE static uint32 __PPO__WalkSpeedScale() { return STRUCT_OFFSET(AELSSPlayer, WalkSpeedScale); } \
	FORCEINLINE static uint32 __PPO__TrampedTimeCount() { return STRUCT_OFFSET(AELSSPlayer, TrampedTimeCount); } \
	FORCEINLINE static uint32 __PPO__TrampedDuration() { return STRUCT_OFFSET(AELSSPlayer, TrampedDuration); } \
	FORCEINLINE static uint32 __PPO__RawOptimizeLevel() { return STRUCT_OFFSET(AELSSPlayer, RawOptimizeLevel); } \
	FORCEINLINE static uint32 __PPO__OptimizeLevel() { return STRUCT_OFFSET(AELSSPlayer, OptimizeLevel); } \
	FORCEINLINE static uint32 __PPO__NotRenderedFrameCount() { return STRUCT_OFFSET(AELSSPlayer, NotRenderedFrameCount); } \
	FORCEINLINE static uint32 __PPO__LatestOptimizeFrameCount() { return STRUCT_OFFSET(AELSSPlayer, LatestOptimizeFrameCount); } \
	FORCEINLINE static uint32 __PPO__bForceSimulatedTick() { return STRUCT_OFFSET(AELSSPlayer, bForceSimulatedTick); } \
	FORCEINLINE static uint32 __PPO__OptimizeTargetId() { return STRUCT_OFFSET(AELSSPlayer, OptimizeTargetId); } \
	FORCEINLINE static uint32 __PPO__CurrentSimulatedTickFrameCycle() { return STRUCT_OFFSET(AELSSPlayer, CurrentSimulatedTickFrameCycle); } \
	FORCEINLINE static uint32 __PPO__AccumulatedPendingSimulatedTickTime() { return STRUCT_OFFSET(AELSSPlayer, AccumulatedPendingSimulatedTickTime); } \
	FORCEINLINE static uint32 __PPO__bDisableLocalAttack() { return STRUCT_OFFSET(AELSSPlayer, bDisableLocalAttack); } \
	FORCEINLINE static uint32 __PPO__bDisableSimulateMove() { return STRUCT_OFFSET(AELSSPlayer, bDisableSimulateMove); } \
	FORCEINLINE static uint32 __PPO__bDisableMoveCollision() { return STRUCT_OFFSET(AELSSPlayer, bDisableMoveCollision); } \
	FORCEINLINE static uint32 __PPO__bDisableMoveSmoothing() { return STRUCT_OFFSET(AELSSPlayer, bDisableMoveSmoothing); } \
	FORCEINLINE static uint32 __PPO__bDisableSound() { return STRUCT_OFFSET(AELSSPlayer, bDisableSound); } \
	FORCEINLINE static uint32 __PPO__bDisableSlipTrace() { return STRUCT_OFFSET(AELSSPlayer, bDisableSlipTrace); } \
	FORCEINLINE static uint32 __PPO__bDisableSyncMotionCollision() { return STRUCT_OFFSET(AELSSPlayer, bDisableSyncMotionCollision); } \
	FORCEINLINE static uint32 __PPO__bDisableSyncMotionFloorTrace() { return STRUCT_OFFSET(AELSSPlayer, bDisableSyncMotionFloorTrace); } \
	FORCEINLINE static uint32 __PPO__bForceSilhouette() { return STRUCT_OFFSET(AELSSPlayer, bForceSilhouette); } \
	FORCEINLINE static uint32 __PPO__bForceInvisible() { return STRUCT_OFFSET(AELSSPlayer, bForceInvisible); } \
	FORCEINLINE static uint32 __PPO__Insignificance() { return STRUCT_OFFSET(AELSSPlayer, Insignificance); } \
	FORCEINLINE static uint32 __PPO__CameraToActorDistanceSqr() { return STRUCT_OFFSET(AELSSPlayer, CameraToActorDistanceSqr); } \
	FORCEINLINE static uint32 __PPO__PlayerDebugFlags() { return STRUCT_OFFSET(AELSSPlayer, PlayerDebugFlags); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_99_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
