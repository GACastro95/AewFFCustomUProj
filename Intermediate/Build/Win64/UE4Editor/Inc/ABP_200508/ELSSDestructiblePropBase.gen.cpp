// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDestructiblePropBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDestructiblePropBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDestructiblePropBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDestructiblePropBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleMesh_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execAddAttentionPoint)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttentionPoint(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execAddDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddDurability(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execBreak_Imple)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Break_Imple();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execGetMaxDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execGetRemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execOnRep_IsBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execPlayHitEffect)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLoc);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_ENUM(ESSDamageReason,Z_Param_DamageReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitEffect(Z_Param_Out_StartLoc,Z_Param_DamageCauser,ESSDamageReason(Z_Param_DamageReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execSetRemainDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Durability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainDurability(Z_Param_Durability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDestructiblePropBase::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AELSSDestructiblePropBase_Setup = FName(TEXT("Setup"));
	void AELSSDestructiblePropBase::Setup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSDestructiblePropBase_Setup),NULL);
	}
	void AELSSDestructiblePropBase::StaticRegisterNativesAELSSDestructiblePropBase()
	{
		UClass* Class = AELSSDestructiblePropBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttentionPoint", &AELSSDestructiblePropBase::execAddAttentionPoint },
			{ "AddDurability", &AELSSDestructiblePropBase::execAddDurability },
			{ "Break_Imple", &AELSSDestructiblePropBase::execBreak_Imple },
			{ "GetMaxDurability", &AELSSDestructiblePropBase::execGetMaxDurability },
			{ "GetRemainDurability", &AELSSDestructiblePropBase::execGetRemainDurability },
			{ "OnRep_IsBroken", &AELSSDestructiblePropBase::execOnRep_IsBroken },
			{ "PlayHitEffect", &AELSSDestructiblePropBase::execPlayHitEffect },
			{ "SetRemainDurability", &AELSSDestructiblePropBase::execSetRemainDurability },
			{ "Setup", &AELSSDestructiblePropBase::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics
	{
		struct ELSSDestructiblePropBase_eventAddAttentionPoint_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventAddAttentionPoint_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "AddAttentionPoint", nullptr, nullptr, sizeof(ELSSDestructiblePropBase_eventAddAttentionPoint_Parms), Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics
	{
		struct ELSSDestructiblePropBase_eventAddDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventAddDurability_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventAddDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "AddDurability", nullptr, nullptr, sizeof(ELSSDestructiblePropBase_eventAddDurability_Parms), Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "Break_Imple", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics
	{
		struct ELSSDestructiblePropBase_eventGetMaxDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventGetMaxDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "GetMaxDurability", nullptr, nullptr, sizeof(ELSSDestructiblePropBase_eventGetMaxDurability_Parms), Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics
	{
		struct ELSSDestructiblePropBase_eventGetRemainDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventGetRemainDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "GetRemainDurability", nullptr, nullptr, sizeof(ELSSDestructiblePropBase_eventGetRemainDurability_Parms), Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "OnRep_IsBroken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics
	{
		struct ELSSDestructiblePropBase_eventPlayHitEffect_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_StartLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventPlayHitEffect_Parms, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_StartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_StartLoc_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventPlayHitEffect_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_DamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_DamageReason = { "DamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventPlayHitEffect_Parms, DamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_StartLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_DamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::NewProp_DamageReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "PlayHitEffect", nullptr, nullptr, sizeof(ELSSDestructiblePropBase_eventPlayHitEffect_Parms), Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics
	{
		struct ELSSDestructiblePropBase_eventSetRemainDurability_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDestructiblePropBase_eventSetRemainDurability_Parms, Durability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::NewProp_Durability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "SetRemainDurability", nullptr, nullptr, sizeof(ELSSDestructiblePropBase_eventSetRemainDurability_Parms), Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDestructiblePropBase_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDestructiblePropBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDestructiblePropBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDestructiblePropBase, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDestructiblePropBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDestructiblePropBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDestructiblePropBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDestructiblePropBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSDestructiblePropBase_NoRegister()
	{
		return AELSSDestructiblePropBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSDestructiblePropBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestructibleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestructibleMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Break_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Break;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCopyMaterialToDM_MetaData[];
#endif
		static void NewProp_IsCopyMaterialToDM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCopyMaterialToDM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPhysicsDP_MetaData[];
#endif
		static void NewProp_IsPhysicsDP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPhysicsDP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableInvolveFeedbackReaction_MetaData[];
#endif
		static void NewProp_DisableInvolveFeedbackReaction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableInvolveFeedbackReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageToPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitEffectLineTraceScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitEffectLineTraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitEffectLineTraceObjectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBroken_MetaData[];
#endif
		static void NewProp_IsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainDurability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSDestructiblePropBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSDestructiblePropBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_AddAttentionPoint, "AddAttentionPoint" }, // 2922097414
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_AddDurability, "AddDurability" }, // 2481864777
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_Break_Imple, "Break_Imple" }, // 1721935475
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_GetMaxDurability, "GetMaxDurability" }, // 2473662193
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_GetRemainDurability, "GetRemainDurability" }, // 2890313926
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_OnRep_IsBroken, "OnRep_IsBroken" }, // 926680395
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_PlayHitEffect, "PlayHitEffect" }, // 3959080011
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_SetRemainDurability, "SetRemainDurability" }, // 1683367495
		{ &Z_Construct_UFunction_AELSSDestructiblePropBase_Setup, "Setup" }, // 1061217502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSDestructiblePropBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DefaultSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DefaultSceneComponent = { "DefaultSceneComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, DefaultSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DefaultSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DefaultSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleComponent = { "DestructibleComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, DestructibleComponent), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleMeshAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleMeshAsset = { "DestructibleMeshAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, DestructibleMeshAsset), Z_Construct_UClass_UDestructibleMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_SoundCue_Break_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_SoundCue_Break = { "SoundCue_Break", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, SoundCue_Break), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_SoundCue_Break_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_SoundCue_Break_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsCopyMaterialToDM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsCopyMaterialToDM_SetBit(void* Obj)
	{
		((AELSSDestructiblePropBase*)Obj)->IsCopyMaterialToDM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsCopyMaterialToDM = { "IsCopyMaterialToDM", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSDestructiblePropBase), &Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsCopyMaterialToDM_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsCopyMaterialToDM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsCopyMaterialToDM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsPhysicsDP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsPhysicsDP_SetBit(void* Obj)
	{
		((AELSSDestructiblePropBase*)Obj)->IsPhysicsDP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsPhysicsDP = { "IsPhysicsDP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSDestructiblePropBase), &Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsPhysicsDP_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsPhysicsDP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsPhysicsDP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DisableInvolveFeedbackReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DisableInvolveFeedbackReaction_SetBit(void* Obj)
	{
		((AELSSDestructiblePropBase*)Obj)->DisableInvolveFeedbackReaction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DisableInvolveFeedbackReaction = { "DisableInvolveFeedbackReaction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSDestructiblePropBase), &Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DisableInvolveFeedbackReaction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DisableInvolveFeedbackReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DisableInvolveFeedbackReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, ImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_ImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DamageToPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DamageToPlayer = { "DamageToPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, DamageToPlayer), METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DamageToPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DamageToPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceScale = { "HitEffectLineTraceScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, HitEffectLineTraceScale), METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceScale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceObjectTypes = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, HitEffectLineTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsBroken_SetBit(void* Obj)
	{
		((AELSSDestructiblePropBase*)Obj)->IsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsBroken = { "IsBroken", "OnRep_IsBroken", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSDestructiblePropBase), &Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_AttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_AttentionPoint = { "AttentionPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, AttentionPoint), METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_AttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_AttentionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_RemainDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_RemainDurability = { "RemainDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, RemainDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_RemainDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_RemainDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_MaxDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDestructiblePropBase" },
		{ "ModuleRelativePath", "Public/ELSSDestructiblePropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_MaxDurability = { "MaxDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDestructiblePropBase, MaxDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_MaxDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_MaxDurability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSDestructiblePropBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DefaultSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DestructibleMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_SoundCue_Break,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsCopyMaterialToDM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsPhysicsDP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DisableInvolveFeedbackReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_ImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_DamageToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_HitEffectLineTraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_IsBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_AttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_RemainDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDestructiblePropBase_Statics::NewProp_MaxDurability,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSDestructiblePropBase, IELSSActorCommonInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSDestructiblePropBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSDestructiblePropBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSDestructiblePropBase_Statics::ClassParams = {
		&AELSSDestructiblePropBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSDestructiblePropBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDestructiblePropBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSDestructiblePropBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSDestructiblePropBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSDestructiblePropBase, 1227940274);
	template<> ABP_200508_API UClass* StaticClass<AELSSDestructiblePropBase>()
	{
		return AELSSDestructiblePropBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSDestructiblePropBase(Z_Construct_UClass_AELSSDestructiblePropBase, &AELSSDestructiblePropBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSDestructiblePropBase"), false, nullptr, nullptr, nullptr);

	void AELSSDestructiblePropBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsBroken(TEXT("IsBroken"));

		const bool bIsValid = true
			&& Name_IsBroken == ClassReps[(int32)ENetFields_Private::IsBroken].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSDestructiblePropBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSDestructiblePropBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
