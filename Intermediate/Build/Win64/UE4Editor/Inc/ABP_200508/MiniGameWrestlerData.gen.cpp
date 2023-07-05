// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGameWrestlerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameWrestlerData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameWrestlerData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FMiniGameWrestlerData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMiniGameWrestlerData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMiniGameWrestlerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGameWrestlerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGameWrestlerData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGameWrestlerData"), sizeof(FMiniGameWrestlerData), Get_Z_Construct_UScriptStruct_FMiniGameWrestlerData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGameWrestlerData>()
{
	return FMiniGameWrestlerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGameWrestlerData(FMiniGameWrestlerData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGameWrestlerData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameWrestlerData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameWrestlerData()
	{
		UScriptStruct::DeferCppStructOps<FMiniGameWrestlerData>(FName(TEXT("MiniGameWrestlerData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameWrestlerData;
	struct Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MANorAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MANorAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGameWrestlerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGameWrestlerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameWrestlerData" },
		{ "ModuleRelativePath", "Public/MiniGameWrestlerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameWrestlerData, WrestlerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_MANorAI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameWrestlerData" },
		{ "ModuleRelativePath", "Public/MiniGameWrestlerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_MANorAI = { "MANorAI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameWrestlerData, MANorAI), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_MANorAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_MANorAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_GameScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameWrestlerData" },
		{ "ModuleRelativePath", "Public/MiniGameWrestlerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_GameScore = { "GameScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameWrestlerData, GameScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_GameScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_GameScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_MANorAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::NewProp_GameScore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MiniGameWrestlerData",
		sizeof(FMiniGameWrestlerData),
		alignof(FMiniGameWrestlerData),
		Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGameWrestlerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGameWrestlerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGameWrestlerData"), sizeof(FMiniGameWrestlerData), Get_Z_Construct_UScriptStruct_FMiniGameWrestlerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGameWrestlerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGameWrestlerData_Hash() { return 869295192U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
