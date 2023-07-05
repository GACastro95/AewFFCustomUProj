// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPanelInGameBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPanelInGameBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelInGameBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelInGameBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLogIconType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLogTextParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAreaCountDownTextType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCharacterHpType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPickupType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractOperate();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSInteractExecute();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStorm_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MapUI_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Inventory_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Interact_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_VehicleStatus_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSPanelInGameBase::execAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewItem);
		P_GET_ENUM(ESSLogIconType,Z_Param_InIconType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMessage(Z_Param_InNewItem,ESSLogIconType(Z_Param_InIconType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execAddMultiColorLogMessage)
	{
		P_GET_TARRAY_REF(FSSLogTextParam,Z_Param_Out_inTextParam);
		P_GET_ENUM(ESSLogIconType,Z_Param_InIconType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMultiColorLogMessage(Z_Param_Out_inTextParam,ESSLogIconType(Z_Param_InIconType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyAbilityCoolTimeGauge)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inSlotIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inRemainTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDurationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAbilityCoolTimeGauge(Z_Param_inSlotIndex,Z_Param_inRemainTime,Z_Param_inDurationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyAbilityEffectiveGauge)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inSlotIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inRemainTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDurationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAbilityEffectiveGauge(Z_Param_inSlotIndex,Z_Param_inRemainTime,Z_Param_inDurationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyAliveCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAliveCount(Z_Param_InCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyAnnouncePlate)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_GET_ENUM(ESSAreaCountDownTextType,Z_Param_InTextType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAnnouncePlate(Z_Param_inIsVisible,Z_Param_InSecond,ESSAreaCountDownTextType(Z_Param_InTextType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyAttentionBoostValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAttentionBoostValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAttentionBoostValue(Z_Param_InAttentionBoostValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyAttentionGauge)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAttentionValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAddValue);
		P_GET_ENUM(ESSAttentionReason,Z_Param_InActType);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAttentionGauge(Z_Param_InAttentionValue,Z_Param_InAddValue,ESSAttentionReason(Z_Param_InActType),Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyCharacterHpGauge)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNowHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InIdealHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxHP);
		P_GET_ENUM(ESSCharacterHpType,Z_Param_InType);
		P_GET_UBOOL_REF(Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCharacterHpGauge(Z_Param_inTargetActor,Z_Param_InNowHp,Z_Param_InIdealHp,Z_Param_inMaxHP,ESSCharacterHpType(Z_Param_InType),Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyHasCarrotMedal)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHasCarrotMedal(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyHeatMeater)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InExpRatio);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHeatMeater(Z_Param_inHeatLevel,Z_Param_InExpRatio,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyHUDWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHUDWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyInteractPoint)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInteractPoint(Z_Param_inTargetActor,Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyInventoryBareIconGuideState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInventoryBareIconGuideState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyInventoryIcon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_ENUM(ESSPickupType,Z_Param_InPickuptype);
		P_GET_PROPERTY(FIntProperty,Z_Param_InItemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_InDurableValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInventoryIcon(Z_Param_InIndex,ESSPickupType(Z_Param_InPickuptype),Z_Param_InItemId,Z_Param_InDurableValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyKOCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyKOCount(Z_Param_InCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyOnlineID)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_InOnlineID);
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_GET_UBOOL(Z_Param_InHasCarrot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyOnlineID(Z_Param_inTargetActor,Z_Param_InOnlineID,Z_Param_inIsVisible,Z_Param_InHasCarrot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyRatioToInteractUI)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRatioToInteractUI(Z_Param_InRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyShieldDurableValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InShieldDurableValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxShieldDurableValue);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyShieldDurableValue(Z_Param_InShieldDurableValue,Z_Param_InMaxShieldDurableValue,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplySpectators)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSpectatorsNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySpectators(Z_Param_InSpectatorsNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyStormTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyStormTime(Z_Param_InSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyVehicleStatusDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InVehicleDurability);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxDurability);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_GET_ENUM(ESSVehicleType,Z_Param_InVehicleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVehicleStatusDurability(Z_Param_InVehicleDurability,Z_Param_InMaxDurability,Z_Param_InGaugeTransition,ESSVehicleType(Z_Param_InVehicleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyWrestlerDownHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWrestlerDownHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxWrestlerDownHp);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerDownHp(Z_Param_InWrestlerDownHp,Z_Param_InMaxWrestlerDownHp,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execApplyWrestlerHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWrestlerHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxHP);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWrestlerHp(Z_Param_InWrestlerHp,Z_Param_inMaxHP,Z_Param_InGaugeTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execCancelSpectateWindowHold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelSpectateWindowHold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execDeleteInventoryIcon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteInventoryIcon(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execOnChangeSpectateUser)
	{
		P_GET_UBOOL(Z_Param_InIsNextUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeSpectateUser(Z_Param_InIsNextUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execOnPushQuitMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPushQuitMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execPlaySSSkillNotice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSkillCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_HeatSkillId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySSSkillNotice(Z_Param_InSkillCategory,Z_Param_HeatSkillId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execResetAllAbilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllAbilities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execResetAllLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execResetAttentionGauge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAttentionGauge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execResetSSSkillNotice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSSSkillNotice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetAbilityGuideVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityGuideVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetAbilityHoldButtonVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityHoldButtonVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetAbilityVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetActorUICanShow)
	{
		P_GET_UBOOL(Z_Param_InCanShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorUICanShow(Z_Param_InCanShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetAndApplyMaxAttentionValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxAttentionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAndApplyMaxAttentionValue(Z_Param_InMaxAttentionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetGamerTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InGamerTagText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamerTag(Z_Param_InGamerTagText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetInventoryIconValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_InDurableValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryIconValue(Z_Param_InIndex,Z_Param_InDurableValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetInventoryItem)
	{
		P_GET_ENUM(ESSInteractOperate,Z_Param_InInteractOperate);
		P_GET_ENUM(ESSInteractExecute,Z_Param_InType);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInventoryItemID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInventoryItemDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryItem(ESSInteractOperate(Z_Param_InInteractOperate),ESSInteractExecute(Z_Param_InType),Z_Param_InInventoryItemID,Z_Param_InInventoryItemDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetInventoryLimit)
	{
		P_GET_UBOOL(Z_Param_InFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryLimit(Z_Param_InFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetInventoryOperationButtonVisibleInPause)
	{
		P_GET_UBOOL(Z_Param_InVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryOperationButtonVisibleInPause(Z_Param_InVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetInventoryPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryPosition(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetInventoryVisible)
	{
		P_GET_UBOOL(Z_Param_InFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryVisible(Z_Param_InFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetMapAnnounceStormAndGuideVisible)
	{
		P_GET_UBOOL(Z_Param_InVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapAnnounceStormAndGuideVisible(Z_Param_InVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetMapOperationButtonVisibleInPause)
	{
		P_GET_UBOOL(Z_Param_InVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapOperationButtonVisibleInPause(Z_Param_InVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetMinimapTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinimapID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimapTexture(Z_Param_InMinimapID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetOperationGuideGuardState)
	{
		P_GET_UBOOL(Z_Param_InGuardState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOperationGuideGuardState(Z_Param_InGuardState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetOperationGuideVisibleInPause)
	{
		P_GET_UBOOL(Z_Param_InVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOperationGuideVisibleInPause(Z_Param_InVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetSpectatedInfo)
	{
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatedInfo(Z_Param_inPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetSpectateWindowHoldRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectateWindowHoldRatio(Z_Param_InRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetStormActor)
	{
		P_GET_OBJECT(AELSSStorm,Z_Param_InStormActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStormActor(Z_Param_InStormActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetTargetActorToInteractUI)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActorToInteractUI(Z_Param_inTargetActor,Z_Param_Out_InOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetupAbilityUI)
	{
		P_GET_TARRAY_REF(FSSAbilityParam,Z_Param_Out_inAbilityList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAbilityUI(Z_Param_Out_inAbilityList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetVisibleAbilitySlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inSlotIndex);
		P_GET_UBOOL(Z_Param_InVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleAbilitySlot(Z_Param_inSlotIndex,Z_Param_InVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetVisibleFeverEffect)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_GET_UBOOL(Z_Param_InPlayStartSE);
		P_GET_UBOOL(Z_Param_InPlayEndSE);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleFeverEffect(Z_Param_inIsVisible,Z_Param_InPlayStartSE,Z_Param_InPlayEndSE);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetVisibleToInteractUI)
	{
		P_GET_ENUM(ESSInteractExecute,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleToInteractUI(ESSInteractExecute(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetVisibleToItemInteractUI)
	{
		P_GET_ENUM(ESSInteractOperate,Z_Param_InInteractOperate);
		P_GET_ENUM(ESSInteractExecute,Z_Param_InType);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPickupID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPickupDurability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleToItemInteractUI(ESSInteractOperate(Z_Param_InInteractOperate),ESSInteractExecute(Z_Param_InType),Z_Param_InPickupID,Z_Param_InPickupDurability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetVisibleToOperationGuide)
	{
		P_GET_ENUM(ESSOperationGuideExecute,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleToOperationGuide(ESSOperationGuideExecute(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSetVisibleToSpectateWindow)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleToSpectateWindow(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execShowOffVehicleStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOffVehicleStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSwitchMapMode)
	{
		P_GET_UBOOL(Z_Param_InIsWholeMapMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchMapMode(Z_Param_InIsWholeMapMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execSwitchWrestlerHpType)
	{
		P_GET_UBOOL(Z_Param_InIsDownHpGaugeShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWrestlerHpType(Z_Param_InIsDownHpGaugeShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPanelInGameBase::execUpdateKeyConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateKeyConfig();
		P_NATIVE_END;
	}
	static FName NAME_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow = FName(TEXT("CloseAllExcludedSpectateWindow"));
	void UELSSPanelInGameBase::CloseAllExcludedSpectateWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow),NULL);
	}
	static FName NAME_UELSSPanelInGameBase_CloseItemProgressBar = FName(TEXT("CloseItemProgressBar"));
	void UELSSPanelInGameBase::CloseItemProgressBar()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameBase_CloseItemProgressBar),NULL);
	}
	static FName NAME_UELSSPanelInGameBase_IsItemProgressBarShow = FName(TEXT("IsItemProgressBarShow"));
	bool UELSSPanelInGameBase::IsItemProgressBarShow()
	{
		ELSSPanelInGameBase_eventIsItemProgressBarShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameBase_IsItemProgressBarShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSPanelInGameBase_OpenItemProgressBar = FName(TEXT("OpenItemProgressBar"));
	void UELSSPanelInGameBase::OpenItemProgressBar(float InItemUsageTime, const FString& InActText)
	{
		ELSSPanelInGameBase_eventOpenItemProgressBar_Parms Parms;
		Parms.InItemUsageTime=InItemUsageTime;
		Parms.InActText=InActText;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameBase_OpenItemProgressBar),&Parms);
	}
	static FName NAME_UELSSPanelInGameBase_PlayInAnimation = FName(TEXT("PlayInAnimation"));
	void UELSSPanelInGameBase::PlayInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameBase_PlayInAnimation),NULL);
	}
	static FName NAME_UELSSPanelInGameBase_SetVisibleAimReticle = FName(TEXT("SetVisibleAimReticle"));
	void UELSSPanelInGameBase::SetVisibleAimReticle(bool InVisible)
	{
		ELSSPanelInGameBase_eventSetVisibleAimReticle_Parms Parms;
		Parms.InVisible=InVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameBase_SetVisibleAimReticle),&Parms);
	}
	static FName NAME_UELSSPanelInGameBase_UpdatePlayInAnimation = FName(TEXT("UpdatePlayInAnimation"));
	void UELSSPanelInGameBase::UpdatePlayInAnimation(float InDeltaTime)
	{
		ELSSPanelInGameBase_eventUpdatePlayInAnimation_Parms Parms;
		Parms.InDeltaTime=InDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelInGameBase_UpdatePlayInAnimation),&Parms);
	}
	void UELSSPanelInGameBase::StaticRegisterNativesUELSSPanelInGameBase()
	{
		UClass* Class = UELSSPanelInGameBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMessage", &UELSSPanelInGameBase::execAddMessage },
			{ "AddMultiColorLogMessage", &UELSSPanelInGameBase::execAddMultiColorLogMessage },
			{ "ApplyAbilityCoolTimeGauge", &UELSSPanelInGameBase::execApplyAbilityCoolTimeGauge },
			{ "ApplyAbilityEffectiveGauge", &UELSSPanelInGameBase::execApplyAbilityEffectiveGauge },
			{ "ApplyAliveCount", &UELSSPanelInGameBase::execApplyAliveCount },
			{ "ApplyAnnouncePlate", &UELSSPanelInGameBase::execApplyAnnouncePlate },
			{ "ApplyAttentionBoostValue", &UELSSPanelInGameBase::execApplyAttentionBoostValue },
			{ "ApplyAttentionGauge", &UELSSPanelInGameBase::execApplyAttentionGauge },
			{ "ApplyCharacterHpGauge", &UELSSPanelInGameBase::execApplyCharacterHpGauge },
			{ "ApplyHasCarrotMedal", &UELSSPanelInGameBase::execApplyHasCarrotMedal },
			{ "ApplyHeatMeater", &UELSSPanelInGameBase::execApplyHeatMeater },
			{ "ApplyHUDWatchGameMode", &UELSSPanelInGameBase::execApplyHUDWatchGameMode },
			{ "ApplyInteractPoint", &UELSSPanelInGameBase::execApplyInteractPoint },
			{ "ApplyInventoryBareIconGuideState", &UELSSPanelInGameBase::execApplyInventoryBareIconGuideState },
			{ "ApplyInventoryIcon", &UELSSPanelInGameBase::execApplyInventoryIcon },
			{ "ApplyKOCount", &UELSSPanelInGameBase::execApplyKOCount },
			{ "ApplyOnlineID", &UELSSPanelInGameBase::execApplyOnlineID },
			{ "ApplyRatioToInteractUI", &UELSSPanelInGameBase::execApplyRatioToInteractUI },
			{ "ApplyShieldDurableValue", &UELSSPanelInGameBase::execApplyShieldDurableValue },
			{ "ApplySpectators", &UELSSPanelInGameBase::execApplySpectators },
			{ "ApplyStormTime", &UELSSPanelInGameBase::execApplyStormTime },
			{ "ApplyVehicleStatusDurability", &UELSSPanelInGameBase::execApplyVehicleStatusDurability },
			{ "ApplyWrestlerDownHp", &UELSSPanelInGameBase::execApplyWrestlerDownHp },
			{ "ApplyWrestlerHp", &UELSSPanelInGameBase::execApplyWrestlerHp },
			{ "CancelSpectateWindowHold", &UELSSPanelInGameBase::execCancelSpectateWindowHold },
			{ "DeleteInventoryIcon", &UELSSPanelInGameBase::execDeleteInventoryIcon },
			{ "OnChangeSpectateUser", &UELSSPanelInGameBase::execOnChangeSpectateUser },
			{ "OnPushQuitMatch", &UELSSPanelInGameBase::execOnPushQuitMatch },
			{ "PlaySSSkillNotice", &UELSSPanelInGameBase::execPlaySSSkillNotice },
			{ "ResetAllAbilities", &UELSSPanelInGameBase::execResetAllAbilities },
			{ "ResetAllLogs", &UELSSPanelInGameBase::execResetAllLogs },
			{ "ResetAttentionGauge", &UELSSPanelInGameBase::execResetAttentionGauge },
			{ "ResetSSSkillNotice", &UELSSPanelInGameBase::execResetSSSkillNotice },
			{ "SetAbilityGuideVisible", &UELSSPanelInGameBase::execSetAbilityGuideVisible },
			{ "SetAbilityHoldButtonVisible", &UELSSPanelInGameBase::execSetAbilityHoldButtonVisible },
			{ "SetAbilityVisible", &UELSSPanelInGameBase::execSetAbilityVisible },
			{ "SetActorUICanShow", &UELSSPanelInGameBase::execSetActorUICanShow },
			{ "SetAndApplyMaxAttentionValue", &UELSSPanelInGameBase::execSetAndApplyMaxAttentionValue },
			{ "SetGamerTag", &UELSSPanelInGameBase::execSetGamerTag },
			{ "SetInventoryIconValue", &UELSSPanelInGameBase::execSetInventoryIconValue },
			{ "SetInventoryItem", &UELSSPanelInGameBase::execSetInventoryItem },
			{ "SetInventoryLimit", &UELSSPanelInGameBase::execSetInventoryLimit },
			{ "SetInventoryOperationButtonVisibleInPause", &UELSSPanelInGameBase::execSetInventoryOperationButtonVisibleInPause },
			{ "SetInventoryPosition", &UELSSPanelInGameBase::execSetInventoryPosition },
			{ "SetInventoryVisible", &UELSSPanelInGameBase::execSetInventoryVisible },
			{ "SetMapAnnounceStormAndGuideVisible", &UELSSPanelInGameBase::execSetMapAnnounceStormAndGuideVisible },
			{ "SetMapOperationButtonVisibleInPause", &UELSSPanelInGameBase::execSetMapOperationButtonVisibleInPause },
			{ "SetMinimapTexture", &UELSSPanelInGameBase::execSetMinimapTexture },
			{ "SetOperationGuideGuardState", &UELSSPanelInGameBase::execSetOperationGuideGuardState },
			{ "SetOperationGuideVisibleInPause", &UELSSPanelInGameBase::execSetOperationGuideVisibleInPause },
			{ "SetSpectatedInfo", &UELSSPanelInGameBase::execSetSpectatedInfo },
			{ "SetSpectateWindowHoldRatio", &UELSSPanelInGameBase::execSetSpectateWindowHoldRatio },
			{ "SetStormActor", &UELSSPanelInGameBase::execSetStormActor },
			{ "SetTargetActorToInteractUI", &UELSSPanelInGameBase::execSetTargetActorToInteractUI },
			{ "SetupAbilityUI", &UELSSPanelInGameBase::execSetupAbilityUI },
			{ "SetVisibleAbilitySlot", &UELSSPanelInGameBase::execSetVisibleAbilitySlot },
			{ "SetVisibleFeverEffect", &UELSSPanelInGameBase::execSetVisibleFeverEffect },
			{ "SetVisibleToInteractUI", &UELSSPanelInGameBase::execSetVisibleToInteractUI },
			{ "SetVisibleToItemInteractUI", &UELSSPanelInGameBase::execSetVisibleToItemInteractUI },
			{ "SetVisibleToOperationGuide", &UELSSPanelInGameBase::execSetVisibleToOperationGuide },
			{ "SetVisibleToSpectateWindow", &UELSSPanelInGameBase::execSetVisibleToSpectateWindow },
			{ "ShowOffVehicleStatus", &UELSSPanelInGameBase::execShowOffVehicleStatus },
			{ "SwitchMapMode", &UELSSPanelInGameBase::execSwitchMapMode },
			{ "SwitchWrestlerHpType", &UELSSPanelInGameBase::execSwitchWrestlerHpType },
			{ "UpdateKeyConfig", &UELSSPanelInGameBase::execUpdateKeyConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics
	{
		struct ELSSPanelInGameBase_eventAddMessage_Parms
		{
			FString InNewItem;
			ESSLogIconType InIconType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNewItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InNewItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InNewItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InNewItem = { "InNewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventAddMessage_Parms, InNewItem), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InNewItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InNewItem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InIconType = { "InIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventAddMessage_Parms, InIconType), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InNewItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::NewProp_InIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "AddMessage", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventAddMessage_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics
	{
		struct ELSSPanelInGameBase_eventAddMultiColorLogMessage_Parms
		{
			TArray<FSSLogTextParam> inTextParam;
			ESSLogIconType InIconType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inTextParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inTextParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inTextParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_inTextParam_Inner = { "inTextParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLogTextParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_inTextParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_inTextParam = { "inTextParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventAddMultiColorLogMessage_Parms, inTextParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_inTextParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_inTextParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_InIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_InIconType = { "InIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventAddMultiColorLogMessage_Parms, InIconType), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_inTextParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_inTextParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_InIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::NewProp_InIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "AddMultiColorLogMessage", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventAddMultiColorLogMessage_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics
	{
		struct ELSSPanelInGameBase_eventApplyAbilityCoolTimeGauge_Parms
		{
			int32 inSlotIndex;
			float inRemainTime;
			float inDurationTime;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSlotIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRemainTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDurationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::NewProp_inSlotIndex = { "inSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAbilityCoolTimeGauge_Parms, inSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::NewProp_inRemainTime = { "inRemainTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAbilityCoolTimeGauge_Parms, inRemainTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::NewProp_inDurationTime = { "inDurationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAbilityCoolTimeGauge_Parms, inDurationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::NewProp_inSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::NewProp_inRemainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::NewProp_inDurationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyAbilityCoolTimeGauge", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyAbilityCoolTimeGauge_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics
	{
		struct ELSSPanelInGameBase_eventApplyAbilityEffectiveGauge_Parms
		{
			int32 inSlotIndex;
			float inRemainTime;
			float inDurationTime;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSlotIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inRemainTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDurationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::NewProp_inSlotIndex = { "inSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAbilityEffectiveGauge_Parms, inSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::NewProp_inRemainTime = { "inRemainTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAbilityEffectiveGauge_Parms, inRemainTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::NewProp_inDurationTime = { "inDurationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAbilityEffectiveGauge_Parms, inDurationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::NewProp_inSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::NewProp_inRemainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::NewProp_inDurationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyAbilityEffectiveGauge", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyAbilityEffectiveGauge_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics
	{
		struct ELSSPanelInGameBase_eventApplyAliveCount_Parms
		{
			int32 InCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::NewProp_InCount = { "InCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAliveCount_Parms, InCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::NewProp_InCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyAliveCount", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyAliveCount_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics
	{
		struct ELSSPanelInGameBase_eventApplyAnnouncePlate_Parms
		{
			bool inIsVisible;
			float InSecond;
			ESSAreaCountDownTextType InTextType;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTextType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InTextType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyAnnouncePlate_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyAnnouncePlate_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAnnouncePlate_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_InTextType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_InTextType = { "InTextType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAnnouncePlate_Parms, InTextType), Z_Construct_UEnum_ABP_200508_ESSAreaCountDownTextType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_inIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_InSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_InTextType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::NewProp_InTextType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyAnnouncePlate", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyAnnouncePlate_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics
	{
		struct ELSSPanelInGameBase_eventApplyAttentionBoostValue_Parms
		{
			float InAttentionBoostValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAttentionBoostValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::NewProp_InAttentionBoostValue = { "InAttentionBoostValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAttentionBoostValue_Parms, InAttentionBoostValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::NewProp_InAttentionBoostValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyAttentionBoostValue", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyAttentionBoostValue_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics
	{
		struct ELSSPanelInGameBase_eventApplyAttentionGauge_Parms
		{
			int32 InAttentionValue;
			int32 InAddValue;
			ESSAttentionReason InActType;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAttentionValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAddValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InActType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InActType;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InAttentionValue = { "InAttentionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAttentionGauge_Parms, InAttentionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InAddValue = { "InAddValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAttentionGauge_Parms, InAddValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InActType = { "InActType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyAttentionGauge_Parms, InActType), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyAttentionGauge_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyAttentionGauge_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InAttentionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InActType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InActType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyAttentionGauge", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyAttentionGauge_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics
	{
		struct ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms
		{
			AActor* inTargetActor;
			int32 InNowHp;
			int32 InIdealHp;
			int32 inMaxHP;
			ESSCharacterHpType InType;
			bool Out;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNowHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIdealHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_Out_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InNowHp = { "InNowHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms, InNowHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InIdealHp = { "InIdealHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms, InIdealHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSCharacterHpType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_Out_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms*)Obj)->Out = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_Out_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InNowHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InIdealHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_inMaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyCharacterHpGauge", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyCharacterHpGauge_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics
	{
		struct ELSSPanelInGameBase_eventApplyHasCarrotMedal_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyHasCarrotMedal_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyHasCarrotMedal_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyHasCarrotMedal", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyHasCarrotMedal_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics
	{
		struct ELSSPanelInGameBase_eventApplyHeatMeater_Parms
		{
			int32 inHeatLevel;
			float InExpRatio;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InExpRatio;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyHeatMeater_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_InExpRatio = { "InExpRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyHeatMeater_Parms, InExpRatio), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyHeatMeater_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyHeatMeater_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_InExpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyHeatMeater", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyHeatMeater_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyHUDWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics
	{
		struct ELSSPanelInGameBase_eventApplyInteractPoint_Parms
		{
			AActor* inTargetActor;
			bool inIsVisible;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyInteractPoint_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyInteractPoint_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyInteractPoint_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyInteractPoint", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyInteractPoint_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyInventoryBareIconGuideState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics
	{
		struct ELSSPanelInGameBase_eventApplyInventoryIcon_Parms
		{
			int32 InIndex;
			ESSPickupType InPickuptype;
			int32 InItemId;
			int32 InDurableValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPickuptype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPickuptype;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InItemId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InDurableValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyInventoryIcon_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InPickuptype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InPickuptype = { "InPickuptype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyInventoryIcon_Parms, InPickuptype), Z_Construct_UEnum_ABP_200508_ESSPickupType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyInventoryIcon_Parms, InItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InDurableValue = { "InDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyInventoryIcon_Parms, InDurableValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InPickuptype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InPickuptype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::NewProp_InDurableValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyInventoryIcon", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyInventoryIcon_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics
	{
		struct ELSSPanelInGameBase_eventApplyKOCount_Parms
		{
			int32 InCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::NewProp_InCount = { "InCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyKOCount_Parms, InCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::NewProp_InCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyKOCount", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyKOCount_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics
	{
		struct ELSSPanelInGameBase_eventApplyOnlineID_Parms
		{
			AActor* inTargetActor;
			FString InOnlineID;
			bool inIsVisible;
			bool InHasCarrot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOnlineID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InOnlineID;
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static void NewProp_InHasCarrot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InHasCarrot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyOnlineID_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InOnlineID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InOnlineID = { "InOnlineID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyOnlineID_Parms, InOnlineID), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InOnlineID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InOnlineID_MetaData)) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyOnlineID_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyOnlineID_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InHasCarrot_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyOnlineID_Parms*)Obj)->InHasCarrot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InHasCarrot = { "InHasCarrot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyOnlineID_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InHasCarrot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InOnlineID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_inIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::NewProp_InHasCarrot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyOnlineID", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyOnlineID_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics
	{
		struct ELSSPanelInGameBase_eventApplyRatioToInteractUI_Parms
		{
			float InRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyRatioToInteractUI_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyRatioToInteractUI", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyRatioToInteractUI_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics
	{
		struct ELSSPanelInGameBase_eventApplyShieldDurableValue_Parms
		{
			int32 InShieldDurableValue;
			int32 InMaxShieldDurableValue;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InShieldDurableValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxShieldDurableValue;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InShieldDurableValue = { "InShieldDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyShieldDurableValue_Parms, InShieldDurableValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InMaxShieldDurableValue = { "InMaxShieldDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyShieldDurableValue_Parms, InMaxShieldDurableValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyShieldDurableValue_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyShieldDurableValue_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InMaxShieldDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyShieldDurableValue", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyShieldDurableValue_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics
	{
		struct ELSSPanelInGameBase_eventApplySpectators_Parms
		{
			int32 InSpectatorsNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSpectatorsNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::NewProp_InSpectatorsNum = { "InSpectatorsNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplySpectators_Parms, InSpectatorsNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::NewProp_InSpectatorsNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplySpectators", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplySpectators_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics
	{
		struct ELSSPanelInGameBase_eventApplyStormTime_Parms
		{
			float InSecond;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyStormTime_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::NewProp_InSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyStormTime", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyStormTime_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics
	{
		struct ELSSPanelInGameBase_eventApplyVehicleStatusDurability_Parms
		{
			int32 InVehicleDurability;
			int32 InMaxDurability;
			bool InGaugeTransition;
			ESSVehicleType InVehicleType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InVehicleDurability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxDurability;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVehicleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVehicleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InVehicleDurability = { "InVehicleDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyVehicleStatusDurability_Parms, InVehicleDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InMaxDurability = { "InMaxDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyVehicleStatusDurability_Parms, InMaxDurability), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyVehicleStatusDurability_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyVehicleStatusDurability_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InVehicleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InVehicleType = { "InVehicleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyVehicleStatusDurability_Parms, InVehicleType), Z_Construct_UEnum_ABP_200508_ESSVehicleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InVehicleDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InMaxDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InGaugeTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InVehicleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::NewProp_InVehicleType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyVehicleStatusDurability", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyVehicleStatusDurability_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics
	{
		struct ELSSPanelInGameBase_eventApplyWrestlerDownHp_Parms
		{
			int32 InWrestlerDownHp;
			int32 InMaxWrestlerDownHp;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWrestlerDownHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxWrestlerDownHp;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InWrestlerDownHp = { "InWrestlerDownHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyWrestlerDownHp_Parms, InWrestlerDownHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InMaxWrestlerDownHp = { "InMaxWrestlerDownHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyWrestlerDownHp_Parms, InMaxWrestlerDownHp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyWrestlerDownHp_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyWrestlerDownHp_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InWrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InMaxWrestlerDownHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyWrestlerDownHp", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyWrestlerDownHp_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics
	{
		struct ELSSPanelInGameBase_eventApplyWrestlerHp_Parms
		{
			int32 InWrestlerHp;
			int32 inMaxHP;
			bool InGaugeTransition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWrestlerHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_InWrestlerHp = { "InWrestlerHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyWrestlerHp_Parms, InWrestlerHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventApplyWrestlerHp_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventApplyWrestlerHp_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventApplyWrestlerHp_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_InWrestlerHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_inMaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::NewProp_InGaugeTransition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ApplyWrestlerHp", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventApplyWrestlerHp_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "CancelSpectateWindowHold", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "CloseAllExcludedSpectateWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "CloseItemProgressBar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics
	{
		struct ELSSPanelInGameBase_eventDeleteInventoryIcon_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventDeleteInventoryIcon_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "DeleteInventoryIcon", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventDeleteInventoryIcon_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventIsItemProgressBarShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventIsItemProgressBarShow_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "IsItemProgressBarShow", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventIsItemProgressBarShow_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics
	{
		struct ELSSPanelInGameBase_eventOnChangeSpectateUser_Parms
		{
			bool InIsNextUser;
		};
		static void NewProp_InIsNextUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsNextUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::NewProp_InIsNextUser_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventOnChangeSpectateUser_Parms*)Obj)->InIsNextUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::NewProp_InIsNextUser = { "InIsNextUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventOnChangeSpectateUser_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::NewProp_InIsNextUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::NewProp_InIsNextUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "OnChangeSpectateUser", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventOnChangeSpectateUser_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "OnPushQuitMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InItemUsageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InActText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InActText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::NewProp_InItemUsageTime = { "InItemUsageTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventOpenItemProgressBar_Parms, InItemUsageTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::NewProp_InActText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::NewProp_InActText = { "InActText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventOpenItemProgressBar_Parms, InActText), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::NewProp_InActText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::NewProp_InActText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::NewProp_InItemUsageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::NewProp_InActText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "OpenItemProgressBar", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventOpenItemProgressBar_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "PlayInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics
	{
		struct ELSSPanelInGameBase_eventPlaySSSkillNotice_Parms
		{
			FString InSkillCategory;
			int32 HeatSkillId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkillCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSkillCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::NewProp_InSkillCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::NewProp_InSkillCategory = { "InSkillCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventPlaySSSkillNotice_Parms, InSkillCategory), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::NewProp_InSkillCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::NewProp_InSkillCategory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::NewProp_HeatSkillId = { "HeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventPlaySSSkillNotice_Parms, HeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::NewProp_InSkillCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::NewProp_HeatSkillId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "PlaySSSkillNotice", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventPlaySSSkillNotice_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ResetAllAbilities", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ResetAllLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ResetAttentionGauge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ResetSSSkillNotice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics
	{
		struct ELSSPanelInGameBase_eventSetAbilityGuideVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetAbilityGuideVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetAbilityGuideVisible_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetAbilityGuideVisible", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetAbilityGuideVisible_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics
	{
		struct ELSSPanelInGameBase_eventSetAbilityHoldButtonVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetAbilityHoldButtonVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetAbilityHoldButtonVisible_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetAbilityHoldButtonVisible", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetAbilityHoldButtonVisible_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics
	{
		struct ELSSPanelInGameBase_eventSetAbilityVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetAbilityVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetAbilityVisible_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetAbilityVisible", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetAbilityVisible_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics
	{
		struct ELSSPanelInGameBase_eventSetActorUICanShow_Parms
		{
			bool InCanShow;
		};
		static void NewProp_InCanShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InCanShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::NewProp_InCanShow_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetActorUICanShow_Parms*)Obj)->InCanShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::NewProp_InCanShow = { "InCanShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetActorUICanShow_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::NewProp_InCanShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::NewProp_InCanShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetActorUICanShow", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetActorUICanShow_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics
	{
		struct ELSSPanelInGameBase_eventSetAndApplyMaxAttentionValue_Parms
		{
			int32 InMaxAttentionValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxAttentionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::NewProp_InMaxAttentionValue = { "InMaxAttentionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetAndApplyMaxAttentionValue_Parms, InMaxAttentionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::NewProp_InMaxAttentionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetAndApplyMaxAttentionValue", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetAndApplyMaxAttentionValue_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics
	{
		struct ELSSPanelInGameBase_eventSetGamerTag_Parms
		{
			FString InGamerTagText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGamerTagText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGamerTagText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::NewProp_InGamerTagText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::NewProp_InGamerTagText = { "InGamerTagText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetGamerTag_Parms, InGamerTagText), METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::NewProp_InGamerTagText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::NewProp_InGamerTagText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::NewProp_InGamerTagText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetGamerTag", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetGamerTag_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics
	{
		struct ELSSPanelInGameBase_eventSetInventoryIconValue_Parms
		{
			int32 InIndex;
			int32 InDurableValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InDurableValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetInventoryIconValue_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::NewProp_InDurableValue = { "InDurableValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetInventoryIconValue_Parms, InDurableValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::NewProp_InDurableValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetInventoryIconValue", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetInventoryIconValue_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics
	{
		struct ELSSPanelInGameBase_eventSetInventoryItem_Parms
		{
			ESSInteractOperate InInteractOperate;
			ESSInteractExecute InType;
			int32 InInventoryItemID;
			int32 InInventoryItemDurability;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInventoryItemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInventoryItemDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetInventoryItem_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetInventoryItem_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInventoryItemID = { "InInventoryItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetInventoryItem_Parms, InInventoryItemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInventoryItemDurability = { "InInventoryItemDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetInventoryItem_Parms, InInventoryItemDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInventoryItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::NewProp_InInventoryItemDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetInventoryItem", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetInventoryItem_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics
	{
		struct ELSSPanelInGameBase_eventSetInventoryLimit_Parms
		{
			bool InFlag;
		};
		static void NewProp_InFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::NewProp_InFlag_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetInventoryLimit_Parms*)Obj)->InFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::NewProp_InFlag = { "InFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetInventoryLimit_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::NewProp_InFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::NewProp_InFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetInventoryLimit", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetInventoryLimit_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics
	{
		struct ELSSPanelInGameBase_eventSetInventoryOperationButtonVisibleInPause_Parms
		{
			bool InVisible;
		};
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetInventoryOperationButtonVisibleInPause_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetInventoryOperationButtonVisibleInPause_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetInventoryOperationButtonVisibleInPause", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetInventoryOperationButtonVisibleInPause_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics
	{
		struct ELSSPanelInGameBase_eventSetInventoryPosition_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetInventoryPosition_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetInventoryPosition", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetInventoryPosition_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics
	{
		struct ELSSPanelInGameBase_eventSetInventoryVisible_Parms
		{
			bool InFlag;
		};
		static void NewProp_InFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::NewProp_InFlag_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetInventoryVisible_Parms*)Obj)->InFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::NewProp_InFlag = { "InFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetInventoryVisible_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::NewProp_InFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::NewProp_InFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetInventoryVisible", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetInventoryVisible_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics
	{
		struct ELSSPanelInGameBase_eventSetMapAnnounceStormAndGuideVisible_Parms
		{
			bool InVisible;
		};
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetMapAnnounceStormAndGuideVisible_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetMapAnnounceStormAndGuideVisible_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetMapAnnounceStormAndGuideVisible", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetMapAnnounceStormAndGuideVisible_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics
	{
		struct ELSSPanelInGameBase_eventSetMapOperationButtonVisibleInPause_Parms
		{
			bool InVisible;
		};
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetMapOperationButtonVisibleInPause_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetMapOperationButtonVisibleInPause_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetMapOperationButtonVisibleInPause", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetMapOperationButtonVisibleInPause_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics
	{
		struct ELSSPanelInGameBase_eventSetMinimapTexture_Parms
		{
			int32 InMinimapID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMinimapID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::NewProp_InMinimapID = { "InMinimapID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetMinimapTexture_Parms, InMinimapID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::NewProp_InMinimapID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetMinimapTexture", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetMinimapTexture_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics
	{
		struct ELSSPanelInGameBase_eventSetOperationGuideGuardState_Parms
		{
			bool InGuardState;
		};
		static void NewProp_InGuardState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGuardState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::NewProp_InGuardState_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetOperationGuideGuardState_Parms*)Obj)->InGuardState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::NewProp_InGuardState = { "InGuardState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetOperationGuideGuardState_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::NewProp_InGuardState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::NewProp_InGuardState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetOperationGuideGuardState", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetOperationGuideGuardState_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics
	{
		struct ELSSPanelInGameBase_eventSetOperationGuideVisibleInPause_Parms
		{
			bool InVisible;
		};
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetOperationGuideVisibleInPause_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetOperationGuideVisibleInPause_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetOperationGuideVisibleInPause", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetOperationGuideVisibleInPause_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics
	{
		struct ELSSPanelInGameBase_eventSetSpectatedInfo_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::NewProp_inPlayerState = { "inPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetSpectatedInfo_Parms, inPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::NewProp_inPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetSpectatedInfo", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetSpectatedInfo_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics
	{
		struct ELSSPanelInGameBase_eventSetSpectateWindowHoldRatio_Parms
		{
			float InRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetSpectateWindowHoldRatio_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetSpectateWindowHoldRatio", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetSpectateWindowHoldRatio_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics
	{
		struct ELSSPanelInGameBase_eventSetStormActor_Parms
		{
			AELSSStorm* InStormActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStormActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::NewProp_InStormActor = { "InStormActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetStormActor_Parms, InStormActor), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::NewProp_InStormActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetStormActor", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetStormActor_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics
	{
		struct ELSSPanelInGameBase_eventSetTargetActorToInteractUI_Parms
		{
			AActor* inTargetActor;
			FVector InOffset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetTargetActorToInteractUI_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::NewProp_InOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetTargetActorToInteractUI_Parms, InOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::NewProp_InOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::NewProp_InOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetTargetActorToInteractUI", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetTargetActorToInteractUI_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics
	{
		struct ELSSPanelInGameBase_eventSetupAbilityUI_Parms
		{
			TArray<FSSAbilityParam> inAbilityList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inAbilityList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inAbilityList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inAbilityList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::NewProp_inAbilityList_Inner = { "inAbilityList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::NewProp_inAbilityList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::NewProp_inAbilityList = { "inAbilityList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetupAbilityUI_Parms, inAbilityList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::NewProp_inAbilityList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::NewProp_inAbilityList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::NewProp_inAbilityList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::NewProp_inAbilityList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetupAbilityUI", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetupAbilityUI_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics
	{
		struct ELSSPanelInGameBase_eventSetVisibleAbilitySlot_Parms
		{
			int32 inSlotIndex;
			bool InVisible;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSlotIndex;
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::NewProp_inSlotIndex = { "inSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetVisibleAbilitySlot_Parms, inSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetVisibleAbilitySlot_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetVisibleAbilitySlot_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::NewProp_inSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetVisibleAbilitySlot", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetVisibleAbilitySlot_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics
	{
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetVisibleAimReticle_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetVisibleAimReticle_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::NewProp_InVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetVisibleAimReticle", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetVisibleAimReticle_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics
	{
		struct ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms
		{
			bool inIsVisible;
			bool InPlayStartSE;
			bool InPlayEndSE;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static void NewProp_InPlayStartSE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPlayStartSE;
		static void NewProp_InPlayEndSE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPlayEndSE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms*)Obj)->InPlayStartSE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE = { "InPlayStartSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms*)Obj)->InPlayEndSE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE = { "InPlayEndSE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_inIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayStartSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::NewProp_InPlayEndSE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetVisibleFeverEffect", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetVisibleFeverEffect_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics
	{
		struct ELSSPanelInGameBase_eventSetVisibleToInteractUI_Parms
		{
			ESSInteractExecute InType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetVisibleToInteractUI_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetVisibleToInteractUI", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetVisibleToInteractUI_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics
	{
		struct ELSSPanelInGameBase_eventSetVisibleToItemInteractUI_Parms
		{
			ESSInteractOperate InInteractOperate;
			ESSInteractExecute InType;
			int32 InPickupID;
			int32 InPickupDurability;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InInteractOperate_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InInteractOperate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPickupID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPickupDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InInteractOperate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InInteractOperate = { "InInteractOperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetVisibleToItemInteractUI_Parms, InInteractOperate), Z_Construct_UEnum_ABP_200508_ESSInteractOperate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetVisibleToItemInteractUI_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSInteractExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InPickupID = { "InPickupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetVisibleToItemInteractUI_Parms, InPickupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InPickupDurability = { "InPickupDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetVisibleToItemInteractUI_Parms, InPickupDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InInteractOperate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InInteractOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InPickupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::NewProp_InPickupDurability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetVisibleToItemInteractUI", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetVisibleToItemInteractUI_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics
	{
		struct ELSSPanelInGameBase_eventSetVisibleToOperationGuide_Parms
		{
			ESSOperationGuideExecute InType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventSetVisibleToOperationGuide_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSOperationGuideExecute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetVisibleToOperationGuide", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetVisibleToOperationGuide_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics
	{
		struct ELSSPanelInGameBase_eventSetVisibleToSpectateWindow_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSetVisibleToSpectateWindow_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSetVisibleToSpectateWindow_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SetVisibleToSpectateWindow", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSetVisibleToSpectateWindow_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "ShowOffVehicleStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics
	{
		struct ELSSPanelInGameBase_eventSwitchMapMode_Parms
		{
			bool InIsWholeMapMode;
		};
		static void NewProp_InIsWholeMapMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsWholeMapMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::NewProp_InIsWholeMapMode_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSwitchMapMode_Parms*)Obj)->InIsWholeMapMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::NewProp_InIsWholeMapMode = { "InIsWholeMapMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSwitchMapMode_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::NewProp_InIsWholeMapMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::NewProp_InIsWholeMapMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SwitchMapMode", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSwitchMapMode_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics
	{
		struct ELSSPanelInGameBase_eventSwitchWrestlerHpType_Parms
		{
			bool InIsDownHpGaugeShow;
		};
		static void NewProp_InIsDownHpGaugeShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsDownHpGaugeShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::NewProp_InIsDownHpGaugeShow_SetBit(void* Obj)
	{
		((ELSSPanelInGameBase_eventSwitchWrestlerHpType_Parms*)Obj)->InIsDownHpGaugeShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::NewProp_InIsDownHpGaugeShow = { "InIsDownHpGaugeShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelInGameBase_eventSwitchWrestlerHpType_Parms), &Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::NewProp_InIsDownHpGaugeShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::NewProp_InIsDownHpGaugeShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "SwitchWrestlerHpType", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventSwitchWrestlerHpType_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "UpdateKeyConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPanelInGameBase_eventUpdatePlayInAnimation_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelInGameBase, nullptr, "UpdatePlayInAnimation", nullptr, nullptr, sizeof(ELSSPanelInGameBase_eventUpdatePlayInAnimation_Parms), Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPanelInGameBase_NoRegister()
	{
		return UELSSPanelInGameBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPanelInGameBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterHpgaugeContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterHpgaugeContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineIDContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineIDContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractPointContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractPointContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttentionGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaCountDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaCountDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrestlerStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatMeater_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatMeater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationGuide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationGuide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LogSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interact_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSSkillNotice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSSkillNotice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectateWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spectators_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spectators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnimationElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayInAnimationElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayingPlayInAnimation_MetaData[];
#endif
		static void NewProp_IsPlayingPlayInAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayingPlayInAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPanelInGameBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSPanelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPanelInGameBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_AddMessage, "AddMessage" }, // 1098769362
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_AddMultiColorLogMessage, "AddMultiColorLogMessage" }, // 1242050995
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityCoolTimeGauge, "ApplyAbilityCoolTimeGauge" }, // 2685036935
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAbilityEffectiveGauge, "ApplyAbilityEffectiveGauge" }, // 2943176448
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAliveCount, "ApplyAliveCount" }, // 900307654
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAnnouncePlate, "ApplyAnnouncePlate" }, // 56998350
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionBoostValue, "ApplyAttentionBoostValue" }, // 2786626710
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyAttentionGauge, "ApplyAttentionGauge" }, // 1078625636
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyCharacterHpGauge, "ApplyCharacterHpGauge" }, // 2828500510
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHasCarrotMedal, "ApplyHasCarrotMedal" }, // 2585983446
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHeatMeater, "ApplyHeatMeater" }, // 1347558177
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyHUDWatchGameMode, "ApplyHUDWatchGameMode" }, // 3698330766
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInteractPoint, "ApplyInteractPoint" }, // 213621772
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryBareIconGuideState, "ApplyInventoryBareIconGuideState" }, // 1367925829
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyInventoryIcon, "ApplyInventoryIcon" }, // 365755544
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyKOCount, "ApplyKOCount" }, // 2278395296
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyOnlineID, "ApplyOnlineID" }, // 4155726537
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyRatioToInteractUI, "ApplyRatioToInteractUI" }, // 1982210744
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyShieldDurableValue, "ApplyShieldDurableValue" }, // 4253474939
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplySpectators, "ApplySpectators" }, // 1511260426
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyStormTime, "ApplyStormTime" }, // 3313258166
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyVehicleStatusDurability, "ApplyVehicleStatusDurability" }, // 2544937313
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerDownHp, "ApplyWrestlerDownHp" }, // 1998781738
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ApplyWrestlerHp, "ApplyWrestlerHp" }, // 3085762430
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_CancelSpectateWindowHold, "CancelSpectateWindowHold" }, // 691326490
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_CloseAllExcludedSpectateWindow, "CloseAllExcludedSpectateWindow" }, // 1128645118
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_CloseItemProgressBar, "CloseItemProgressBar" }, // 3324578149
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_DeleteInventoryIcon, "DeleteInventoryIcon" }, // 3060131879
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_IsItemProgressBarShow, "IsItemProgressBarShow" }, // 2358670514
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_OnChangeSpectateUser, "OnChangeSpectateUser" }, // 2173499230
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_OnPushQuitMatch, "OnPushQuitMatch" }, // 960732588
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_OpenItemProgressBar, "OpenItemProgressBar" }, // 2669558274
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_PlayInAnimation, "PlayInAnimation" }, // 2326186524
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_PlaySSSkillNotice, "PlaySSSkillNotice" }, // 1081833907
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllAbilities, "ResetAllAbilities" }, // 4151463691
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ResetAllLogs, "ResetAllLogs" }, // 1477045631
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ResetAttentionGauge, "ResetAttentionGauge" }, // 2120305488
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ResetSSSkillNotice, "ResetSSSkillNotice" }, // 4010519028
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityGuideVisible, "SetAbilityGuideVisible" }, // 874175318
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityHoldButtonVisible, "SetAbilityHoldButtonVisible" }, // 3245345835
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetAbilityVisible, "SetAbilityVisible" }, // 1747699628
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetActorUICanShow, "SetActorUICanShow" }, // 3973396038
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetAndApplyMaxAttentionValue, "SetAndApplyMaxAttentionValue" }, // 2551403574
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetGamerTag, "SetGamerTag" }, // 1877056732
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryIconValue, "SetInventoryIconValue" }, // 2662543254
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryItem, "SetInventoryItem" }, // 3327861904
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryLimit, "SetInventoryLimit" }, // 3482197429
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryOperationButtonVisibleInPause, "SetInventoryOperationButtonVisibleInPause" }, // 785252318
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryPosition, "SetInventoryPosition" }, // 940846371
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetInventoryVisible, "SetInventoryVisible" }, // 802282411
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetMapAnnounceStormAndGuideVisible, "SetMapAnnounceStormAndGuideVisible" }, // 80887601
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetMapOperationButtonVisibleInPause, "SetMapOperationButtonVisibleInPause" }, // 4117513072
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetMinimapTexture, "SetMinimapTexture" }, // 1895076471
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideGuardState, "SetOperationGuideGuardState" }, // 2994957940
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetOperationGuideVisibleInPause, "SetOperationGuideVisibleInPause" }, // 464427456
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectatedInfo, "SetSpectatedInfo" }, // 3091589274
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetSpectateWindowHoldRatio, "SetSpectateWindowHoldRatio" }, // 879558692
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetStormActor, "SetStormActor" }, // 3179955419
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetTargetActorToInteractUI, "SetTargetActorToInteractUI" }, // 1650414760
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetupAbilityUI, "SetupAbilityUI" }, // 3986350739
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAbilitySlot, "SetVisibleAbilitySlot" }, // 204245615
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleAimReticle, "SetVisibleAimReticle" }, // 3127630320
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleFeverEffect, "SetVisibleFeverEffect" }, // 1357308101
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToInteractUI, "SetVisibleToInteractUI" }, // 3113351261
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToItemInteractUI, "SetVisibleToItemInteractUI" }, // 2063099036
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToOperationGuide, "SetVisibleToOperationGuide" }, // 518636978
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SetVisibleToSpectateWindow, "SetVisibleToSpectateWindow" }, // 2176730242
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_ShowOffVehicleStatus, "ShowOffVehicleStatus" }, // 2348051380
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SwitchMapMode, "SwitchMapMode" }, // 1083499180
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_SwitchWrestlerHpType, "SwitchWrestlerHpType" }, // 2845259502
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_UpdateKeyConfig, "UpdateKeyConfig" }, // 3423173501
		{ &Z_Construct_UFunction_UELSSPanelInGameBase_UpdatePlayInAnimation, "UpdatePlayInAnimation" }, // 3184317030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPanelInGameBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AbilityContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AbilityContainer = { "AbilityContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, AbilityContainer), Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AbilityContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AbilityContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_CharacterHpgaugeContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_CharacterHpgaugeContainer = { "CharacterHpgaugeContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, CharacterHpgaugeContainer), Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_CharacterHpgaugeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_CharacterHpgaugeContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OnlineIDContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OnlineIDContainer = { "OnlineIDContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, OnlineIDContainer), Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OnlineIDContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OnlineIDContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_InteractPointContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_InteractPointContainer = { "InteractPointContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, InteractPointContainer), Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_InteractPointContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_InteractPointContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AttentionGauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AttentionGauge = { "AttentionGauge", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, AttentionGauge), Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AttentionGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AttentionGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AreaCountDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AreaCountDown = { "AreaCountDown", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, AreaCountDown), Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AreaCountDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AreaCountDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_WrestlerStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_WrestlerStatus = { "WrestlerStatus", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, WrestlerStatus), Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_WrestlerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_WrestlerStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_HeatMeater_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_HeatMeater = { "HeatMeater", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, HeatMeater), Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_HeatMeater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_HeatMeater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_MiniMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_MiniMap = { "MiniMap", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, MiniMap), Z_Construct_UClass_UELSSWidgetHUD_MapUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_MiniMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_MiniMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, Inventory), Z_Construct_UClass_UELSSWidgetHUD_Inventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OperationGuide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OperationGuide = { "OperationGuide", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, OperationGuide), Z_Construct_UClass_UELSSWidgetHUD_OperationGuide_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OperationGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OperationGuide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_LogSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_LogSet = { "LogSet", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, LogSet), Z_Construct_UClass_UELSSWidgetHUD_SSLogSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_LogSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_LogSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Interact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Interact = { "Interact", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, Interact), Z_Construct_UClass_UELSSWidgetHUD_Interact_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Interact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Interact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SSSkillNotice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SSSkillNotice = { "SSSkillNotice", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, SSSkillNotice), Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SSSkillNotice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SSSkillNotice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SpectateWindow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SpectateWindow = { "SpectateWindow", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, SpectateWindow), Z_Construct_UClass_UELSSWidgetHUD_SSSpectateWindow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SpectateWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SpectateWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Spectators_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Spectators = { "Spectators", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, Spectators), Z_Construct_UClass_UELSSWidgetHUD_SSSpectators_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Spectators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Spectators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_VehicleStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_VehicleStatus = { "VehicleStatus", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, VehicleStatus), Z_Construct_UClass_UELSSWidgetHUD_VehicleStatus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_VehicleStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_VehicleStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnimationElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnimationElapsed = { "PlayInAnimationElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPanelInGameBase, PlayInAnimationElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnimationElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnimationElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_IsPlayingPlayInAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPanelInGameBase" },
		{ "ModuleRelativePath", "Public/ELSSPanelInGameBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_IsPlayingPlayInAnimation_SetBit(void* Obj)
	{
		((UELSSPanelInGameBase*)Obj)->IsPlayingPlayInAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_IsPlayingPlayInAnimation = { "IsPlayingPlayInAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSPanelInGameBase), &Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_IsPlayingPlayInAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_IsPlayingPlayInAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_IsPlayingPlayInAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSPanelInGameBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AbilityContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_CharacterHpgaugeContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OnlineIDContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_InteractPointContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AttentionGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_AreaCountDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_WrestlerStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_HeatMeater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_MiniMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_OperationGuide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_LogSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Interact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SSSkillNotice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_SpectateWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_Spectators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_VehicleStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_PlayInAnimationElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPanelInGameBase_Statics::NewProp_IsPlayingPlayInAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPanelInGameBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPanelInGameBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPanelInGameBase_Statics::ClassParams = {
		&UELSSPanelInGameBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSPanelInGameBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPanelInGameBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelInGameBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPanelInGameBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPanelInGameBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPanelInGameBase, 2351095516);
	template<> ABP_200508_API UClass* StaticClass<UELSSPanelInGameBase>()
	{
		return UELSSPanelInGameBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPanelInGameBase(Z_Construct_UClass_UELSSPanelInGameBase, &UELSSPanelInGameBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPanelInGameBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPanelInGameBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
