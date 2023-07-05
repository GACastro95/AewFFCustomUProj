// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/CommentaryLoadingSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommentaryLoadingSaveData() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingSaveData();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo();
// End Cross Module References
class UScriptStruct* FCommentaryLoadingSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommentaryLoadingSaveData, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("CommentaryLoadingSaveData"), sizeof(FCommentaryLoadingSaveData), Get_Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FCommentaryLoadingSaveData>()
{
	return FCommentaryLoadingSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommentaryLoadingSaveData(FCommentaryLoadingSaveData::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("CommentaryLoadingSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingSaveData
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingSaveData()
	{
		UScriptStruct::DeferCppStructOps<FCommentaryLoadingSaveData>(FName(TEXT("CommentaryLoadingSaveData")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingSaveData;
	struct Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerContentExecCountInfoList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerContentExecCountInfoList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerContentExecCountInfoList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommentaryLoadingSaveData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewProp_WrestlerContentExecCountInfoList_Inner = { "WrestlerContentExecCountInfoList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewProp_WrestlerContentExecCountInfoList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingSaveData" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewProp_WrestlerContentExecCountInfoList = { "WrestlerContentExecCountInfoList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingSaveData, WrestlerContentExecCountInfoList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewProp_WrestlerContentExecCountInfoList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewProp_WrestlerContentExecCountInfoList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewProp_WrestlerContentExecCountInfoList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::NewProp_WrestlerContentExecCountInfoList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"CommentaryLoadingSaveData",
		sizeof(FCommentaryLoadingSaveData),
		alignof(FCommentaryLoadingSaveData),
		Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommentaryLoadingSaveData"), sizeof(FCommentaryLoadingSaveData), Get_Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingSaveData_Hash() { return 3279305897U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
