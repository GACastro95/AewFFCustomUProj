// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionStateBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionCameraID();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageReactionParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStatePlayerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EActionStateMontagePlayResult();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionTransitableCondition();
// End Cross Module References
	DEFINE_FUNCTION(UELSSActionStateBase::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execCanDisappear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDisappear_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execCanLand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanLand_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execCheckOwnerLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckOwnerLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execDeactivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deactivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execDetectSituationHitReaction)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_inHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetectSituationHitReaction(Z_Param_Out_inHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetCharacterMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSCharacterMovementComponent**)Z_Param__Result=P_THIS->GetCharacterMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetCurrentMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetCurrentMontageReplaced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentMontageReplaced();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetCurrentMoveActionCameraID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSActionCameraID*)Z_Param__Result=P_THIS->GetCurrentMoveActionCameraID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetDamageFallingMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetDamageFallingMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetDamageLandMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetDamageLandMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetDamageReactionMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetDamageReactionMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetDamageReactionParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSDamageReactionParam*)Z_Param__Result=P_THIS->GetDamageReactionParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetDamageReceiverState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSDamageReceiverState*)Z_Param__Result=P_THIS->GetDamageReceiverState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetFirstMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetFirstMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetInvolveDamageAttackId)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outMoveId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outAttackHitId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInvolveDamageAttackId_Implementation(Z_Param_Out_outMoveId,Z_Param_Out_outAttackHitId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetInvolveFeedbackDamageAttackId)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outMoveId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outAttackHitId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInvolveFeedbackDamageAttackId_Implementation(Z_Param_Out_outMoveId,Z_Param_Out_outAttackHitId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetMaxLandingLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxLandingLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetMoveSpeedScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeedScale_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwnerActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetOwnerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetOwnerCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetOwnerPlayerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayerCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetPlayingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetReceiverMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_inAttackerMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetReceiverMontage_Implementation(Z_Param_inAttackerMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetSyncMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSActionStateSyncMode*)Z_Param__Result=P_THIS->GetSyncMode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetTransitableMove)
	{
		P_GET_ENUM(ESSActionTransitTrigger,Z_Param_transitTrigger);
		P_GET_ENUM_REF(ESSMoveCommand,Z_Param_Out_outMoveCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTransitableMove(ESSActionTransitTrigger(Z_Param_transitTrigger),(ESSMoveCommand&)(Z_Param_Out_outMoveCommand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetTransitableState)
	{
		P_GET_ENUM(ESSActionTransitTrigger,Z_Param_transitTrigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UELSSActionStateBase> *)Z_Param__Result=P_THIS->GetTransitableState_Implementation(ESSActionTransitTrigger(Z_Param_transitTrigger));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execGetTransitableStateDefault)
	{
		P_GET_ENUM(ESSActionTransitTrigger,Z_Param_transitTrigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UELSSActionStateBase> *)Z_Param__Result=P_THIS->GetTransitableStateDefault(ESSActionTransitTrigger(Z_Param_transitTrigger));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execIgnoreMovementCorrect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IgnoreMovementCorrect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execInitialize)
	{
		P_GET_OBJECT(UELSSActionStatePlayerComponent,Z_Param_inOwnerComponent);
		P_GET_OBJECT(UAnimInstance,Z_Param_inAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_inOwnerComponent,Z_Param_inAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execIsAffectedBySlip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAffectedBySlip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execIsEnableFallCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableFallCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execIsEnableMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableMovement_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execIsEnablePickupVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnablePickupVisible_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execIsEnableUpperBodyAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableUpperBodyAnim_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execIsInAir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInAir_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execNativeUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeUpdate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBegin_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnLand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLand_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnMovable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovable_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnNotifyJumpUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyJumpUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnNotifyMotionEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyMotionEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnNotifySyncOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifySyncOff_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnPrePlayFirstMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrePlayFirstMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnSimulateLand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSimulateLand_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execOnTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execPlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_inMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMontage_Implementation(Z_Param_inMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execPlayMontageBranch)
	{
		P_GET_ENUM_REF(EActionStateMontagePlayResult,Z_Param_Out_Result);
		P_GET_OBJECT(UAnimMontage,Z_Param_inCurrentMontage);
		P_GET_OBJECT(UAnimMontage,Z_Param_inPlayMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMontageBranch((EActionStateMontagePlayResult&)(Z_Param_Out_Result),Z_Param_inCurrentMontage,Z_Param_inPlayMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execReserveMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_inMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveMontage_Implementation(Z_Param_inMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execSetEnableCancelTransit)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableCancelTransit(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execSetEnableMovableTransit)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableMovableTransit(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execSetMontageLo)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_inMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMontageLo(Z_Param_inMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execSetMontageSt)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_inMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMontageSt(Z_Param_inMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execStopMontage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMontage_Implementation(Z_Param_BlendOutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionStateBase::execUpdateMovementParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMovementParam();
		P_NATIVE_END;
	}
	static FName NAME_UELSSActionStateBase_CanDisappear = FName(TEXT("CanDisappear"));
	bool UELSSActionStateBase::CanDisappear() const
	{
		ELSSActionStateBase_eventCanDisappear_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_CanDisappear),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_CanLand = FName(TEXT("CanLand"));
	bool UELSSActionStateBase::CanLand() const
	{
		ELSSActionStateBase_eventCanLand_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_CanLand),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_GetCurrentMontage = FName(TEXT("GetCurrentMontage"));
	UAnimMontage* UELSSActionStateBase::GetCurrentMontage() const
	{
		ELSSActionStateBase_eventGetCurrentMontage_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetCurrentMontage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_GetDamageReceiverState = FName(TEXT("GetDamageReceiverState"));
	ESSDamageReceiverState UELSSActionStateBase::GetDamageReceiverState() const
	{
		ELSSActionStateBase_eventGetDamageReceiverState_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetDamageReceiverState),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_GetFirstMontage = FName(TEXT("GetFirstMontage"));
	UAnimMontage* UELSSActionStateBase::GetFirstMontage() const
	{
		ELSSActionStateBase_eventGetFirstMontage_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetFirstMontage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_GetInvolveDamageAttackId = FName(TEXT("GetInvolveDamageAttackId"));
	void UELSSActionStateBase::GetInvolveDamageAttackId(int32& outMoveId, int32& outAttackHitId) const
	{
		ELSSActionStateBase_eventGetInvolveDamageAttackId_Parms Parms;
		Parms.outMoveId=outMoveId;
		Parms.outAttackHitId=outAttackHitId;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetInvolveDamageAttackId),&Parms);
		outMoveId=Parms.outMoveId;
		outAttackHitId=Parms.outAttackHitId;
	}
	static FName NAME_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId = FName(TEXT("GetInvolveFeedbackDamageAttackId"));
	void UELSSActionStateBase::GetInvolveFeedbackDamageAttackId(int32& outMoveId, int32& outAttackHitId) const
	{
		ELSSActionStateBase_eventGetInvolveFeedbackDamageAttackId_Parms Parms;
		Parms.outMoveId=outMoveId;
		Parms.outAttackHitId=outAttackHitId;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId),&Parms);
		outMoveId=Parms.outMoveId;
		outAttackHitId=Parms.outAttackHitId;
	}
	static FName NAME_UELSSActionStateBase_GetMoveSpeedScale = FName(TEXT("GetMoveSpeedScale"));
	float UELSSActionStateBase::GetMoveSpeedScale() const
	{
		ELSSActionStateBase_eventGetMoveSpeedScale_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetMoveSpeedScale),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_GetReceiverMontage = FName(TEXT("GetReceiverMontage"));
	UAnimMontage* UELSSActionStateBase::GetReceiverMontage(UAnimMontage* inAttackerMontage)
	{
		ELSSActionStateBase_eventGetReceiverMontage_Parms Parms;
		Parms.inAttackerMontage=inAttackerMontage;
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetReceiverMontage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_GetSyncMode = FName(TEXT("GetSyncMode"));
	ESSActionStateSyncMode UELSSActionStateBase::GetSyncMode() const
	{
		ELSSActionStateBase_eventGetSyncMode_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetSyncMode),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_GetTransitableState = FName(TEXT("GetTransitableState"));
	TSubclassOf<UELSSActionStateBase>  UELSSActionStateBase::GetTransitableState(ESSActionTransitTrigger transitTrigger) const
	{
		ELSSActionStateBase_eventGetTransitableState_Parms Parms;
		Parms.transitTrigger=transitTrigger;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_GetTransitableState),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_IgnoreMovementCorrect = FName(TEXT("IgnoreMovementCorrect"));
	bool UELSSActionStateBase::IgnoreMovementCorrect() const
	{
		ELSSActionStateBase_eventIgnoreMovementCorrect_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_IgnoreMovementCorrect),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_IsAffectedBySlip = FName(TEXT("IsAffectedBySlip"));
	bool UELSSActionStateBase::IsAffectedBySlip() const
	{
		ELSSActionStateBase_eventIsAffectedBySlip_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_IsAffectedBySlip),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_IsEnableMovement = FName(TEXT("IsEnableMovement"));
	bool UELSSActionStateBase::IsEnableMovement() const
	{
		ELSSActionStateBase_eventIsEnableMovement_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_IsEnableMovement),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_IsEnablePickupVisible = FName(TEXT("IsEnablePickupVisible"));
	bool UELSSActionStateBase::IsEnablePickupVisible() const
	{
		ELSSActionStateBase_eventIsEnablePickupVisible_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_IsEnablePickupVisible),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_IsEnableUpperBodyAnim = FName(TEXT("IsEnableUpperBodyAnim"));
	bool UELSSActionStateBase::IsEnableUpperBodyAnim() const
	{
		ELSSActionStateBase_eventIsEnableUpperBodyAnim_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_IsEnableUpperBodyAnim),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_IsInAir = FName(TEXT("IsInAir"));
	bool UELSSActionStateBase::IsInAir() const
	{
		ELSSActionStateBase_eventIsInAir_Parms Parms;
		const_cast<UELSSActionStateBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_IsInAir),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSActionStateBase_OnBegin = FName(TEXT("OnBegin"));
	void UELSSActionStateBase::OnBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnBegin),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnEnd = FName(TEXT("OnEnd"));
	void UELSSActionStateBase::OnEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnEnd),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnLand = FName(TEXT("OnLand"));
	void UELSSActionStateBase::OnLand()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnLand),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnMovable = FName(TEXT("OnMovable"));
	void UELSSActionStateBase::OnMovable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnMovable),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnNotifyJumpUp = FName(TEXT("OnNotifyJumpUp"));
	void UELSSActionStateBase::OnNotifyJumpUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnNotifyJumpUp),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnNotifyMotionEnd = FName(TEXT("OnNotifyMotionEnd"));
	void UELSSActionStateBase::OnNotifyMotionEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnNotifyMotionEnd),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnNotifySyncOff = FName(TEXT("OnNotifySyncOff"));
	void UELSSActionStateBase::OnNotifySyncOff()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnNotifySyncOff),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnPostUpdateMovementParam = FName(TEXT("OnPostUpdateMovementParam"));
	void UELSSActionStateBase::OnPostUpdateMovementParam()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnPostUpdateMovementParam),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnPrePlayFirstMontage = FName(TEXT("OnPrePlayFirstMontage"));
	void UELSSActionStateBase::OnPrePlayFirstMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnPrePlayFirstMontage),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnSimulateLand = FName(TEXT("OnSimulateLand"));
	void UELSSActionStateBase::OnSimulateLand()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnSimulateLand),NULL);
	}
	static FName NAME_UELSSActionStateBase_OnTick = FName(TEXT("OnTick"));
	void UELSSActionStateBase::OnTick(float DeltaTime)
	{
		ELSSActionStateBase_eventOnTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_OnTick),&Parms);
	}
	static FName NAME_UELSSActionStateBase_PlayMontage = FName(TEXT("PlayMontage"));
	void UELSSActionStateBase::PlayMontage(UAnimMontage* inMontage)
	{
		ELSSActionStateBase_eventPlayMontage_Parms Parms;
		Parms.inMontage=inMontage;
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_PlayMontage),&Parms);
	}
	static FName NAME_UELSSActionStateBase_ReserveMontage = FName(TEXT("ReserveMontage"));
	void UELSSActionStateBase::ReserveMontage(UAnimMontage* inMontage)
	{
		ELSSActionStateBase_eventReserveMontage_Parms Parms;
		Parms.inMontage=inMontage;
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_ReserveMontage),&Parms);
	}
	static FName NAME_UELSSActionStateBase_StopMontage = FName(TEXT("StopMontage"));
	void UELSSActionStateBase::StopMontage(float BlendOutTime)
	{
		ELSSActionStateBase_eventStopMontage_Parms Parms;
		Parms.BlendOutTime=BlendOutTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionStateBase_StopMontage),&Parms);
	}
	void UELSSActionStateBase::StaticRegisterNativesUELSSActionStateBase()
	{
		UClass* Class = UELSSActionStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UELSSActionStateBase::execActivate },
			{ "CanDisappear", &UELSSActionStateBase::execCanDisappear },
			{ "CanLand", &UELSSActionStateBase::execCanLand },
			{ "CheckOwnerLocallyControlled", &UELSSActionStateBase::execCheckOwnerLocallyControlled },
			{ "Deactivate", &UELSSActionStateBase::execDeactivate },
			{ "DetectSituationHitReaction", &UELSSActionStateBase::execDetectSituationHitReaction },
			{ "GetCharacterMovement", &UELSSActionStateBase::execGetCharacterMovement },
			{ "GetCurrentMontage", &UELSSActionStateBase::execGetCurrentMontage },
			{ "GetCurrentMontageReplaced", &UELSSActionStateBase::execGetCurrentMontageReplaced },
			{ "GetCurrentMoveActionCameraID", &UELSSActionStateBase::execGetCurrentMoveActionCameraID },
			{ "GetDamageFallingMontage", &UELSSActionStateBase::execGetDamageFallingMontage },
			{ "GetDamageLandMontage", &UELSSActionStateBase::execGetDamageLandMontage },
			{ "GetDamageReactionMontage", &UELSSActionStateBase::execGetDamageReactionMontage },
			{ "GetDamageReactionParam", &UELSSActionStateBase::execGetDamageReactionParam },
			{ "GetDamageReceiverState", &UELSSActionStateBase::execGetDamageReceiverState },
			{ "GetFirstMontage", &UELSSActionStateBase::execGetFirstMontage },
			{ "GetInvolveDamageAttackId", &UELSSActionStateBase::execGetInvolveDamageAttackId },
			{ "GetInvolveFeedbackDamageAttackId", &UELSSActionStateBase::execGetInvolveFeedbackDamageAttackId },
			{ "GetMaxLandingLevel", &UELSSActionStateBase::execGetMaxLandingLevel },
			{ "GetMoveSpeedScale", &UELSSActionStateBase::execGetMoveSpeedScale },
			{ "GetOwnerActor", &UELSSActionStateBase::execGetOwnerActor },
			{ "GetOwnerCharacter", &UELSSActionStateBase::execGetOwnerCharacter },
			{ "GetOwnerPlayerCharacter", &UELSSActionStateBase::execGetOwnerPlayerCharacter },
			{ "GetPlayingTime", &UELSSActionStateBase::execGetPlayingTime },
			{ "GetReceiverMontage", &UELSSActionStateBase::execGetReceiverMontage },
			{ "GetSyncMode", &UELSSActionStateBase::execGetSyncMode },
			{ "GetTransitableMove", &UELSSActionStateBase::execGetTransitableMove },
			{ "GetTransitableState", &UELSSActionStateBase::execGetTransitableState },
			{ "GetTransitableStateDefault", &UELSSActionStateBase::execGetTransitableStateDefault },
			{ "IgnoreMovementCorrect", &UELSSActionStateBase::execIgnoreMovementCorrect },
			{ "Initialize", &UELSSActionStateBase::execInitialize },
			{ "IsAffectedBySlip", &UELSSActionStateBase::execIsAffectedBySlip },
			{ "IsEnableFallCancel", &UELSSActionStateBase::execIsEnableFallCancel },
			{ "IsEnableMovement", &UELSSActionStateBase::execIsEnableMovement },
			{ "IsEnablePickupVisible", &UELSSActionStateBase::execIsEnablePickupVisible },
			{ "IsEnableUpperBodyAnim", &UELSSActionStateBase::execIsEnableUpperBodyAnim },
			{ "IsInAir", &UELSSActionStateBase::execIsInAir },
			{ "NativeUpdate", &UELSSActionStateBase::execNativeUpdate },
			{ "OnBegin", &UELSSActionStateBase::execOnBegin },
			{ "OnEnd", &UELSSActionStateBase::execOnEnd },
			{ "OnLand", &UELSSActionStateBase::execOnLand },
			{ "OnMovable", &UELSSActionStateBase::execOnMovable },
			{ "OnNotifyJumpUp", &UELSSActionStateBase::execOnNotifyJumpUp },
			{ "OnNotifyMotionEnd", &UELSSActionStateBase::execOnNotifyMotionEnd },
			{ "OnNotifySyncOff", &UELSSActionStateBase::execOnNotifySyncOff },
			{ "OnPrePlayFirstMontage", &UELSSActionStateBase::execOnPrePlayFirstMontage },
			{ "OnSimulateLand", &UELSSActionStateBase::execOnSimulateLand },
			{ "OnTick", &UELSSActionStateBase::execOnTick },
			{ "PlayMontage", &UELSSActionStateBase::execPlayMontage },
			{ "PlayMontageBranch", &UELSSActionStateBase::execPlayMontageBranch },
			{ "ReserveMontage", &UELSSActionStateBase::execReserveMontage },
			{ "SetEnableCancelTransit", &UELSSActionStateBase::execSetEnableCancelTransit },
			{ "SetEnableMovableTransit", &UELSSActionStateBase::execSetEnableMovableTransit },
			{ "SetMontageLo", &UELSSActionStateBase::execSetMontageLo },
			{ "SetMontageSt", &UELSSActionStateBase::execSetMontageSt },
			{ "StopMontage", &UELSSActionStateBase::execStopMontage },
			{ "UpdateMovementParam", &UELSSActionStateBase::execUpdateMovementParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventCanDisappear_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventCanDisappear_Parms), &Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "CanDisappear", nullptr, nullptr, sizeof(ELSSActionStateBase_eventCanDisappear_Parms), Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_CanDisappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_CanDisappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventCanLand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventCanLand_Parms), &Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "CanLand", nullptr, nullptr, sizeof(ELSSActionStateBase_eventCanLand_Parms), Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_CanLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_CanLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics
	{
		struct ELSSActionStateBase_eventCheckOwnerLocallyControlled_Parms
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
	void Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventCheckOwnerLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventCheckOwnerLocallyControlled_Parms), &Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "CheckOwnerLocallyControlled", nullptr, nullptr, sizeof(ELSSActionStateBase_eventCheckOwnerLocallyControlled_Parms), Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_Deactivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_Deactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics
	{
		struct ELSSActionStateBase_eventDetectSituationHitReaction_Parms
		{
			FHitResult inHitResult;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inHitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_inHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_inHitResult = { "inHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventDetectSituationHitReaction_Parms, inHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_inHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_inHitResult_MetaData)) };
	void Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventDetectSituationHitReaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventDetectSituationHitReaction_Parms), &Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_inHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "DetectSituationHitReaction", nullptr, nullptr, sizeof(ELSSActionStateBase_eventDetectSituationHitReaction_Parms), Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics
	{
		struct ELSSActionStateBase_eventGetCharacterMovement_Parms
		{
			UELSSCharacterMovementComponent* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_UELSSCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetCharacterMovement", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetCharacterMovement_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetCurrentMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetCurrentMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetCurrentMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics
	{
		struct ELSSActionStateBase_eventGetCurrentMontageReplaced_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetCurrentMontageReplaced_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetCurrentMontageReplaced", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetCurrentMontageReplaced_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics
	{
		struct ELSSActionStateBase_eventGetCurrentMoveActionCameraID_Parms
		{
			ESSActionCameraID ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetCurrentMoveActionCameraID_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetCurrentMoveActionCameraID", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetCurrentMoveActionCameraID_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics
	{
		struct ELSSActionStateBase_eventGetDamageFallingMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetDamageFallingMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetDamageFallingMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetDamageFallingMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics
	{
		struct ELSSActionStateBase_eventGetDamageLandMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetDamageLandMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetDamageLandMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetDamageLandMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics
	{
		struct ELSSActionStateBase_eventGetDamageReactionMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetDamageReactionMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetDamageReactionMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetDamageReactionMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics
	{
		struct ELSSActionStateBase_eventGetDamageReactionParam_Parms
		{
			FSSDamageReactionParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetDamageReactionParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSDamageReactionParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetDamageReactionParam", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetDamageReactionParam_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetDamageReceiverState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetDamageReceiverState", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetDamageReceiverState_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetFirstMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetFirstMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetFirstMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outMoveId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outAttackHitId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::NewProp_outMoveId = { "outMoveId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetInvolveDamageAttackId_Parms, outMoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::NewProp_outAttackHitId = { "outAttackHitId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetInvolveDamageAttackId_Parms, outAttackHitId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::NewProp_outMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::NewProp_outAttackHitId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetInvolveDamageAttackId", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetInvolveDamageAttackId_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outMoveId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outAttackHitId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::NewProp_outMoveId = { "outMoveId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetInvolveFeedbackDamageAttackId_Parms, outMoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::NewProp_outAttackHitId = { "outAttackHitId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetInvolveFeedbackDamageAttackId_Parms, outAttackHitId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::NewProp_outMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::NewProp_outAttackHitId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetInvolveFeedbackDamageAttackId", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetInvolveFeedbackDamageAttackId_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics
	{
		struct ELSSActionStateBase_eventGetMaxLandingLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetMaxLandingLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetMaxLandingLevel", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetMaxLandingLevel_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetMoveSpeedScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetMoveSpeedScale", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetMoveSpeedScale_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics
	{
		struct ELSSActionStateBase_eventGetOwnerActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetOwnerActor", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetOwnerActor_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics
	{
		struct ELSSActionStateBase_eventGetOwnerCharacter_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetOwnerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetOwnerCharacter", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetOwnerCharacter_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics
	{
		struct ELSSActionStateBase_eventGetOwnerPlayerCharacter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetOwnerPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetOwnerPlayerCharacter", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetOwnerPlayerCharacter_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics
	{
		struct ELSSActionStateBase_eventGetPlayingTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetPlayingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetPlayingTime", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetPlayingTime_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inAttackerMontage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::NewProp_inAttackerMontage = { "inAttackerMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetReceiverMontage_Parms, inAttackerMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetReceiverMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::NewProp_inAttackerMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetReceiverMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetReceiverMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetSyncMode_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetSyncMode", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetSyncMode_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics
	{
		struct ELSSActionStateBase_eventGetTransitableMove_Parms
		{
			ESSActionTransitTrigger transitTrigger;
			ESSMoveCommand outMoveCommand;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_transitTrigger_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_transitTrigger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outMoveCommand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_outMoveCommand;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_transitTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_transitTrigger = { "transitTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetTransitableMove_Parms, transitTrigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_outMoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_outMoveCommand = { "outMoveCommand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetTransitableMove_Parms, outMoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetTransitableMove_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_transitTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_transitTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_outMoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_outMoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetTransitableMove", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetTransitableMove_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_transitTrigger_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_transitTrigger;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::NewProp_transitTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::NewProp_transitTrigger = { "transitTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetTransitableState_Parms, transitTrigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetTransitableState_Parms, ReturnValue), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::NewProp_transitTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::NewProp_transitTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetTransitableState", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetTransitableState_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics
	{
		struct ELSSActionStateBase_eventGetTransitableStateDefault_Parms
		{
			ESSActionTransitTrigger transitTrigger;
			TSubclassOf<UELSSActionStateBase>  ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_transitTrigger_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_transitTrigger;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::NewProp_transitTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::NewProp_transitTrigger = { "transitTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetTransitableStateDefault_Parms, transitTrigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventGetTransitableStateDefault_Parms, ReturnValue), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::NewProp_transitTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::NewProp_transitTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "GetTransitableStateDefault", nullptr, nullptr, sizeof(ELSSActionStateBase_eventGetTransitableStateDefault_Parms), Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventIgnoreMovementCorrect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventIgnoreMovementCorrect_Parms), &Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "IgnoreMovementCorrect", nullptr, nullptr, sizeof(ELSSActionStateBase_eventIgnoreMovementCorrect_Parms), Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics
	{
		struct ELSSActionStateBase_eventInitialize_Parms
		{
			UELSSActionStatePlayerComponent* inOwnerComponent;
			UAnimInstance* inAnimInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inOwnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inOwnerComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inAnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::NewProp_inOwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::NewProp_inOwnerComponent = { "inOwnerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventInitialize_Parms, inOwnerComponent), Z_Construct_UClass_UELSSActionStatePlayerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::NewProp_inOwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::NewProp_inOwnerComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::NewProp_inAnimInstance = { "inAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventInitialize_Parms, inAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::NewProp_inOwnerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::NewProp_inAnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "Initialize", nullptr, nullptr, sizeof(ELSSActionStateBase_eventInitialize_Parms), Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventIsAffectedBySlip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventIsAffectedBySlip_Parms), &Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "IsAffectedBySlip", nullptr, nullptr, sizeof(ELSSActionStateBase_eventIsAffectedBySlip_Parms), Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics
	{
		struct ELSSActionStateBase_eventIsEnableFallCancel_Parms
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
	void Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventIsEnableFallCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventIsEnableFallCancel_Parms), &Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "IsEnableFallCancel", nullptr, nullptr, sizeof(ELSSActionStateBase_eventIsEnableFallCancel_Parms), Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventIsEnableMovement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventIsEnableMovement_Parms), &Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "IsEnableMovement", nullptr, nullptr, sizeof(ELSSActionStateBase_eventIsEnableMovement_Parms), Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventIsEnablePickupVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventIsEnablePickupVisible_Parms), &Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "IsEnablePickupVisible", nullptr, nullptr, sizeof(ELSSActionStateBase_eventIsEnablePickupVisible_Parms), Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventIsEnableUpperBodyAnim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventIsEnableUpperBodyAnim_Parms), &Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "IsEnableUpperBodyAnim", nullptr, nullptr, sizeof(ELSSActionStateBase_eventIsEnableUpperBodyAnim_Parms), Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventIsInAir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventIsInAir_Parms), &Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "IsInAir", nullptr, nullptr, sizeof(ELSSActionStateBase_eventIsInAir_Parms), Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_IsInAir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_IsInAir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics
	{
		struct ELSSActionStateBase_eventNativeUpdate_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventNativeUpdate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "NativeUpdate", nullptr, nullptr, sizeof(ELSSActionStateBase_eventNativeUpdate_Parms), Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnLand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnLand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnMovable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnMovable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnMovable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnMovable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnMovable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnMovable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnMovable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnMovable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnNotifyJumpUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnNotifyMotionEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnNotifySyncOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnPostUpdateMovementParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnPrePlayFirstMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnSimulateLand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventOnTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "OnTick", nullptr, nullptr, sizeof(ELSSActionStateBase_eventOnTick_Parms), Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::NewProp_inMontage = { "inMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventPlayMontage_Parms, inMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::NewProp_inMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "PlayMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventPlayMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics
	{
		struct ELSSActionStateBase_eventPlayMontageBranch_Parms
		{
			EActionStateMontagePlayResult Result;
			UAnimMontage* inCurrentMontage;
			UAnimMontage* inPlayMontage;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inCurrentMontage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventPlayMontageBranch_Parms, Result), Z_Construct_UEnum_ABP_200508_EActionStateMontagePlayResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_inCurrentMontage = { "inCurrentMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventPlayMontageBranch_Parms, inCurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_inPlayMontage = { "inPlayMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventPlayMontageBranch_Parms, inPlayMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_inCurrentMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::NewProp_inPlayMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "PlayMontageBranch", nullptr, nullptr, sizeof(ELSSActionStateBase_eventPlayMontageBranch_Parms), Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::NewProp_inMontage = { "inMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventReserveMontage_Parms, inMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::NewProp_inMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "ReserveMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventReserveMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics
	{
		struct ELSSActionStateBase_eventSetEnableCancelTransit_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventSetEnableCancelTransit_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventSetEnableCancelTransit_Parms), &Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "SetEnableCancelTransit", nullptr, nullptr, sizeof(ELSSActionStateBase_eventSetEnableCancelTransit_Parms), Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics
	{
		struct ELSSActionStateBase_eventSetEnableMovableTransit_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELSSActionStateBase_eventSetEnableMovableTransit_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionStateBase_eventSetEnableMovableTransit_Parms), &Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "SetEnableMovableTransit", nullptr, nullptr, sizeof(ELSSActionStateBase_eventSetEnableMovableTransit_Parms), Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics
	{
		struct ELSSActionStateBase_eventSetMontageLo_Parms
		{
			UAnimMontage* inMontage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::NewProp_inMontage = { "inMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventSetMontageLo_Parms, inMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::NewProp_inMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "SetMontageLo", nullptr, nullptr, sizeof(ELSSActionStateBase_eventSetMontageLo_Parms), Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics
	{
		struct ELSSActionStateBase_eventSetMontageSt_Parms
		{
			UAnimMontage* inMontage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::NewProp_inMontage = { "inMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventSetMontageSt_Parms, inMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::NewProp_inMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "SetMontageSt", nullptr, nullptr, sizeof(ELSSActionStateBase_eventSetMontageSt_Parms), Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionStateBase_eventStopMontage_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::NewProp_BlendOutTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "StopMontage", nullptr, nullptr, sizeof(ELSSActionStateBase_eventStopMontage_Parms), Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_StopMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_StopMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionStateBase, nullptr, "UpdateMovementParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSActionStateBase_NoRegister()
	{
		return UELSSActionStateBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSActionStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SyncMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SyncMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageSt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageSt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageLo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageLo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMovement_MetaData[];
#endif
		static void NewProp_EnableMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallLimitDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallLimitDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableUpperBodyAnim_MetaData[];
#endif
		static void NewProp_EnableUpperBodyAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableUpperBodyAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinueInvolveParam_MetaData[];
#endif
		static void NewProp_ContinueInvolveParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ContinueInvolveParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatedMovementAdjustTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatedMovementAdjustTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionHeightScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionHeightScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLandingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLandingLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultTransitable_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTransitable_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultTransitable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CancelTransitable_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelTransitable_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CancelTransitable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMontageReplaced_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMontageReplaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMontageBeforeReplace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMontageBeforeReplace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReservedMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCancelTransit_MetaData[];
#endif
		static void NewProp_EnableCancelTransit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCancelTransit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMovableTransit_MetaData[];
#endif
		static void NewProp_EnableMovableTransit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMovableTransit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallTimeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallTimeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingStarted_MetaData[];
#endif
		static void NewProp_LandingStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LandingStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableBlendOut_MetaData[];
#endif
		static void NewProp_DisableBlendOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableBlendOut;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageReceiverState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageReceiverState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageReceiverState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionDisabled_MetaData[];
#endif
		static void NewProp_RootMotionDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RootMotionDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveMontageTimeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InactiveMontageTimeCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSActionStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSActionStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSActionStateBase_Activate, "Activate" }, // 547557290
		{ &Z_Construct_UFunction_UELSSActionStateBase_CanDisappear, "CanDisappear" }, // 2398540602
		{ &Z_Construct_UFunction_UELSSActionStateBase_CanLand, "CanLand" }, // 2518982182
		{ &Z_Construct_UFunction_UELSSActionStateBase_CheckOwnerLocallyControlled, "CheckOwnerLocallyControlled" }, // 4007032115
		{ &Z_Construct_UFunction_UELSSActionStateBase_Deactivate, "Deactivate" }, // 323512350
		{ &Z_Construct_UFunction_UELSSActionStateBase_DetectSituationHitReaction, "DetectSituationHitReaction" }, // 2772555934
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetCharacterMovement, "GetCharacterMovement" }, // 3258855797
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontage, "GetCurrentMontage" }, // 95907371
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMontageReplaced, "GetCurrentMontageReplaced" }, // 239764701
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetCurrentMoveActionCameraID, "GetCurrentMoveActionCameraID" }, // 1182736462
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetDamageFallingMontage, "GetDamageFallingMontage" }, // 1769159351
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetDamageLandMontage, "GetDamageLandMontage" }, // 1546772278
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionMontage, "GetDamageReactionMontage" }, // 3137711118
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetDamageReactionParam, "GetDamageReactionParam" }, // 923369032
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetDamageReceiverState, "GetDamageReceiverState" }, // 4246340839
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetFirstMontage, "GetFirstMontage" }, // 248959503
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetInvolveDamageAttackId, "GetInvolveDamageAttackId" }, // 341032343
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetInvolveFeedbackDamageAttackId, "GetInvolveFeedbackDamageAttackId" }, // 1675414832
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetMaxLandingLevel, "GetMaxLandingLevel" }, // 609598074
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetMoveSpeedScale, "GetMoveSpeedScale" }, // 4030389606
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetOwnerActor, "GetOwnerActor" }, // 1364992491
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetOwnerCharacter, "GetOwnerCharacter" }, // 4030083456
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetOwnerPlayerCharacter, "GetOwnerPlayerCharacter" }, // 451713982
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetPlayingTime, "GetPlayingTime" }, // 3078520627
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetReceiverMontage, "GetReceiverMontage" }, // 3881382392
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetSyncMode, "GetSyncMode" }, // 1121876968
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetTransitableMove, "GetTransitableMove" }, // 1305789187
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetTransitableState, "GetTransitableState" }, // 3173184023
		{ &Z_Construct_UFunction_UELSSActionStateBase_GetTransitableStateDefault, "GetTransitableStateDefault" }, // 3409977274
		{ &Z_Construct_UFunction_UELSSActionStateBase_IgnoreMovementCorrect, "IgnoreMovementCorrect" }, // 2082504301
		{ &Z_Construct_UFunction_UELSSActionStateBase_Initialize, "Initialize" }, // 3159706442
		{ &Z_Construct_UFunction_UELSSActionStateBase_IsAffectedBySlip, "IsAffectedBySlip" }, // 2672810353
		{ &Z_Construct_UFunction_UELSSActionStateBase_IsEnableFallCancel, "IsEnableFallCancel" }, // 3211197480
		{ &Z_Construct_UFunction_UELSSActionStateBase_IsEnableMovement, "IsEnableMovement" }, // 757478953
		{ &Z_Construct_UFunction_UELSSActionStateBase_IsEnablePickupVisible, "IsEnablePickupVisible" }, // 2495174502
		{ &Z_Construct_UFunction_UELSSActionStateBase_IsEnableUpperBodyAnim, "IsEnableUpperBodyAnim" }, // 576897756
		{ &Z_Construct_UFunction_UELSSActionStateBase_IsInAir, "IsInAir" }, // 1739216657
		{ &Z_Construct_UFunction_UELSSActionStateBase_NativeUpdate, "NativeUpdate" }, // 2490357203
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnBegin, "OnBegin" }, // 1324372432
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnEnd, "OnEnd" }, // 1313827030
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnLand, "OnLand" }, // 2688900050
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnMovable, "OnMovable" }, // 480114171
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnNotifyJumpUp, "OnNotifyJumpUp" }, // 2306016802
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnNotifyMotionEnd, "OnNotifyMotionEnd" }, // 141982748
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnNotifySyncOff, "OnNotifySyncOff" }, // 1936743322
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnPostUpdateMovementParam, "OnPostUpdateMovementParam" }, // 1063411453
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnPrePlayFirstMontage, "OnPrePlayFirstMontage" }, // 3015742180
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnSimulateLand, "OnSimulateLand" }, // 1201693885
		{ &Z_Construct_UFunction_UELSSActionStateBase_OnTick, "OnTick" }, // 3688559575
		{ &Z_Construct_UFunction_UELSSActionStateBase_PlayMontage, "PlayMontage" }, // 1853222426
		{ &Z_Construct_UFunction_UELSSActionStateBase_PlayMontageBranch, "PlayMontageBranch" }, // 3453128255
		{ &Z_Construct_UFunction_UELSSActionStateBase_ReserveMontage, "ReserveMontage" }, // 1666787694
		{ &Z_Construct_UFunction_UELSSActionStateBase_SetEnableCancelTransit, "SetEnableCancelTransit" }, // 596776737
		{ &Z_Construct_UFunction_UELSSActionStateBase_SetEnableMovableTransit, "SetEnableMovableTransit" }, // 818281237
		{ &Z_Construct_UFunction_UELSSActionStateBase_SetMontageLo, "SetMontageLo" }, // 924467434
		{ &Z_Construct_UFunction_UELSSActionStateBase_SetMontageSt, "SetMontageSt" }, // 768685776
		{ &Z_Construct_UFunction_UELSSActionStateBase_StopMontage, "StopMontage" }, // 3430952724
		{ &Z_Construct_UFunction_UELSSActionStateBase_UpdateMovementParam, "UpdateMovementParam" }, // 2927780911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSActionStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_SyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_SyncMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_SyncMode = { "SyncMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, SyncMode), Z_Construct_UEnum_ABP_200508_ESSActionStateSyncMode, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_SyncMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_SyncMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageSt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageSt = { "MontageSt", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, MontageSt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageSt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageSt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageLo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageLo = { "MontageLo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, MontageLo), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageLo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageLo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovement_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->EnableMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovement = { "EnableMovement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallLimitDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallLimitDuration = { "FallLimitDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, FallLimitDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallLimitDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallLimitDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableUpperBodyAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableUpperBodyAnim_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->EnableUpperBodyAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableUpperBodyAnim = { "EnableUpperBodyAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableUpperBodyAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableUpperBodyAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableUpperBodyAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ContinueInvolveParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ContinueInvolveParam_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->ContinueInvolveParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ContinueInvolveParam = { "ContinueInvolveParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ContinueInvolveParam_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ContinueInvolveParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ContinueInvolveParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MovementAdjust_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MovementAdjust = { "MovementAdjust", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, MovementAdjust), Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MovementAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MovementAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LastUpdatedMovementAdjustTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LastUpdatedMovementAdjustTime = { "LastUpdatedMovementAdjustTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, LastUpdatedMovementAdjustTime), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LastUpdatedMovementAdjustTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LastUpdatedMovementAdjustTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RotationRateScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RotationRateScale = { "RotationRateScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, RotationRateScale), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RotationRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RotationRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionHeightScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionHeightScale = { "CollisionHeightScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, CollisionHeightScale), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionHeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionHeightScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionRadiusScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionRadiusScale = { "CollisionRadiusScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, CollisionRadiusScale), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionRadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionRadiusScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MaxLandingLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MaxLandingLevel = { "MaxLandingLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, MaxLandingLevel), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MaxLandingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MaxLandingLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DefaultTransitable_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DefaultTransitable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DefaultTransitable = { "DefaultTransitable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, DefaultTransitable), Z_Construct_UEnum_ABP_200508_ESSActionTransitableCondition, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DefaultTransitable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DefaultTransitable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CancelTransitable_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CancelTransitable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CancelTransitable = { "CancelTransitable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, CancelTransitable), Z_Construct_UEnum_ABP_200508_ESSActionTransitableCondition, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CancelTransitable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CancelTransitable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_PlayingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_PlayingTime = { "PlayingTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, PlayingTime), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_PlayingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_PlayingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, OwnerComponent), Z_Construct_UClass_UELSSActionStatePlayerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_OwnerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageReplaced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageReplaced = { "CurrentMontageReplaced", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, CurrentMontageReplaced), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageReplaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageReplaced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageBeforeReplace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageBeforeReplace = { "CurrentMontageBeforeReplace", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, CurrentMontageBeforeReplace), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageBeforeReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageBeforeReplace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ReservedMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ReservedMontage = { "ReservedMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, ReservedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ReservedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ReservedMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableCancelTransit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableCancelTransit_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->EnableCancelTransit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableCancelTransit = { "EnableCancelTransit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableCancelTransit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableCancelTransit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableCancelTransit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovableTransit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovableTransit_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->EnableMovableTransit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovableTransit = { "EnableMovableTransit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovableTransit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovableTransit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovableTransit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallTimeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallTimeCount = { "FallTimeCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, FallTimeCount), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallTimeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallTimeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LandingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LandingStarted_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->LandingStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LandingStarted = { "LandingStarted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LandingStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LandingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LandingStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DisableBlendOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DisableBlendOut_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->DisableBlendOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DisableBlendOut = { "DisableBlendOut", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DisableBlendOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DisableBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DisableBlendOut_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DamageReceiverState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DamageReceiverState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DamageReceiverState = { "DamageReceiverState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, DamageReceiverState), Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DamageReceiverState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DamageReceiverState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RootMotionDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RootMotionDisabled_SetBit(void* Obj)
	{
		((UELSSActionStateBase*)Obj)->RootMotionDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RootMotionDisabled = { "RootMotionDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionStateBase), &Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RootMotionDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RootMotionDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RootMotionDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_InactiveMontageTimeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_InactiveMontageTimeCount = { "InactiveMontageTimeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateBase, InactiveMontageTimeCount), METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_InactiveMontageTimeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_InactiveMontageTimeCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSActionStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_SyncMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_SyncMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageSt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MontageLo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallLimitDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableUpperBodyAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ContinueInvolveParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MovementAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LastUpdatedMovementAdjustTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RotationRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionHeightScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CollisionRadiusScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_MaxLandingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DefaultTransitable_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DefaultTransitable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CancelTransitable_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CancelTransitable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_PlayingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_OwnerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_AnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageReplaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_CurrentMontageBeforeReplace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_ReservedMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableCancelTransit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_EnableMovableTransit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_FallTimeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_LandingStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DisableBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DamageReceiverState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_DamageReceiverState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_RootMotionDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateBase_Statics::NewProp_InactiveMontageTimeCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSActionStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSActionStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSActionStateBase_Statics::ClassParams = {
		&UELSSActionStateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSActionStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSActionStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSActionStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSActionStateBase, 1208495787);
	template<> ABP_200508_API UClass* StaticClass<UELSSActionStateBase>()
	{
		return UELSSActionStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSActionStateBase(Z_Construct_UClass_UELSSActionStateBase, &UELSSActionStateBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSActionStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSActionStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
