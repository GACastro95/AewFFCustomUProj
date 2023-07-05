// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/TipsLoadingDisplayTextInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsLoadingDisplayTextInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FTipsLoadingDisplayTextInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("TipsLoadingDisplayTextInfo"), sizeof(FTipsLoadingDisplayTextInfo), Get_Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FTipsLoadingDisplayTextInfo>()
{
	return FTipsLoadingDisplayTextInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTipsLoadingDisplayTextInfo(FTipsLoadingDisplayTextInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("TipsLoadingDisplayTextInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingDisplayTextInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingDisplayTextInfo()
	{
		UScriptStruct::DeferCppStructOps<FTipsLoadingDisplayTextInfo>(FName(TEXT("TipsLoadingDisplayTextInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingDisplayTextInfo;
	struct Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Memo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DetailText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TipsLoadingDisplayTextInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipsLoadingDisplayTextInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_Memo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingDisplayTextInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingDisplayTextInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingDisplayTextInfo, Memo), METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_Memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_Memo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingDisplayTextInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingDisplayTextInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingDisplayTextInfo, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_DetailText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingDisplayTextInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingDisplayTextInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_DetailText = { "DetailText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingDisplayTextInfo, DetailText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_DetailText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_DetailText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_Memo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::NewProp_DetailText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"TipsLoadingDisplayTextInfo",
		sizeof(FTipsLoadingDisplayTextInfo),
		alignof(FTipsLoadingDisplayTextInfo),
		Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TipsLoadingDisplayTextInfo"), sizeof(FTipsLoadingDisplayTextInfo), Get_Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo_Hash() { return 4091485106U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
