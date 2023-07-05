// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/TipsLoadingExecCountInfo_Ref.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsLoadingExecCountInfo_Ref() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FTipsLoadingExecCountInfo_Ref::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("TipsLoadingExecCountInfo_Ref"), sizeof(FTipsLoadingExecCountInfo_Ref), Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FTipsLoadingExecCountInfo_Ref>()
{
	return FTipsLoadingExecCountInfo_Ref::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTipsLoadingExecCountInfo_Ref(FTipsLoadingExecCountInfo_Ref::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("TipsLoadingExecCountInfo_Ref"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountInfo_Ref
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountInfo_Ref()
	{
		UScriptStruct::DeferCppStructOps<FTipsLoadingExecCountInfo_Ref>(FName(TEXT("TipsLoadingExecCountInfo_Ref")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountInfo_Ref;
	struct Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayedCountMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayedCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayedCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DisplayedCountMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountInfo_Ref.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipsLoadingExecCountInfo_Ref>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap_ValueProp = { "DisplayedCountMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap_Key_KeyProp = { "DisplayedCountMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingExecCountInfo_Ref" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountInfo_Ref.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap = { "DisplayedCountMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingExecCountInfo_Ref, DisplayedCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::NewProp_DisplayedCountMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"TipsLoadingExecCountInfo_Ref",
		sizeof(FTipsLoadingExecCountInfo_Ref),
		alignof(FTipsLoadingExecCountInfo_Ref),
		Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TipsLoadingExecCountInfo_Ref"), sizeof(FTipsLoadingExecCountInfo_Ref), Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountInfo_Ref_Hash() { return 515896088U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
