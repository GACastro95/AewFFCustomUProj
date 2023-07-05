// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSHorse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSHorse() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSHorse_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSHorse();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHorseAttackInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHorseAction();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSVehicleInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSHorse::execAddDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurability(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execAddDurabilityByRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurabilityByRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execAttachToVehicle)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttachToVehicle(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execCanGetOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanGetOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execCanGetOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanGetOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execCheckAllowPawnControll)
	{
		P_GET_UBOOL(Z_Param_ignoreDamagedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckAllowPawnControll(Z_Param_ignoreDamagedState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execClearNeighAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearNeighAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execCorrectDetachedOwner)
	{
		P_GET_OBJECT(AActor,Z_Param_inVehicleOwner);
		P_GET_UBOOL(Z_Param_damaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CorrectDetachedOwner(Z_Param_inVehicleOwner,Z_Param_damaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execDetachFromVehicle)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_UBOOL(Z_Param_damaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetachFromVehicle(Z_Param_Other,Z_Param_damaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execGetAttachRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execGetCurrentFloorPhysicalSurfaceType)
	{
		P_GET_UBOOL(Z_Param_inRearFootTrace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentFloorPhysicalSurfaceType(Z_Param_inRearFootTrace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execGetOff_Multicast)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOff_Multicast_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execGetVehicleOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetVehicleOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execGetVehicleOwnerCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetVehicleOwnerCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execIsOverturn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverturn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execNeighAttack)
	{
		P_GET_STRUCT_REF(FSSHorseAttackInfo,Z_Param_Out_inAttackInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NeighAttack(Z_Param_Out_inAttackInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execNeighMulticast)
	{
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NeighMulticast_Implementation(Z_Param_InLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execOnBeginOverlapBreakObject)
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
	DEFINE_FUNCTION(AELSSHorse::execOnGetOnBeginOverlap)
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
	DEFINE_FUNCTION(AELSSHorse::execOnGetOnEndOverlap)
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
	DEFINE_FUNCTION(AELSSHorse::execOnMovementPreUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementPreUpdated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execOnMovementUpdated)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementUpdated_Implementation(Z_Param_Out_OldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execOnNeighBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNeighBeginOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execOnNeighEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNeighEndOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execOnRep_RemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execOnRunOverBeginOverlap)
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
	DEFINE_FUNCTION(AELSSHorse::execOnRunOverEndOverlap)
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
	DEFINE_FUNCTION(AELSSHorse::execPlayHitEffect)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLoc);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_ENUM(ESSDamageReason,Z_Param_DamageReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitEffect(Z_Param_Out_StartLoc,Z_Param_DamageCauser,ESSDamageReason(Z_Param_DamageReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execServerNeigh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNeigh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execSetExternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execSetInternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execSetRemainDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Durability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainDurability(Z_Param_Durability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execSuicideVehicleOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuicideVehicleOwner_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execTickAddAttention)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickAddAttention(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execTryGetOff_Server)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryGetOff_Server_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHorse::execTryTramp)
	{
		P_GET_OBJECT(AActor,Z_Param_inReceiveActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inIdealLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inTrampDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryTramp(Z_Param_inReceiveActor,Z_Param_Out_inIdealLocation,Z_Param_inTrampDuration);
		P_NATIVE_END;
	}
	static FName NAME_AELSSHorse_GetOff_Multicast = FName(TEXT("GetOff_Multicast"));
	void AELSSHorse::GetOff_Multicast(AELSSPlayer* Player)
	{
		ELSSHorse_eventGetOff_Multicast_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_GetOff_Multicast),&Parms);
	}
	static FName NAME_AELSSHorse_NeighMulticast = FName(TEXT("NeighMulticast"));
	void AELSSHorse::NeighMulticast(FVector_NetQuantize10 InLocation)
	{
		ELSSHorse_eventNeighMulticast_Parms Parms;
		Parms.InLocation=InLocation;
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_NeighMulticast),&Parms);
	}
	static FName NAME_AELSSHorse_OnMovementPreUpdated = FName(TEXT("OnMovementPreUpdated"));
	void AELSSHorse::OnMovementPreUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_OnMovementPreUpdated),NULL);
	}
	static FName NAME_AELSSHorse_OnMovementUpdated = FName(TEXT("OnMovementUpdated"));
	void AELSSHorse::OnMovementUpdated(FVector const& OldLocation)
	{
		ELSSHorse_eventOnMovementUpdated_Parms Parms;
		Parms.OldLocation=OldLocation;
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_OnMovementUpdated),&Parms);
	}
	static FName NAME_AELSSHorse_ServerNeigh = FName(TEXT("ServerNeigh"));
	void AELSSHorse::ServerNeigh()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_ServerNeigh),NULL);
	}
	static FName NAME_AELSSHorse_Setup = FName(TEXT("Setup"));
	void AELSSHorse::Setup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_Setup),NULL);
	}
	static FName NAME_AELSSHorse_SuicideVehicleOwner = FName(TEXT("SuicideVehicleOwner"));
	void AELSSHorse::SuicideVehicleOwner()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_SuicideVehicleOwner),NULL);
	}
	static FName NAME_AELSSHorse_TryGetOff_Server = FName(TEXT("TryGetOff_Server"));
	void AELSSHorse::TryGetOff_Server()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSHorse_TryGetOff_Server),NULL);
	}
	void AELSSHorse::StaticRegisterNativesAELSSHorse()
	{
		UClass* Class = AELSSHorse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDurability", &AELSSHorse::execAddDurability },
			{ "AddDurabilityByRate", &AELSSHorse::execAddDurabilityByRate },
			{ "AttachToVehicle", &AELSSHorse::execAttachToVehicle },
			{ "CanGetOff", &AELSSHorse::execCanGetOff },
			{ "CanGetOn", &AELSSHorse::execCanGetOn },
			{ "CheckAllowPawnControll", &AELSSHorse::execCheckAllowPawnControll },
			{ "ClearNeighAttack", &AELSSHorse::execClearNeighAttack },
			{ "CorrectDetachedOwner", &AELSSHorse::execCorrectDetachedOwner },
			{ "DetachFromVehicle", &AELSSHorse::execDetachFromVehicle },
			{ "GetAttachRelativeTransform", &AELSSHorse::execGetAttachRelativeTransform },
			{ "GetCurrentFloorPhysicalSurfaceType", &AELSSHorse::execGetCurrentFloorPhysicalSurfaceType },
			{ "GetOff_Multicast", &AELSSHorse::execGetOff_Multicast },
			{ "GetVehicleOwner", &AELSSHorse::execGetVehicleOwner },
			{ "GetVehicleOwnerCollision", &AELSSHorse::execGetVehicleOwnerCollision },
			{ "IsOverturn", &AELSSHorse::execIsOverturn },
			{ "NeighAttack", &AELSSHorse::execNeighAttack },
			{ "NeighMulticast", &AELSSHorse::execNeighMulticast },
			{ "OnBeginOverlapBreakObject", &AELSSHorse::execOnBeginOverlapBreakObject },
			{ "OnGetOnBeginOverlap", &AELSSHorse::execOnGetOnBeginOverlap },
			{ "OnGetOnEndOverlap", &AELSSHorse::execOnGetOnEndOverlap },
			{ "OnMovementPreUpdated", &AELSSHorse::execOnMovementPreUpdated },
			{ "OnMovementUpdated", &AELSSHorse::execOnMovementUpdated },
			{ "OnNeighBeginOverlap", &AELSSHorse::execOnNeighBeginOverlap },
			{ "OnNeighEndOverlap", &AELSSHorse::execOnNeighEndOverlap },
			{ "OnRep_RemainDurability", &AELSSHorse::execOnRep_RemainDurability },
			{ "OnRunOverBeginOverlap", &AELSSHorse::execOnRunOverBeginOverlap },
			{ "OnRunOverEndOverlap", &AELSSHorse::execOnRunOverEndOverlap },
			{ "PlayHitEffect", &AELSSHorse::execPlayHitEffect },
			{ "ServerNeigh", &AELSSHorse::execServerNeigh },
			{ "SetExternalVisible", &AELSSHorse::execSetExternalVisible },
			{ "SetInternalVisible", &AELSSHorse::execSetInternalVisible },
			{ "SetRemainDurability", &AELSSHorse::execSetRemainDurability },
			{ "Setup", &AELSSHorse::execSetup },
			{ "SuicideVehicleOwner", &AELSSHorse::execSuicideVehicleOwner },
			{ "TickAddAttention", &AELSSHorse::execTickAddAttention },
			{ "TryGetOff_Server", &AELSSHorse::execTryGetOff_Server },
			{ "TryTramp", &AELSSHorse::execTryTramp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSHorse_AddDurability_Statics
	{
		struct ELSSHorse_eventAddDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventAddDurability_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventAddDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "AddDurability", nullptr, nullptr, sizeof(ELSSHorse_eventAddDurability_Parms), Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_AddDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_AddDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics
	{
		struct ELSSHorse_eventAddDurabilityByRate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventAddDurabilityByRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventAddDurabilityByRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "AddDurabilityByRate", nullptr, nullptr, sizeof(ELSSHorse_eventAddDurabilityByRate_Parms), Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics
	{
		struct ELSSHorse_eventAttachToVehicle_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventAttachToVehicle_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorse_eventAttachToVehicle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventAttachToVehicle_Parms), &Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "AttachToVehicle", nullptr, nullptr, sizeof(ELSSHorse_eventAttachToVehicle_Parms), Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_AttachToVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_AttachToVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics
	{
		struct ELSSHorse_eventCanGetOff_Parms
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
	void Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorse_eventCanGetOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventCanGetOff_Parms), &Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "CanGetOff", nullptr, nullptr, sizeof(ELSSHorse_eventCanGetOff_Parms), Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_CanGetOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_CanGetOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics
	{
		struct ELSSHorse_eventCanGetOn_Parms
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
	void Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorse_eventCanGetOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventCanGetOn_Parms), &Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "CanGetOn", nullptr, nullptr, sizeof(ELSSHorse_eventCanGetOn_Parms), Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_CanGetOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_CanGetOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics
	{
		struct ELSSHorse_eventCheckAllowPawnControll_Parms
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
	void Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState_SetBit(void* Obj)
	{
		((ELSSHorse_eventCheckAllowPawnControll_Parms*)Obj)->ignoreDamagedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState = { "ignoreDamagedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventCheckAllowPawnControll_Parms), &Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorse_eventCheckAllowPawnControll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventCheckAllowPawnControll_Parms), &Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ignoreDamagedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "CheckAllowPawnControll", nullptr, nullptr, sizeof(ELSSHorse_eventCheckAllowPawnControll_Parms), Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_ClearNeighAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_ClearNeighAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_ClearNeighAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "ClearNeighAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_ClearNeighAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_ClearNeighAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_ClearNeighAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_ClearNeighAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics
	{
		struct ELSSHorse_eventCorrectDetachedOwner_Parms
		{
			AActor* inVehicleOwner;
			bool damaged;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inVehicleOwner;
		static void NewProp_damaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_damaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::NewProp_inVehicleOwner = { "inVehicleOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventCorrectDetachedOwner_Parms, inVehicleOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::NewProp_damaged_SetBit(void* Obj)
	{
		((ELSSHorse_eventCorrectDetachedOwner_Parms*)Obj)->damaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::NewProp_damaged = { "damaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventCorrectDetachedOwner_Parms), &Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::NewProp_damaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::NewProp_inVehicleOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::NewProp_damaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "CorrectDetachedOwner", nullptr, nullptr, sizeof(ELSSHorse_eventCorrectDetachedOwner_Parms), Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics
	{
		struct ELSSHorse_eventDetachFromVehicle_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventDetachFromVehicle_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_damaged_SetBit(void* Obj)
	{
		((ELSSHorse_eventDetachFromVehicle_Parms*)Obj)->damaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_damaged = { "damaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventDetachFromVehicle_Parms), &Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_damaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorse_eventDetachFromVehicle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventDetachFromVehicle_Parms), &Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_damaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "DetachFromVehicle", nullptr, nullptr, sizeof(ELSSHorse_eventDetachFromVehicle_Parms), Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_DetachFromVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_DetachFromVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics
	{
		struct ELSSHorse_eventGetAttachRelativeTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventGetAttachRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "GetAttachRelativeTransform", nullptr, nullptr, sizeof(ELSSHorse_eventGetAttachRelativeTransform_Parms), Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics
	{
		struct ELSSHorse_eventGetCurrentFloorPhysicalSurfaceType_Parms
		{
			bool inRearFootTrace;
			int32 ReturnValue;
		};
		static void NewProp_inRearFootTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRearFootTrace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::NewProp_inRearFootTrace_SetBit(void* Obj)
	{
		((ELSSHorse_eventGetCurrentFloorPhysicalSurfaceType_Parms*)Obj)->inRearFootTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::NewProp_inRearFootTrace = { "inRearFootTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventGetCurrentFloorPhysicalSurfaceType_Parms), &Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::NewProp_inRearFootTrace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventGetCurrentFloorPhysicalSurfaceType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::NewProp_inRearFootTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "GetCurrentFloorPhysicalSurfaceType", nullptr, nullptr, sizeof(ELSSHorse_eventGetCurrentFloorPhysicalSurfaceType_Parms), Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventGetOff_Multicast_Parms, Player), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "GetOff_Multicast", nullptr, nullptr, sizeof(ELSSHorse_eventGetOff_Multicast_Parms), Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_GetOff_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_GetOff_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics
	{
		struct ELSSHorse_eventGetVehicleOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventGetVehicleOwner_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "GetVehicleOwner", nullptr, nullptr, sizeof(ELSSHorse_eventGetVehicleOwner_Parms), Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_GetVehicleOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_GetVehicleOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics
	{
		struct ELSSHorse_eventGetVehicleOwnerCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventGetVehicleOwnerCollision_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "GetVehicleOwnerCollision", nullptr, nullptr, sizeof(ELSSHorse_eventGetVehicleOwnerCollision_Parms), Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics
	{
		struct ELSSHorse_eventIsOverturn_Parms
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
	void Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorse_eventIsOverturn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventIsOverturn_Parms), &Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "IsOverturn", nullptr, nullptr, sizeof(ELSSHorse_eventIsOverturn_Parms), Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_IsOverturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_IsOverturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics
	{
		struct ELSSHorse_eventNeighAttack_Parms
		{
			FSSHorseAttackInfo inAttackInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inAttackInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inAttackInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::NewProp_inAttackInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::NewProp_inAttackInfo = { "inAttackInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventNeighAttack_Parms, inAttackInfo), Z_Construct_UScriptStruct_FSSHorseAttackInfo, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::NewProp_inAttackInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::NewProp_inAttackInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::NewProp_inAttackInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "NeighAttack", nullptr, nullptr, sizeof(ELSSHorse_eventNeighAttack_Parms), Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_NeighAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_NeighAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventNeighMulticast_Parms, InLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "NeighMulticast", nullptr, nullptr, sizeof(ELSSHorse_eventNeighMulticast_Parms), Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_NeighMulticast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_NeighMulticast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics
	{
		struct ELSSHorse_eventOnBeginOverlapBreakObject_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnBeginOverlapBreakObject_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnBeginOverlapBreakObject_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnBeginOverlapBreakObject_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnBeginOverlapBreakObject_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSHorse_eventOnBeginOverlapBreakObject_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventOnBeginOverlapBreakObject_Parms), &Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnBeginOverlapBreakObject_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnBeginOverlapBreakObject", nullptr, nullptr, sizeof(ELSSHorse_eventOnBeginOverlapBreakObject_Parms), Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics
	{
		struct ELSSHorse_eventOnGetOnBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnBeginOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSHorse_eventOnGetOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventOnGetOnBeginOverlap_Parms), &Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnGetOnBeginOverlap", nullptr, nullptr, sizeof(ELSSHorse_eventOnGetOnBeginOverlap_Parms), Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics
	{
		struct ELSSHorse_eventOnGetOnEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnEndOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnGetOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnGetOnEndOverlap", nullptr, nullptr, sizeof(ELSSHorse_eventOnGetOnEndOverlap_Parms), Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnMovementPreUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::NewProp_OldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::NewProp_OldLocation = { "OldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnMovementUpdated_Parms, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::NewProp_OldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::NewProp_OldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::NewProp_OldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnMovementUpdated", nullptr, nullptr, sizeof(ELSSHorse_eventOnMovementUpdated_Parms), Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnMovementUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnMovementUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics
	{
		struct ELSSHorse_eventOnNeighBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighBeginOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSHorse_eventOnNeighBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventOnNeighBeginOverlap_Parms), &Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnNeighBeginOverlap", nullptr, nullptr, sizeof(ELSSHorse_eventOnNeighBeginOverlap_Parms), Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics
	{
		struct ELSSHorse_eventOnNeighEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighEndOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnNeighEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnNeighEndOverlap", nullptr, nullptr, sizeof(ELSSHorse_eventOnNeighEndOverlap_Parms), Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnRep_RemainDurability", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics
	{
		struct ELSSHorse_eventOnRunOverBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverBeginOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSHorse_eventOnRunOverBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventOnRunOverBeginOverlap_Parms), &Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnRunOverBeginOverlap", nullptr, nullptr, sizeof(ELSSHorse_eventOnRunOverBeginOverlap_Parms), Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics
	{
		struct ELSSHorse_eventOnRunOverEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverEndOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventOnRunOverEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "OnRunOverEndOverlap", nullptr, nullptr, sizeof(ELSSHorse_eventOnRunOverEndOverlap_Parms), Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics
	{
		struct ELSSHorse_eventPlayHitEffect_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_StartLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventPlayHitEffect_Parms, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_StartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_StartLoc_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventPlayHitEffect_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_DamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_DamageReason = { "DamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventPlayHitEffect_Parms, DamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_StartLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_DamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::NewProp_DamageReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "PlayHitEffect", nullptr, nullptr, sizeof(ELSSHorse_eventPlayHitEffect_Parms), Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_PlayHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_PlayHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_ServerNeigh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_ServerNeigh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_ServerNeigh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "ServerNeigh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_ServerNeigh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_ServerNeigh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_ServerNeigh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_ServerNeigh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics
	{
		struct ELSSHorse_eventSetExternalVisible_Parms
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
	void Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSHorse_eventSetExternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventSetExternalVisible_Parms), &Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "SetExternalVisible", nullptr, nullptr, sizeof(ELSSHorse_eventSetExternalVisible_Parms), Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_SetExternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_SetExternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics
	{
		struct ELSSHorse_eventSetInternalVisible_Parms
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
	void Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSHorse_eventSetInternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorse_eventSetInternalVisible_Parms), &Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "SetInternalVisible", nullptr, nullptr, sizeof(ELSSHorse_eventSetInternalVisible_Parms), Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_SetInternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_SetInternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics
	{
		struct ELSSHorse_eventSetRemainDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventSetRemainDurability_Parms, Durability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::NewProp_Durability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "SetRemainDurability", nullptr, nullptr, sizeof(ELSSHorse_eventSetRemainDurability_Parms), Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_SetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_SetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "SuicideVehicleOwner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics
	{
		struct ELSSHorse_eventTickAddAttention_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventTickAddAttention_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "TickAddAttention", nullptr, nullptr, sizeof(ELSSHorse_eventTickAddAttention_Parms), Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_TickAddAttention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_TickAddAttention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_TryGetOff_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_TryGetOff_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_TryGetOff_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "TryGetOff_Server", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_TryGetOff_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_TryGetOff_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_TryGetOff_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_TryGetOff_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHorse_TryTramp_Statics
	{
		struct ELSSHorse_eventTryTramp_Parms
		{
			AActor* inReceiveActor;
			FVector inIdealLocation;
			float inTrampDuration;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inReceiveActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inIdealLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inIdealLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inTrampDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inReceiveActor = { "inReceiveActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventTryTramp_Parms, inReceiveActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inIdealLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inIdealLocation = { "inIdealLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventTryTramp_Parms, inIdealLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inIdealLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inIdealLocation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inTrampDuration = { "inTrampDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorse_eventTryTramp_Parms, inTrampDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inReceiveActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inIdealLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::NewProp_inTrampDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHorse, nullptr, "TryTramp", nullptr, nullptr, sizeof(ELSSHorse_eventTryTramp_Parms), Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHorse_TryTramp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHorse_TryTramp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSHorse_NoRegister()
	{
		return AELSSHorse::StaticClass();
	}
	struct Z_Construct_UClass_AELSSHorse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCollision_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCollision_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCollision_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCollision_2;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighAttackCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeighAttackCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackMoving_MetaData[];
#endif
		static void NewProp_BackMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BackMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachGetOnSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachGetOnSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachRelativeTransform;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleUIOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleUIOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootStepTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootStepTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootStepFrontOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootStepFrontOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootStepRearOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootStepRearOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveDamageToVehicleOwnerMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveDamageToVehicleOwnerMoveId;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReduceDurabilityValueWhenClash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReduceDurabilityValueWhenClash;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBasisLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraBasisLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLockInputBrake_MetaData[];
#endif
		static void NewProp_IsLockInputBrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLockInputBrake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitActionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitActionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeighMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighCharaMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeighCharaMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NeighMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAttackInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAttackInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReserveActionTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReserveActionTimeMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReserveAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReserveAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReserveAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReserveActionRemainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReserveActionRemainTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSHorse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSHorse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSHorse_AddDurability, "AddDurability" }, // 2651891327
		{ &Z_Construct_UFunction_AELSSHorse_AddDurabilityByRate, "AddDurabilityByRate" }, // 4138805633
		{ &Z_Construct_UFunction_AELSSHorse_AttachToVehicle, "AttachToVehicle" }, // 2177125212
		{ &Z_Construct_UFunction_AELSSHorse_CanGetOff, "CanGetOff" }, // 1157785181
		{ &Z_Construct_UFunction_AELSSHorse_CanGetOn, "CanGetOn" }, // 3230989020
		{ &Z_Construct_UFunction_AELSSHorse_CheckAllowPawnControll, "CheckAllowPawnControll" }, // 4061279228
		{ &Z_Construct_UFunction_AELSSHorse_ClearNeighAttack, "ClearNeighAttack" }, // 2011285247
		{ &Z_Construct_UFunction_AELSSHorse_CorrectDetachedOwner, "CorrectDetachedOwner" }, // 1124907180
		{ &Z_Construct_UFunction_AELSSHorse_DetachFromVehicle, "DetachFromVehicle" }, // 4076390457
		{ &Z_Construct_UFunction_AELSSHorse_GetAttachRelativeTransform, "GetAttachRelativeTransform" }, // 844189967
		{ &Z_Construct_UFunction_AELSSHorse_GetCurrentFloorPhysicalSurfaceType, "GetCurrentFloorPhysicalSurfaceType" }, // 3261339773
		{ &Z_Construct_UFunction_AELSSHorse_GetOff_Multicast, "GetOff_Multicast" }, // 4084971807
		{ &Z_Construct_UFunction_AELSSHorse_GetVehicleOwner, "GetVehicleOwner" }, // 49850717
		{ &Z_Construct_UFunction_AELSSHorse_GetVehicleOwnerCollision, "GetVehicleOwnerCollision" }, // 2973536291
		{ &Z_Construct_UFunction_AELSSHorse_IsOverturn, "IsOverturn" }, // 685716734
		{ &Z_Construct_UFunction_AELSSHorse_NeighAttack, "NeighAttack" }, // 508529757
		{ &Z_Construct_UFunction_AELSSHorse_NeighMulticast, "NeighMulticast" }, // 1841075726
		{ &Z_Construct_UFunction_AELSSHorse_OnBeginOverlapBreakObject, "OnBeginOverlapBreakObject" }, // 2732868256
		{ &Z_Construct_UFunction_AELSSHorse_OnGetOnBeginOverlap, "OnGetOnBeginOverlap" }, // 1632388191
		{ &Z_Construct_UFunction_AELSSHorse_OnGetOnEndOverlap, "OnGetOnEndOverlap" }, // 4017262539
		{ &Z_Construct_UFunction_AELSSHorse_OnMovementPreUpdated, "OnMovementPreUpdated" }, // 2949123889
		{ &Z_Construct_UFunction_AELSSHorse_OnMovementUpdated, "OnMovementUpdated" }, // 1615656658
		{ &Z_Construct_UFunction_AELSSHorse_OnNeighBeginOverlap, "OnNeighBeginOverlap" }, // 4165848271
		{ &Z_Construct_UFunction_AELSSHorse_OnNeighEndOverlap, "OnNeighEndOverlap" }, // 2709791098
		{ &Z_Construct_UFunction_AELSSHorse_OnRep_RemainDurability, "OnRep_RemainDurability" }, // 259728124
		{ &Z_Construct_UFunction_AELSSHorse_OnRunOverBeginOverlap, "OnRunOverBeginOverlap" }, // 3315879088
		{ &Z_Construct_UFunction_AELSSHorse_OnRunOverEndOverlap, "OnRunOverEndOverlap" }, // 691163942
		{ &Z_Construct_UFunction_AELSSHorse_PlayHitEffect, "PlayHitEffect" }, // 2196183756
		{ &Z_Construct_UFunction_AELSSHorse_ServerNeigh, "ServerNeigh" }, // 1968335199
		{ &Z_Construct_UFunction_AELSSHorse_SetExternalVisible, "SetExternalVisible" }, // 3117643251
		{ &Z_Construct_UFunction_AELSSHorse_SetInternalVisible, "SetInternalVisible" }, // 717847604
		{ &Z_Construct_UFunction_AELSSHorse_SetRemainDurability, "SetRemainDurability" }, // 3882439251
		{ &Z_Construct_UFunction_AELSSHorse_Setup, "Setup" }, // 3088412860
		{ &Z_Construct_UFunction_AELSSHorse_SuicideVehicleOwner, "SuicideVehicleOwner" }, // 1231345585
		{ &Z_Construct_UFunction_AELSSHorse_TickAddAttention, "TickAddAttention" }, // 2803699063
		{ &Z_Construct_UFunction_AELSSHorse_TryGetOff_Server, "TryGetOff_Server" }, // 1828336507
		{ &Z_Construct_UFunction_AELSSHorse_TryTramp, "TryTramp" }, // 3166021695
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELSSHorse.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffLocation = { "GetOffLocation", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, GetOffLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_1 = { "HitCollision_1", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, HitCollision_1), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_2 = { "HitCollision_2", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, HitCollision_2), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOnCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOnCollision = { "GetOnCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, GetOnCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOnCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOnCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverCollision = { "RunOverCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, RunOverCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_PhysicsOverlapDetectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_PhysicsOverlapDetectionComponent = { "PhysicsOverlapDetectionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, PhysicsOverlapDetectionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_PhysicsOverlapDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_PhysicsOverlapDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwnerCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwnerCollision = { "VehicleOwnerCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, VehicleOwnerCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwnerCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwnerCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighAttackCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighAttackCollision = { "NeighAttackCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, NeighAttackCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighAttackCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighAttackCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_ForwardYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ForwardYaw = { "ForwardYaw", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, ForwardYaw), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ForwardYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ForwardYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_BackMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	void Z_Construct_UClass_AELSSHorse_Statics::NewProp_BackMoving_SetBit(void* Obj)
	{
		((AELSSHorse*)Obj)->BackMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_BackMoving = { "BackMoving", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSHorse), &Z_Construct_UClass_AELSSHorse_Statics::NewProp_BackMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_BackMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_BackMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwner = { "VehicleOwner", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, VehicleOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachGetOnSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachGetOnSocketName = { "AttachGetOnSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, AttachGetOnSocketName), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachGetOnSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachGetOnSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachRelativeTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachRelativeTransform = { "AttachRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, AttachRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetVertical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetVertical = { "GetOffCheckOffsetVertical", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, GetOffCheckOffsetVertical), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetVertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetHorizontal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetHorizontal = { "GetOffCheckOffsetHorizontal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, GetOffCheckOffsetHorizontal), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_InteractUIOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_InteractUIOffset = { "InteractUIOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, InteractUIOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_InteractUIOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_InteractUIOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleUIOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleUIOffset = { "VehicleUIOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, VehicleUIOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleUIOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleUIOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_SoundCue_Hit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_SoundCue_Hit = { "SoundCue_Hit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, SoundCue_Hit), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_SoundCue_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_SoundCue_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepTraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepTraceDistance = { "FootStepTraceDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, FootStepTraceDistance), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepFrontOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepFrontOffset = { "FootStepFrontOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, FootStepFrontOffset), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepFrontOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepFrontOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepRearOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepRearOffset = { "FootStepRearOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, FootStepRearOffset), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepRearOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepRearOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemoveDamageToVehicleOwnerMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemoveDamageToVehicleOwnerMoveId = { "RemoveDamageToVehicleOwnerMoveId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, RemoveDamageToVehicleOwnerMoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemoveDamageToVehicleOwnerMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemoveDamageToVehicleOwnerMoveId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitEffectLineTraceObjectTypes = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, HitEffectLineTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemainDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemainDurability = { "RemainDurability", "OnRep_RemainDurability", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, RemainDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemainDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemainDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_MaxDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_MaxDurability = { "MaxDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, MaxDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_MaxDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_MaxDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_ClashImpulseSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ClashImpulseSize = { "ClashImpulseSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, ClashImpulseSize), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ClashImpulseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ClashImpulseSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenClash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenClash = { "ReduceDurabilityValueWhenClash", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, ReduceDurabilityValueWhenClash), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenClash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenClash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsEnableRunOver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	void Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsEnableRunOver_SetBit(void* Obj)
	{
		((AELSSHorse*)Obj)->IsEnableRunOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsEnableRunOver = { "IsEnableRunOver", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSHorse), &Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsEnableRunOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsEnableRunOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsEnableRunOver_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverOverlapActors_Inner = { "RunOverOverlapActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverOverlapActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverOverlapActors = { "RunOverOverlapActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, RunOverOverlapActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverOverlapActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverOverlapActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverSpeed = { "RunOverSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, RunOverSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverSpeed_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverMoveIds_Inner = { "RunOverMoveIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverMoveIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverMoveIds = { "RunOverMoveIds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, RunOverMoveIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverMoveIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverMoveIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenRunOver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenRunOver = { "ReduceDurabilityValueWhenRunOver", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, ReduceDurabilityValueWhenRunOver), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenRunOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenRunOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_CameraBasisLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_CameraBasisLocationOffset = { "CameraBasisLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, CameraBasisLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_CameraBasisLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_CameraBasisLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsLockInputBrake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	void Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsLockInputBrake_SetBit(void* Obj)
	{
		((AELSSHorse*)Obj)->IsLockInputBrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsLockInputBrake = { "IsLockInputBrake", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSHorse), &Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsLockInputBrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsLockInputBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsLockInputBrake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_LimitActionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_LimitActionSpeed = { "LimitActionSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, LimitActionSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_LimitActionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_LimitActionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMontage = { "NeighMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, NeighMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighCharaMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighCharaMontage = { "NeighCharaMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, NeighCharaMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighCharaMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighCharaMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMoveId = { "NeighMoveId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, NeighMoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_CurrentAttackInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_CurrentAttackInfo = { "CurrentAttackInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, CurrentAttackInfo), Z_Construct_UScriptStruct_FSSHorseAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_CurrentAttackInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_CurrentAttackInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionTimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionTimeMax = { "ReserveActionTimeMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, ReserveActionTimeMax), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionTimeMax_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveAction = { "ReserveAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, ReserveAction), Z_Construct_UEnum_ABP_200508_ESSHorseAction, METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionRemainTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorse" },
		{ "ModuleRelativePath", "Public/ELSSHorse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionRemainTime = { "ReserveActionRemainTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHorse, ReserveActionRemainTime), METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionRemainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionRemainTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSHorse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitCollision_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOnCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_PhysicsOverlapDetectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwnerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighAttackCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ForwardYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_BackMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachGetOnSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_AttachRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_GetOffCheckOffsetHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_InteractUIOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_VehicleUIOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_SoundCue_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepFrontOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_FootStepRearOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemoveDamageToVehicleOwnerMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_HitEffectLineTraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RemainDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_MaxDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ClashImpulseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenClash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsEnableRunOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverOverlapActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverOverlapActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverMoveIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_RunOverMoveIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReduceDurabilityValueWhenRunOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_CameraBasisLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_IsLockInputBrake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_LimitActionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighCharaMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_NeighMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_CurrentAttackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHorse_Statics::NewProp_ReserveActionRemainTime,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSHorse_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSHorse, IELSSActorCommonInterface), false },
			{ Z_Construct_UClass_UELSSVehicleInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSHorse, IELSSVehicleInterface), false },
			{ Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSHorse, IELSSInteractableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSHorse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSHorse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSHorse_Statics::ClassParams = {
		&AELSSHorse::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSHorse_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSHorse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHorse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSHorse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSHorse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSHorse, 3047670058);
	template<> ABP_200508_API UClass* StaticClass<AELSSHorse>()
	{
		return AELSSHorse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSHorse(Z_Construct_UClass_AELSSHorse, &AELSSHorse::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSHorse"), false, nullptr, nullptr, nullptr);

	void AELSSHorse::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ForwardYaw(TEXT("ForwardYaw"));
		static const FName Name_BackMoving(TEXT("BackMoving"));
		static const FName Name_VehicleOwner(TEXT("VehicleOwner"));
		static const FName Name_RemainDurability(TEXT("RemainDurability"));

		const bool bIsValid = true
			&& Name_ForwardYaw == ClassReps[(int32)ENetFields_Private::ForwardYaw].Property->GetFName()
			&& Name_BackMoving == ClassReps[(int32)ENetFields_Private::BackMoving].Property->GetFName()
			&& Name_VehicleOwner == ClassReps[(int32)ENetFields_Private::VehicleOwner].Property->GetFName()
			&& Name_RemainDurability == ClassReps[(int32)ENetFields_Private::RemainDurability].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSHorse"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSHorse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
