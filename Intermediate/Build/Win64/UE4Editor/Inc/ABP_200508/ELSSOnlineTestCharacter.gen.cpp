// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineTestCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineTestCharacter() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestCharacter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestAttackProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Damage_Implementation(Z_Param_NewDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execDamageLocal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageLocal(Z_Param_NewDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execForceHPDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceHPDead_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execGetJoinID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetJoinID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execIsDeadForDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeadForDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execIsHPDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHPDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execIsInputMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execOnRep_HP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execSetJoinID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJoinID(Z_Param_InID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execSetWrestlerMeshParam)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_inCostumeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerMeshParam(EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_inCostumeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestCharacter::execSpawnAttackProjectile_RPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAttackProjectile_RPC_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AELSSOnlineTestCharacter_Damage = FName(TEXT("Damage"));
	void AELSSOnlineTestCharacter::Damage(int32 NewDamage)
	{
		ELSSOnlineTestCharacter_eventDamage_Parms Parms;
		Parms.NewDamage=NewDamage;
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestCharacter_Damage),&Parms);
	}
	static FName NAME_AELSSOnlineTestCharacter_ForceHPDead = FName(TEXT("ForceHPDead"));
	void AELSSOnlineTestCharacter::ForceHPDead()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestCharacter_ForceHPDead),NULL);
	}
	static FName NAME_AELSSOnlineTestCharacter_OnHPDead = FName(TEXT("OnHPDead"));
	void AELSSOnlineTestCharacter::OnHPDead()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestCharacter_OnHPDead),NULL);
	}
	static FName NAME_AELSSOnlineTestCharacter_SetupMesh = FName(TEXT("SetupMesh"));
	void AELSSOnlineTestCharacter::SetupMesh()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestCharacter_SetupMesh),NULL);
	}
	static FName NAME_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC = FName(TEXT("SpawnAttackProjectile_RPC"));
	void AELSSOnlineTestCharacter::SpawnAttackProjectile_RPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC),NULL);
	}
	void AELSSOnlineTestCharacter::StaticRegisterNativesAELSSOnlineTestCharacter()
	{
		UClass* Class = AELSSOnlineTestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Damage", &AELSSOnlineTestCharacter::execDamage },
			{ "DamageLocal", &AELSSOnlineTestCharacter::execDamageLocal },
			{ "ForceHPDead", &AELSSOnlineTestCharacter::execForceHPDead },
			{ "GetJoinID", &AELSSOnlineTestCharacter::execGetJoinID },
			{ "IsDeadForDestroy", &AELSSOnlineTestCharacter::execIsDeadForDestroy },
			{ "IsHPDead", &AELSSOnlineTestCharacter::execIsHPDead },
			{ "IsInputMove", &AELSSOnlineTestCharacter::execIsInputMove },
			{ "OnRep_HP", &AELSSOnlineTestCharacter::execOnRep_HP },
			{ "SetJoinID", &AELSSOnlineTestCharacter::execSetJoinID },
			{ "SetWrestlerMeshParam", &AELSSOnlineTestCharacter::execSetWrestlerMeshParam },
			{ "SpawnAttackProjectile_RPC", &AELSSOnlineTestCharacter::execSpawnAttackProjectile_RPC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestCharacter_eventDamage_Parms, NewDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::NewProp_NewDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "Damage", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventDamage_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics
	{
		struct ELSSOnlineTestCharacter_eventDamageLocal_Parms
		{
			int32 NewDamage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestCharacter_eventDamageLocal_Parms, NewDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::NewProp_NewDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "DamageLocal", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventDamageLocal_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "ForceHPDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics
	{
		struct ELSSOnlineTestCharacter_eventGetJoinID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestCharacter_eventGetJoinID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "GetJoinID", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventGetJoinID_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics
	{
		struct ELSSOnlineTestCharacter_eventIsDeadForDestroy_Parms
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
	void Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineTestCharacter_eventIsDeadForDestroy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineTestCharacter_eventIsDeadForDestroy_Parms), &Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "IsDeadForDestroy", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventIsDeadForDestroy_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics
	{
		struct ELSSOnlineTestCharacter_eventIsHPDead_Parms
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
	void Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineTestCharacter_eventIsHPDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineTestCharacter_eventIsHPDead_Parms), &Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "IsHPDead", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventIsHPDead_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics
	{
		struct ELSSOnlineTestCharacter_eventIsInputMove_Parms
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
	void Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineTestCharacter_eventIsInputMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineTestCharacter_eventIsInputMove_Parms), &Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "IsInputMove", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventIsInputMove_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "OnHPDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "OnRep_HP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics
	{
		struct ELSSOnlineTestCharacter_eventSetJoinID_Parms
		{
			int32 InID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestCharacter_eventSetJoinID_Parms, InID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::NewProp_InID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "SetJoinID", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventSetJoinID_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "SetupMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics
	{
		struct ELSSOnlineTestCharacter_eventSetWrestlerMeshParam_Parms
		{
			EWrestlerID_N inWrestlerId;
			int32 inCostumeID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inCostumeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestCharacter_eventSetWrestlerMeshParam_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::NewProp_inCostumeID = { "inCostumeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestCharacter_eventSetWrestlerMeshParam_Parms, inCostumeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::NewProp_inCostumeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "SetWrestlerMeshParam", nullptr, nullptr, sizeof(ELSSOnlineTestCharacter_eventSetWrestlerMeshParam_Parms), Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestCharacter, nullptr, "SpawnAttackProjectile_RPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSOnlineTestCharacter_NoRegister()
	{
		return AELSSOnlineTestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AELSSOnlineTestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CostumeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_joinID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dead_MetaData[];
#endif
		static void NewProp_dead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackProjectileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttackProjectileType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackProjectileOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackProjectileOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterDeadDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AfterDeadDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_Damage, "Damage" }, // 2588604383
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_DamageLocal, "DamageLocal" }, // 1510774152
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_ForceHPDead, "ForceHPDead" }, // 3694852590
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_GetJoinID, "GetJoinID" }, // 2877200120
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_IsDeadForDestroy, "IsDeadForDestroy" }, // 3257687071
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_IsHPDead, "IsHPDead" }, // 4231771902
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_IsInputMove, "IsInputMove" }, // 178200379
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_OnHPDead, "OnHPDead" }, // 1160147498
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_OnRep_HP, "OnRep_HP" }, // 3940607451
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_SetJoinID, "SetJoinID" }, // 635578222
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_SetupMesh, "SetupMesh" }, // 3730277525
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_SetWrestlerMeshParam, "SetWrestlerMeshParam" }, // 820969216
		{ &Z_Construct_UFunction_AELSSOnlineTestCharacter_SpawnAttackProjectile_RPC, "SpawnAttackProjectile_RPC" }, // 1355676002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELSSOnlineTestCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_CostumeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_CostumeID = { "CostumeID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, CostumeID), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_CostumeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_CostumeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_joinID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_joinID = { "joinID", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, joinID), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_joinID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_joinID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_HP = { "HP", "OnRep_HP", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, HP), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_LocalHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_LocalHP = { "LocalHP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, LocalHP), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_LocalHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_LocalHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_maxHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_maxHP = { "maxHP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, maxHP), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_maxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_maxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_dead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_dead_SetBit(void* Obj)
	{
		((AELSSOnlineTestCharacter*)Obj)->dead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_dead = { "dead", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSOnlineTestCharacter), &Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_dead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_dead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_dead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileType = { "AttackProjectileType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, AttackProjectileType), Z_Construct_UClass_AELSSOnlineTestAttackProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileOffset = { "AttackProjectileOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, AttackProjectileOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AfterDeadDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestCharacter" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AfterDeadDuration = { "AfterDeadDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestCharacter, AfterDeadDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AfterDeadDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AfterDeadDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_CostumeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_joinID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_LocalHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_maxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_dead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AttackProjectileOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::NewProp_AfterDeadDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSOnlineTestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::ClassParams = {
		&AELSSOnlineTestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSOnlineTestCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSOnlineTestCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSOnlineTestCharacter, 1124778470);
	template<> ABP_200508_API UClass* StaticClass<AELSSOnlineTestCharacter>()
	{
		return AELSSOnlineTestCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSOnlineTestCharacter(Z_Construct_UClass_AELSSOnlineTestCharacter, &AELSSOnlineTestCharacter::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSOnlineTestCharacter"), false, nullptr, nullptr, nullptr);

	void AELSSOnlineTestCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WrestlerID(TEXT("WrestlerID"));
		static const FName Name_joinID(TEXT("joinID"));
		static const FName Name_HP(TEXT("HP"));

		const bool bIsValid = true
			&& Name_WrestlerID == ClassReps[(int32)ENetFields_Private::WrestlerID].Property->GetFName()
			&& Name_joinID == ClassReps[(int32)ENetFields_Private::joinID].Property->GetFName()
			&& Name_HP == ClassReps[(int32)ENetFields_Private::HP].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSOnlineTestCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSOnlineTestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
