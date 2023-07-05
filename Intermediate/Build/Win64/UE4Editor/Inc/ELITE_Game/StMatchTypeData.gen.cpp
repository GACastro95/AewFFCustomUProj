// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/StMatchTypeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMatchTypeData() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FStMatchTypeData();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchRuleType();
// End Cross Module References
class UScriptStruct* FStMatchTypeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FStMatchTypeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMatchTypeData, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("StMatchTypeData"), sizeof(FStMatchTypeData), Get_Z_Construct_UScriptStruct_FStMatchTypeData_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FStMatchTypeData>()
{
	return FStMatchTypeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMatchTypeData(FStMatchTypeData::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("StMatchTypeData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFStMatchTypeData
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFStMatchTypeData()
	{
		UScriptStruct::DeferCppStructOps<FStMatchTypeData>(FName(TEXT("StMatchTypeData")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFStMatchTypeData;
	struct Z_Construct_UScriptStruct_FStMatchTypeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Rule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_Rule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType_Rule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchTypeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMatchTypeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMatchTypeData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchTypeData" },
		{ "ModuleRelativePath", "Public/StMatchTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchTypeData, MatchType), Z_Construct_UEnum_ELITE_Game_EELMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Rule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Rule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchTypeData" },
		{ "ModuleRelativePath", "Public/StMatchTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Rule = { "MatchType_Rule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchTypeData, MatchType_Rule), Z_Construct_UEnum_ELITE_Game_EELMatchRuleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Rule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Rule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMatchTypeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Rule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchTypeData_Statics::NewProp_MatchType_Rule,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMatchTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"StMatchTypeData",
		sizeof(FStMatchTypeData),
		alignof(FStMatchTypeData),
		Z_Construct_UScriptStruct_FStMatchTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMatchTypeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMatchTypeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMatchTypeData"), sizeof(FStMatchTypeData), Get_Z_Construct_UScriptStruct_FStMatchTypeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMatchTypeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMatchTypeData_Hash() { return 3464617909U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
