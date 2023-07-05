// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/WrestlingSkillParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlingSkillParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FWrestlingSkillParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FWrestlingSkillParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrestlingSkillParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("WrestlingSkillParam"), sizeof(FWrestlingSkillParam), Get_Z_Construct_UScriptStruct_FWrestlingSkillParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FWrestlingSkillParam>()
{
	return FWrestlingSkillParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrestlingSkillParam(FWrestlingSkillParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("WrestlingSkillParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFWrestlingSkillParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFWrestlingSkillParam()
	{
		UScriptStruct::DeferCppStructOps<FWrestlingSkillParam>(FName(TEXT("WrestlingSkillParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFWrestlingSkillParam;
	struct Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityScore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityScore;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Passive_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Passive_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Passive;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Action_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WrestlingSkillParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrestlingSkillParam>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_AbilityScore_Inner = { "AbilityScore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_AbilityScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlingSkillParam" },
		{ "ModuleRelativePath", "Public/WrestlingSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_AbilityScore = { "AbilityScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlingSkillParam, AbilityScore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_AbilityScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_AbilityScore_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Passive_Inner = { "Passive", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Passive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlingSkillParam" },
		{ "ModuleRelativePath", "Public/WrestlingSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Passive = { "Passive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlingSkillParam, Passive), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Passive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Passive_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Action_Inner = { "Action", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlingSkillParam" },
		{ "ModuleRelativePath", "Public/WrestlingSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlingSkillParam, Action), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_AbilityScore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_AbilityScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Passive_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Passive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Action_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::NewProp_Action,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"WrestlingSkillParam",
		sizeof(FWrestlingSkillParam),
		alignof(FWrestlingSkillParam),
		Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrestlingSkillParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrestlingSkillParam"), sizeof(FWrestlingSkillParam), Get_Z_Construct_UScriptStruct_FWrestlingSkillParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrestlingSkillParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrestlingSkillParam_Hash() { return 3126649061U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
