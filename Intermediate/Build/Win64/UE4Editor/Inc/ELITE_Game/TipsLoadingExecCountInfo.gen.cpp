// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/TipsLoadingExecCountInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsLoadingExecCountInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountBase();
// End Cross Module References
class UScriptStruct* FTipsLoadingExecCountInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("TipsLoadingExecCountInfo"), sizeof(FTipsLoadingExecCountInfo), Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FTipsLoadingExecCountInfo>()
{
	return FTipsLoadingExecCountInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTipsLoadingExecCountInfo(FTipsLoadingExecCountInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("TipsLoadingExecCountInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountInfo()
	{
		UScriptStruct::DeferCppStructOps<FTipsLoadingExecCountInfo>(FName(TEXT("TipsLoadingExecCountInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountInfo;
	struct Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayedCountList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayedCountList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayedCountList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipsLoadingExecCountInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingExecCountInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingExecCountInfo, Category), Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_Inner = { "DisplayedCountList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTipsLoadingExecCountBase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingExecCountInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_DisplayedCountList = { "DisplayedCountList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingExecCountInfo, DisplayedCountList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_DisplayedCountList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::NewProp_DisplayedCountList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"TipsLoadingExecCountInfo",
		sizeof(FTipsLoadingExecCountInfo),
		alignof(FTipsLoadingExecCountInfo),
		Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TipsLoadingExecCountInfo"), sizeof(FTipsLoadingExecCountInfo), Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Hash() { return 586125195U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
