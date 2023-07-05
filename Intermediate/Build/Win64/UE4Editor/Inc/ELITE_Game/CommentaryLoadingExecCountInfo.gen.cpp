// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/CommentaryLoadingExecCountInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommentaryLoadingExecCountInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingExecCountBase();
// End Cross Module References
class UScriptStruct* FCommentaryLoadingExecCountInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("CommentaryLoadingExecCountInfo"), sizeof(FCommentaryLoadingExecCountInfo), Get_Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FCommentaryLoadingExecCountInfo>()
{
	return FCommentaryLoadingExecCountInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommentaryLoadingExecCountInfo(FCommentaryLoadingExecCountInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("CommentaryLoadingExecCountInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingExecCountInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingExecCountInfo()
	{
		UScriptStruct::DeferCppStructOps<FCommentaryLoadingExecCountInfo>(FName(TEXT("CommentaryLoadingExecCountInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingExecCountInfo;
	struct Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayedCountList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayedCountList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayedCountList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingExecCountInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommentaryLoadingExecCountInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingExecCountInfo" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingExecCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingExecCountInfo, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_Inner = { "DisplayedCountList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCommentaryLoadingExecCountBase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingExecCountInfo" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingExecCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_DisplayedCountList = { "DisplayedCountList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingExecCountInfo, DisplayedCountList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::NewProp_DisplayedCountList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"CommentaryLoadingExecCountInfo",
		sizeof(FCommentaryLoadingExecCountInfo),
		alignof(FCommentaryLoadingExecCountInfo),
		Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommentaryLoadingExecCountInfo"), sizeof(FCommentaryLoadingExecCountInfo), Get_Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingExecCountInfo_Hash() { return 1816816871U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
