// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/TipsLoadingExecCountBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTipsLoadingExecCountBase() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountBase();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FTipsLoadingExecCountBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("TipsLoadingExecCountBase"), sizeof(FTipsLoadingExecCountBase), Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FTipsLoadingExecCountBase>()
{
	return FTipsLoadingExecCountBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTipsLoadingExecCountBase(FTipsLoadingExecCountBase::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("TipsLoadingExecCountBase"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountBase
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountBase()
	{
		UScriptStruct::DeferCppStructOps<FTipsLoadingExecCountBase>(FName(TEXT("TipsLoadingExecCountBase")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFTipsLoadingExecCountBase;
	struct Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipsLoadingExecCountBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingExecCountBase" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingExecCountBase, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_ExecCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TipsLoadingExecCountBase" },
		{ "ModuleRelativePath", "Public/TipsLoadingExecCountBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_ExecCount = { "ExecCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTipsLoadingExecCountBase, ExecCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_ExecCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_ExecCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::NewProp_ExecCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"TipsLoadingExecCountBase",
		sizeof(FTipsLoadingExecCountBase),
		alignof(FTipsLoadingExecCountBase),
		Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingExecCountBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TipsLoadingExecCountBase"), sizeof(FTipsLoadingExecCountBase), Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTipsLoadingExecCountBase_Hash() { return 4264061333U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
