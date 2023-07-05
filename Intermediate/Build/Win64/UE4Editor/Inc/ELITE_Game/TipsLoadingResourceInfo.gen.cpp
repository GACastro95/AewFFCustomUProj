// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/TipsLoadingResourceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsLoadingResourceInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingResourceInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo();
// End Cross Module References
class UScriptStruct* FTipsLoadingResourceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("TipsLoadingResourceInfo"), sizeof(FTipsLoadingResourceInfo), Get_Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FTipsLoadingResourceInfo>()
{
	return FTipsLoadingResourceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTipsLoadingResourceInfo(FTipsLoadingResourceInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("TipsLoadingResourceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingResourceInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingResourceInfo()
	{
		UScriptStruct::DeferCppStructOps<FTipsLoadingResourceInfo>(FName(TEXT("TipsLoadingResourceInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingResourceInfo;
	struct Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackGoundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BackGoundTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTextList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayTextList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TipsLoadingResourceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipsLoadingResourceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_Memo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingResourceInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingResourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingResourceInfo, Memo), METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_Memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_Memo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_BackGoundTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingResourceInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingResourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_BackGoundTexture = { "BackGoundTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingResourceInfo, BackGoundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_BackGoundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_BackGoundTexture_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_DisplayTextList_Inner = { "DisplayTextList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTipsLoadingDisplayTextInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_DisplayTextList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingResourceInfo" },
		{ "ModuleRelativePath", "Public/TipsLoadingResourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_DisplayTextList = { "DisplayTextList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingResourceInfo, DisplayTextList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_DisplayTextList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_DisplayTextList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_Memo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_BackGoundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_DisplayTextList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::NewProp_DisplayTextList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"TipsLoadingResourceInfo",
		sizeof(FTipsLoadingResourceInfo),
		alignof(FTipsLoadingResourceInfo),
		Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingResourceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TipsLoadingResourceInfo"), sizeof(FTipsLoadingResourceInfo), Get_Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingResourceInfo_Hash() { return 2231050158U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
