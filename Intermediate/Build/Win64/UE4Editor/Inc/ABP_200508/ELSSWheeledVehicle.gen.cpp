// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWheeledVehicle() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWheeledVehicle_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWheeledVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDrivingPose();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWheeledVehicleMovement_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSVehicleInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWheeledVehicle::execAddDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurability(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execAddDurabilityByRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurabilityByRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execApplyExplosionDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyExplosionDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execAttachToVehicle)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttachToVehicle(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execCanGetOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanGetOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execCanGetOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanGetOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execCheckAllowPawnControll)
	{
		P_GET_UBOOL(Z_Param_ignoreDamagedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckAllowPawnControll(Z_Param_ignoreDamagedState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execCorrectDetachedOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_inVehicleOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CorrectDetachedOwner(Z_Param_inVehicleOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execDetachFromVehicle)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_UBOOL(Z_Param_damaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetachFromVehicle(Z_Param_Other,Z_Param_damaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execExplosion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explosion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execGetDrivingPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSWheeledVehicleDrivingPose*)Z_Param__Result=P_THIS->GetDrivingPose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execGetEngineRotationRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEngineRotationRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execGetOff_Multicast)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOff_Multicast_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execGetVehicleOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetVehicleOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execGetVehicleOwnerCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetVehicleOwnerCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execIsOverturn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverturn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnBeginOverlapBreakObject)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapBreakObject(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnBodyHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBodyHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnChangeDamagedState_DamagedLv1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeDamagedState_DamagedLv1_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnChangeDamagedState_DamagedMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeDamagedState_DamagedMax_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnChangeDamagedState_None)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeDamagedState_None_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnEndOverlapBreakObject)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapBreakObject(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnGetOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGetOnBeginOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnGetOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGetOnEndOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnRep_RemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnRunOverBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRunOverBeginOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execOnRunOverEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRunOverEndOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execPerformKlaxon_Multicast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformKlaxon_Multicast_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execPlayHitEffect)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLoc);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_ENUM(ESSDamageReason,Z_Param_DamageReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitEffect(Z_Param_Out_StartLoc,Z_Param_DamageCauser,ESSDamageReason(Z_Param_DamageReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execPlayKlaxonSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayKlaxonSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execRemainDurabilityToDamagedState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSWheeledVehicleDamagedState*)Z_Param__Result=P_THIS->RemainDurabilityToDamagedState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execSetExternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execSetInternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execSetRemainDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Durability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainDurability(Z_Param_Durability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execStartEngineSE)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEngineSE();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execStopEngineSE)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEngineSE();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execSuicideVehicleOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuicideVehicleOwner_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execTakeExplosionDamageToAny)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TakeExplosionDamageToAny(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execTakeExplosionDamageToVehicleOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TakeExplosionDamageToVehicleOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execTickAddAttention)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickAddAttention(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execTickEngineSE)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickEngineSE(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execTryGetOff_Server)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryGetOff_Server_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWheeledVehicle::execUpdateDamagedState)
	{
		P_GET_ENUM(ESSWheeledVehicleDamagedState,Z_Param_NewDamagedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDamagedState(ESSWheeledVehicleDamagedState(Z_Param_NewDamagedState));
		P_NATIVE_END;
	}
	static FName NAME_AELSSWheeledVehicle_GetOff_Multicast = FName(TEXT("GetOff_Multicast"));
	void AELSSWheeledVehicle::GetOff_Multicast(AELSSPlayer* Player)
	{
		ELSSWheeledVehicle_eventGetOff_Multicast_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_GetOff_Multicast),&Parms);
	}
	static FName NAME_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1 = FName(TEXT("OnChangeDamagedState_DamagedLv1"));
	void AELSSWheeledVehicle::OnChangeDamagedState_DamagedLv1()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1),NULL);
	}
	static FName NAME_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax = FName(TEXT("OnChangeDamagedState_DamagedMax"));
	void AELSSWheeledVehicle::OnChangeDamagedState_DamagedMax()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax),NULL);
	}
	static FName NAME_AELSSWheeledVehicle_OnChangeDamagedState_None = FName(TEXT("OnChangeDamagedState_None"));
	void AELSSWheeledVehicle::OnChangeDamagedState_None()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_OnChangeDamagedState_None),NULL);
	}
	static FName NAME_AELSSWheeledVehicle_PerformKlaxon_Multicast = FName(TEXT("PerformKlaxon_Multicast"));
	void AELSSWheeledVehicle::PerformKlaxon_Multicast()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_PerformKlaxon_Multicast),NULL);
	}
	static FName NAME_AELSSWheeledVehicle_Setup = FName(TEXT("Setup"));
	void AELSSWheeledVehicle::Setup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_Setup),NULL);
	}
	static FName NAME_AELSSWheeledVehicle_SuicideVehicleOwner = FName(TEXT("SuicideVehicleOwner"));
	void AELSSWheeledVehicle::SuicideVehicleOwner()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_SuicideVehicleOwner),NULL);
	}
	static FName NAME_AELSSWheeledVehicle_TryGetOff_Server = FName(TEXT("TryGetOff_Server"));
	void AELSSWheeledVehicle::TryGetOff_Server()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_TryGetOff_Server),NULL);
	}
	static FName NAME_AELSSWheeledVehicle_UpdateEngineSE = FName(TEXT("UpdateEngineSE"));
	void AELSSWheeledVehicle::UpdateEngineSE(float engineRatio)
	{
		ELSSWheeledVehicle_eventUpdateEngineSE_Parms Parms;
		Parms.engineRatio=engineRatio;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWheeledVehicle_UpdateEngineSE),&Parms);
	}
	void AELSSWheeledVehicle::StaticRegisterNativesAELSSWheeledVehicle()
	{
		UClass* Class = AELSSWheeledVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDurability", &AELSSWheeledVehicle::execAddDurability },
			{ "AddDurabilityByRate", &AELSSWheeledVehicle::execAddDurabilityByRate },
			{ "ApplyExplosionDamage", &AELSSWheeledVehicle::execApplyExplosionDamage },
			{ "AttachToVehicle", &AELSSWheeledVehicle::execAttachToVehicle },
			{ "CanGetOff", &AELSSWheeledVehicle::execCanGetOff },
			{ "CanGetOn", &AELSSWheeledVehicle::execCanGetOn },
			{ "CheckAllowPawnControll", &AELSSWheeledVehicle::execCheckAllowPawnControll },
			{ "CorrectDetachedOwner", &AELSSWheeledVehicle::execCorrectDetachedOwner },
			{ "DetachFromVehicle", &AELSSWheeledVehicle::execDetachFromVehicle },
			{ "Explosion", &AELSSWheeledVehicle::execExplosion },
			{ "GetDrivingPose", &AELSSWheeledVehicle::execGetDrivingPose },
			{ "GetEngineRotationRatio", &AELSSWheeledVehicle::execGetEngineRotationRatio },
			{ "GetOff_Multicast", &AELSSWheeledVehicle::execGetOff_Multicast },
			{ "GetVehicleOwner", &AELSSWheeledVehicle::execGetVehicleOwner },
			{ "GetVehicleOwnerCollision", &AELSSWheeledVehicle::execGetVehicleOwnerCollision },
			{ "IsOverturn", &AELSSWheeledVehicle::execIsOverturn },
			{ "OnBeginOverlapBreakObject", &AELSSWheeledVehicle::execOnBeginOverlapBreakObject },
			{ "OnBodyHit", &AELSSWheeledVehicle::execOnBodyHit },
			{ "OnChangeDamagedState_DamagedLv1", &AELSSWheeledVehicle::execOnChangeDamagedState_DamagedLv1 },
			{ "OnChangeDamagedState_DamagedMax", &AELSSWheeledVehicle::execOnChangeDamagedState_DamagedMax },
			{ "OnChangeDamagedState_None", &AELSSWheeledVehicle::execOnChangeDamagedState_None },
			{ "OnEndOverlapBreakObject", &AELSSWheeledVehicle::execOnEndOverlapBreakObject },
			{ "OnGetOnBeginOverlap", &AELSSWheeledVehicle::execOnGetOnBeginOverlap },
			{ "OnGetOnEndOverlap", &AELSSWheeledVehicle::execOnGetOnEndOverlap },
			{ "OnRep_RemainDurability", &AELSSWheeledVehicle::execOnRep_RemainDurability },
			{ "OnRunOverBeginOverlap", &AELSSWheeledVehicle::execOnRunOverBeginOverlap },
			{ "OnRunOverEndOverlap", &AELSSWheeledVehicle::execOnRunOverEndOverlap },
			{ "PerformKlaxon_Multicast", &AELSSWheeledVehicle::execPerformKlaxon_Multicast },
			{ "PlayHitEffect", &AELSSWheeledVehicle::execPlayHitEffect },
			{ "PlayKlaxonSound", &AELSSWheeledVehicle::execPlayKlaxonSound },
			{ "RemainDurabilityToDamagedState", &AELSSWheeledVehicle::execRemainDurabilityToDamagedState },
			{ "SetExternalVisible", &AELSSWheeledVehicle::execSetExternalVisible },
			{ "SetInternalVisible", &AELSSWheeledVehicle::execSetInternalVisible },
			{ "SetRemainDurability", &AELSSWheeledVehicle::execSetRemainDurability },
			{ "Setup", &AELSSWheeledVehicle::execSetup },
			{ "StartEngineSE", &AELSSWheeledVehicle::execStartEngineSE },
			{ "StopEngineSE", &AELSSWheeledVehicle::execStopEngineSE },
			{ "SuicideVehicleOwner", &AELSSWheeledVehicle::execSuicideVehicleOwner },
			{ "TakeExplosionDamageToAny", &AELSSWheeledVehicle::execTakeExplosionDamageToAny },
			{ "TakeExplosionDamageToVehicleOwner", &AELSSWheeledVehicle::execTakeExplosionDamageToVehicleOwner },
			{ "TickAddAttention", &AELSSWheeledVehicle::execTickAddAttention },
			{ "TickEngineSE", &AELSSWheeledVehicle::execTickEngineSE },
			{ "TryGetOff_Server", &AELSSWheeledVehicle::execTryGetOff_Server },
			{ "UpdateDamagedState", &AELSSWheeledVehicle::execUpdateDamagedState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics
	{
		struct ELSSWheeledVehicle_eventAddDurability_Parms
		{
			int32 Value;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventAddDurability_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventAddDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "AddDurability", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventAddDurability_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics
	{
		struct ELSSWheeledVehicle_eventAddDurabilityByRate_Parms
		{
			float Rate;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventAddDurabilityByRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventAddDurabilityByRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "AddDurabilityByRate", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventAddDurabilityByRate_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "ApplyExplosionDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics
	{
		struct ELSSWheeledVehicle_eventAttachToVehicle_Parms
		{
			AActor* Other;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventAttachToVehicle_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventAttachToVehicle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventAttachToVehicle_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "AttachToVehicle", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventAttachToVehicle_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics
	{
		struct ELSSWheeledVehicle_eventCanGetOff_Parms
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
	void Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventCanGetOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventCanGetOff_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "CanGetOff", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventCanGetOff_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics
	{
		struct ELSSWheeledVehicle_eventCanGetOn_Parms
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
	void Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventCanGetOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventCanGetOn_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "CanGetOn", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventCanGetOn_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics
	{
		struct ELSSWheeledVehicle_eventCheckAllowPawnControll_Parms
		{
			bool ignoreDamagedState;
			bool ReturnValue;
		};
		static void NewProp_ignoreDamagedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ignoreDamagedState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventCheckAllowPawnControll_Parms*)Obj)->ignoreDamagedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState = { "ignoreDamagedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventCheckAllowPawnControll_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventCheckAllowPawnControll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventCheckAllowPawnControll_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "CheckAllowPawnControll", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventCheckAllowPawnControll_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics
	{
		struct ELSSWheeledVehicle_eventCorrectDetachedOwner_Parms
		{
			AActor* inVehicleOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inVehicleOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::NewProp_inVehicleOwner = { "inVehicleOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventCorrectDetachedOwner_Parms, inVehicleOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::NewProp_inVehicleOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "CorrectDetachedOwner", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventCorrectDetachedOwner_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics
	{
		struct ELSSWheeledVehicle_eventDetachFromVehicle_Parms
		{
			AActor* Other;
			bool damaged;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_damaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_damaged;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventDetachFromVehicle_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_damaged_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventDetachFromVehicle_Parms*)Obj)->damaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_damaged = { "damaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventDetachFromVehicle_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_damaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventDetachFromVehicle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventDetachFromVehicle_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_damaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "DetachFromVehicle", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventDetachFromVehicle_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_Explosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_Explosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_Explosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "Explosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_Explosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_Explosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_Explosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_Explosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics
	{
		struct ELSSWheeledVehicle_eventGetDrivingPose_Parms
		{
			ESSWheeledVehicleDrivingPose ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventGetDrivingPose_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDrivingPose, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "GetDrivingPose", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventGetDrivingPose_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics
	{
		struct ELSSWheeledVehicle_eventGetEngineRotationRatio_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventGetEngineRotationRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "GetEngineRotationRatio", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventGetEngineRotationRatio_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventGetOff_Multicast_Parms, Player), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "GetOff_Multicast", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventGetOff_Multicast_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics
	{
		struct ELSSWheeledVehicle_eventGetVehicleOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventGetVehicleOwner_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "GetVehicleOwner", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventGetVehicleOwner_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics
	{
		struct ELSSWheeledVehicle_eventGetVehicleOwnerCollision_Parms
		{
			UPrimitiveComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventGetVehicleOwnerCollision_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "GetVehicleOwnerCollision", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventGetVehicleOwnerCollision_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics
	{
		struct ELSSWheeledVehicle_eventIsOverturn_Parms
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
	void Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventIsOverturn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventIsOverturn_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "IsOverturn", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventIsOverturn_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics
	{
		struct ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnBeginOverlapBreakObject", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventOnBeginOverlapBreakObject_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics
	{
		struct ELSSWheeledVehicle_eventOnBodyHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBodyHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBodyHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBodyHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBodyHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnBodyHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnBodyHit", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventOnBodyHit_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnChangeDamagedState_DamagedLv1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnChangeDamagedState_DamagedMax", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnChangeDamagedState_None", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics
	{
		struct ELSSWheeledVehicle_eventOnEndOverlapBreakObject_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnEndOverlapBreakObject_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnEndOverlapBreakObject_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnEndOverlapBreakObject_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnEndOverlapBreakObject_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnEndOverlapBreakObject", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventOnEndOverlapBreakObject_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics
	{
		struct ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnGetOnBeginOverlap", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventOnGetOnBeginOverlap_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics
	{
		struct ELSSWheeledVehicle_eventOnGetOnEndOverlap_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnEndOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnGetOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnGetOnEndOverlap", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventOnGetOnEndOverlap_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnRep_RemainDurability", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics
	{
		struct ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnRunOverBeginOverlap", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventOnRunOverBeginOverlap_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics
	{
		struct ELSSWheeledVehicle_eventOnRunOverEndOverlap_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverEndOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventOnRunOverEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "OnRunOverEndOverlap", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventOnRunOverEndOverlap_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "PerformKlaxon_Multicast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics
	{
		struct ELSSWheeledVehicle_eventPlayHitEffect_Parms
		{
			FVector StartLoc;
			AActor* DamageCauser;
			ESSDamageReason DamageReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLoc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_StartLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventPlayHitEffect_Parms, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_StartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_StartLoc_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventPlayHitEffect_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_DamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_DamageReason = { "DamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventPlayHitEffect_Parms, DamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_StartLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_DamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::NewProp_DamageReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "PlayHitEffect", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventPlayHitEffect_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "PlayKlaxonSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics
	{
		struct ELSSWheeledVehicle_eventRemainDurabilityToDamagedState_Parms
		{
			ESSWheeledVehicleDamagedState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventRemainDurabilityToDamagedState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "RemainDurabilityToDamagedState", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventRemainDurabilityToDamagedState_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics
	{
		struct ELSSWheeledVehicle_eventSetExternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventSetExternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventSetExternalVisible_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "SetExternalVisible", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventSetExternalVisible_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics
	{
		struct ELSSWheeledVehicle_eventSetInternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventSetInternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventSetInternalVisible_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "SetInternalVisible", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventSetInternalVisible_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics
	{
		struct ELSSWheeledVehicle_eventSetRemainDurability_Parms
		{
			int32 Durability;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Durability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventSetRemainDurability_Parms, Durability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::NewProp_Durability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "SetRemainDurability", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventSetRemainDurability_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "StartEngineSE", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "StopEngineSE", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "SuicideVehicleOwner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics
	{
		struct ELSSWheeledVehicle_eventTakeExplosionDamageToAny_Parms
		{
			AActor* OtherActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventTakeExplosionDamageToAny_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventTakeExplosionDamageToAny_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventTakeExplosionDamageToAny_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "TakeExplosionDamageToAny", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventTakeExplosionDamageToAny_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics
	{
		struct ELSSWheeledVehicle_eventTakeExplosionDamageToVehicleOwner_Parms
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
	void Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWheeledVehicle_eventTakeExplosionDamageToVehicleOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWheeledVehicle_eventTakeExplosionDamageToVehicleOwner_Parms), &Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "TakeExplosionDamageToVehicleOwner", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventTakeExplosionDamageToVehicleOwner_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics
	{
		struct ELSSWheeledVehicle_eventTickAddAttention_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventTickAddAttention_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "TickAddAttention", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventTickAddAttention_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics
	{
		struct ELSSWheeledVehicle_eventTickEngineSE_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventTickEngineSE_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "TickEngineSE", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventTickEngineSE_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "TryGetOff_Server", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics
	{
		struct ELSSWheeledVehicle_eventUpdateDamagedState_Parms
		{
			ESSWheeledVehicleDamagedState NewDamagedState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDamagedState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDamagedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::NewProp_NewDamagedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::NewProp_NewDamagedState = { "NewDamagedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventUpdateDamagedState_Parms, NewDamagedState), Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::NewProp_NewDamagedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::NewProp_NewDamagedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "UpdateDamagedState", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventUpdateDamagedState_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_engineRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::NewProp_engineRatio = { "engineRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicle_eventUpdateEngineSE_Parms, engineRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::NewProp_engineRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWheeledVehicle, nullptr, "UpdateEngineSE", nullptr, nullptr, sizeof(ELSSWheeledVehicle_eventUpdateEngineSE_Parms), Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWheeledVehicle_NoRegister()
	{
		return AELSSWheeledVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWheeledVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetOffLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GetOffLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetOnCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GetOnCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunOverCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunOverCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsOverlapDetectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsOverlapDetectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleOwnerCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleOwnerCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnAvoidCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnAvoidCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSVehicleMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSVehicleMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachGetOnSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachGetOnSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetOffCheckOffsetVertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GetOffCheckOffsetVertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetOffCheckOffsetHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GetOffCheckOffsetHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractUIOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractUIOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotIconLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DotIconLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotIconBaseLocationOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DotIconBaseLocationOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleUIOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleUIOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_ImpactToField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_ImpactToField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Hit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrivingPose_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivingPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DrivingPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputInvalidRangeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputInvalidRangeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputInvalidRangeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputInvalidRangeY;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnderfootCheckTraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderfootCheckTraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnderfootCheckTraceObjectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFrictionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlipFrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlipFrictionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSlipFlag_MetaData[];
#endif
		static void NewProp_EnableSlipFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSlipFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_damagedState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damagedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_damagedState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitEffectLineTraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitEffectLineTraceObjectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainDurability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDurability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClashImpulseSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClashImpulseSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrashEventIntervalSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrashEventIntervalSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrashEventIntervalTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrashEventIntervalTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReduceDurabilityValueWhenClash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReduceDurabilityValueWhenClash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrashDamageToVehicleMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CrashDamageToVehicleMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnableRunOver_MetaData[];
#endif
		static void NewProp_IsEnableRunOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnableRunOver;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunOverOverlapActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunOverOverlapActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunOverOverlapActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunOverSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunOverSpeed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RunOverMoveIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunOverMoveIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunOverMoveIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReduceDurabilityValueWhenRunOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReduceDurabilityValueWhenRunOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExploded_MetaData[];
#endif
		static void NewProp_IsExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExplosionEffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionDamageMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageToVehicleOwnerMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionDamageToVehicleOwnerMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Klaxon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Klaxon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Engine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Engine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineRotationRatioThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineRotationRatioThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineRatioMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineRatioMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_Engine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent_Engine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSEUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EngineSEUniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBasisLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraBasisLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLockInputBrake_MetaData[];
#endif
		static void NewProp_IsLockInputBrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLockInputBrake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWheeledVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWheeledVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_AddDurability, "AddDurability" }, // 3972544390
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_AddDurabilityByRate, "AddDurabilityByRate" }, // 931401154
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_ApplyExplosionDamage, "ApplyExplosionDamage" }, // 889541527
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_AttachToVehicle, "AttachToVehicle" }, // 1681845265
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOff, "CanGetOff" }, // 2750608793
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_CanGetOn, "CanGetOn" }, // 3111952768
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_CheckAllowPawnControll, "CheckAllowPawnControll" }, // 4206916342
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_CorrectDetachedOwner, "CorrectDetachedOwner" }, // 3030221262
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_DetachFromVehicle, "DetachFromVehicle" }, // 25119929
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_Explosion, "Explosion" }, // 2103495202
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_GetDrivingPose, "GetDrivingPose" }, // 2057901224
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_GetEngineRotationRatio, "GetEngineRotationRatio" }, // 86624276
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_GetOff_Multicast, "GetOff_Multicast" }, // 2137081345
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwner, "GetVehicleOwner" }, // 2325127272
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_GetVehicleOwnerCollision, "GetVehicleOwnerCollision" }, // 2222430305
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_IsOverturn, "IsOverturn" }, // 3504699157
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnBeginOverlapBreakObject, "OnBeginOverlapBreakObject" }, // 453947162
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnBodyHit, "OnBodyHit" }, // 3666103444
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedLv1, "OnChangeDamagedState_DamagedLv1" }, // 4132870548
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_DamagedMax, "OnChangeDamagedState_DamagedMax" }, // 1511408126
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnChangeDamagedState_None, "OnChangeDamagedState_None" }, // 2635458696
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnEndOverlapBreakObject, "OnEndOverlapBreakObject" }, // 1370829858
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnBeginOverlap, "OnGetOnBeginOverlap" }, // 2999832956
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnGetOnEndOverlap, "OnGetOnEndOverlap" }, // 124327103
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnRep_RemainDurability, "OnRep_RemainDurability" }, // 2670662683
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverBeginOverlap, "OnRunOverBeginOverlap" }, // 3012786825
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_OnRunOverEndOverlap, "OnRunOverEndOverlap" }, // 2250213788
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_PerformKlaxon_Multicast, "PerformKlaxon_Multicast" }, // 786241879
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_PlayHitEffect, "PlayHitEffect" }, // 781357624
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_PlayKlaxonSound, "PlayKlaxonSound" }, // 840724585
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_RemainDurabilityToDamagedState, "RemainDurabilityToDamagedState" }, // 959226059
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_SetExternalVisible, "SetExternalVisible" }, // 3386030053
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_SetInternalVisible, "SetInternalVisible" }, // 208596534
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_SetRemainDurability, "SetRemainDurability" }, // 3777594378
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_Setup, "Setup" }, // 3604901906
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_StartEngineSE, "StartEngineSE" }, // 3443175051
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_StopEngineSE, "StopEngineSE" }, // 1353533170
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_SuicideVehicleOwner, "SuicideVehicleOwner" }, // 3995053484
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToAny, "TakeExplosionDamageToAny" }, // 3244726538
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_TakeExplosionDamageToVehicleOwner, "TakeExplosionDamageToVehicleOwner" }, // 1529721820
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_TickAddAttention, "TickAddAttention" }, // 3693016902
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_TickEngineSE, "TickEngineSE" }, // 2176354291
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_TryGetOff_Server, "TryGetOff_Server" }, // 4066699254
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_UpdateDamagedState, "UpdateDamagedState" }, // 1975139974
		{ &Z_Construct_UFunction_AELSSWheeledVehicle_UpdateEngineSE, "UpdateEngineSE" }, // 236429835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELSSWheeledVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffLocation = { "GetOffLocation", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, GetOffLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOnCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOnCollision = { "GetOnCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, GetOnCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOnCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOnCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverCollision = { "RunOverCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, RunOverCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PhysicsOverlapDetectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PhysicsOverlapDetectionComponent = { "PhysicsOverlapDetectionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, PhysicsOverlapDetectionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PhysicsOverlapDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PhysicsOverlapDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwnerCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwnerCollision = { "VehicleOwnerCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, VehicleOwnerCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwnerCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwnerCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PawnAvoidCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PawnAvoidCollision = { "PawnAvoidCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, PawnAvoidCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PawnAvoidCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PawnAvoidCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SSVehicleMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SSVehicleMovement = { "SSVehicleMovement", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, SSVehicleMovement), Z_Construct_UClass_UELSSWheeledVehicleMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SSVehicleMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SSVehicleMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwner = { "VehicleOwner", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, VehicleOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AttachGetOnSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AttachGetOnSocketName = { "AttachGetOnSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, AttachGetOnSocketName), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AttachGetOnSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AttachGetOnSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetVertical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetVertical = { "GetOffCheckOffsetVertical", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, GetOffCheckOffsetVertical), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetVertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetHorizontal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetHorizontal = { "GetOffCheckOffsetHorizontal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, GetOffCheckOffsetHorizontal), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InteractUIOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InteractUIOffset = { "InteractUIOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, InteractUIOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InteractUIOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InteractUIOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconLocationOffset = { "DotIconLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, DotIconLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconBaseLocationOffsetZ = { "DotIconBaseLocationOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, DotIconBaseLocationOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleUIOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleUIOffset = { "VehicleUIOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, VehicleUIOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleUIOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleUIOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_ImpactToField_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_ImpactToField = { "SoundCue_ImpactToField", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_ImpactToField), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_ImpactToField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_ImpactToField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Hit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Hit = { "SoundCue_Hit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_Hit), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Hit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DrivingPose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DrivingPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DrivingPose = { "DrivingPose", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, DrivingPose), Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDrivingPose, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DrivingPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DrivingPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeX = { "InputInvalidRangeX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, InputInvalidRangeX), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeY = { "InputInvalidRangeY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, InputInvalidRangeY), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeY_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_UnderfootCheckTraceObjectTypes_Inner = { "UnderfootCheckTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_UnderfootCheckTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_UnderfootCheckTraceObjectTypes = { "UnderfootCheckTraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, UnderfootCheckTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_UnderfootCheckTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_UnderfootCheckTraceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DefaultFrictionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DefaultFrictionScale = { "DefaultFrictionScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, DefaultFrictionScale), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DefaultFrictionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DefaultFrictionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SlipFrictionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SlipFrictionScale = { "SlipFrictionScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, SlipFrictionScale), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SlipFrictionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SlipFrictionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EnableSlipFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EnableSlipFlag_SetBit(void* Obj)
	{
		((AELSSWheeledVehicle*)Obj)->EnableSlipFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EnableSlipFlag = { "EnableSlipFlag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSWheeledVehicle), &Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EnableSlipFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EnableSlipFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EnableSlipFlag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_damagedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_damagedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_damagedState = { "damagedState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, damagedState), Z_Construct_UEnum_ABP_200508_ESSWheeledVehicleDamagedState, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_damagedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_damagedState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_HitEffectLineTraceObjectTypes = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, HitEffectLineTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RemainDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RemainDurability = { "RemainDurability", "OnRep_RemainDurability", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, RemainDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RemainDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RemainDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_MaxDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_MaxDurability = { "MaxDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, MaxDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_MaxDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_MaxDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ClashImpulseSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ClashImpulseSize = { "ClashImpulseSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ClashImpulseSize), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ClashImpulseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ClashImpulseSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalSec = { "CrashEventIntervalSec", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, CrashEventIntervalSec), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalTimer = { "CrashEventIntervalTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, CrashEventIntervalTimer), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenClash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenClash = { "ReduceDurabilityValueWhenClash", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ReduceDurabilityValueWhenClash), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenClash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenClash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashDamageToVehicleMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashDamageToVehicleMoveId = { "CrashDamageToVehicleMoveId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, CrashDamageToVehicleMoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashDamageToVehicleMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashDamageToVehicleMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsEnableRunOver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsEnableRunOver_SetBit(void* Obj)
	{
		((AELSSWheeledVehicle*)Obj)->IsEnableRunOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsEnableRunOver = { "IsEnableRunOver", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSWheeledVehicle), &Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsEnableRunOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsEnableRunOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsEnableRunOver_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverOverlapActors_Inner = { "RunOverOverlapActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverOverlapActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverOverlapActors = { "RunOverOverlapActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, RunOverOverlapActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverOverlapActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverOverlapActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverSpeed = { "RunOverSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, RunOverSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverSpeed_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverMoveIds_Inner = { "RunOverMoveIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverMoveIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverMoveIds = { "RunOverMoveIds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, RunOverMoveIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverMoveIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverMoveIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenRunOver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenRunOver = { "ReduceDurabilityValueWhenRunOver", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ReduceDurabilityValueWhenRunOver), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenRunOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenRunOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsExploded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsExploded_SetBit(void* Obj)
	{
		((AELSSWheeledVehicle*)Obj)->IsExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsExploded = { "IsExploded", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSWheeledVehicle), &Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDelayTime = { "ExplosionDelayTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDelayTime), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionEffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionEffectDatabaseRowName = { "ExplosionEffectDatabaseRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionEffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionEffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionEffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageRadius = { "ExplosionDamageRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDamageRadius), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageMoveId = { "ExplosionDamageMoveId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDamageMoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageToVehicleOwnerMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageToVehicleOwnerMoveId = { "ExplosionDamageToVehicleOwnerMoveId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDamageToVehicleOwnerMoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageToVehicleOwnerMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageToVehicleOwnerMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Klaxon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Klaxon = { "SoundCue_Klaxon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_Klaxon), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Klaxon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Klaxon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Engine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Engine = { "SoundCue_Engine", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_Engine), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Engine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Engine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRotationRatioThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRotationRatioThreshold = { "EngineRotationRatioThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, EngineRotationRatioThreshold), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRotationRatioThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRotationRatioThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRatioMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRatioMin = { "EngineRatioMin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, EngineRatioMin), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRatioMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRatioMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AtomComponent_Engine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AtomComponent_Engine = { "AtomComponent_Engine", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, AtomComponent_Engine), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AtomComponent_Engine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AtomComponent_Engine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineSEUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineSEUniqueId = { "EngineSEUniqueId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, EngineSEUniqueId), METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineSEUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineSEUniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CameraBasisLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CameraBasisLocationOffset = { "CameraBasisLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWheeledVehicle, CameraBasisLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CameraBasisLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CameraBasisLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsLockInputBrake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicle" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsLockInputBrake_SetBit(void* Obj)
	{
		((AELSSWheeledVehicle*)Obj)->IsLockInputBrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsLockInputBrake = { "IsLockInputBrake", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSWheeledVehicle), &Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsLockInputBrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsLockInputBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsLockInputBrake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWheeledVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOnCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PhysicsOverlapDetectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwnerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_PawnAvoidCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SSVehicleMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AttachGetOnSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_GetOffCheckOffsetHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InteractUIOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DotIconBaseLocationOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_VehicleUIOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_ImpactToField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DrivingPose_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DrivingPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_InputInvalidRangeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_UnderfootCheckTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_UnderfootCheckTraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_DefaultFrictionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SlipFrictionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EnableSlipFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_damagedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_damagedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_HitEffectLineTraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RemainDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_MaxDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ClashImpulseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashEventIntervalTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenClash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CrashDamageToVehicleMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsEnableRunOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverOverlapActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverOverlapActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverMoveIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_RunOverMoveIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ReduceDurabilityValueWhenRunOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionEffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_ExplosionDamageToVehicleOwnerMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Klaxon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_SoundCue_Engine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRotationRatioThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineRatioMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_AtomComponent_Engine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_EngineSEUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_CameraBasisLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWheeledVehicle_Statics::NewProp_IsLockInputBrake,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWheeledVehicle, IELSSActorCommonInterface), false },
			{ Z_Construct_UClass_UELSSVehicleInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWheeledVehicle, IELSSVehicleInterface), false },
			{ Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWheeledVehicle, IELSSInteractableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWheeledVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWheeledVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWheeledVehicle_Statics::ClassParams = {
		&AELSSWheeledVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWheeledVehicle_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWheeledVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWheeledVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWheeledVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWheeledVehicle, 2199608747);
	template<> ABP_200508_API UClass* StaticClass<AELSSWheeledVehicle>()
	{
		return AELSSWheeledVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWheeledVehicle(Z_Construct_UClass_AELSSWheeledVehicle, &AELSSWheeledVehicle::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWheeledVehicle"), false, nullptr, nullptr, nullptr);

	void AELSSWheeledVehicle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_VehicleOwner(TEXT("VehicleOwner"));
		static const FName Name_RemainDurability(TEXT("RemainDurability"));
		static const FName Name_IsExploded(TEXT("IsExploded"));

		const bool bIsValid = true
			&& Name_VehicleOwner == ClassReps[(int32)ENetFields_Private::VehicleOwner].Property->GetFName()
			&& Name_RemainDurability == ClassReps[(int32)ENetFields_Private::RemainDurability].Property->GetFName()
			&& Name_IsExploded == ClassReps[(int32)ENetFields_Private::IsExploded].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWheeledVehicle"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
