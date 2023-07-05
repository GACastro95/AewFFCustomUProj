// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/InstalledDlcItemParamResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstalledDlcItemParamResult() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FInstalledDlcItemParamResult();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FInstalledDlcItemParam();
// End Cross Module References
class UScriptStruct* FInstalledDlcItemParamResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstalledDlcItemParamResult, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("InstalledDlcItemParamResult"), sizeof(FInstalledDlcItemParamResult), Get_Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FInstalledDlcItemParamResult>()
{
	return FInstalledDlcItemParamResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstalledDlcItemParamResult(FInstalledDlcItemParamResult::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("InstalledDlcItemParamResult"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFInstalledDlcItemParamResult
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFInstalledDlcItemParamResult()
	{
		UScriptStruct::DeferCppStructOps<FInstalledDlcItemParamResult>(FName(TEXT("InstalledDlcItemParamResult")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFInstalledDlcItemParamResult;
	struct Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InstalledDlcItemParamResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstalledDlcItemParamResult>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewProp_ParamList_Inner = { "ParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInstalledDlcItemParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewProp_ParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InstalledDlcItemParamResult" },
		{ "ModuleRelativePath", "Public/InstalledDlcItemParamResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewProp_ParamList = { "ParamList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstalledDlcItemParamResult, ParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewProp_ParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewProp_ParamList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewProp_ParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::NewProp_ParamList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"InstalledDlcItemParamResult",
		sizeof(FInstalledDlcItemParamResult),
		alignof(FInstalledDlcItemParamResult),
		Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstalledDlcItemParamResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstalledDlcItemParamResult"), sizeof(FInstalledDlcItemParamResult), Get_Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstalledDlcItemParamResult_Hash() { return 3712652427U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
