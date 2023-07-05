// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELReplayRecordParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELReplayRecordParameter() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELReplayRecordParameter();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FELReplayRecordParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELReplayRecordParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELReplayRecordParameter, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELReplayRecordParameter"), sizeof(FELReplayRecordParameter), Get_Z_Construct_UScriptStruct_FELReplayRecordParameter_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELReplayRecordParameter>()
{
	return FELReplayRecordParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELReplayRecordParameter(FELReplayRecordParameter::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELReplayRecordParameter"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELReplayRecordParameter
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELReplayRecordParameter()
	{
		UScriptStruct::DeferCppStructOps<FELReplayRecordParameter>(FName(TEXT("ELReplayRecordParameter")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELReplayRecordParameter;
	struct Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPoseSnapShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerPoseSnapShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageLv_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageLv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Critical_MetaData[];
#endif
		static void NewProp_Critical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Critical;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELReplayRecordParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayRecordParameter" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplayRecordParameter, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerPoseSnapShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayRecordParameter" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerPoseSnapShot = { "PlayerPoseSnapShot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplayRecordParameter, PlayerPoseSnapShot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerPoseSnapShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerPoseSnapShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayRecordParameter" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerTransform = { "PlayerTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplayRecordParameter, PlayerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayRecordParameter" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplayRecordParameter, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayRecordParameter" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleTransform = { "ParticleTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplayRecordParameter, ParticleTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DamageLv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayRecordParameter" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DamageLv = { "DamageLv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplayRecordParameter, DamageLv), METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DamageLv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DamageLv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_Critical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayRecordParameter" },
		{ "ModuleRelativePath", "Public/ELReplayRecordParameter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_Critical_SetBit(void* Obj)
	{
		((FELReplayRecordParameter*)Obj)->Critical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_Critical = { "Critical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELReplayRecordParameter), &Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_Critical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_Critical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_Critical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerPoseSnapShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_PlayerTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_ParticleTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_DamageLv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::NewProp_Critical,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELReplayRecordParameter",
		sizeof(FELReplayRecordParameter),
		alignof(FELReplayRecordParameter),
		Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELReplayRecordParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELReplayRecordParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELReplayRecordParameter"), sizeof(FELReplayRecordParameter), Get_Z_Construct_UScriptStruct_FELReplayRecordParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELReplayRecordParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELReplayRecordParameter_Hash() { return 4219618608U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
