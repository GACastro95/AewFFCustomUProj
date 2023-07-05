// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPlayerController() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLogIconType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLogTextParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSClientFlowState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSEndGameReason();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameplayCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCommonLayout_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStationalCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSUIManagerInGame_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameFlowState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCharacterHpType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionGaugeState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAliveStateType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractExecute();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractOperate();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPickupBase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelUpInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraShakeType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMouseControlMode();
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerDebugFlag();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSVictoryCutscene_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSNearPlayerStatus();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_USSModeAntiCheatData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSPlayerController::execBeginViewControlledPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginViewControlledPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execChangeClientFlowState)
	{
		P_GET_ENUM(ESSClientFlowState,Z_Param_inClientState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeClientFlowState(ESSClientFlowState(Z_Param_inClientState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execCheckAllowCharacterControll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckAllowCharacterControll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execCheckCompletePlayerSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCompletePlayerSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execCheckInSightFromCamera)
	{
		P_GET_OBJECT(AActor,Z_Param_inCheckActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inTargetOffsetZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckInSightFromCamera(Z_Param_inCheckActor,Z_Param_inTargetOffsetZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execCheckInSightFromCameraForInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_inCheckActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckInSightFromCameraForInteract(Z_Param_inCheckActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execClosePauseMenu)
	{
		P_GET_UBOOL(Z_Param_allowedCharacterControllWhenClose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClosePauseMenu(Z_Param_allowedCharacterControllWhenClose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execConvertLeftStickToMoveInput)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_inStickInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertLeftStickToMoveInput(Z_Param_Out_inStickInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDeactiveStationalCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactiveStationalCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAddAttentionPoint)
	{
		P_GET_ENUM(ESSAttentionReason,Z_Param_inReason);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAddPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAddAttentionPoint_Implementation(ESSAttentionReason(Z_Param_inReason),Z_Param_inAddPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerAutoKill)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerAutoKill_Implementation(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerAutoMove)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotateSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerAutoMove_Implementation(Z_Param_IsOn,Z_Param_Yaw,Z_Param_RotateSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerAutoRequestTransit)
	{
		P_GET_ENUM(ESSActionTransitTrigger,Z_Param_Trigger);
		P_GET_PROPERTY(FFloatProperty,Z_Param_intervalTime);
		P_GET_UBOOL(Z_Param_autoJump);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerAutoRequestTransit_Implementation(ESSActionTransitTrigger(Z_Param_Trigger),Z_Param_intervalTime,Z_Param_autoJump);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerDisableAll)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerDisableAll_Implementation(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerNoDamage)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerNoDamage_Implementation(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerSpawn)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerSpawn_Implementation(EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerSpawnPreset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFaceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InBodyID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InHairID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InBottomsID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InShoesID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSuitID);
		P_GET_UBOOL(Z_Param_InRandom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerSpawnPreset_Implementation(Z_Param_InFaceID,Z_Param_InBodyID,Z_Param_InHairID,Z_Param_InBottomsID,Z_Param_InShoesID,Z_Param_InSuitID,Z_Param_InRandom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugAIPlayerSpawnPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAIPlayerSpawnPresetByName_Implementation(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugDestroyAllPickupObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugDestroyAllPickupObjects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugDuplicateSSPlayer)
	{
		P_GET_UBOOL(Z_Param_inPossessPlayer);
		P_GET_UBOOL(Z_Param_inBaseKill);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugDuplicateSSPlayer_Implementation(Z_Param_inPossessPlayer,Z_Param_inBaseKill);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugForciblyEndMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugForciblyEndMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugLobbySkip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugLobbySkip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugNetworkProfilerOnServer)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugNetworkProfilerOnServer_Implementation(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugNoResponseMode)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugNoResponseMode_Implementation(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugNotifyChangePlayer_Client)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugNotifyChangePlayer_Client_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugResetAttention)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugResetAttention_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugRoundSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugRoundSpeed_Implementation(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugServerCrashRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugServerCrashRequest_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugServerMemReport)
	{
		P_GET_UBOOL(Z_Param_full);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugServerMemReport_Implementation(Z_Param_full);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSetAttentionPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetAttentionPoint_Implementation(Z_Param_inAttentionPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSetHeatLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetHeatLevel_Implementation(Z_Param_inHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSetPlayerEquipSettings)
	{
		P_GET_STRUCT(FSSPlayerEquipSettings,Z_Param_InParam);
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_UBOOL(Z_Param_inDuplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetPlayerEquipSettings_Implementation(Z_Param_InParam,EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_inDuplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSpawnAndEquipWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSpawnAndEquipWeapon_Implementation(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSpawnItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSpawnItem_Implementation(Z_Param_ID,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSpawnItemBox)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inItemBoxType);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSpawnNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSpawnItemBox_Implementation(Z_Param_inItemBoxType,Z_Param_inSpawnNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSpawnShield)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSpawnShield_Implementation(Z_Param_ID,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSpawnVehicle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offsetDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offsetZ);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offsetRoll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSpawnVehicle_Implementation(Z_Param_ID,Z_Param_offsetDistance,Z_Param_offsetZ,Z_Param_offsetRoll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugSpawnWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSpawnWeapon_Implementation(Z_Param_ID,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugVehicleFullDurability)
	{
		P_GET_UBOOL(Z_Param_isAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVehicleFullDurability_Implementation(Z_Param_isAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugVehicleInvincible)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_GET_UBOOL(Z_Param_isAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVehicleInvincible_Implementation(Z_Param_IsOn,Z_Param_isAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugVehicleResetRotation)
	{
		P_GET_UBOOL(Z_Param_isAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVehicleResetRotation_Implementation(Z_Param_isAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execDebugVehicleSetDurability)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Ratio);
		P_GET_UBOOL(Z_Param_isAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVehicleSetDurability_Implementation(Z_Param_Ratio,Z_Param_isAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execEndViewControlledPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndViewControlledPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execEnterClientFlowState_Dialog_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterClientFlowState_Dialog_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execEnterClientFlowState_WatchGame_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterClientFlowState_WatchGame_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execExitClientFlowState_Dialog_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitClientFlowState_Dialog_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execExitClientFlowState_WatchGame_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitClientFlowState_WatchGame_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetAssociatedSSPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetAssociatedSSPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetCameraLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetCameraRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetEndGameReasonOnServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSEndGameReason*)Z_Param__Result=P_THIS->GetEndGameReasonOnServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetGameplayCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSGameplayCamera**)Z_Param__Result=P_THIS->GetGameplayCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetGameplayCameraTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetGameplayCameraTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetLastLeftStickInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetLastLeftStickInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetLastMouseMoveInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetLastMouseMoveInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetLastRightStickInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetLastRightStickInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetLeftStickInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetLeftStickInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetMouseMoveInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMouseMoveInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetMoveInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMoveInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetNearPlayerHpRatio)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outHpRatio);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outKoHpRatio);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outShieldDurabilityRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNearPlayerHpRatio(Z_Param_inPlayer,Z_Param_Out_outHpRatio,Z_Param_Out_outKoHpRatio,Z_Param_Out_outShieldDurabilityRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetParentSSPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerController**)Z_Param__Result=P_THIS->GetParentSSPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetRightStickInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetRightStickInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetStationalCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSStationalCamera**)Z_Param__Result=P_THIS->GetStationalCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execGetWatchTargetPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetWatchTargetPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsChildPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChildPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsClientFlowState)
	{
		P_GET_ENUM(ESSClientFlowState,Z_Param_inClientState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClientFlowState(ESSClientFlowState(Z_Param_inClientState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsDoneResultAPI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneResultAPI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsDoneSyncResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSyncResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsEnabledInputByThisController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabledInputByThisController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsOpenErrorDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpenErrorDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsRegisteredEndGameReasonOnServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegisteredEndGameReasonOnServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execIsViewTargetGameplayCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsViewTargetGameplayCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execNeedsShowInteractableObjectStatus)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsShowInteractableObjectStatus(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execNeedsShowOnlineID)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsShowOnlineID(Z_Param_inPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execNeedsShowPlayerStatus)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsShowPlayerStatus(Z_Param_inPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execNeedsTransitionToWatchGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsTransitionToWatchGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execNotifyDetectedCheat_ClientToServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inViolationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyDetectedCheat_ClientToServer_Implementation(Z_Param_inViolationType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execNotifyEndGameFromClient_Server)
	{
		P_GET_ENUM(ESSEndGameReason,Z_Param_inEndGameReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyEndGameFromClient_Server_Implementation(ESSEndGameReason(Z_Param_inEndGameReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOnAntiCheatClientViolated)
	{
		P_GET_ENUM(EEOSAntiCheatClientViolationType,Z_Param_ViolationType);
		P_GET_PROPERTY(FStrProperty,Z_Param_StatusMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAntiCheatClientViolated(EEOSAntiCheatClientViolationType(Z_Param_ViolationType),Z_Param_StatusMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOnChangeClientFlowState_Server)
	{
		P_GET_ENUM(ESSClientFlowState,Z_Param_inClientState);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSyncId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeClientFlowState_Server_Implementation(ESSClientFlowState(Z_Param_inClientState),Z_Param_inSyncId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOnOtherPlayerHpUpdate)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOtherPlayerHpUpdate(Z_Param_inPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOnPlayerDead)
	{
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inDeadPlayer);
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inKillerPlayer);
		P_GET_ENUM(ESSLogIconType,Z_Param_inLogIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDead_Implementation(Z_Param_inDeadPlayer,Z_Param_inKillerPlayer,ESSLogIconType(Z_Param_inLogIcon));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOnPlayerKo)
	{
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inKoPlayer);
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inKillerPlayer);
		P_GET_ENUM(ESSLogIconType,Z_Param_inLogIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerKo_Implementation(Z_Param_inKoPlayer,Z_Param_inKillerPlayer,ESSLogIconType(Z_Param_inLogIcon));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOnPrepareVictoryCutscene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrepareVictoryCutscene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOnReservedReturnToMainMenuByNetworkError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReservedReturnToMainMenuByNetworkError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execOpenPauseMenu)
	{
		P_GET_UBOOL(Z_Param_disallowedCharacterControllWhenOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenPauseMenu(Z_Param_disallowedCharacterControllWhenOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execPlayCameraShake)
	{
		P_GET_ENUM(ESSCameraShakeType,Z_Param_InType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCameraShake(ESSCameraShakeType(Z_Param_InType),Z_Param_inScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Log);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_Log);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execRefreshNearPlayerStatus)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshNearPlayerStatus(Z_Param_inPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execRegisterEndGameReason)
	{
		P_GET_ENUM(ESSEndGameReason,Z_Param_inEndReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterEndGameReason(ESSEndGameReason(Z_Param_inEndReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execRequestEndGameFlow_Client)
	{
		P_GET_ENUM(ESSEndGameReason,Z_Param_inEndReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEndGameFlow_Client_Implementation(ESSEndGameReason(Z_Param_inEndReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execRequestLeaveGame_Client)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLeaveGame_Client_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execResultMenuPrepare_RPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResultMenuPrepare_RPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetAllowCharacterControll)
	{
		P_GET_UBOOL(Z_Param_isAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowCharacterControll(Z_Param_isAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetAnyInputButtonCheck)
	{
		P_GET_UBOOL(Z_Param_IsEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnyInputButtonCheck(Z_Param_IsEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetDefaultViewTarget)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultViewTarget(Z_Param_InBlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetGameplayCameraTarget)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameplayCameraTarget(Z_Param_InPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetGameStateDebugFlag_Server)
	{
		P_GET_ENUM(ESSGameStateDebugFlag,Z_Param_Type);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag(Z_Param_Type),Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetMinimapMode)
	{
		P_GET_UBOOL(Z_Param_inIsWholeMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimapMode(Z_Param_inIsWholeMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetMouseControlMode)
	{
		P_GET_ENUM(ESSMouseControlMode,Z_Param_inMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseControlMode(ESSMouseControlMode(Z_Param_inMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetOperationalWidhgetManager)
	{
		P_GET_OBJECT(AELMenuOperationalWidgetManagerBase,Z_Param_InOperationalWidgetManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOperationalWidhgetManager(Z_Param_InOperationalWidgetManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetPlayerDataToSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerDataToSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetPlayerDebugFlag_Server)
	{
		P_GET_ENUM(ESSPlayerDebugFlag,Z_Param_Type);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerDebugFlag_Server_Implementation(ESSPlayerDebugFlag(Z_Param_Type),Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetRestrictMoveOnly)
	{
		P_GET_UBOOL(Z_Param_isAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRestrictMoveOnly(Z_Param_isAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetRStickInputZero)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRStickInputZero();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSetWatchTargetPlayerState)
	{
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWatchTargetPlayerState(Z_Param_inPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSSAntiCheatClient_ConnectServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Platform);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSAntiCheatClient_ConnectServer_Implementation(Z_Param_Type,Z_Param_Platform,Z_Param_ipAddress,Z_Param_playerId,Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSSAntiCheatClient_DisconnectServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSAntiCheatClient_DisconnectServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execStartResultTally_RPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartResultTally_RPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execSyncWatchTargetPlayer_Server)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inWatchPlayerIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSyncId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncWatchTargetPlayer_Server_Implementation(Z_Param_inWatchPlayerIndex,Z_Param_inSyncId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execTickClientFlowState_WatchGame_Native)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickClientFlowState_WatchGame_Native(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execToggleMinimapMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleMinimapMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execUIPrepare_RPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UIPrepare_RPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execUpdateNearInteractableObjectList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNearInteractableObjectList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execUpdateNearPlayerList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNearPlayerList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execUpdateViewTarget)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateViewTarget(Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execWatchGame_OnPressMenuDecision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchGame_OnPressMenuDecision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execWatchGame_OnPressMenuLB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchGame_OnPressMenuLB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execWatchGame_OnPressMenuRB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchGame_OnPressMenuRB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerController::execWatchGame_OnReleaseMenuDecision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchGame_OnReleaseMenuDecision();
		P_NATIVE_END;
	}
	static FName NAME_AELSSPlayerController_AddInstantMessage = FName(TEXT("AddInstantMessage"));
	void AELSSPlayerController::AddInstantMessage(const FString& inMessage, ESSLogIconType inLogType)
	{
		ELSSPlayerController_eventAddInstantMessage_Parms Parms;
		Parms.inMessage=inMessage;
		Parms.inLogType=inLogType;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_AddInstantMessage),&Parms);
	}
	static FName NAME_AELSSPlayerController_AddInstantMessageByList = FName(TEXT("AddInstantMessageByList"));
	void AELSSPlayerController::AddInstantMessageByList(TArray<FSSLogTextParam> const& inTextParam, ESSLogIconType inLogType)
	{
		ELSSPlayerController_eventAddInstantMessageByList_Parms Parms;
		Parms.inTextParam=inTextParam;
		Parms.inLogType=inLogType;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_AddInstantMessageByList),&Parms);
	}
	static FName NAME_AELSSPlayerController_ClosePauseMenu_Impl = FName(TEXT("ClosePauseMenu_Impl"));
	bool AELSSPlayerController::ClosePauseMenu_Impl(bool allowedCharacterControllWhenClose)
	{
		ELSSPlayerController_eventClosePauseMenu_Impl_Parms Parms;
		Parms.allowedCharacterControllWhenClose=allowedCharacterControllWhenClose ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ClosePauseMenu_Impl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSPlayerController_DebugAddAttentionPoint = FName(TEXT("DebugAddAttentionPoint"));
	void AELSSPlayerController::DebugAddAttentionPoint(ESSAttentionReason inReason, int32 inAddPoint)
	{
		ELSSPlayerController_eventDebugAddAttentionPoint_Parms Parms;
		Parms.inReason=inReason;
		Parms.inAddPoint=inAddPoint;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAddAttentionPoint),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerAutoKill = FName(TEXT("DebugAIPlayerAutoKill"));
	void AELSSPlayerController::DebugAIPlayerAutoKill(bool IsOn)
	{
		ELSSPlayerController_eventDebugAIPlayerAutoKill_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerAutoKill),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerAutoMove = FName(TEXT("DebugAIPlayerAutoMove"));
	void AELSSPlayerController::DebugAIPlayerAutoMove(bool IsOn, float Yaw, float RotateSpeed)
	{
		ELSSPlayerController_eventDebugAIPlayerAutoMove_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		Parms.Yaw=Yaw;
		Parms.RotateSpeed=RotateSpeed;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerAutoMove),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerAutoRequestTransit = FName(TEXT("DebugAIPlayerAutoRequestTransit"));
	void AELSSPlayerController::DebugAIPlayerAutoRequestTransit(ESSActionTransitTrigger Trigger, float intervalTime, bool autoJump)
	{
		ELSSPlayerController_eventDebugAIPlayerAutoRequestTransit_Parms Parms;
		Parms.Trigger=Trigger;
		Parms.intervalTime=intervalTime;
		Parms.autoJump=autoJump ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerAutoRequestTransit),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerDisableAll = FName(TEXT("DebugAIPlayerDisableAll"));
	void AELSSPlayerController::DebugAIPlayerDisableAll(bool IsOn)
	{
		ELSSPlayerController_eventDebugAIPlayerDisableAll_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerDisableAll),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerNoDamage = FName(TEXT("DebugAIPlayerNoDamage"));
	void AELSSPlayerController::DebugAIPlayerNoDamage(bool IsOn)
	{
		ELSSPlayerController_eventDebugAIPlayerNoDamage_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerNoDamage),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerSpawn = FName(TEXT("DebugAIPlayerSpawn"));
	void AELSSPlayerController::DebugAIPlayerSpawn(EWrestlerID_N WrestlerID)
	{
		ELSSPlayerController_eventDebugAIPlayerSpawn_Parms Parms;
		Parms.WrestlerID=WrestlerID;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerSpawn),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerSpawnPreset = FName(TEXT("DebugAIPlayerSpawnPreset"));
	void AELSSPlayerController::DebugAIPlayerSpawnPreset(int32 InFaceID, int32 InBodyID, int32 InHairID, int32 InBottomsID, int32 InShoesID, int32 InSuitID, bool InRandom)
	{
		ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms Parms;
		Parms.InFaceID=InFaceID;
		Parms.InBodyID=InBodyID;
		Parms.InHairID=InHairID;
		Parms.InBottomsID=InBottomsID;
		Parms.InShoesID=InShoesID;
		Parms.InSuitID=InSuitID;
		Parms.InRandom=InRandom ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerSpawnPreset),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugAIPlayerSpawnPresetByName = FName(TEXT("DebugAIPlayerSpawnPresetByName"));
	void AELSSPlayerController::DebugAIPlayerSpawnPresetByName(const FString& InName)
	{
		ELSSPlayerController_eventDebugAIPlayerSpawnPresetByName_Parms Parms;
		Parms.InName=InName;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugAIPlayerSpawnPresetByName),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugDestroyAllPickupObjects = FName(TEXT("DebugDestroyAllPickupObjects"));
	void AELSSPlayerController::DebugDestroyAllPickupObjects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugDestroyAllPickupObjects),NULL);
	}
	static FName NAME_AELSSPlayerController_DebugDuplicateSSPlayer = FName(TEXT("DebugDuplicateSSPlayer"));
	void AELSSPlayerController::DebugDuplicateSSPlayer(bool inPossessPlayer, bool inBaseKill)
	{
		ELSSPlayerController_eventDebugDuplicateSSPlayer_Parms Parms;
		Parms.inPossessPlayer=inPossessPlayer ? true : false;
		Parms.inBaseKill=inBaseKill ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugDuplicateSSPlayer),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugForciblyEndMatch = FName(TEXT("DebugForciblyEndMatch"));
	void AELSSPlayerController::DebugForciblyEndMatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugForciblyEndMatch),NULL);
	}
	static FName NAME_AELSSPlayerController_DebugLobbySkip = FName(TEXT("DebugLobbySkip"));
	void AELSSPlayerController::DebugLobbySkip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugLobbySkip),NULL);
	}
	static FName NAME_AELSSPlayerController_DebugNetworkProfilerOnServer = FName(TEXT("DebugNetworkProfilerOnServer"));
	void AELSSPlayerController::DebugNetworkProfilerOnServer(bool IsOn)
	{
		ELSSPlayerController_eventDebugNetworkProfilerOnServer_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugNetworkProfilerOnServer),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugNoResponseMode = FName(TEXT("DebugNoResponseMode"));
	void AELSSPlayerController::DebugNoResponseMode(bool IsOn)
	{
		ELSSPlayerController_eventDebugNoResponseMode_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugNoResponseMode),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugNotifyChangePlayer_Client = FName(TEXT("DebugNotifyChangePlayer_Client"));
	void AELSSPlayerController::DebugNotifyChangePlayer_Client()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugNotifyChangePlayer_Client),NULL);
	}
	static FName NAME_AELSSPlayerController_DebugResetAttention = FName(TEXT("DebugResetAttention"));
	void AELSSPlayerController::DebugResetAttention()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugResetAttention),NULL);
	}
	static FName NAME_AELSSPlayerController_DebugRoundSpeed = FName(TEXT("DebugRoundSpeed"));
	void AELSSPlayerController::DebugRoundSpeed(float Speed)
	{
		ELSSPlayerController_eventDebugRoundSpeed_Parms Parms;
		Parms.Speed=Speed;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugRoundSpeed),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugServerCrashRequest = FName(TEXT("DebugServerCrashRequest"));
	void AELSSPlayerController::DebugServerCrashRequest()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugServerCrashRequest),NULL);
	}
	static FName NAME_AELSSPlayerController_DebugServerMemReport = FName(TEXT("DebugServerMemReport"));
	void AELSSPlayerController::DebugServerMemReport(bool full)
	{
		ELSSPlayerController_eventDebugServerMemReport_Parms Parms;
		Parms.full=full ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugServerMemReport),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSetAttentionPoint = FName(TEXT("DebugSetAttentionPoint"));
	void AELSSPlayerController::DebugSetAttentionPoint(int32 inAttentionPoint)
	{
		ELSSPlayerController_eventDebugSetAttentionPoint_Parms Parms;
		Parms.inAttentionPoint=inAttentionPoint;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSetAttentionPoint),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSetHeatLevel = FName(TEXT("DebugSetHeatLevel"));
	void AELSSPlayerController::DebugSetHeatLevel(int32 inHeatLevel)
	{
		ELSSPlayerController_eventDebugSetHeatLevel_Parms Parms;
		Parms.inHeatLevel=inHeatLevel;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSetHeatLevel),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSetPlayerEquipSettings = FName(TEXT("DebugSetPlayerEquipSettings"));
	void AELSSPlayerController::DebugSetPlayerEquipSettings(FSSPlayerEquipSettings const& InParam, EWrestlerID_N inWrestlerId, bool inDuplicate)
	{
		ELSSPlayerController_eventDebugSetPlayerEquipSettings_Parms Parms;
		Parms.InParam=InParam;
		Parms.inWrestlerId=inWrestlerId;
		Parms.inDuplicate=inDuplicate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSetPlayerEquipSettings),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSpawnAndEquipWeapon = FName(TEXT("DebugSpawnAndEquipWeapon"));
	void AELSSPlayerController::DebugSpawnAndEquipWeapon(int32 ID)
	{
		ELSSPlayerController_eventDebugSpawnAndEquipWeapon_Parms Parms;
		Parms.ID=ID;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSpawnAndEquipWeapon),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSpawnItem = FName(TEXT("DebugSpawnItem"));
	void AELSSPlayerController::DebugSpawnItem(int32 ID, int32 Amount)
	{
		ELSSPlayerController_eventDebugSpawnItem_Parms Parms;
		Parms.ID=ID;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSpawnItem),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSpawnItemBox = FName(TEXT("DebugSpawnItemBox"));
	void AELSSPlayerController::DebugSpawnItemBox(int32 inItemBoxType, int32 inSpawnNum)
	{
		ELSSPlayerController_eventDebugSpawnItemBox_Parms Parms;
		Parms.inItemBoxType=inItemBoxType;
		Parms.inSpawnNum=inSpawnNum;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSpawnItemBox),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSpawnShield = FName(TEXT("DebugSpawnShield"));
	void AELSSPlayerController::DebugSpawnShield(int32 ID, int32 Amount)
	{
		ELSSPlayerController_eventDebugSpawnShield_Parms Parms;
		Parms.ID=ID;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSpawnShield),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSpawnVehicle = FName(TEXT("DebugSpawnVehicle"));
	void AELSSPlayerController::DebugSpawnVehicle(int32 ID, float offsetDistance, float offsetZ, float offsetRoll)
	{
		ELSSPlayerController_eventDebugSpawnVehicle_Parms Parms;
		Parms.ID=ID;
		Parms.offsetDistance=offsetDistance;
		Parms.offsetZ=offsetZ;
		Parms.offsetRoll=offsetRoll;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSpawnVehicle),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugSpawnWeapon = FName(TEXT("DebugSpawnWeapon"));
	void AELSSPlayerController::DebugSpawnWeapon(int32 ID, int32 Amount)
	{
		ELSSPlayerController_eventDebugSpawnWeapon_Parms Parms;
		Parms.ID=ID;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugSpawnWeapon),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugVehicleFullDurability = FName(TEXT("DebugVehicleFullDurability"));
	void AELSSPlayerController::DebugVehicleFullDurability(bool isAll)
	{
		ELSSPlayerController_eventDebugVehicleFullDurability_Parms Parms;
		Parms.isAll=isAll ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugVehicleFullDurability),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugVehicleInvincible = FName(TEXT("DebugVehicleInvincible"));
	void AELSSPlayerController::DebugVehicleInvincible(bool IsOn, bool isAll)
	{
		ELSSPlayerController_eventDebugVehicleInvincible_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		Parms.isAll=isAll ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugVehicleInvincible),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugVehicleResetRotation = FName(TEXT("DebugVehicleResetRotation"));
	void AELSSPlayerController::DebugVehicleResetRotation(bool isAll)
	{
		ELSSPlayerController_eventDebugVehicleResetRotation_Parms Parms;
		Parms.isAll=isAll ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugVehicleResetRotation),&Parms);
	}
	static FName NAME_AELSSPlayerController_DebugVehicleSetDurability = FName(TEXT("DebugVehicleSetDurability"));
	void AELSSPlayerController::DebugVehicleSetDurability(float Ratio, bool isAll)
	{
		ELSSPlayerController_eventDebugVehicleSetDurability_Parms Parms;
		Parms.Ratio=Ratio;
		Parms.isAll=isAll ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_DebugVehicleSetDurability),&Parms);
	}
	static FName NAME_AELSSPlayerController_Dialog_OnPressMenuAccept = FName(TEXT("Dialog_OnPressMenuAccept"));
	void AELSSPlayerController::Dialog_OnPressMenuAccept()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_Dialog_OnPressMenuAccept),NULL);
	}
	static FName NAME_AELSSPlayerController_Dialog_OnPressMenuCancel = FName(TEXT("Dialog_OnPressMenuCancel"));
	void AELSSPlayerController::Dialog_OnPressMenuCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_Dialog_OnPressMenuCancel),NULL);
	}
	static FName NAME_AELSSPlayerController_Dialog_OnPressMenuLeft = FName(TEXT("Dialog_OnPressMenuLeft"));
	void AELSSPlayerController::Dialog_OnPressMenuLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_Dialog_OnPressMenuLeft),NULL);
	}
	static FName NAME_AELSSPlayerController_Dialog_OnPressMenuRight = FName(TEXT("Dialog_OnPressMenuRight"));
	void AELSSPlayerController::Dialog_OnPressMenuRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_Dialog_OnPressMenuRight),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay = FName(TEXT("EnterClientFlowState_BeforeGamePlay"));
	void AELSSPlayerController::EnterClientFlowState_BeforeGamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_Closing = FName(TEXT("EnterClientFlowState_Closing"));
	void AELSSPlayerController::EnterClientFlowState_Closing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_Closing),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_Exit = FName(TEXT("EnterClientFlowState_Exit"));
	void AELSSPlayerController::EnterClientFlowState_Exit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_Exit),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_Finish = FName(TEXT("EnterClientFlowState_Finish"));
	void AELSSPlayerController::EnterClientFlowState_Finish()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_Finish),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_GamePlay = FName(TEXT("EnterClientFlowState_GamePlay"));
	void AELSSPlayerController::EnterClientFlowState_GamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_GamePlay),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_Result = FName(TEXT("EnterClientFlowState_Result"));
	void AELSSPlayerController::EnterClientFlowState_Result()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_Result),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_VictoryRoyale = FName(TEXT("EnterClientFlowState_VictoryRoyale"));
	void AELSSPlayerController::EnterClientFlowState_VictoryRoyale()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_VictoryRoyale),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_WatchGame = FName(TEXT("EnterClientFlowState_WatchGame"));
	void AELSSPlayerController::EnterClientFlowState_WatchGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_WatchGame),NULL);
	}
	static FName NAME_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale = FName(TEXT("EnterClientFlowState_WatchVictoryRoyale"));
	void AELSSPlayerController::EnterClientFlowState_WatchVictoryRoyale()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay = FName(TEXT("ExitClientFlowState_BeforeGamePlay"));
	void AELSSPlayerController::ExitClientFlowState_BeforeGamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_Closing = FName(TEXT("ExitClientFlowState_Closing"));
	void AELSSPlayerController::ExitClientFlowState_Closing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_Closing),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_Exit = FName(TEXT("ExitClientFlowState_Exit"));
	void AELSSPlayerController::ExitClientFlowState_Exit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_Exit),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_Finish = FName(TEXT("ExitClientFlowState_Finish"));
	void AELSSPlayerController::ExitClientFlowState_Finish()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_Finish),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_GamePlay = FName(TEXT("ExitClientFlowState_GamePlay"));
	void AELSSPlayerController::ExitClientFlowState_GamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_GamePlay),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_Result = FName(TEXT("ExitClientFlowState_Result"));
	void AELSSPlayerController::ExitClientFlowState_Result()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_Result),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_VictoryRoyale = FName(TEXT("ExitClientFlowState_VictoryRoyale"));
	void AELSSPlayerController::ExitClientFlowState_VictoryRoyale()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_VictoryRoyale),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_WatchGame = FName(TEXT("ExitClientFlowState_WatchGame"));
	void AELSSPlayerController::ExitClientFlowState_WatchGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_WatchGame),NULL);
	}
	static FName NAME_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale = FName(TEXT("ExitClientFlowState_WatchVictoryRoyale"));
	void AELSSPlayerController::ExitClientFlowState_WatchVictoryRoyale()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale),NULL);
	}
	static FName NAME_AELSSPlayerController_GetPauseMenuCommonLayout = FName(TEXT("GetPauseMenuCommonLayout"));
	UELCommonLayout* AELSSPlayerController::GetPauseMenuCommonLayout() const
	{
		ELSSPlayerController_eventGetPauseMenuCommonLayout_Parms Parms;
		const_cast<AELSSPlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_GetPauseMenuCommonLayout),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSPlayerController_GetUIManager = FName(TEXT("GetUIManager"));
	AELSSUIManagerInGame* AELSSPlayerController::GetUIManager() const
	{
		ELSSPlayerController_eventGetUIManager_Parms Parms;
		const_cast<AELSSPlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_GetUIManager),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSPlayerController_K2_RequestEndGameFlow = FName(TEXT("K2_RequestEndGameFlow"));
	void AELSSPlayerController::K2_RequestEndGameFlow(ESSEndGameReason inEndReason)
	{
		ELSSPlayerController_eventK2_RequestEndGameFlow_Parms Parms;
		Parms.inEndReason=inEndReason;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_K2_RequestEndGameFlow),&Parms);
	}
	static FName NAME_AELSSPlayerController_K2_RequestLeaveGame = FName(TEXT("K2_RequestLeaveGame"));
	void AELSSPlayerController::K2_RequestLeaveGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_K2_RequestLeaveGame),NULL);
	}
	static FName NAME_AELSSPlayerController_K2_ResultMenuPrepare = FName(TEXT("K2_ResultMenuPrepare"));
	void AELSSPlayerController::K2_ResultMenuPrepare()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_K2_ResultMenuPrepare),NULL);
	}
	static FName NAME_AELSSPlayerController_K2_UIPrepare = FName(TEXT("K2_UIPrepare"));
	void AELSSPlayerController::K2_UIPrepare()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_K2_UIPrepare),NULL);
	}
	static FName NAME_AELSSPlayerController_LeaveGameByAntiCheat = FName(TEXT("LeaveGameByAntiCheat"));
	void AELSSPlayerController::LeaveGameByAntiCheat()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_LeaveGameByAntiCheat),NULL);
	}
	static FName NAME_AELSSPlayerController_NotifyDetectedCheat_ClientToServer = FName(TEXT("NotifyDetectedCheat_ClientToServer"));
	void AELSSPlayerController::NotifyDetectedCheat_ClientToServer(int32 inViolationType)
	{
		ELSSPlayerController_eventNotifyDetectedCheat_ClientToServer_Parms Parms;
		Parms.inViolationType=inViolationType;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_NotifyDetectedCheat_ClientToServer),&Parms);
	}
	static FName NAME_AELSSPlayerController_NotifyEndGameFromClient_Server = FName(TEXT("NotifyEndGameFromClient_Server"));
	void AELSSPlayerController::NotifyEndGameFromClient_Server(ESSEndGameReason inEndGameReason)
	{
		ELSSPlayerController_eventNotifyEndGameFromClient_Server_Parms Parms;
		Parms.inEndGameReason=inEndGameReason;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_NotifyEndGameFromClient_Server),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnChangeClientFlowState_Server = FName(TEXT("OnChangeClientFlowState_Server"));
	void AELSSPlayerController::OnChangeClientFlowState_Server(ESSClientFlowState inClientState, int32 inSyncId)
	{
		ELSSPlayerController_eventOnChangeClientFlowState_Server_Parms Parms;
		Parms.inClientState=inClientState;
		Parms.inSyncId=inSyncId;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnChangeClientFlowState_Server),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnChangeGameFlowState = FName(TEXT("OnChangeGameFlowState"));
	void AELSSPlayerController::OnChangeGameFlowState(ESSGameFlowState inGameFlowState)
	{
		ELSSPlayerController_eventOnChangeGameFlowState_Parms Parms;
		Parms.inGameFlowState=inGameFlowState;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnChangeGameFlowState),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnChangeInputMode = FName(TEXT("OnChangeInputMode"));
	void AELSSPlayerController::OnChangeInputMode(bool isKeyboard)
	{
		ELSSPlayerController_eventOnChangeInputMode_Parms Parms;
		Parms.isKeyboard=isKeyboard ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnChangeInputMode),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnChangeTarget = FName(TEXT("OnChangeTarget"));
	void AELSSPlayerController::OnChangeTarget(AActor* inNewTarget, AActor* inPrevTarget)
	{
		ELSSPlayerController_eventOnChangeTarget_Parms Parms;
		Parms.inNewTarget=inNewTarget;
		Parms.inPrevTarget=inPrevTarget;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnChangeTarget),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnDisconnectDialogShow = FName(TEXT("OnDisconnectDialogShow"));
	void AELSSPlayerController::OnDisconnectDialogShow()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnDisconnectDialogShow),NULL);
	}
	static FName NAME_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType = FName(TEXT("OnOtherPlayerHpUpdateSpecifiedType"));
	void AELSSPlayerController::OnOtherPlayerHpUpdateSpecifiedType(AELSSPlayer* inPlayer, ESSCharacterHpType InType, int32 inHp, int32 inMaxHP)
	{
		ELSSPlayerController_eventOnOtherPlayerHpUpdateSpecifiedType_Parms Parms;
		Parms.inPlayer=inPlayer;
		Parms.InType=InType;
		Parms.inHp=inHp;
		Parms.inMaxHP=inMaxHP;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerAttentionBoostUpdate = FName(TEXT("OnPlayerAttentionBoostUpdate"));
	void AELSSPlayerController::OnPlayerAttentionBoostUpdate(float inAttentionBoost)
	{
		ELSSPlayerController_eventOnPlayerAttentionBoostUpdate_Parms Parms;
		Parms.inAttentionBoost=inAttentionBoost;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerAttentionBoostUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerAttentionLevelUpdate = FName(TEXT("OnPlayerAttentionLevelUpdate"));
	void AELSSPlayerController::OnPlayerAttentionLevelUpdate(int32 inAttentionLevel, int32 inAttentionIcon, int32 inNextFeverTimePoint)
	{
		ELSSPlayerController_eventOnPlayerAttentionLevelUpdate_Parms Parms;
		Parms.inAttentionLevel=inAttentionLevel;
		Parms.inAttentionIcon=inAttentionIcon;
		Parms.inNextFeverTimePoint=inNextFeverTimePoint;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerAttentionLevelUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerAttentionUpdate = FName(TEXT("OnPlayerAttentionUpdate"));
	void AELSSPlayerController::OnPlayerAttentionUpdate(ESSAttentionGaugeState inGaugeState, float inAttentionPoint, bool inAfterFever, ESSAttentionReason inReason, float inAddPoint, bool inImmediate)
	{
		ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms Parms;
		Parms.inGaugeState=inGaugeState;
		Parms.inAttentionPoint=inAttentionPoint;
		Parms.inAfterFever=inAfterFever ? true : false;
		Parms.inReason=inReason;
		Parms.inAddPoint=inAddPoint;
		Parms.inImmediate=inImmediate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerAttentionUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeAimMode = FName(TEXT("OnPlayerChangeAimMode"));
	void AELSSPlayerController::OnPlayerChangeAimMode(bool inAimMode)
	{
		ELSSPlayerController_eventOnPlayerChangeAimMode_Parms Parms;
		Parms.inAimMode=inAimMode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeAimMode),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeAliveStateType = FName(TEXT("OnPlayerChangeAliveStateType"));
	void AELSSPlayerController::OnPlayerChangeAliveStateType(ESSAliveStateType inAliveStateType)
	{
		ELSSPlayerController_eventOnPlayerChangeAliveStateType_Parms Parms;
		Parms.inAliveStateType=inAliveStateType;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeAliveStateType),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability = FName(TEXT("OnPlayerChangeCurrentShieldDurability"));
	void AELSSPlayerController::OnPlayerChangeCurrentShieldDurability(int32 inDurability, int32 InMaxDurability, bool inImmediate)
	{
		ELSSPlayerController_eventOnPlayerChangeCurrentShieldDurability_Parms Parms;
		Parms.inDurability=inDurability;
		Parms.InMaxDurability=InMaxDurability;
		Parms.inImmediate=inImmediate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability = FName(TEXT("OnPlayerChangeCurrentVehicleDurability"));
	void AELSSPlayerController::OnPlayerChangeCurrentVehicleDurability(ESSVehicleType InVehicleType, int32 inDurability, int32 InMaxDurability, bool inImmediate)
	{
		ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms Parms;
		Parms.InVehicleType=InVehicleType;
		Parms.inDurability=inDurability;
		Parms.InMaxDurability=InMaxDurability;
		Parms.inImmediate=inImmediate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeFinisherTarget = FName(TEXT("OnPlayerChangeFinisherTarget"));
	void AELSSPlayerController::OnPlayerChangeFinisherTarget(AActor* inNewTarget, ESSInteractExecute inInteractExec)
	{
		ELSSPlayerController_eventOnPlayerChangeFinisherTarget_Parms Parms;
		Parms.inNewTarget=inNewTarget;
		Parms.inInteractExec=inInteractExec;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeFinisherTarget),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeInteractTarget = FName(TEXT("OnPlayerChangeInteractTarget"));
	void AELSSPlayerController::OnPlayerChangeInteractTarget(ESSInteractExecute inInteractExecute, ESSInteractOperate InInteractOperate, AActor* inNewInteractTarget, FVector const& InOffset, int32 inNewId, int32 inNewValue, ESSInteractExecute currentExecute, int32 inCurrentId, int32 inCurrentValue)
	{
		ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms Parms;
		Parms.inInteractExecute=inInteractExecute;
		Parms.InInteractOperate=InInteractOperate;
		Parms.inNewInteractTarget=inNewInteractTarget;
		Parms.InOffset=InOffset;
		Parms.inNewId=inNewId;
		Parms.inNewValue=inNewValue;
		Parms.currentExecute=currentExecute;
		Parms.inCurrentId=inCurrentId;
		Parms.inCurrentValue=inCurrentValue;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeInteractTarget),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeInventory = FName(TEXT("OnPlayerChangeInventory"));
	void AELSSPlayerController::OnPlayerChangeInventory(TArray<AELSSPickupBase*> const& inInventory)
	{
		ELSSPlayerController_eventOnPlayerChangeInventory_Parms Parms;
		Parms.inInventory=inInventory;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeInventory),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeInventoryIconValue = FName(TEXT("OnPlayerChangeInventoryIconValue"));
	void AELSSPlayerController::OnPlayerChangeInventoryIconValue(int32 InIndex, int32 InValue)
	{
		ELSSPlayerController_eventOnPlayerChangeInventoryIconValue_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InValue=InValue;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeInventoryIconValue),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeInventoryLimit = FName(TEXT("OnPlayerChangeInventoryLimit"));
	void AELSSPlayerController::OnPlayerChangeInventoryLimit(bool flg)
	{
		ELSSPlayerController_eventOnPlayerChangeInventoryLimit_Parms Parms;
		Parms.flg=flg ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeInventoryLimit),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeInventoryPosition = FName(TEXT("OnPlayerChangeInventoryPosition"));
	void AELSSPlayerController::OnPlayerChangeInventoryPosition(int32 InIndex)
	{
		ELSSPlayerController_eventOnPlayerChangeInventoryPosition_Parms Parms;
		Parms.InIndex=InIndex;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeInventoryPosition),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeMoveSet = FName(TEXT("OnPlayerChangeMoveSet"));
	void AELSSPlayerController::OnPlayerChangeMoveSet(FSSHeatLevelUpInfo const& inLevelUpInfo)
	{
		ELSSPlayerController_eventOnPlayerChangeMoveSet_Parms Parms;
		Parms.inLevelUpInfo=inLevelUpInfo;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeMoveSet),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeOperationGuide = FName(TEXT("OnPlayerChangeOperationGuide"));
	void AELSSPlayerController::OnPlayerChangeOperationGuide(ESSOperationGuideExecute InType)
	{
		ELSSPlayerController_eventOnPlayerChangeOperationGuide_Parms Parms;
		Parms.InType=InType;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeOperationGuide),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangePossessOfCarrot = FName(TEXT("OnPlayerChangePossessOfCarrot"));
	void AELSSPlayerController::OnPlayerChangePossessOfCarrot(bool flg)
	{
		ELSSPlayerController_eventOnPlayerChangePossessOfCarrot_Parms Parms;
		Parms.flg=flg ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangePossessOfCarrot),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerChangeReviveTimer = FName(TEXT("OnPlayerChangeReviveTimer"));
	void AELSSPlayerController::OnPlayerChangeReviveTimer(float inTimer)
	{
		ELSSPlayerController_eventOnPlayerChangeReviveTimer_Parms Parms;
		Parms.inTimer=inTimer;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerChangeReviveTimer),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerDead = FName(TEXT("OnPlayerDead"));
	void AELSSPlayerController::OnPlayerDead(AELSSPlayerState* inDeadPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon)
	{
		ELSSPlayerController_eventOnPlayerDead_Parms Parms;
		Parms.inDeadPlayer=inDeadPlayer;
		Parms.inKillerPlayer=inKillerPlayer;
		Parms.inLogIcon=inLogIcon;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerDead),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerGetOnVehicle = FName(TEXT("OnPlayerGetOnVehicle"));
	void AELSSPlayerController::OnPlayerGetOnVehicle(AELSSPlayer* inPlayer, bool InFlag, ESSVehicleType InVehicleType, int32 inDurability, int32 InMaxDurability)
	{
		ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms Parms;
		Parms.inPlayer=inPlayer;
		Parms.InFlag=InFlag ? true : false;
		Parms.InVehicleType=InVehicleType;
		Parms.inDurability=inDurability;
		Parms.InMaxDurability=InMaxDurability;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerGetOnVehicle),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerHeatLevelUp = FName(TEXT("OnPlayerHeatLevelUp"));
	void AELSSPlayerController::OnPlayerHeatLevelUp(int32 inHeatLevel)
	{
		ELSSPlayerController_eventOnPlayerHeatLevelUp_Parms Parms;
		Parms.inHeatLevel=inHeatLevel;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerHeatLevelUp),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerHeatMeterUpdate = FName(TEXT("OnPlayerHeatMeterUpdate"));
	void AELSSPlayerController::OnPlayerHeatMeterUpdate(int32 inHeatLevel, float inExpRate, bool inImmediate)
	{
		ELSSPlayerController_eventOnPlayerHeatMeterUpdate_Parms Parms;
		Parms.inHeatLevel=inHeatLevel;
		Parms.inExpRate=inExpRate;
		Parms.inImmediate=inImmediate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerHeatMeterUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerHpUpdate = FName(TEXT("OnPlayerHpUpdate"));
	void AELSSPlayerController::OnPlayerHpUpdate(int32 inHp, int32 inMaxHP, bool inImmediate)
	{
		ELSSPlayerController_eventOnPlayerHpUpdate_Parms Parms;
		Parms.inHp=inHp;
		Parms.inMaxHP=inMaxHP;
		Parms.inImmediate=inImmediate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerHpUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerInteractGaugeUpdate = FName(TEXT("OnPlayerInteractGaugeUpdate"));
	void AELSSPlayerController::OnPlayerInteractGaugeUpdate(AActor* inInteractTarget, float inRate)
	{
		ELSSPlayerController_eventOnPlayerInteractGaugeUpdate_Parms Parms;
		Parms.inInteractTarget=inInteractTarget;
		Parms.inRate=inRate;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerInteractGaugeUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerKo = FName(TEXT("OnPlayerKo"));
	void AELSSPlayerController::OnPlayerKo(AELSSPlayerState* inKoPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon)
	{
		ELSSPlayerController_eventOnPlayerKo_Parms Parms;
		Parms.inKoPlayer=inKoPlayer;
		Parms.inKillerPlayer=inKillerPlayer;
		Parms.inLogIcon=inLogIcon;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerKo),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerKoHpUpdate = FName(TEXT("OnPlayerKoHpUpdate"));
	void AELSSPlayerController::OnPlayerKoHpUpdate(int32 inKoHp, int32 inKoMaxHp, bool inImmediate)
	{
		ELSSPlayerController_eventOnPlayerKoHpUpdate_Parms Parms;
		Parms.inKoHp=inKoHp;
		Parms.inKoMaxHp=inKoMaxHp;
		Parms.inImmediate=inImmediate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerKoHpUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerLearnHeatSkill = FName(TEXT("OnPlayerLearnHeatSkill"));
	void AELSSPlayerController::OnPlayerLearnHeatSkill(ESSHeatSkillCategory inCategory, int32 inHeatSkillId)
	{
		ELSSPlayerController_eventOnPlayerLearnHeatSkill_Parms Parms;
		Parms.inCategory=inCategory;
		Parms.inHeatSkillId=inHeatSkillId;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerLearnHeatSkill),&Parms);
	}
	static FName NAME_AELSSPlayerController_OnPlayerWatchedPlayerUpdate = FName(TEXT("OnPlayerWatchedPlayerUpdate"));
	void AELSSPlayerController::OnPlayerWatchedPlayerUpdate(int32 inWatchedPlayerNum)
	{
		ELSSPlayerController_eventOnPlayerWatchedPlayerUpdate_Parms Parms;
		Parms.inWatchedPlayerNum=inWatchedPlayerNum;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OnPlayerWatchedPlayerUpdate),&Parms);
	}
	static FName NAME_AELSSPlayerController_OpenPauseMenu_Impl = FName(TEXT("OpenPauseMenu_Impl"));
	bool AELSSPlayerController::OpenPauseMenu_Impl(bool disallowedCharacterControllWhenOpen)
	{
		ELSSPlayerController_eventOpenPauseMenu_Impl_Parms Parms;
		Parms.disallowedCharacterControllWhenOpen=disallowedCharacterControllWhenOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_OpenPauseMenu_Impl),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSPlayerController_RequestClientFlowGamePlay = FName(TEXT("RequestClientFlowGamePlay"));
	void AELSSPlayerController::RequestClientFlowGamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_RequestClientFlowGamePlay),NULL);
	}
	static FName NAME_AELSSPlayerController_RequestEndGameFlow_Client = FName(TEXT("RequestEndGameFlow_Client"));
	void AELSSPlayerController::RequestEndGameFlow_Client(ESSEndGameReason inEndReason)
	{
		ELSSPlayerController_eventRequestEndGameFlow_Client_Parms Parms;
		Parms.inEndReason=inEndReason;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_RequestEndGameFlow_Client),&Parms);
	}
	static FName NAME_AELSSPlayerController_RequestLeaveGame_Client = FName(TEXT("RequestLeaveGame_Client"));
	void AELSSPlayerController::RequestLeaveGame_Client()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_RequestLeaveGame_Client),NULL);
	}
	static FName NAME_AELSSPlayerController_ResultMenuPrepare_RPC = FName(TEXT("ResultMenuPrepare_RPC"));
	void AELSSPlayerController::ResultMenuPrepare_RPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ResultMenuPrepare_RPC),NULL);
	}
	static FName NAME_AELSSPlayerController_SetGameStateDebugFlag_Server = FName(TEXT("SetGameStateDebugFlag_Server"));
	void AELSSPlayerController::SetGameStateDebugFlag_Server(ESSGameStateDebugFlag Type, bool IsOn)
	{
		ELSSPlayerController_eventSetGameStateDebugFlag_Server_Parms Parms;
		Parms.Type=Type;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SetGameStateDebugFlag_Server),&Parms);
	}
	static FName NAME_AELSSPlayerController_SetMinimapTexture = FName(TEXT("SetMinimapTexture"));
	void AELSSPlayerController::SetMinimapTexture(int32 InMinimapID)
	{
		ELSSPlayerController_eventSetMinimapTexture_Parms Parms;
		Parms.InMinimapID=InMinimapID;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SetMinimapTexture),&Parms);
	}
	static FName NAME_AELSSPlayerController_SetPlayerDebugFlag_Server = FName(TEXT("SetPlayerDebugFlag_Server"));
	void AELSSPlayerController::SetPlayerDebugFlag_Server(ESSPlayerDebugFlag Type, bool IsOn)
	{
		ELSSPlayerController_eventSetPlayerDebugFlag_Server_Parms Parms;
		Parms.Type=Type;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SetPlayerDebugFlag_Server),&Parms);
	}
	static FName NAME_AELSSPlayerController_SetVisibleInteractDotIcon = FName(TEXT("SetVisibleInteractDotIcon"));
	void AELSSPlayerController::SetVisibleInteractDotIcon(AActor* inTargetActor, bool InVisible)
	{
		ELSSPlayerController_eventSetVisibleInteractDotIcon_Parms Parms;
		Parms.inTargetActor=inTargetActor;
		Parms.InVisible=InVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SetVisibleInteractDotIcon),&Parms);
	}
	static FName NAME_AELSSPlayerController_SetVisibleOtherPlayerOnlineID = FName(TEXT("SetVisibleOtherPlayerOnlineID"));
	void AELSSPlayerController::SetVisibleOtherPlayerOnlineID(AELSSPlayer* inTargetPlayer, bool InVisible, bool InHasCarrot)
	{
		ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms Parms;
		Parms.inTargetPlayer=inTargetPlayer;
		Parms.InVisible=InVisible ? true : false;
		Parms.InHasCarrot=InHasCarrot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SetVisibleOtherPlayerOnlineID),&Parms);
	}
	static FName NAME_AELSSPlayerController_SSAntiCheatClient_ConnectServer = FName(TEXT("SSAntiCheatClient_ConnectServer"));
	void AELSSPlayerController::SSAntiCheatClient_ConnectServer(const int32 Type, const int32 Platform, const FString& ipAddress, const FString& playerId, const FString& ProductUserID)
	{
		ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms Parms;
		Parms.Type=Type;
		Parms.Platform=Platform;
		Parms.ipAddress=ipAddress;
		Parms.playerId=playerId;
		Parms.ProductUserID=ProductUserID;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SSAntiCheatClient_ConnectServer),&Parms);
	}
	static FName NAME_AELSSPlayerController_SSAntiCheatClient_DisconnectServer = FName(TEXT("SSAntiCheatClient_DisconnectServer"));
	void AELSSPlayerController::SSAntiCheatClient_DisconnectServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SSAntiCheatClient_DisconnectServer),NULL);
	}
	static FName NAME_AELSSPlayerController_StartResultTally_RPC = FName(TEXT("StartResultTally_RPC"));
	void AELSSPlayerController::StartResultTally_RPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_StartResultTally_RPC),NULL);
	}
	static FName NAME_AELSSPlayerController_SwitchMinimapMode = FName(TEXT("SwitchMinimapMode"));
	void AELSSPlayerController::SwitchMinimapMode(bool inIsWholeMap)
	{
		ELSSPlayerController_eventSwitchMinimapMode_Parms Parms;
		Parms.inIsWholeMap=inIsWholeMap ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SwitchMinimapMode),&Parms);
	}
	static FName NAME_AELSSPlayerController_SyncWatchTargetPlayer_Server = FName(TEXT("SyncWatchTargetPlayer_Server"));
	void AELSSPlayerController::SyncWatchTargetPlayer_Server(int32 inWatchPlayerIndex, int32 inSyncId)
	{
		ELSSPlayerController_eventSyncWatchTargetPlayer_Server_Parms Parms;
		Parms.inWatchPlayerIndex=inWatchPlayerIndex;
		Parms.inSyncId=inSyncId;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_SyncWatchTargetPlayer_Server),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_BeforeGamePlay = FName(TEXT("TickClientFlowState_BeforeGamePlay"));
	void AELSSPlayerController::TickClientFlowState_BeforeGamePlay(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_BeforeGamePlay_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_BeforeGamePlay),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_Closing = FName(TEXT("TickClientFlowState_Closing"));
	void AELSSPlayerController::TickClientFlowState_Closing(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_Closing_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_Closing),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_Exit = FName(TEXT("TickClientFlowState_Exit"));
	void AELSSPlayerController::TickClientFlowState_Exit(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_Exit_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_Exit),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_Finish = FName(TEXT("TickClientFlowState_Finish"));
	void AELSSPlayerController::TickClientFlowState_Finish(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_Finish_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_Finish),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_GamePlay = FName(TEXT("TickClientFlowState_GamePlay"));
	void AELSSPlayerController::TickClientFlowState_GamePlay(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_GamePlay_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_GamePlay),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_Result = FName(TEXT("TickClientFlowState_Result"));
	void AELSSPlayerController::TickClientFlowState_Result(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_Result_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_Result),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_VictoryRoyale = FName(TEXT("TickClientFlowState_VictoryRoyale"));
	void AELSSPlayerController::TickClientFlowState_VictoryRoyale(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_VictoryRoyale_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_VictoryRoyale),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_WatchGame = FName(TEXT("TickClientFlowState_WatchGame"));
	void AELSSPlayerController::TickClientFlowState_WatchGame(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_WatchGame_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_WatchGame),&Parms);
	}
	static FName NAME_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale = FName(TEXT("TickClientFlowState_WatchVictoryRoyale"));
	void AELSSPlayerController::TickClientFlowState_WatchVictoryRoyale(float inDeltaSeconds)
	{
		ELSSPlayerController_eventTickClientFlowState_WatchVictoryRoyale_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale),&Parms);
	}
	static FName NAME_AELSSPlayerController_ToggleHUDVisibility = FName(TEXT("ToggleHUDVisibility"));
	void AELSSPlayerController::ToggleHUDVisibility()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_ToggleHUDVisibility),NULL);
	}
	static FName NAME_AELSSPlayerController_UIPrepare_RPC = FName(TEXT("UIPrepare_RPC"));
	void AELSSPlayerController::UIPrepare_RPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_UIPrepare_RPC),NULL);
	}
	static FName NAME_AELSSPlayerController_WatchGame_ApplyHoldRatio = FName(TEXT("WatchGame_ApplyHoldRatio"));
	void AELSSPlayerController::WatchGame_ApplyHoldRatio(float InRatio)
	{
		ELSSPlayerController_eventWatchGame_ApplyHoldRatio_Parms Parms;
		Parms.InRatio=InRatio;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_WatchGame_ApplyHoldRatio),&Parms);
	}
	static FName NAME_AELSSPlayerController_WatchGame_CancelHold = FName(TEXT("WatchGame_CancelHold"));
	void AELSSPlayerController::WatchGame_CancelHold()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_WatchGame_CancelHold),NULL);
	}
	static FName NAME_AELSSPlayerController_WatchGame_OnChangePlayer = FName(TEXT("WatchGame_OnChangePlayer"));
	void AELSSPlayerController::WatchGame_OnChangePlayer(AELSSPlayerState* inNewTarget)
	{
		ELSSPlayerController_eventWatchGame_OnChangePlayer_Parms Parms;
		Parms.inNewTarget=inNewTarget;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_WatchGame_OnChangePlayer),&Parms);
	}
	static FName NAME_AELSSPlayerController_WatchGame_OnRequestChangePlayer = FName(TEXT("WatchGame_OnRequestChangePlayer"));
	void AELSSPlayerController::WatchGame_OnRequestChangePlayer(bool isNext)
	{
		ELSSPlayerController_eventWatchGame_OnRequestChangePlayer_Parms Parms;
		Parms.isNext=isNext ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_WatchGame_OnRequestChangePlayer),&Parms);
	}
	static FName NAME_AELSSPlayerController_WatchGame_RequestNext = FName(TEXT("WatchGame_RequestNext"));
	void AELSSPlayerController::WatchGame_RequestNext(bool toVictoryRoyale)
	{
		ELSSPlayerController_eventWatchGame_RequestNext_Parms Parms;
		Parms.toVictoryRoyale=toVictoryRoyale ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_WatchGame_RequestNext),&Parms);
	}
	static FName NAME_AELSSPlayerController_WatchGame_ResetUI = FName(TEXT("WatchGame_ResetUI"));
	void AELSSPlayerController::WatchGame_ResetUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerController_WatchGame_ResetUI),NULL);
	}
	void AELSSPlayerController::StaticRegisterNativesAELSSPlayerController()
	{
		UClass* Class = AELSSPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginViewControlledPawn", &AELSSPlayerController::execBeginViewControlledPawn },
			{ "ChangeClientFlowState", &AELSSPlayerController::execChangeClientFlowState },
			{ "CheckAllowCharacterControll", &AELSSPlayerController::execCheckAllowCharacterControll },
			{ "CheckCompletePlayerSetup", &AELSSPlayerController::execCheckCompletePlayerSetup },
			{ "CheckInSightFromCamera", &AELSSPlayerController::execCheckInSightFromCamera },
			{ "CheckInSightFromCameraForInteract", &AELSSPlayerController::execCheckInSightFromCameraForInteract },
			{ "ClosePauseMenu", &AELSSPlayerController::execClosePauseMenu },
			{ "ConvertLeftStickToMoveInput", &AELSSPlayerController::execConvertLeftStickToMoveInput },
			{ "DeactiveStationalCamera", &AELSSPlayerController::execDeactiveStationalCamera },
			{ "DebugAddAttentionPoint", &AELSSPlayerController::execDebugAddAttentionPoint },
			{ "DebugAIPlayerAutoKill", &AELSSPlayerController::execDebugAIPlayerAutoKill },
			{ "DebugAIPlayerAutoMove", &AELSSPlayerController::execDebugAIPlayerAutoMove },
			{ "DebugAIPlayerAutoRequestTransit", &AELSSPlayerController::execDebugAIPlayerAutoRequestTransit },
			{ "DebugAIPlayerDisableAll", &AELSSPlayerController::execDebugAIPlayerDisableAll },
			{ "DebugAIPlayerNoDamage", &AELSSPlayerController::execDebugAIPlayerNoDamage },
			{ "DebugAIPlayerSpawn", &AELSSPlayerController::execDebugAIPlayerSpawn },
			{ "DebugAIPlayerSpawnPreset", &AELSSPlayerController::execDebugAIPlayerSpawnPreset },
			{ "DebugAIPlayerSpawnPresetByName", &AELSSPlayerController::execDebugAIPlayerSpawnPresetByName },
			{ "DebugDestroyAllPickupObjects", &AELSSPlayerController::execDebugDestroyAllPickupObjects },
			{ "DebugDuplicateSSPlayer", &AELSSPlayerController::execDebugDuplicateSSPlayer },
			{ "DebugForciblyEndMatch", &AELSSPlayerController::execDebugForciblyEndMatch },
			{ "DebugLobbySkip", &AELSSPlayerController::execDebugLobbySkip },
			{ "DebugNetworkProfilerOnServer", &AELSSPlayerController::execDebugNetworkProfilerOnServer },
			{ "DebugNoResponseMode", &AELSSPlayerController::execDebugNoResponseMode },
			{ "DebugNotifyChangePlayer_Client", &AELSSPlayerController::execDebugNotifyChangePlayer_Client },
			{ "DebugResetAttention", &AELSSPlayerController::execDebugResetAttention },
			{ "DebugRoundSpeed", &AELSSPlayerController::execDebugRoundSpeed },
			{ "DebugServerCrashRequest", &AELSSPlayerController::execDebugServerCrashRequest },
			{ "DebugServerMemReport", &AELSSPlayerController::execDebugServerMemReport },
			{ "DebugSetAttentionPoint", &AELSSPlayerController::execDebugSetAttentionPoint },
			{ "DebugSetHeatLevel", &AELSSPlayerController::execDebugSetHeatLevel },
			{ "DebugSetPlayerEquipSettings", &AELSSPlayerController::execDebugSetPlayerEquipSettings },
			{ "DebugSpawnAndEquipWeapon", &AELSSPlayerController::execDebugSpawnAndEquipWeapon },
			{ "DebugSpawnItem", &AELSSPlayerController::execDebugSpawnItem },
			{ "DebugSpawnItemBox", &AELSSPlayerController::execDebugSpawnItemBox },
			{ "DebugSpawnShield", &AELSSPlayerController::execDebugSpawnShield },
			{ "DebugSpawnVehicle", &AELSSPlayerController::execDebugSpawnVehicle },
			{ "DebugSpawnWeapon", &AELSSPlayerController::execDebugSpawnWeapon },
			{ "DebugVehicleFullDurability", &AELSSPlayerController::execDebugVehicleFullDurability },
			{ "DebugVehicleInvincible", &AELSSPlayerController::execDebugVehicleInvincible },
			{ "DebugVehicleResetRotation", &AELSSPlayerController::execDebugVehicleResetRotation },
			{ "DebugVehicleSetDurability", &AELSSPlayerController::execDebugVehicleSetDurability },
			{ "EndViewControlledPawn", &AELSSPlayerController::execEndViewControlledPawn },
			{ "EnterClientFlowState_Dialog_Native", &AELSSPlayerController::execEnterClientFlowState_Dialog_Native },
			{ "EnterClientFlowState_WatchGame_Native", &AELSSPlayerController::execEnterClientFlowState_WatchGame_Native },
			{ "ExitClientFlowState_Dialog_Native", &AELSSPlayerController::execExitClientFlowState_Dialog_Native },
			{ "ExitClientFlowState_WatchGame_Native", &AELSSPlayerController::execExitClientFlowState_WatchGame_Native },
			{ "GetAssociatedSSPlayer", &AELSSPlayerController::execGetAssociatedSSPlayer },
			{ "GetCameraLocation", &AELSSPlayerController::execGetCameraLocation },
			{ "GetCameraRotation", &AELSSPlayerController::execGetCameraRotation },
			{ "GetEndGameReasonOnServer", &AELSSPlayerController::execGetEndGameReasonOnServer },
			{ "GetGameplayCamera", &AELSSPlayerController::execGetGameplayCamera },
			{ "GetGameplayCameraTarget", &AELSSPlayerController::execGetGameplayCameraTarget },
			{ "GetLastLeftStickInput", &AELSSPlayerController::execGetLastLeftStickInput },
			{ "GetLastMouseMoveInput", &AELSSPlayerController::execGetLastMouseMoveInput },
			{ "GetLastRightStickInput", &AELSSPlayerController::execGetLastRightStickInput },
			{ "GetLeftStickInput", &AELSSPlayerController::execGetLeftStickInput },
			{ "GetMouseMoveInput", &AELSSPlayerController::execGetMouseMoveInput },
			{ "GetMoveInput", &AELSSPlayerController::execGetMoveInput },
			{ "GetNearPlayerHpRatio", &AELSSPlayerController::execGetNearPlayerHpRatio },
			{ "GetParentSSPlayerController", &AELSSPlayerController::execGetParentSSPlayerController },
			{ "GetRightStickInput", &AELSSPlayerController::execGetRightStickInput },
			{ "GetStationalCamera", &AELSSPlayerController::execGetStationalCamera },
			{ "GetWatchTargetPlayer", &AELSSPlayerController::execGetWatchTargetPlayer },
			{ "IsChildPlayerController", &AELSSPlayerController::execIsChildPlayerController },
			{ "IsClientFlowState", &AELSSPlayerController::execIsClientFlowState },
			{ "IsDoneResultAPI", &AELSSPlayerController::execIsDoneResultAPI },
			{ "IsDoneSyncResult", &AELSSPlayerController::execIsDoneSyncResult },
			{ "IsEnabledInputByThisController", &AELSSPlayerController::execIsEnabledInputByThisController },
			{ "IsOpenErrorDialog", &AELSSPlayerController::execIsOpenErrorDialog },
			{ "IsRegisteredEndGameReasonOnServer", &AELSSPlayerController::execIsRegisteredEndGameReasonOnServer },
			{ "IsViewTargetGameplayCamera", &AELSSPlayerController::execIsViewTargetGameplayCamera },
			{ "NeedsShowInteractableObjectStatus", &AELSSPlayerController::execNeedsShowInteractableObjectStatus },
			{ "NeedsShowOnlineID", &AELSSPlayerController::execNeedsShowOnlineID },
			{ "NeedsShowPlayerStatus", &AELSSPlayerController::execNeedsShowPlayerStatus },
			{ "NeedsTransitionToWatchGame", &AELSSPlayerController::execNeedsTransitionToWatchGame },
			{ "NotifyDetectedCheat_ClientToServer", &AELSSPlayerController::execNotifyDetectedCheat_ClientToServer },
			{ "NotifyEndGameFromClient_Server", &AELSSPlayerController::execNotifyEndGameFromClient_Server },
			{ "OnAntiCheatClientViolated", &AELSSPlayerController::execOnAntiCheatClientViolated },
			{ "OnChangeClientFlowState_Server", &AELSSPlayerController::execOnChangeClientFlowState_Server },
			{ "OnOtherPlayerHpUpdate", &AELSSPlayerController::execOnOtherPlayerHpUpdate },
			{ "OnPlayerDead", &AELSSPlayerController::execOnPlayerDead },
			{ "OnPlayerKo", &AELSSPlayerController::execOnPlayerKo },
			{ "OnPrepareVictoryCutscene", &AELSSPlayerController::execOnPrepareVictoryCutscene },
			{ "OnReservedReturnToMainMenuByNetworkError", &AELSSPlayerController::execOnReservedReturnToMainMenuByNetworkError },
			{ "OpenPauseMenu", &AELSSPlayerController::execOpenPauseMenu },
			{ "PlayCameraShake", &AELSSPlayerController::execPlayCameraShake },
			{ "PrintLog", &AELSSPlayerController::execPrintLog },
			{ "RefreshNearPlayerStatus", &AELSSPlayerController::execRefreshNearPlayerStatus },
			{ "RegisterEndGameReason", &AELSSPlayerController::execRegisterEndGameReason },
			{ "RequestEndGameFlow_Client", &AELSSPlayerController::execRequestEndGameFlow_Client },
			{ "RequestLeaveGame_Client", &AELSSPlayerController::execRequestLeaveGame_Client },
			{ "ResultMenuPrepare_RPC", &AELSSPlayerController::execResultMenuPrepare_RPC },
			{ "SetAllowCharacterControll", &AELSSPlayerController::execSetAllowCharacterControll },
			{ "SetAnyInputButtonCheck", &AELSSPlayerController::execSetAnyInputButtonCheck },
			{ "SetDefaultViewTarget", &AELSSPlayerController::execSetDefaultViewTarget },
			{ "SetGameplayCameraTarget", &AELSSPlayerController::execSetGameplayCameraTarget },
			{ "SetGameStateDebugFlag_Server", &AELSSPlayerController::execSetGameStateDebugFlag_Server },
			{ "SetMinimapMode", &AELSSPlayerController::execSetMinimapMode },
			{ "SetMouseControlMode", &AELSSPlayerController::execSetMouseControlMode },
			{ "SetOperationalWidhgetManager", &AELSSPlayerController::execSetOperationalWidhgetManager },
			{ "SetPlayerDataToSync", &AELSSPlayerController::execSetPlayerDataToSync },
			{ "SetPlayerDebugFlag_Server", &AELSSPlayerController::execSetPlayerDebugFlag_Server },
			{ "SetRestrictMoveOnly", &AELSSPlayerController::execSetRestrictMoveOnly },
			{ "SetRStickInputZero", &AELSSPlayerController::execSetRStickInputZero },
			{ "SetWatchTargetPlayerState", &AELSSPlayerController::execSetWatchTargetPlayerState },
			{ "SSAntiCheatClient_ConnectServer", &AELSSPlayerController::execSSAntiCheatClient_ConnectServer },
			{ "SSAntiCheatClient_DisconnectServer", &AELSSPlayerController::execSSAntiCheatClient_DisconnectServer },
			{ "StartResultTally_RPC", &AELSSPlayerController::execStartResultTally_RPC },
			{ "SyncWatchTargetPlayer_Server", &AELSSPlayerController::execSyncWatchTargetPlayer_Server },
			{ "TickClientFlowState_WatchGame_Native", &AELSSPlayerController::execTickClientFlowState_WatchGame_Native },
			{ "ToggleMinimapMode", &AELSSPlayerController::execToggleMinimapMode },
			{ "UIPrepare_RPC", &AELSSPlayerController::execUIPrepare_RPC },
			{ "UpdateNearInteractableObjectList", &AELSSPlayerController::execUpdateNearInteractableObjectList },
			{ "UpdateNearPlayerList", &AELSSPlayerController::execUpdateNearPlayerList },
			{ "UpdateViewTarget", &AELSSPlayerController::execUpdateViewTarget },
			{ "WatchGame_OnPressMenuDecision", &AELSSPlayerController::execWatchGame_OnPressMenuDecision },
			{ "WatchGame_OnPressMenuLB", &AELSSPlayerController::execWatchGame_OnPressMenuLB },
			{ "WatchGame_OnPressMenuRB", &AELSSPlayerController::execWatchGame_OnPressMenuRB },
			{ "WatchGame_OnReleaseMenuDecision", &AELSSPlayerController::execWatchGame_OnReleaseMenuDecision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inLogType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inLogType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventAddInstantMessage_Parms, inMessage), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inLogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inLogType = { "inLogType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventAddInstantMessage_Parms, inLogType), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inLogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::NewProp_inLogType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "AddInstantMessage", nullptr, nullptr, sizeof(ELSSPlayerController_eventAddInstantMessage_Parms), Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inTextParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inTextParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inTextParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inLogType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inLogType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inTextParam_Inner = { "inTextParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLogTextParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inTextParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inTextParam = { "inTextParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventAddInstantMessageByList_Parms, inTextParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inTextParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inTextParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inLogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inLogType = { "inLogType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventAddInstantMessageByList_Parms, inLogType), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inTextParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inTextParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inLogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::NewProp_inLogType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "AddInstantMessageByList", nullptr, nullptr, sizeof(ELSSPlayerController_eventAddInstantMessageByList_Parms), Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "BeginViewControlledPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics
	{
		struct ELSSPlayerController_eventChangeClientFlowState_Parms
		{
			ESSClientFlowState inClientState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inClientState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inClientState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::NewProp_inClientState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::NewProp_inClientState = { "inClientState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventChangeClientFlowState_Parms, inClientState), Z_Construct_UEnum_ABP_200508_ESSClientFlowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::NewProp_inClientState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::NewProp_inClientState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ChangeClientFlowState", nullptr, nullptr, sizeof(ELSSPlayerController_eventChangeClientFlowState_Parms), Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics
	{
		struct ELSSPlayerController_eventCheckAllowCharacterControll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventCheckAllowCharacterControll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventCheckAllowCharacterControll_Parms), &Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "CheckAllowCharacterControll", nullptr, nullptr, sizeof(ELSSPlayerController_eventCheckAllowCharacterControll_Parms), Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics
	{
		struct ELSSPlayerController_eventCheckCompletePlayerSetup_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventCheckCompletePlayerSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventCheckCompletePlayerSetup_Parms), &Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "CheckCompletePlayerSetup", nullptr, nullptr, sizeof(ELSSPlayerController_eventCheckCompletePlayerSetup_Parms), Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics
	{
		struct ELSSPlayerController_eventCheckInSightFromCamera_Parms
		{
			AActor* inCheckActor;
			float inTargetOffsetZ;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inCheckActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inTargetOffsetZ;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_inCheckActor = { "inCheckActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventCheckInSightFromCamera_Parms, inCheckActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_inTargetOffsetZ = { "inTargetOffsetZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventCheckInSightFromCamera_Parms, inTargetOffsetZ), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventCheckInSightFromCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventCheckInSightFromCamera_Parms), &Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_inCheckActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_inTargetOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "CheckInSightFromCamera", nullptr, nullptr, sizeof(ELSSPlayerController_eventCheckInSightFromCamera_Parms), Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics
	{
		struct ELSSPlayerController_eventCheckInSightFromCameraForInteract_Parms
		{
			AActor* inCheckActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inCheckActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::NewProp_inCheckActor = { "inCheckActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventCheckInSightFromCameraForInteract_Parms, inCheckActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventCheckInSightFromCameraForInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventCheckInSightFromCameraForInteract_Parms), &Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::NewProp_inCheckActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "CheckInSightFromCameraForInteract", nullptr, nullptr, sizeof(ELSSPlayerController_eventCheckInSightFromCameraForInteract_Parms), Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics
	{
		struct ELSSPlayerController_eventClosePauseMenu_Parms
		{
			bool allowedCharacterControllWhenClose;
			bool ReturnValue;
		};
		static void NewProp_allowedCharacterControllWhenClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowedCharacterControllWhenClose;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_allowedCharacterControllWhenClose_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventClosePauseMenu_Parms*)Obj)->allowedCharacterControllWhenClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_allowedCharacterControllWhenClose = { "allowedCharacterControllWhenClose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventClosePauseMenu_Parms), &Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_allowedCharacterControllWhenClose_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventClosePauseMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventClosePauseMenu_Parms), &Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_allowedCharacterControllWhenClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ClosePauseMenu", nullptr, nullptr, sizeof(ELSSPlayerController_eventClosePauseMenu_Parms), Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics
	{
		static void NewProp_allowedCharacterControllWhenClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowedCharacterControllWhenClose;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_allowedCharacterControllWhenClose_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventClosePauseMenu_Impl_Parms*)Obj)->allowedCharacterControllWhenClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_allowedCharacterControllWhenClose = { "allowedCharacterControllWhenClose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventClosePauseMenu_Impl_Parms), &Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_allowedCharacterControllWhenClose_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventClosePauseMenu_Impl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventClosePauseMenu_Impl_Parms), &Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_allowedCharacterControllWhenClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ClosePauseMenu_Impl", nullptr, nullptr, sizeof(ELSSPlayerController_eventClosePauseMenu_Impl_Parms), Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics
	{
		struct ELSSPlayerController_eventConvertLeftStickToMoveInput_Parms
		{
			FVector2D inStickInput;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inStickInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inStickInput;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::NewProp_inStickInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::NewProp_inStickInput = { "inStickInput", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventConvertLeftStickToMoveInput_Parms, inStickInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::NewProp_inStickInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::NewProp_inStickInput_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventConvertLeftStickToMoveInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::NewProp_inStickInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ConvertLeftStickToMoveInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventConvertLeftStickToMoveInput_Parms), Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DeactiveStationalCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAddPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAddAttentionPoint_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::NewProp_inAddPoint = { "inAddPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAddAttentionPoint_Parms, inAddPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::NewProp_inAddPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAddAttentionPoint", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAddAttentionPoint_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugAIPlayerAutoKill_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugAIPlayerAutoKill_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerAutoKill", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerAutoKill_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugAIPlayerAutoMove_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugAIPlayerAutoMove_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerAutoMove_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerAutoMove_Parms, RotateSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_IsOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::NewProp_RotateSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerAutoMove", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerAutoMove_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Trigger_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_intervalTime;
		static void NewProp_autoJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoJump;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_Trigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerAutoRequestTransit_Parms, Trigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_intervalTime = { "intervalTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerAutoRequestTransit_Parms, intervalTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_autoJump_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugAIPlayerAutoRequestTransit_Parms*)Obj)->autoJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_autoJump = { "autoJump", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugAIPlayerAutoRequestTransit_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_autoJump_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_Trigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_intervalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::NewProp_autoJump,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerAutoRequestTransit", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerAutoRequestTransit_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugAIPlayerDisableAll_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugAIPlayerDisableAll_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerDisableAll", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerDisableAll_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugAIPlayerNoDamage_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugAIPlayerNoDamage_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerNoDamage", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerNoDamage_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawn_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::NewProp_WrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerSpawn", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerSpawn_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InFaceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InBodyID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InHairID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InBottomsID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InShoesID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSuitID;
		static void NewProp_InRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InRandom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InFaceID = { "InFaceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms, InFaceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InBodyID = { "InBodyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms, InBodyID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InHairID = { "InHairID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms, InHairID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InBottomsID = { "InBottomsID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms, InBottomsID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InShoesID = { "InShoesID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms, InShoesID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InSuitID = { "InSuitID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms, InSuitID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InRandom_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms*)Obj)->InRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InRandom = { "InRandom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InFaceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InBodyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InHairID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InBottomsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InShoesID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InSuitID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::NewProp_InRandom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerSpawnPreset", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugAIPlayerSpawnPresetByName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::NewProp_InName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugAIPlayerSpawnPresetByName", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugAIPlayerSpawnPresetByName_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugDestroyAllPickupObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics
	{
		static void NewProp_inPossessPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inPossessPlayer;
		static void NewProp_inBaseKill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inBaseKill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inPossessPlayer_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugDuplicateSSPlayer_Parms*)Obj)->inPossessPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inPossessPlayer = { "inPossessPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugDuplicateSSPlayer_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inPossessPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inBaseKill_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugDuplicateSSPlayer_Parms*)Obj)->inBaseKill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inBaseKill = { "inBaseKill", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugDuplicateSSPlayer_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inBaseKill_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inPossessPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::NewProp_inBaseKill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugDuplicateSSPlayer", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugDuplicateSSPlayer_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugForciblyEndMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugLobbySkip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugNetworkProfilerOnServer_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugNetworkProfilerOnServer_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugNetworkProfilerOnServer", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugNetworkProfilerOnServer_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugNoResponseMode_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugNoResponseMode_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugNoResponseMode", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugNoResponseMode_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugNotifyChangePlayer_Client", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugResetAttention", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugRoundSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugRoundSpeed", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugRoundSpeed_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugServerCrashRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics
	{
		static void NewProp_full_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_full;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::NewProp_full_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugServerMemReport_Parms*)Obj)->full = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::NewProp_full = { "full", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugServerMemReport_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::NewProp_full_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::NewProp_full,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugServerMemReport", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugServerMemReport_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSetAttentionPoint_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::NewProp_inAttentionPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSetAttentionPoint", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSetAttentionPoint_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSetHeatLevel_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::NewProp_inHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSetHeatLevel", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSetHeatLevel_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
		static void NewProp_inDuplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inDuplicate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSetPlayerEquipSettings_Parms, InParam), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSetPlayerEquipSettings_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inDuplicate_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugSetPlayerEquipSettings_Parms*)Obj)->inDuplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inDuplicate = { "inDuplicate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugSetPlayerEquipSettings_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inDuplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_InParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::NewProp_inDuplicate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSetPlayerEquipSettings", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSetPlayerEquipSettings_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnAndEquipWeapon_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSpawnAndEquipWeapon", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSpawnAndEquipWeapon_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnItem_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnItem_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSpawnItem", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSpawnItem_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inItemBoxType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSpawnNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::NewProp_inItemBoxType = { "inItemBoxType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnItemBox_Parms, inItemBoxType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::NewProp_inSpawnNum = { "inSpawnNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnItemBox_Parms, inSpawnNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::NewProp_inItemBoxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::NewProp_inSpawnNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSpawnItemBox", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSpawnItemBox_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnShield_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnShield_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSpawnShield", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSpawnShield_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_offsetDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_offsetZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_offsetRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnVehicle_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_offsetDistance = { "offsetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnVehicle_Parms, offsetDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_offsetZ = { "offsetZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnVehicle_Parms, offsetZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_offsetRoll = { "offsetRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnVehicle_Parms, offsetRoll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_offsetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_offsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::NewProp_offsetRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSpawnVehicle", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSpawnVehicle_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnWeapon_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugSpawnWeapon_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugSpawnWeapon", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugSpawnWeapon_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics
	{
		static void NewProp_isAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::NewProp_isAll_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugVehicleFullDurability_Parms*)Obj)->isAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::NewProp_isAll = { "isAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugVehicleFullDurability_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::NewProp_isAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::NewProp_isAll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugVehicleFullDurability", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugVehicleFullDurability_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static void NewProp_isAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugVehicleInvincible_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugVehicleInvincible_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_isAll_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugVehicleInvincible_Parms*)Obj)->isAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_isAll = { "isAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugVehicleInvincible_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_isAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_IsOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::NewProp_isAll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugVehicleInvincible", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugVehicleInvincible_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics
	{
		static void NewProp_isAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::NewProp_isAll_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugVehicleResetRotation_Parms*)Obj)->isAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::NewProp_isAll = { "isAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugVehicleResetRotation_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::NewProp_isAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::NewProp_isAll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugVehicleResetRotation", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugVehicleResetRotation_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static void NewProp_isAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventDebugVehicleSetDurability_Parms, Ratio), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::NewProp_isAll_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventDebugVehicleSetDurability_Parms*)Obj)->isAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::NewProp_isAll = { "isAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventDebugVehicleSetDurability_Parms), &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::NewProp_isAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::NewProp_isAll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "DebugVehicleSetDurability", nullptr, nullptr, sizeof(ELSSPlayerController_eventDebugVehicleSetDurability_Parms), Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "Dialog_OnPressMenuAccept", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "Dialog_OnPressMenuCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "Dialog_OnPressMenuLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "Dialog_OnPressMenuRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EndViewControlledPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_BeforeGamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_Closing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_Dialog_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_Exit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_GamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_Result", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_VictoryRoyale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_WatchGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_WatchGame_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "EnterClientFlowState_WatchVictoryRoyale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_BeforeGamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_Closing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_Dialog_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_Exit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_GamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_Result", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_VictoryRoyale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_WatchGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_WatchGame_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ExitClientFlowState_WatchVictoryRoyale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics
	{
		struct ELSSPlayerController_eventGetAssociatedSSPlayer_Parms
		{
			AELSSPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetAssociatedSSPlayer_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetAssociatedSSPlayer", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetAssociatedSSPlayer_Parms), Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics
	{
		struct ELSSPlayerController_eventGetCameraLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetCameraLocation", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetCameraLocation_Parms), Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics
	{
		struct ELSSPlayerController_eventGetCameraRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetCameraRotation", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetCameraRotation_Parms), Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics
	{
		struct ELSSPlayerController_eventGetEndGameReasonOnServer_Parms
		{
			ESSEndGameReason ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetEndGameReasonOnServer_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetEndGameReasonOnServer", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetEndGameReasonOnServer_Parms), Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics
	{
		struct ELSSPlayerController_eventGetGameplayCamera_Parms
		{
			AELSSGameplayCamera* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetGameplayCamera_Parms, ReturnValue), Z_Construct_UClass_AELSSGameplayCamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetGameplayCamera", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetGameplayCamera_Parms), Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics
	{
		struct ELSSPlayerController_eventGetGameplayCameraTarget_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetGameplayCameraTarget_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetGameplayCameraTarget", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetGameplayCameraTarget_Parms), Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics
	{
		struct ELSSPlayerController_eventGetLastLeftStickInput_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetLastLeftStickInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetLastLeftStickInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetLastLeftStickInput_Parms), Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics
	{
		struct ELSSPlayerController_eventGetLastMouseMoveInput_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetLastMouseMoveInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetLastMouseMoveInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetLastMouseMoveInput_Parms), Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics
	{
		struct ELSSPlayerController_eventGetLastRightStickInput_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetLastRightStickInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetLastRightStickInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetLastRightStickInput_Parms), Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics
	{
		struct ELSSPlayerController_eventGetLeftStickInput_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetLeftStickInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetLeftStickInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetLeftStickInput_Parms), Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics
	{
		struct ELSSPlayerController_eventGetMouseMoveInput_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetMouseMoveInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetMouseMoveInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetMouseMoveInput_Parms), Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics
	{
		struct ELSSPlayerController_eventGetMoveInput_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetMoveInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetMoveInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetMoveInput_Parms), Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics
	{
		struct ELSSPlayerController_eventGetNearPlayerHpRatio_Parms
		{
			AELSSPlayer* inPlayer;
			float outHpRatio;
			float outKoHpRatio;
			float outShieldDurabilityRatio;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outHpRatio;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outKoHpRatio;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outShieldDurabilityRatio;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetNearPlayerHpRatio_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_outHpRatio = { "outHpRatio", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetNearPlayerHpRatio_Parms, outHpRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_outKoHpRatio = { "outKoHpRatio", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetNearPlayerHpRatio_Parms, outKoHpRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_outShieldDurabilityRatio = { "outShieldDurabilityRatio", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetNearPlayerHpRatio_Parms, outShieldDurabilityRatio), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventGetNearPlayerHpRatio_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventGetNearPlayerHpRatio_Parms), &Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_outHpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_outKoHpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_outShieldDurabilityRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetNearPlayerHpRatio", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetNearPlayerHpRatio_Parms), Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics
	{
		struct ELSSPlayerController_eventGetParentSSPlayerController_Parms
		{
			AELSSPlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetParentSSPlayerController_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetParentSSPlayerController", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetParentSSPlayerController_Parms), Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetPauseMenuCommonLayout_Parms, ReturnValue), Z_Construct_UClass_UELCommonLayout_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetPauseMenuCommonLayout", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetPauseMenuCommonLayout_Parms), Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics
	{
		struct ELSSPlayerController_eventGetRightStickInput_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetRightStickInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetRightStickInput", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetRightStickInput_Parms), Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics
	{
		struct ELSSPlayerController_eventGetStationalCamera_Parms
		{
			AELSSStationalCamera* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetStationalCamera_Parms, ReturnValue), Z_Construct_UClass_AELSSStationalCamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetStationalCamera", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetStationalCamera_Parms), Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetUIManager_Parms, ReturnValue), Z_Construct_UClass_AELSSUIManagerInGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetUIManager", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetUIManager_Parms), Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetUIManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetUIManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics
	{
		struct ELSSPlayerController_eventGetWatchTargetPlayer_Parms
		{
			AELSSPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventGetWatchTargetPlayer_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "GetWatchTargetPlayer", nullptr, nullptr, sizeof(ELSSPlayerController_eventGetWatchTargetPlayer_Parms), Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics
	{
		struct ELSSPlayerController_eventIsChildPlayerController_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsChildPlayerController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsChildPlayerController_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsChildPlayerController", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsChildPlayerController_Parms), Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics
	{
		struct ELSSPlayerController_eventIsClientFlowState_Parms
		{
			ESSClientFlowState inClientState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inClientState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inClientState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_inClientState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_inClientState = { "inClientState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventIsClientFlowState_Parms, inClientState), Z_Construct_UEnum_ABP_200508_ESSClientFlowState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsClientFlowState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsClientFlowState_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_inClientState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_inClientState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsClientFlowState", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsClientFlowState_Parms), Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics
	{
		struct ELSSPlayerController_eventIsDoneResultAPI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsDoneResultAPI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsDoneResultAPI_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsDoneResultAPI", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsDoneResultAPI_Parms), Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics
	{
		struct ELSSPlayerController_eventIsDoneSyncResult_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsDoneSyncResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsDoneSyncResult_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsDoneSyncResult", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsDoneSyncResult_Parms), Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics
	{
		struct ELSSPlayerController_eventIsEnabledInputByThisController_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsEnabledInputByThisController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsEnabledInputByThisController_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsEnabledInputByThisController", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsEnabledInputByThisController_Parms), Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics
	{
		struct ELSSPlayerController_eventIsOpenErrorDialog_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsOpenErrorDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsOpenErrorDialog_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsOpenErrorDialog", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsOpenErrorDialog_Parms), Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics
	{
		struct ELSSPlayerController_eventIsRegisteredEndGameReasonOnServer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsRegisteredEndGameReasonOnServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsRegisteredEndGameReasonOnServer_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsRegisteredEndGameReasonOnServer", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsRegisteredEndGameReasonOnServer_Parms), Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics
	{
		struct ELSSPlayerController_eventIsViewTargetGameplayCamera_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventIsViewTargetGameplayCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventIsViewTargetGameplayCamera_Parms), &Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "IsViewTargetGameplayCamera", nullptr, nullptr, sizeof(ELSSPlayerController_eventIsViewTargetGameplayCamera_Parms), Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inEndReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inEndReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::NewProp_inEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::NewProp_inEndReason = { "inEndReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventK2_RequestEndGameFlow_Parms, inEndReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::NewProp_inEndReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::NewProp_inEndReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "K2_RequestEndGameFlow", nullptr, nullptr, sizeof(ELSSPlayerController_eventK2_RequestEndGameFlow_Parms), Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "K2_RequestLeaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "K2_ResultMenuPrepare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "K2_UIPrepare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "LeaveGameByAntiCheat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics
	{
		struct ELSSPlayerController_eventNeedsShowInteractableObjectStatus_Parms
		{
			AActor* InActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventNeedsShowInteractableObjectStatus_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventNeedsShowInteractableObjectStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventNeedsShowInteractableObjectStatus_Parms), &Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "NeedsShowInteractableObjectStatus", nullptr, nullptr, sizeof(ELSSPlayerController_eventNeedsShowInteractableObjectStatus_Parms), Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics
	{
		struct ELSSPlayerController_eventNeedsShowOnlineID_Parms
		{
			AELSSPlayer* inPlayer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventNeedsShowOnlineID_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventNeedsShowOnlineID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventNeedsShowOnlineID_Parms), &Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "NeedsShowOnlineID", nullptr, nullptr, sizeof(ELSSPlayerController_eventNeedsShowOnlineID_Parms), Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics
	{
		struct ELSSPlayerController_eventNeedsShowPlayerStatus_Parms
		{
			AELSSPlayer* inPlayer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventNeedsShowPlayerStatus_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventNeedsShowPlayerStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventNeedsShowPlayerStatus_Parms), &Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "NeedsShowPlayerStatus", nullptr, nullptr, sizeof(ELSSPlayerController_eventNeedsShowPlayerStatus_Parms), Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics
	{
		struct ELSSPlayerController_eventNeedsTransitionToWatchGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventNeedsTransitionToWatchGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventNeedsTransitionToWatchGame_Parms), &Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "NeedsTransitionToWatchGame", nullptr, nullptr, sizeof(ELSSPlayerController_eventNeedsTransitionToWatchGame_Parms), Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inViolationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::NewProp_inViolationType = { "inViolationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventNotifyDetectedCheat_ClientToServer_Parms, inViolationType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::NewProp_inViolationType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "NotifyDetectedCheat_ClientToServer", nullptr, nullptr, sizeof(ELSSPlayerController_eventNotifyDetectedCheat_ClientToServer_Parms), Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inEndGameReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inEndGameReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::NewProp_inEndGameReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::NewProp_inEndGameReason = { "inEndGameReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventNotifyEndGameFromClient_Server_Parms, inEndGameReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::NewProp_inEndGameReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::NewProp_inEndGameReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "NotifyEndGameFromClient_Server", nullptr, nullptr, sizeof(ELSSPlayerController_eventNotifyEndGameFromClient_Server_Parms), Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics
	{
		struct ELSSPlayerController_eventOnAntiCheatClientViolated_Parms
		{
			EEOSAntiCheatClientViolationType ViolationType;
			FString StatusMessage;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViolationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ViolationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_ViolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_ViolationType = { "ViolationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnAntiCheatClientViolated_Parms, ViolationType), Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_StatusMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnAntiCheatClientViolated_Parms, StatusMessage), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_StatusMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_StatusMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_ViolationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_ViolationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::NewProp_StatusMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnAntiCheatClientViolated", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnAntiCheatClientViolated_Parms), Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inClientState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inClientState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSyncId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::NewProp_inClientState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::NewProp_inClientState = { "inClientState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnChangeClientFlowState_Server_Parms, inClientState), Z_Construct_UEnum_ABP_200508_ESSClientFlowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::NewProp_inSyncId = { "inSyncId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnChangeClientFlowState_Server_Parms, inSyncId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::NewProp_inClientState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::NewProp_inClientState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::NewProp_inSyncId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnChangeClientFlowState_Server", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnChangeClientFlowState_Server_Parms), Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inGameFlowState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inGameFlowState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::NewProp_inGameFlowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::NewProp_inGameFlowState = { "inGameFlowState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnChangeGameFlowState_Parms, inGameFlowState), Z_Construct_UEnum_ABP_200508_ESSGameFlowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::NewProp_inGameFlowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::NewProp_inGameFlowState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnChangeGameFlowState", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnChangeGameFlowState_Parms), Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics
	{
		static void NewProp_isKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isKeyboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::NewProp_isKeyboard_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnChangeInputMode_Parms*)Obj)->isKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::NewProp_isKeyboard = { "isKeyboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnChangeInputMode_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::NewProp_isKeyboard_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::NewProp_isKeyboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnChangeInputMode", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnChangeInputMode_Parms), Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inNewTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPrevTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::NewProp_inNewTarget = { "inNewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnChangeTarget_Parms, inNewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::NewProp_inPrevTarget = { "inPrevTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnChangeTarget_Parms, inPrevTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::NewProp_inNewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::NewProp_inPrevTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnChangeTarget", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnChangeTarget_Parms), Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnDisconnectDialogShow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics
	{
		struct ELSSPlayerController_eventOnOtherPlayerHpUpdate_Parms
		{
			AELSSPlayer* inPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnOtherPlayerHpUpdate_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::NewProp_inPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnOtherPlayerHpUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnOtherPlayerHpUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnOtherPlayerHpUpdateSpecifiedType_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnOtherPlayerHpUpdateSpecifiedType_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSCharacterHpType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_inHp = { "inHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnOtherPlayerHpUpdateSpecifiedType_Parms, inHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnOtherPlayerHpUpdateSpecifiedType_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_inHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::NewProp_inMaxHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnOtherPlayerHpUpdateSpecifiedType", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnOtherPlayerHpUpdateSpecifiedType_Parms), Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAttentionBoost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::NewProp_inAttentionBoost = { "inAttentionBoost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionBoostUpdate_Parms, inAttentionBoost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::NewProp_inAttentionBoost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerAttentionBoostUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerAttentionBoostUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionIcon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inNextFeverTimePoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::NewProp_inAttentionLevel = { "inAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionLevelUpdate_Parms, inAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::NewProp_inAttentionIcon = { "inAttentionIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionLevelUpdate_Parms, inAttentionIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::NewProp_inNextFeverTimePoint = { "inNextFeverTimePoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionLevelUpdate_Parms, inNextFeverTimePoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::NewProp_inAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::NewProp_inAttentionIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::NewProp_inNextFeverTimePoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerAttentionLevelUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerAttentionLevelUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inGaugeState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inGaugeState;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAttentionPoint;
		static void NewProp_inAfterFever_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inAfterFever;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAddPoint;
		static void NewProp_inImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inGaugeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inGaugeState = { "inGaugeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms, inGaugeState), Z_Construct_UEnum_ABP_200508_ESSAttentionGaugeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAfterFever_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms*)Obj)->inAfterFever = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAfterFever = { "inAfterFever", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAfterFever_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAddPoint = { "inAddPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms, inAddPoint), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inImmediate_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms*)Obj)->inImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inImmediate = { "inImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inGaugeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inGaugeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAfterFever,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inAddPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::NewProp_inImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerAttentionUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics
	{
		static void NewProp_inAimMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inAimMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::NewProp_inAimMode_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerChangeAimMode_Parms*)Obj)->inAimMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::NewProp_inAimMode = { "inAimMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerChangeAimMode_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::NewProp_inAimMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::NewProp_inAimMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeAimMode", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeAimMode_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inAliveStateType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inAliveStateType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::NewProp_inAliveStateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::NewProp_inAliveStateType = { "inAliveStateType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeAliveStateType_Parms, inAliveStateType), Z_Construct_UEnum_ABP_200508_ESSAliveStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::NewProp_inAliveStateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::NewProp_inAliveStateType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeAliveStateType", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeAliveStateType_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDurability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxDurability;
		static void NewProp_inImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_inDurability = { "inDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeCurrentShieldDurability_Parms, inDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_InMaxDurability = { "InMaxDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeCurrentShieldDurability_Parms, InMaxDurability), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_inImmediate_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerChangeCurrentShieldDurability_Parms*)Obj)->inImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_inImmediate = { "inImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerChangeCurrentShieldDurability_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_inImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_inDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_InMaxDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::NewProp_inImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeCurrentShieldDurability", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeCurrentShieldDurability_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVehicleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVehicleType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDurability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxDurability;
		static void NewProp_inImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_InVehicleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_InVehicleType = { "InVehicleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms, InVehicleType), Z_Construct_UEnum_ABP_200508_ESSVehicleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_inDurability = { "inDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms, inDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_InMaxDurability = { "InMaxDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms, InMaxDurability), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_inImmediate_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms*)Obj)->inImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_inImmediate = { "inImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_inImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_InVehicleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_InVehicleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_inDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_InMaxDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::NewProp_inImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeCurrentVehicleDurability", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inNewTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inInteractExec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inInteractExec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::NewProp_inNewTarget = { "inNewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeFinisherTarget_Parms, inNewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::NewProp_inInteractExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::NewProp_inInteractExec = { "inInteractExec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeFinisherTarget_Parms, inInteractExec), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::NewProp_inNewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::NewProp_inInteractExec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::NewProp_inInteractExec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeFinisherTarget", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeFinisherTarget_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inInteractExecute_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inInteractExecute;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inNewInteractTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inNewId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inNewValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentExecute_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentExecute;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inCurrentId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inCurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inInteractExecute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inInteractExecute = { "inInteractExecute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, inInteractExecute), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inNewInteractTarget = { "inNewInteractTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, inNewInteractTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, InOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InOffset_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inNewId = { "inNewId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, inNewId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inNewValue = { "inNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, inNewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_currentExecute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_currentExecute = { "currentExecute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, currentExecute), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inCurrentId = { "inCurrentId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, inCurrentId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inCurrentValue = { "inCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms, inCurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inInteractExecute_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inInteractExecute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inNewInteractTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_InOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inNewId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inNewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_currentExecute_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_currentExecute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inCurrentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::NewProp_inCurrentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeInteractTarget", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::NewProp_inInventory_Inner = { "inInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPickupBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::NewProp_inInventory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::NewProp_inInventory = { "inInventory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInventory_Parms, inInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::NewProp_inInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::NewProp_inInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::NewProp_inInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::NewProp_inInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeInventory", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeInventory_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInventoryIconValue_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInventoryIconValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeInventoryIconValue", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeInventoryIconValue_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics
	{
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerChangeInventoryLimit_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerChangeInventoryLimit_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeInventoryLimit", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeInventoryLimit_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeInventoryPosition_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeInventoryPosition", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeInventoryPosition_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inLevelUpInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inLevelUpInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::NewProp_inLevelUpInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::NewProp_inLevelUpInfo = { "inLevelUpInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeMoveSet_Parms, inLevelUpInfo), Z_Construct_UScriptStruct_FSSHeatLevelUpInfo, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::NewProp_inLevelUpInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::NewProp_inLevelUpInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::NewProp_inLevelUpInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeMoveSet", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeMoveSet_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeOperationGuide_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeOperationGuide", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeOperationGuide_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics
	{
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerChangePossessOfCarrot_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerChangePossessOfCarrot_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangePossessOfCarrot", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangePossessOfCarrot_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::NewProp_inTimer = { "inTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerChangeReviveTimer_Parms, inTimer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::NewProp_inTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerChangeReviveTimer", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerChangeReviveTimer_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inDeadPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inKillerPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inLogIcon_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inLogIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inDeadPlayer = { "inDeadPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerDead_Parms, inDeadPlayer), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inKillerPlayer = { "inKillerPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerDead_Parms, inKillerPlayer), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inLogIcon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inLogIcon = { "inLogIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerDead_Parms, inLogIcon), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inDeadPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inKillerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inLogIcon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::NewProp_inLogIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerDead", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerDead_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static void NewProp_InFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVehicleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVehicleType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDurability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InFlag_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms*)Obj)->InFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InFlag = { "InFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InVehicleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InVehicleType = { "InVehicleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms, InVehicleType), Z_Construct_UEnum_ABP_200508_ESSVehicleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_inDurability = { "inDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms, inDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InMaxDurability = { "InMaxDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms, InMaxDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_inPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InVehicleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InVehicleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_inDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::NewProp_InMaxDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerGetOnVehicle", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerHeatLevelUp_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::NewProp_inHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerHeatLevelUp", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerHeatLevelUp_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inExpRate;
		static void NewProp_inImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerHeatMeterUpdate_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inExpRate = { "inExpRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerHeatMeterUpdate_Parms, inExpRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inImmediate_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerHeatMeterUpdate_Parms*)Obj)->inImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inImmediate = { "inImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerHeatMeterUpdate_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inExpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::NewProp_inImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerHeatMeterUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerHeatMeterUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static void NewProp_inImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inHp = { "inHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerHpUpdate_Parms, inHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerHpUpdate_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inImmediate_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerHpUpdate_Parms*)Obj)->inImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inImmediate = { "inImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerHpUpdate_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inMaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::NewProp_inImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerHpUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerHpUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractTarget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::NewProp_inInteractTarget = { "inInteractTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerInteractGaugeUpdate_Parms, inInteractTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::NewProp_inRate = { "inRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerInteractGaugeUpdate_Parms, inRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::NewProp_inInteractTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::NewProp_inRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerInteractGaugeUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerInteractGaugeUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inKoPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inKillerPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inLogIcon_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inLogIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inKoPlayer = { "inKoPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerKo_Parms, inKoPlayer), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inKillerPlayer = { "inKillerPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerKo_Parms, inKillerPlayer), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inLogIcon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inLogIcon = { "inLogIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerKo_Parms, inLogIcon), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inKoPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inKillerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inLogIcon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::NewProp_inLogIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerKo", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerKo_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inKoHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inKoMaxHp;
		static void NewProp_inImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inKoHp = { "inKoHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerKoHpUpdate_Parms, inKoHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inKoMaxHp = { "inKoMaxHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerKoHpUpdate_Parms, inKoMaxHp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inImmediate_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOnPlayerKoHpUpdate_Parms*)Obj)->inImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inImmediate = { "inImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOnPlayerKoHpUpdate_Parms), &Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inKoHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inKoMaxHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::NewProp_inImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerKoHpUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerKoHpUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatSkillId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerLearnHeatSkill_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerLearnHeatSkill_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::NewProp_inHeatSkillId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerLearnHeatSkill", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerLearnHeatSkill_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inWatchedPlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::NewProp_inWatchedPlayerNum = { "inWatchedPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventOnPlayerWatchedPlayerUpdate_Parms, inWatchedPlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::NewProp_inWatchedPlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPlayerWatchedPlayerUpdate", nullptr, nullptr, sizeof(ELSSPlayerController_eventOnPlayerWatchedPlayerUpdate_Parms), Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnPrepareVictoryCutscene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OnReservedReturnToMainMenuByNetworkError", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics
	{
		struct ELSSPlayerController_eventOpenPauseMenu_Parms
		{
			bool disallowedCharacterControllWhenOpen;
			bool ReturnValue;
		};
		static void NewProp_disallowedCharacterControllWhenOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_disallowedCharacterControllWhenOpen;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_disallowedCharacterControllWhenOpen_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOpenPauseMenu_Parms*)Obj)->disallowedCharacterControllWhenOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_disallowedCharacterControllWhenOpen = { "disallowedCharacterControllWhenOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOpenPauseMenu_Parms), &Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_disallowedCharacterControllWhenOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOpenPauseMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOpenPauseMenu_Parms), &Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_disallowedCharacterControllWhenOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OpenPauseMenu", nullptr, nullptr, sizeof(ELSSPlayerController_eventOpenPauseMenu_Parms), Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics
	{
		static void NewProp_disallowedCharacterControllWhenOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_disallowedCharacterControllWhenOpen;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_disallowedCharacterControllWhenOpen_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOpenPauseMenu_Impl_Parms*)Obj)->disallowedCharacterControllWhenOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_disallowedCharacterControllWhenOpen = { "disallowedCharacterControllWhenOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOpenPauseMenu_Impl_Parms), &Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_disallowedCharacterControllWhenOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventOpenPauseMenu_Impl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventOpenPauseMenu_Impl_Parms), &Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_disallowedCharacterControllWhenOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "OpenPauseMenu_Impl", nullptr, nullptr, sizeof(ELSSPlayerController_eventOpenPauseMenu_Impl_Parms), Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics
	{
		struct ELSSPlayerController_eventPlayCameraShake_Parms
		{
			ESSCameraShakeType InType;
			float inScale;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventPlayCameraShake_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSCameraShakeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::NewProp_inScale = { "inScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventPlayCameraShake_Parms, inScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::NewProp_inScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "PlayCameraShake", nullptr, nullptr, sizeof(ELSSPlayerController_eventPlayCameraShake_Parms), Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics
	{
		struct ELSSPlayerController_eventPrintLog_Parms
		{
			FString Log;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Log;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::NewProp_Log_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::NewProp_Log = { "Log", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventPrintLog_Parms, Log), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::NewProp_Log_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::NewProp_Log_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::NewProp_Log,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "PrintLog", nullptr, nullptr, sizeof(ELSSPlayerController_eventPrintLog_Parms), Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics
	{
		struct ELSSPlayerController_eventRefreshNearPlayerStatus_Parms
		{
			AELSSPlayer* inPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::NewProp_inPlayer = { "inPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventRefreshNearPlayerStatus_Parms, inPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::NewProp_inPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "RefreshNearPlayerStatus", nullptr, nullptr, sizeof(ELSSPlayerController_eventRefreshNearPlayerStatus_Parms), Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics
	{
		struct ELSSPlayerController_eventRegisterEndGameReason_Parms
		{
			ESSEndGameReason inEndReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inEndReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inEndReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::NewProp_inEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::NewProp_inEndReason = { "inEndReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventRegisterEndGameReason_Parms, inEndReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::NewProp_inEndReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::NewProp_inEndReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "RegisterEndGameReason", nullptr, nullptr, sizeof(ELSSPlayerController_eventRegisterEndGameReason_Parms), Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "RequestClientFlowGamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inEndReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inEndReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::NewProp_inEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::NewProp_inEndReason = { "inEndReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventRequestEndGameFlow_Client_Parms, inEndReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::NewProp_inEndReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::NewProp_inEndReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "RequestEndGameFlow_Client", nullptr, nullptr, sizeof(ELSSPlayerController_eventRequestEndGameFlow_Client_Parms), Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "RequestLeaveGame_Client", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ResultMenuPrepare_RPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics
	{
		struct ELSSPlayerController_eventSetAllowCharacterControll_Parms
		{
			bool isAllow;
		};
		static void NewProp_isAllow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAllow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::NewProp_isAllow_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetAllowCharacterControll_Parms*)Obj)->isAllow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::NewProp_isAllow = { "isAllow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetAllowCharacterControll_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::NewProp_isAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::NewProp_isAllow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetAllowCharacterControll", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetAllowCharacterControll_Parms), Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics
	{
		struct ELSSPlayerController_eventSetAnyInputButtonCheck_Parms
		{
			bool IsEnable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnable_MetaData[];
#endif
		static void NewProp_IsEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::NewProp_IsEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::NewProp_IsEnable_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetAnyInputButtonCheck_Parms*)Obj)->IsEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::NewProp_IsEnable = { "IsEnable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetAnyInputButtonCheck_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::NewProp_IsEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::NewProp_IsEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::NewProp_IsEnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::NewProp_IsEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetAnyInputButtonCheck", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetAnyInputButtonCheck_Parms), Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics
	{
		struct ELSSPlayerController_eventSetDefaultViewTarget_Parms
		{
			float InBlendTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::NewProp_InBlendTime = { "InBlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetDefaultViewTarget_Parms, InBlendTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::NewProp_InBlendTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetDefaultViewTarget", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetDefaultViewTarget_Parms), Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics
	{
		struct ELSSPlayerController_eventSetGameplayCameraTarget_Parms
		{
			APawn* InPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetGameplayCameraTarget_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetGameplayCameraTarget", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetGameplayCameraTarget_Parms), Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetGameStateDebugFlag_Server_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetGameStateDebugFlag_Server_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetGameStateDebugFlag_Server_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetGameStateDebugFlag_Server", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetGameStateDebugFlag_Server_Parms), Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics
	{
		struct ELSSPlayerController_eventSetMinimapMode_Parms
		{
			bool inIsWholeMap;
		};
		static void NewProp_inIsWholeMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsWholeMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::NewProp_inIsWholeMap_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetMinimapMode_Parms*)Obj)->inIsWholeMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::NewProp_inIsWholeMap = { "inIsWholeMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetMinimapMode_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::NewProp_inIsWholeMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::NewProp_inIsWholeMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetMinimapMode", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetMinimapMode_Parms), Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMinimapID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::NewProp_InMinimapID = { "InMinimapID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetMinimapTexture_Parms, InMinimapID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::NewProp_InMinimapID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetMinimapTexture", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetMinimapTexture_Parms), Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics
	{
		struct ELSSPlayerController_eventSetMouseControlMode_Parms
		{
			ESSMouseControlMode inMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::NewProp_inMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::NewProp_inMode = { "inMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetMouseControlMode_Parms, inMode), Z_Construct_UEnum_ABP_200508_ESSMouseControlMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::NewProp_inMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::NewProp_inMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetMouseControlMode", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetMouseControlMode_Parms), Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics
	{
		struct ELSSPlayerController_eventSetOperationalWidhgetManager_Parms
		{
			AELMenuOperationalWidgetManagerBase* InOperationalWidgetManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOperationalWidgetManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::NewProp_InOperationalWidgetManager = { "InOperationalWidgetManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetOperationalWidhgetManager_Parms, InOperationalWidgetManager), Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::NewProp_InOperationalWidgetManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetOperationalWidhgetManager", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetOperationalWidhgetManager_Parms), Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetPlayerDataToSync", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetPlayerDebugFlag_Server_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSPlayerDebugFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetPlayerDebugFlag_Server_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetPlayerDebugFlag_Server_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetPlayerDebugFlag_Server", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetPlayerDebugFlag_Server_Parms), Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics
	{
		struct ELSSPlayerController_eventSetRestrictMoveOnly_Parms
		{
			bool isAllow;
		};
		static void NewProp_isAllow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAllow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::NewProp_isAllow_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetRestrictMoveOnly_Parms*)Obj)->isAllow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::NewProp_isAllow = { "isAllow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetRestrictMoveOnly_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::NewProp_isAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::NewProp_isAllow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetRestrictMoveOnly", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetRestrictMoveOnly_Parms), Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetRStickInputZero", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetVisibleInteractDotIcon_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetVisibleInteractDotIcon_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetVisibleInteractDotIcon_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetVisibleInteractDotIcon", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetVisibleInteractDotIcon_Parms), Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetPlayer;
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static void NewProp_InHasCarrot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InHasCarrot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_inTargetPlayer = { "inTargetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms, inTargetPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InHasCarrot_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms*)Obj)->InHasCarrot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InHasCarrot = { "InHasCarrot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms), &Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InHasCarrot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_inTargetPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::NewProp_InHasCarrot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetVisibleOtherPlayerOnlineID", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms), Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics
	{
		struct ELSSPlayerController_eventSetWatchTargetPlayerState_Parms
		{
			AELSSPlayerState* inPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::NewProp_inPlayerState = { "inPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSetWatchTargetPlayerState_Parms, inPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::NewProp_inPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SetWatchTargetPlayerState", nullptr, nullptr, sizeof(ELSSPlayerController_eventSetWatchTargetPlayerState_Parms), Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms, Type), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms, Platform), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ipAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms, ipAddress), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ipAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ipAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::NewProp_ProductUserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SSAntiCheatClient_ConnectServer", nullptr, nullptr, sizeof(ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms), Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SSAntiCheatClient_DisconnectServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "StartResultTally_RPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics
	{
		static void NewProp_inIsWholeMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsWholeMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::NewProp_inIsWholeMap_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventSwitchMinimapMode_Parms*)Obj)->inIsWholeMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::NewProp_inIsWholeMap = { "inIsWholeMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventSwitchMinimapMode_Parms), &Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::NewProp_inIsWholeMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::NewProp_inIsWholeMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SwitchMinimapMode", nullptr, nullptr, sizeof(ELSSPlayerController_eventSwitchMinimapMode_Parms), Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inWatchPlayerIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSyncId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::NewProp_inWatchPlayerIndex = { "inWatchPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSyncWatchTargetPlayer_Server_Parms, inWatchPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::NewProp_inSyncId = { "inSyncId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventSyncWatchTargetPlayer_Server_Parms, inSyncId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::NewProp_inWatchPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::NewProp_inSyncId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "SyncWatchTargetPlayer_Server", nullptr, nullptr, sizeof(ELSSPlayerController_eventSyncWatchTargetPlayer_Server_Parms), Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_BeforeGamePlay_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_BeforeGamePlay", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_BeforeGamePlay_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_Closing_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_Closing", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_Closing_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_Exit_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_Exit", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_Exit_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_Finish_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_Finish", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_Finish_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_GamePlay_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_GamePlay", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_GamePlay_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_Result_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_Result", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_Result_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_VictoryRoyale_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_VictoryRoyale", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_VictoryRoyale_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_WatchGame_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_WatchGame", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_WatchGame_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics
	{
		struct ELSSPlayerController_eventTickClientFlowState_WatchGame_Native_Parms
		{
			float inDeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_WatchGame_Native_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_WatchGame_Native", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_WatchGame_Native_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventTickClientFlowState_WatchVictoryRoyale_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "TickClientFlowState_WatchVictoryRoyale", nullptr, nullptr, sizeof(ELSSPlayerController_eventTickClientFlowState_WatchVictoryRoyale_Parms), Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ToggleHUDVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "ToggleMinimapMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "UIPrepare_RPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "UpdateNearInteractableObjectList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "UpdateNearPlayerList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics
	{
		struct ELSSPlayerController_eventUpdateViewTarget_Parms
		{
			float InDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventUpdateViewTarget_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "UpdateViewTarget", nullptr, nullptr, sizeof(ELSSPlayerController_eventUpdateViewTarget_Parms), Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventWatchGame_ApplyHoldRatio_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_ApplyHoldRatio", nullptr, nullptr, sizeof(ELSSPlayerController_eventWatchGame_ApplyHoldRatio_Parms), Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_CancelHold", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inNewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::NewProp_inNewTarget = { "inNewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerController_eventWatchGame_OnChangePlayer_Parms, inNewTarget), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::NewProp_inNewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_OnChangePlayer", nullptr, nullptr, sizeof(ELSSPlayerController_eventWatchGame_OnChangePlayer_Parms), Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_OnPressMenuDecision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_OnPressMenuLB", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_OnPressMenuRB", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_OnReleaseMenuDecision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics
	{
		static void NewProp_isNext_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::NewProp_isNext_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventWatchGame_OnRequestChangePlayer_Parms*)Obj)->isNext = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::NewProp_isNext = { "isNext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventWatchGame_OnRequestChangePlayer_Parms), &Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::NewProp_isNext_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::NewProp_isNext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_OnRequestChangePlayer", nullptr, nullptr, sizeof(ELSSPlayerController_eventWatchGame_OnRequestChangePlayer_Parms), Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics
	{
		static void NewProp_toVictoryRoyale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toVictoryRoyale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::NewProp_toVictoryRoyale_SetBit(void* Obj)
	{
		((ELSSPlayerController_eventWatchGame_RequestNext_Parms*)Obj)->toVictoryRoyale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::NewProp_toVictoryRoyale = { "toVictoryRoyale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerController_eventWatchGame_RequestNext_Parms), &Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::NewProp_toVictoryRoyale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::NewProp_toVictoryRoyale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_RequestNext", nullptr, nullptr, sizeof(ELSSPlayerController_eventWatchGame_RequestNext_Parms), Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerController, nullptr, "WatchGame_ResetUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSPlayerController_NoRegister()
	{
		return AELSSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AELSSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPress_MenuLB_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPress_MenuLB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPress_MenuRB_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPress_MenuRB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPress_MenuDecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPress_MenuDecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnRelease_MenuDecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnRelease_MenuDecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPress_MenuRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPress_MenuRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPress_MenuLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPress_MenuLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPress_MenuAccept_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPress_MenuAccept;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPress_MenuCancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPress_MenuCancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnRelease_MenuCancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnRelease_MenuCancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAllowCharacterControll_MetaData[];
#endif
		static void NewProp_IsAllowCharacterControll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAllowCharacterControll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRestrictMoveOnly_MetaData[];
#endif
		static void NewProp_IsRestrictMoveOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRestrictMoveOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNetworkError_MetaData[];
#endif
		static void NewProp_IsNetworkError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNetworkError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsApiDisabled_MetaData[];
#endif
		static void NewProp_IsApiDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsApiDisabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MouseControlMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseControlMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MouseControlMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredMousePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredMousePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCameraType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayCameraType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StationalCameraType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StationalCameraType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StationalCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StationalCamera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrevState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrevState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndGameReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGameReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndGameReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuOperationalWidgetManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuOperationalWidgetManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchTargetPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WatchTargetPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchGameIgnoreDecisionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WatchGameIgnoreDecisionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictoryCutscene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictoryCutscene;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NearPlayerStatusList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearPlayerStatusList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NearPlayerStatusList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowNearPlayerStatusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShowNearPlayerStatusDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NearInteractableObjectStatusList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearInteractableObjectStatusList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NearInteractableObjectStatusList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableObjectDotIconDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractableObjectDotIconDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_KilledPlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor_KilledPlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_Common_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor_Common;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_UnCommon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor_UnCommon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_Rare_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor_Rare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_Epic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor_Epic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_Legend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor_Legend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnableOpenPauseMenu_MetaData[];
#endif
		static void NewProp_IsEnableOpenPauseMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnableOpenPauseMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinedPlayerSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JoinedPlayerSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinedPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JoinedPlayerId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempLocalPlayerControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempLocalPlayerControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempLocalPlayerControllers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildPlayerControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildPlayerControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildPlayerControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputOnly_MetaData[];
#endif
		static void NewProp_InputOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssAntiCheatData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ssAntiCheatData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSPlayerController_AddInstantMessage, "AddInstantMessage" }, // 1581776169
		{ &Z_Construct_UFunction_AELSSPlayerController_AddInstantMessageByList, "AddInstantMessageByList" }, // 3758327122
		{ &Z_Construct_UFunction_AELSSPlayerController_BeginViewControlledPawn, "BeginViewControlledPawn" }, // 2848689412
		{ &Z_Construct_UFunction_AELSSPlayerController_ChangeClientFlowState, "ChangeClientFlowState" }, // 3802460229
		{ &Z_Construct_UFunction_AELSSPlayerController_CheckAllowCharacterControll, "CheckAllowCharacterControll" }, // 472706817
		{ &Z_Construct_UFunction_AELSSPlayerController_CheckCompletePlayerSetup, "CheckCompletePlayerSetup" }, // 2830799474
		{ &Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCamera, "CheckInSightFromCamera" }, // 2679427512
		{ &Z_Construct_UFunction_AELSSPlayerController_CheckInSightFromCameraForInteract, "CheckInSightFromCameraForInteract" }, // 1241175230
		{ &Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu, "ClosePauseMenu" }, // 1240547339
		{ &Z_Construct_UFunction_AELSSPlayerController_ClosePauseMenu_Impl, "ClosePauseMenu_Impl" }, // 1351027300
		{ &Z_Construct_UFunction_AELSSPlayerController_ConvertLeftStickToMoveInput, "ConvertLeftStickToMoveInput" }, // 3298106317
		{ &Z_Construct_UFunction_AELSSPlayerController_DeactiveStationalCamera, "DeactiveStationalCamera" }, // 1982846579
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAddAttentionPoint, "DebugAddAttentionPoint" }, // 1256131525
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoKill, "DebugAIPlayerAutoKill" }, // 3711513057
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoMove, "DebugAIPlayerAutoMove" }, // 1539369849
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerAutoRequestTransit, "DebugAIPlayerAutoRequestTransit" }, // 3145949418
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerDisableAll, "DebugAIPlayerDisableAll" }, // 1656384112
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerNoDamage, "DebugAIPlayerNoDamage" }, // 3829908117
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawn, "DebugAIPlayerSpawn" }, // 4213532879
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPreset, "DebugAIPlayerSpawnPreset" }, // 1336079504
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugAIPlayerSpawnPresetByName, "DebugAIPlayerSpawnPresetByName" }, // 3302522250
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugDestroyAllPickupObjects, "DebugDestroyAllPickupObjects" }, // 2874446020
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugDuplicateSSPlayer, "DebugDuplicateSSPlayer" }, // 3235425473
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugForciblyEndMatch, "DebugForciblyEndMatch" }, // 409392358
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugLobbySkip, "DebugLobbySkip" }, // 2907530077
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugNetworkProfilerOnServer, "DebugNetworkProfilerOnServer" }, // 539530839
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugNoResponseMode, "DebugNoResponseMode" }, // 123515617
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugNotifyChangePlayer_Client, "DebugNotifyChangePlayer_Client" }, // 1472163293
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugResetAttention, "DebugResetAttention" }, // 2304341775
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugRoundSpeed, "DebugRoundSpeed" }, // 1491245322
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugServerCrashRequest, "DebugServerCrashRequest" }, // 3529710138
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugServerMemReport, "DebugServerMemReport" }, // 614340496
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSetAttentionPoint, "DebugSetAttentionPoint" }, // 4060059338
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSetHeatLevel, "DebugSetHeatLevel" }, // 1159074718
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSetPlayerEquipSettings, "DebugSetPlayerEquipSettings" }, // 3546593852
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSpawnAndEquipWeapon, "DebugSpawnAndEquipWeapon" }, // 901045348
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItem, "DebugSpawnItem" }, // 1642127528
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSpawnItemBox, "DebugSpawnItemBox" }, // 1398203440
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSpawnShield, "DebugSpawnShield" }, // 4077142869
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSpawnVehicle, "DebugSpawnVehicle" }, // 1971650415
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugSpawnWeapon, "DebugSpawnWeapon" }, // 3222693885
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleFullDurability, "DebugVehicleFullDurability" }, // 3408433734
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleInvincible, "DebugVehicleInvincible" }, // 3890115855
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleResetRotation, "DebugVehicleResetRotation" }, // 1469293113
		{ &Z_Construct_UFunction_AELSSPlayerController_DebugVehicleSetDurability, "DebugVehicleSetDurability" }, // 2337212395
		{ &Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuAccept, "Dialog_OnPressMenuAccept" }, // 503917567
		{ &Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuCancel, "Dialog_OnPressMenuCancel" }, // 470866589
		{ &Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuLeft, "Dialog_OnPressMenuLeft" }, // 115560030
		{ &Z_Construct_UFunction_AELSSPlayerController_Dialog_OnPressMenuRight, "Dialog_OnPressMenuRight" }, // 4172502943
		{ &Z_Construct_UFunction_AELSSPlayerController_EndViewControlledPawn, "EndViewControlledPawn" }, // 1510671271
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_BeforeGamePlay, "EnterClientFlowState_BeforeGamePlay" }, // 904313939
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Closing, "EnterClientFlowState_Closing" }, // 2096450783
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Dialog_Native, "EnterClientFlowState_Dialog_Native" }, // 525801870
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Exit, "EnterClientFlowState_Exit" }, // 125980356
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Finish, "EnterClientFlowState_Finish" }, // 3719156239
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_GamePlay, "EnterClientFlowState_GamePlay" }, // 242942214
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_Result, "EnterClientFlowState_Result" }, // 1769409261
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_VictoryRoyale, "EnterClientFlowState_VictoryRoyale" }, // 2167925375
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame, "EnterClientFlowState_WatchGame" }, // 4183289718
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchGame_Native, "EnterClientFlowState_WatchGame_Native" }, // 3601021930
		{ &Z_Construct_UFunction_AELSSPlayerController_EnterClientFlowState_WatchVictoryRoyale, "EnterClientFlowState_WatchVictoryRoyale" }, // 4124508763
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_BeforeGamePlay, "ExitClientFlowState_BeforeGamePlay" }, // 911191113
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Closing, "ExitClientFlowState_Closing" }, // 3492426338
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Dialog_Native, "ExitClientFlowState_Dialog_Native" }, // 207568291
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Exit, "ExitClientFlowState_Exit" }, // 1248156675
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Finish, "ExitClientFlowState_Finish" }, // 127334580
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_GamePlay, "ExitClientFlowState_GamePlay" }, // 2445903049
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_Result, "ExitClientFlowState_Result" }, // 2091641654
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_VictoryRoyale, "ExitClientFlowState_VictoryRoyale" }, // 1267762079
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame, "ExitClientFlowState_WatchGame" }, // 2555351054
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchGame_Native, "ExitClientFlowState_WatchGame_Native" }, // 3495739385
		{ &Z_Construct_UFunction_AELSSPlayerController_ExitClientFlowState_WatchVictoryRoyale, "ExitClientFlowState_WatchVictoryRoyale" }, // 4136122723
		{ &Z_Construct_UFunction_AELSSPlayerController_GetAssociatedSSPlayer, "GetAssociatedSSPlayer" }, // 3436505932
		{ &Z_Construct_UFunction_AELSSPlayerController_GetCameraLocation, "GetCameraLocation" }, // 3554369864
		{ &Z_Construct_UFunction_AELSSPlayerController_GetCameraRotation, "GetCameraRotation" }, // 600695490
		{ &Z_Construct_UFunction_AELSSPlayerController_GetEndGameReasonOnServer, "GetEndGameReasonOnServer" }, // 3548446139
		{ &Z_Construct_UFunction_AELSSPlayerController_GetGameplayCamera, "GetGameplayCamera" }, // 4100357418
		{ &Z_Construct_UFunction_AELSSPlayerController_GetGameplayCameraTarget, "GetGameplayCameraTarget" }, // 2347661445
		{ &Z_Construct_UFunction_AELSSPlayerController_GetLastLeftStickInput, "GetLastLeftStickInput" }, // 1469594450
		{ &Z_Construct_UFunction_AELSSPlayerController_GetLastMouseMoveInput, "GetLastMouseMoveInput" }, // 539542734
		{ &Z_Construct_UFunction_AELSSPlayerController_GetLastRightStickInput, "GetLastRightStickInput" }, // 1205094749
		{ &Z_Construct_UFunction_AELSSPlayerController_GetLeftStickInput, "GetLeftStickInput" }, // 4234416587
		{ &Z_Construct_UFunction_AELSSPlayerController_GetMouseMoveInput, "GetMouseMoveInput" }, // 1884892082
		{ &Z_Construct_UFunction_AELSSPlayerController_GetMoveInput, "GetMoveInput" }, // 2499352742
		{ &Z_Construct_UFunction_AELSSPlayerController_GetNearPlayerHpRatio, "GetNearPlayerHpRatio" }, // 227952191
		{ &Z_Construct_UFunction_AELSSPlayerController_GetParentSSPlayerController, "GetParentSSPlayerController" }, // 683920353
		{ &Z_Construct_UFunction_AELSSPlayerController_GetPauseMenuCommonLayout, "GetPauseMenuCommonLayout" }, // 27931975
		{ &Z_Construct_UFunction_AELSSPlayerController_GetRightStickInput, "GetRightStickInput" }, // 3998649323
		{ &Z_Construct_UFunction_AELSSPlayerController_GetStationalCamera, "GetStationalCamera" }, // 2008303593
		{ &Z_Construct_UFunction_AELSSPlayerController_GetUIManager, "GetUIManager" }, // 3592718041
		{ &Z_Construct_UFunction_AELSSPlayerController_GetWatchTargetPlayer, "GetWatchTargetPlayer" }, // 1325389427
		{ &Z_Construct_UFunction_AELSSPlayerController_IsChildPlayerController, "IsChildPlayerController" }, // 1643910766
		{ &Z_Construct_UFunction_AELSSPlayerController_IsClientFlowState, "IsClientFlowState" }, // 890027577
		{ &Z_Construct_UFunction_AELSSPlayerController_IsDoneResultAPI, "IsDoneResultAPI" }, // 158328767
		{ &Z_Construct_UFunction_AELSSPlayerController_IsDoneSyncResult, "IsDoneSyncResult" }, // 2899916688
		{ &Z_Construct_UFunction_AELSSPlayerController_IsEnabledInputByThisController, "IsEnabledInputByThisController" }, // 3425742248
		{ &Z_Construct_UFunction_AELSSPlayerController_IsOpenErrorDialog, "IsOpenErrorDialog" }, // 4207540797
		{ &Z_Construct_UFunction_AELSSPlayerController_IsRegisteredEndGameReasonOnServer, "IsRegisteredEndGameReasonOnServer" }, // 3198763001
		{ &Z_Construct_UFunction_AELSSPlayerController_IsViewTargetGameplayCamera, "IsViewTargetGameplayCamera" }, // 803683070
		{ &Z_Construct_UFunction_AELSSPlayerController_K2_RequestEndGameFlow, "K2_RequestEndGameFlow" }, // 3625154471
		{ &Z_Construct_UFunction_AELSSPlayerController_K2_RequestLeaveGame, "K2_RequestLeaveGame" }, // 249891828
		{ &Z_Construct_UFunction_AELSSPlayerController_K2_ResultMenuPrepare, "K2_ResultMenuPrepare" }, // 3583299868
		{ &Z_Construct_UFunction_AELSSPlayerController_K2_UIPrepare, "K2_UIPrepare" }, // 3481322310
		{ &Z_Construct_UFunction_AELSSPlayerController_LeaveGameByAntiCheat, "LeaveGameByAntiCheat" }, // 747645497
		{ &Z_Construct_UFunction_AELSSPlayerController_NeedsShowInteractableObjectStatus, "NeedsShowInteractableObjectStatus" }, // 325941488
		{ &Z_Construct_UFunction_AELSSPlayerController_NeedsShowOnlineID, "NeedsShowOnlineID" }, // 3108455410
		{ &Z_Construct_UFunction_AELSSPlayerController_NeedsShowPlayerStatus, "NeedsShowPlayerStatus" }, // 456691046
		{ &Z_Construct_UFunction_AELSSPlayerController_NeedsTransitionToWatchGame, "NeedsTransitionToWatchGame" }, // 2122251754
		{ &Z_Construct_UFunction_AELSSPlayerController_NotifyDetectedCheat_ClientToServer, "NotifyDetectedCheat_ClientToServer" }, // 2444636330
		{ &Z_Construct_UFunction_AELSSPlayerController_NotifyEndGameFromClient_Server, "NotifyEndGameFromClient_Server" }, // 2143970562
		{ &Z_Construct_UFunction_AELSSPlayerController_OnAntiCheatClientViolated, "OnAntiCheatClientViolated" }, // 3101350086
		{ &Z_Construct_UFunction_AELSSPlayerController_OnChangeClientFlowState_Server, "OnChangeClientFlowState_Server" }, // 3069172484
		{ &Z_Construct_UFunction_AELSSPlayerController_OnChangeGameFlowState, "OnChangeGameFlowState" }, // 480912185
		{ &Z_Construct_UFunction_AELSSPlayerController_OnChangeInputMode, "OnChangeInputMode" }, // 1272343289
		{ &Z_Construct_UFunction_AELSSPlayerController_OnChangeTarget, "OnChangeTarget" }, // 3152450194
		{ &Z_Construct_UFunction_AELSSPlayerController_OnDisconnectDialogShow, "OnDisconnectDialogShow" }, // 406153190
		{ &Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdate, "OnOtherPlayerHpUpdate" }, // 2675544206
		{ &Z_Construct_UFunction_AELSSPlayerController_OnOtherPlayerHpUpdateSpecifiedType, "OnOtherPlayerHpUpdateSpecifiedType" }, // 3773255532
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionBoostUpdate, "OnPlayerAttentionBoostUpdate" }, // 3759370033
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionLevelUpdate, "OnPlayerAttentionLevelUpdate" }, // 3023460396
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerAttentionUpdate, "OnPlayerAttentionUpdate" }, // 4189485167
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAimMode, "OnPlayerChangeAimMode" }, // 1837548323
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeAliveStateType, "OnPlayerChangeAliveStateType" }, // 1175516066
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentShieldDurability, "OnPlayerChangeCurrentShieldDurability" }, // 1079804501
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeCurrentVehicleDurability, "OnPlayerChangeCurrentVehicleDurability" }, // 2263011489
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeFinisherTarget, "OnPlayerChangeFinisherTarget" }, // 897988982
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInteractTarget, "OnPlayerChangeInteractTarget" }, // 4147967292
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventory, "OnPlayerChangeInventory" }, // 3070211028
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryIconValue, "OnPlayerChangeInventoryIconValue" }, // 3752122256
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryLimit, "OnPlayerChangeInventoryLimit" }, // 2571930742
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeInventoryPosition, "OnPlayerChangeInventoryPosition" }, // 841962717
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeMoveSet, "OnPlayerChangeMoveSet" }, // 271576411
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeOperationGuide, "OnPlayerChangeOperationGuide" }, // 567685687
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangePossessOfCarrot, "OnPlayerChangePossessOfCarrot" }, // 1256026718
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerChangeReviveTimer, "OnPlayerChangeReviveTimer" }, // 135223334
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerDead, "OnPlayerDead" }, // 2171793756
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerGetOnVehicle, "OnPlayerGetOnVehicle" }, // 838441582
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatLevelUp, "OnPlayerHeatLevelUp" }, // 591516984
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerHeatMeterUpdate, "OnPlayerHeatMeterUpdate" }, // 3499061958
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerHpUpdate, "OnPlayerHpUpdate" }, // 3534507089
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerInteractGaugeUpdate, "OnPlayerInteractGaugeUpdate" }, // 835634882
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerKo, "OnPlayerKo" }, // 1003709000
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerKoHpUpdate, "OnPlayerKoHpUpdate" }, // 1974922410
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerLearnHeatSkill, "OnPlayerLearnHeatSkill" }, // 4114780601
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPlayerWatchedPlayerUpdate, "OnPlayerWatchedPlayerUpdate" }, // 3211105820
		{ &Z_Construct_UFunction_AELSSPlayerController_OnPrepareVictoryCutscene, "OnPrepareVictoryCutscene" }, // 2480989786
		{ &Z_Construct_UFunction_AELSSPlayerController_OnReservedReturnToMainMenuByNetworkError, "OnReservedReturnToMainMenuByNetworkError" }, // 4139776808
		{ &Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu, "OpenPauseMenu" }, // 447886114
		{ &Z_Construct_UFunction_AELSSPlayerController_OpenPauseMenu_Impl, "OpenPauseMenu_Impl" }, // 2508961618
		{ &Z_Construct_UFunction_AELSSPlayerController_PlayCameraShake, "PlayCameraShake" }, // 3753621911
		{ &Z_Construct_UFunction_AELSSPlayerController_PrintLog, "PrintLog" }, // 1116794573
		{ &Z_Construct_UFunction_AELSSPlayerController_RefreshNearPlayerStatus, "RefreshNearPlayerStatus" }, // 3149753935
		{ &Z_Construct_UFunction_AELSSPlayerController_RegisterEndGameReason, "RegisterEndGameReason" }, // 3585734083
		{ &Z_Construct_UFunction_AELSSPlayerController_RequestClientFlowGamePlay, "RequestClientFlowGamePlay" }, // 2349102442
		{ &Z_Construct_UFunction_AELSSPlayerController_RequestEndGameFlow_Client, "RequestEndGameFlow_Client" }, // 2577158622
		{ &Z_Construct_UFunction_AELSSPlayerController_RequestLeaveGame_Client, "RequestLeaveGame_Client" }, // 1006366157
		{ &Z_Construct_UFunction_AELSSPlayerController_ResultMenuPrepare_RPC, "ResultMenuPrepare_RPC" }, // 3702622582
		{ &Z_Construct_UFunction_AELSSPlayerController_SetAllowCharacterControll, "SetAllowCharacterControll" }, // 3127275289
		{ &Z_Construct_UFunction_AELSSPlayerController_SetAnyInputButtonCheck, "SetAnyInputButtonCheck" }, // 3897426191
		{ &Z_Construct_UFunction_AELSSPlayerController_SetDefaultViewTarget, "SetDefaultViewTarget" }, // 4051558217
		{ &Z_Construct_UFunction_AELSSPlayerController_SetGameplayCameraTarget, "SetGameplayCameraTarget" }, // 1152439377
		{ &Z_Construct_UFunction_AELSSPlayerController_SetGameStateDebugFlag_Server, "SetGameStateDebugFlag_Server" }, // 3653544151
		{ &Z_Construct_UFunction_AELSSPlayerController_SetMinimapMode, "SetMinimapMode" }, // 134266714
		{ &Z_Construct_UFunction_AELSSPlayerController_SetMinimapTexture, "SetMinimapTexture" }, // 1677650946
		{ &Z_Construct_UFunction_AELSSPlayerController_SetMouseControlMode, "SetMouseControlMode" }, // 1658852295
		{ &Z_Construct_UFunction_AELSSPlayerController_SetOperationalWidhgetManager, "SetOperationalWidhgetManager" }, // 1845079058
		{ &Z_Construct_UFunction_AELSSPlayerController_SetPlayerDataToSync, "SetPlayerDataToSync" }, // 3409840096
		{ &Z_Construct_UFunction_AELSSPlayerController_SetPlayerDebugFlag_Server, "SetPlayerDebugFlag_Server" }, // 2957857338
		{ &Z_Construct_UFunction_AELSSPlayerController_SetRestrictMoveOnly, "SetRestrictMoveOnly" }, // 3748935219
		{ &Z_Construct_UFunction_AELSSPlayerController_SetRStickInputZero, "SetRStickInputZero" }, // 3475725317
		{ &Z_Construct_UFunction_AELSSPlayerController_SetVisibleInteractDotIcon, "SetVisibleInteractDotIcon" }, // 2016725038
		{ &Z_Construct_UFunction_AELSSPlayerController_SetVisibleOtherPlayerOnlineID, "SetVisibleOtherPlayerOnlineID" }, // 2607077380
		{ &Z_Construct_UFunction_AELSSPlayerController_SetWatchTargetPlayerState, "SetWatchTargetPlayerState" }, // 902369271
		{ &Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_ConnectServer, "SSAntiCheatClient_ConnectServer" }, // 1394440773
		{ &Z_Construct_UFunction_AELSSPlayerController_SSAntiCheatClient_DisconnectServer, "SSAntiCheatClient_DisconnectServer" }, // 2842641240
		{ &Z_Construct_UFunction_AELSSPlayerController_StartResultTally_RPC, "StartResultTally_RPC" }, // 3824648458
		{ &Z_Construct_UFunction_AELSSPlayerController_SwitchMinimapMode, "SwitchMinimapMode" }, // 3221008007
		{ &Z_Construct_UFunction_AELSSPlayerController_SyncWatchTargetPlayer_Server, "SyncWatchTargetPlayer_Server" }, // 726377166
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_BeforeGamePlay, "TickClientFlowState_BeforeGamePlay" }, // 4047710072
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Closing, "TickClientFlowState_Closing" }, // 3633843687
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Exit, "TickClientFlowState_Exit" }, // 2158308444
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Finish, "TickClientFlowState_Finish" }, // 1371732755
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_GamePlay, "TickClientFlowState_GamePlay" }, // 3657121029
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_Result, "TickClientFlowState_Result" }, // 1225050349
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_VictoryRoyale, "TickClientFlowState_VictoryRoyale" }, // 3329793565
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame, "TickClientFlowState_WatchGame" }, // 2808342136
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchGame_Native, "TickClientFlowState_WatchGame_Native" }, // 909572276
		{ &Z_Construct_UFunction_AELSSPlayerController_TickClientFlowState_WatchVictoryRoyale, "TickClientFlowState_WatchVictoryRoyale" }, // 1853809815
		{ &Z_Construct_UFunction_AELSSPlayerController_ToggleHUDVisibility, "ToggleHUDVisibility" }, // 2161564949
		{ &Z_Construct_UFunction_AELSSPlayerController_ToggleMinimapMode, "ToggleMinimapMode" }, // 148956326
		{ &Z_Construct_UFunction_AELSSPlayerController_UIPrepare_RPC, "UIPrepare_RPC" }, // 518054076
		{ &Z_Construct_UFunction_AELSSPlayerController_UpdateNearInteractableObjectList, "UpdateNearInteractableObjectList" }, // 1421622454
		{ &Z_Construct_UFunction_AELSSPlayerController_UpdateNearPlayerList, "UpdateNearPlayerList" }, // 3991572925
		{ &Z_Construct_UFunction_AELSSPlayerController_UpdateViewTarget, "UpdateViewTarget" }, // 427912325
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_ApplyHoldRatio, "WatchGame_ApplyHoldRatio" }, // 2057926212
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_CancelHold, "WatchGame_CancelHold" }, // 2322420000
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnChangePlayer, "WatchGame_OnChangePlayer" }, // 3490110387
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuDecision, "WatchGame_OnPressMenuDecision" }, // 1730445938
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuLB, "WatchGame_OnPressMenuLB" }, // 4145618453
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnPressMenuRB, "WatchGame_OnPressMenuRB" }, // 3515498641
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnReleaseMenuDecision, "WatchGame_OnReleaseMenuDecision" }, // 1959489000
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_OnRequestChangePlayer, "WatchGame_OnRequestChangePlayer" }, // 417276232
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_RequestNext, "WatchGame_RequestNext" }, // 3631683392
		{ &Z_Construct_UFunction_AELSSPlayerController_WatchGame_ResetUI, "WatchGame_ResetUI" }, // 2729678409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLB = { "EventOnPress_MenuLB", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuLB), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRB = { "EventOnPress_MenuRB", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuRB), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuDecision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuDecision = { "EventOnPress_MenuDecision", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuDecision), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuDecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuDecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuDecision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuDecision = { "EventOnRelease_MenuDecision", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnRelease_MenuDecision), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuDecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuDecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRight = { "EventOnPress_MenuRight", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuRight), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLeft = { "EventOnPress_MenuLeft", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuLeft), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuAccept_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuAccept = { "EventOnPress_MenuAccept", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuAccept), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuAccept_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuAccept_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuCancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuCancel = { "EventOnPress_MenuCancel", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuCancel), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuCancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuCancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuCancel = { "EventOnRelease_MenuCancel", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EventOnRelease_MenuCancel), Z_Construct_UDelegateFunction_ABP_200508_SSPlayerControllerEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuCancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsAllowCharacterControll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsAllowCharacterControll_SetBit(void* Obj)
	{
		((AELSSPlayerController*)Obj)->IsAllowCharacterControll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsAllowCharacterControll = { "IsAllowCharacterControll", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPlayerController), &Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsAllowCharacterControll_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsAllowCharacterControll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsAllowCharacterControll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsRestrictMoveOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsRestrictMoveOnly_SetBit(void* Obj)
	{
		((AELSSPlayerController*)Obj)->IsRestrictMoveOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsRestrictMoveOnly = { "IsRestrictMoveOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPlayerController), &Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsRestrictMoveOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsRestrictMoveOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsRestrictMoveOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsNetworkError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsNetworkError_SetBit(void* Obj)
	{
		((AELSSPlayerController*)Obj)->IsNetworkError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsNetworkError = { "IsNetworkError", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPlayerController), &Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsNetworkError_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsNetworkError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsNetworkError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsApiDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsApiDisabled_SetBit(void* Obj)
	{
		((AELSSPlayerController*)Obj)->IsApiDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsApiDisabled = { "IsApiDisabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPlayerController), &Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsApiDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsApiDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsApiDisabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MouseControlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MouseControlMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MouseControlMode = { "MouseControlMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, MouseControlMode), Z_Construct_UEnum_ABP_200508_ESSMouseControlMode, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MouseControlMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MouseControlMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StoredMousePosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StoredMousePosition = { "StoredMousePosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, StoredMousePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StoredMousePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StoredMousePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCameraType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCameraType = { "GameplayCameraType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, GameplayCameraType), Z_Construct_UClass_AELSSGameplayCamera_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCameraType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCameraType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCamera = { "GameplayCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, GameplayCamera), Z_Construct_UClass_AELSSGameplayCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCameraType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCameraType = { "StationalCameraType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, StationalCameraType), Z_Construct_UClass_AELSSStationalCamera_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCameraType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCameraType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCamera = { "StationalCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, StationalCamera), Z_Construct_UClass_AELSSStationalCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCamera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_PrevState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_PrevState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_PrevState = { "PrevState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, PrevState), Z_Construct_UEnum_ABP_200508_ESSClientFlowState, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_PrevState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_PrevState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EndGameReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EndGameReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EndGameReason = { "EndGameReason", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, EndGameReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EndGameReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EndGameReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MenuOperationalWidgetManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MenuOperationalWidgetManager = { "MenuOperationalWidgetManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, MenuOperationalWidgetManager), Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MenuOperationalWidgetManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MenuOperationalWidgetManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchTargetPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchTargetPlayerState = { "WatchTargetPlayerState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, WatchTargetPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchTargetPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchTargetPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchGameIgnoreDecisionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchGameIgnoreDecisionTime = { "WatchGameIgnoreDecisionTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, WatchGameIgnoreDecisionTime), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchGameIgnoreDecisionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchGameIgnoreDecisionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_VictoryCutscene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_VictoryCutscene = { "VictoryCutscene", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, VictoryCutscene), Z_Construct_UClass_AELSSVictoryCutscene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_VictoryCutscene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_VictoryCutscene_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearPlayerStatusList_Inner = { "NearPlayerStatusList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSNearPlayerStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearPlayerStatusList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearPlayerStatusList = { "NearPlayerStatusList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, NearPlayerStatusList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearPlayerStatusList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearPlayerStatusList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ShowNearPlayerStatusDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ShowNearPlayerStatusDistance = { "ShowNearPlayerStatusDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, ShowNearPlayerStatusDistance), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ShowNearPlayerStatusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ShowNearPlayerStatusDistance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearInteractableObjectStatusList_Inner = { "NearInteractableObjectStatusList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearInteractableObjectStatusList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearInteractableObjectStatusList = { "NearInteractableObjectStatusList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, NearInteractableObjectStatusList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearInteractableObjectStatusList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearInteractableObjectStatusList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InteractableObjectDotIconDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InteractableObjectDotIconDistance = { "InteractableObjectDotIconDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, InteractableObjectDotIconDistance), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InteractableObjectDotIconDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InteractableObjectDotIconDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_KilledPlayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_KilledPlayerName = { "TextColor_KilledPlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, TextColor_KilledPlayerName), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_KilledPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_KilledPlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Common_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Common = { "TextColor_Common", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, TextColor_Common), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Common_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Common_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_UnCommon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_UnCommon = { "TextColor_UnCommon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, TextColor_UnCommon), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_UnCommon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_UnCommon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Rare_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Rare = { "TextColor_Rare", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, TextColor_Rare), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Rare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Rare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Epic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Epic = { "TextColor_Epic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, TextColor_Epic), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Epic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Epic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Legend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Legend = { "TextColor_Legend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, TextColor_Legend), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Legend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Legend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsEnableOpenPauseMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsEnableOpenPauseMenu_SetBit(void* Obj)
	{
		((AELSSPlayerController*)Obj)->IsEnableOpenPauseMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsEnableOpenPauseMenu = { "IsEnableOpenPauseMenu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPlayerController), &Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsEnableOpenPauseMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsEnableOpenPauseMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsEnableOpenPauseMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerSessionId = { "JoinedPlayerSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, JoinedPlayerSessionId), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerId = { "JoinedPlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, JoinedPlayerId), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TempLocalPlayerControllers_Inner = { "TempLocalPlayerControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TempLocalPlayerControllers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TempLocalPlayerControllers = { "TempLocalPlayerControllers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, TempLocalPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TempLocalPlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TempLocalPlayerControllers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ChildPlayerControllers_Inner = { "ChildPlayerControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ChildPlayerControllers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ChildPlayerControllers = { "ChildPlayerControllers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, ChildPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ChildPlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ChildPlayerControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InputOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InputOnly_SetBit(void* Obj)
	{
		((AELSSPlayerController*)Obj)->InputOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InputOnly = { "InputOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPlayerController), &Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InputOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InputOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InputOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ParentPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ParentPlayerController = { "ParentPlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, ParentPlayerController), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ParentPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ParentPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ssAntiCheatData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ssAntiCheatData = { "ssAntiCheatData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerController, ssAntiCheatData), Z_Construct_UClass_USSModeAntiCheatData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ssAntiCheatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ssAntiCheatData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuDecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuDecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuAccept,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnPress_MenuCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EventOnRelease_MenuCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsAllowCharacterControll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsRestrictMoveOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsNetworkError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsApiDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MouseControlMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MouseControlMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StoredMousePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCameraType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_GameplayCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCameraType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_StationalCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_PrevState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_PrevState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EndGameReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_EndGameReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_MenuOperationalWidgetManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchTargetPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_WatchGameIgnoreDecisionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_VictoryCutscene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearPlayerStatusList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearPlayerStatusList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ShowNearPlayerStatusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearInteractableObjectStatusList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_NearInteractableObjectStatusList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InteractableObjectDotIconDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_KilledPlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Common,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_UnCommon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Rare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Epic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TextColor_Legend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_IsEnableOpenPauseMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_JoinedPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TempLocalPlayerControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_TempLocalPlayerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ChildPlayerControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ChildPlayerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_InputOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ParentPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerController_Statics::NewProp_ssAntiCheatData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSPlayerController_Statics::ClassParams = {
		&AELSSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSPlayerController, 3972051373);
	template<> ABP_200508_API UClass* StaticClass<AELSSPlayerController>()
	{
		return AELSSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSPlayerController(Z_Construct_UClass_AELSSPlayerController, &AELSSPlayerController::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
