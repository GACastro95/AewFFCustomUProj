// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSKillScoreParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSKillScoreParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSKillScoreParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSKillScoreParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSKillScoreParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSKillScoreParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSKillScoreParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSKillScoreParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSKillScoreParam"), sizeof(FSSKillScoreParam), Get_Z_Construct_UScriptStruct_FSSKillScoreParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSKillScoreParam>()
{
	return FSSKillScoreParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSKillScoreParam(FSSKillScoreParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSKillScoreParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSKillScoreParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSKillScoreParam()
	{
		UScriptStruct::DeferCppStructOps<FSSKillScoreParam>(FName(TEXT("SSKillScoreParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSKillScoreParam;
	struct Z_Construct_UScriptStruct_FSSKillScoreParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StampedeScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSKillScoreParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSKillScoreParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_KillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSKillScoreParam" },
		{ "ModuleRelativePath", "Public/SSKillScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_KillCount = { "KillCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSKillScoreParam, KillCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_KillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_KillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_StampedeScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSKillScoreParam" },
		{ "ModuleRelativePath", "Public/SSKillScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_StampedeScore = { "StampedeScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSKillScoreParam, StampedeScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_StampedeScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_StampedeScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSKillScoreParam" },
		{ "ModuleRelativePath", "Public/SSKillScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSKillScoreParam, PlayerScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_PlayerScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_KillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_StampedeScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::NewProp_PlayerScore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSKillScoreParam",
		sizeof(FSSKillScoreParam),
		alignof(FSSKillScoreParam),
		Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSKillScoreParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSKillScoreParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSKillScoreParam"), sizeof(FSSKillScoreParam), Get_Z_Construct_UScriptStruct_FSSKillScoreParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSKillScoreParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSKillScoreParam_Hash() { return 3457976840U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
