// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DescribePlayerSessions_RequestParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDescribePlayerSessions_RequestParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FDescribePlayerSessions_RequestParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DescribePlayerSessions_RequestParam"), sizeof(FDescribePlayerSessions_RequestParam), Get_Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDescribePlayerSessions_RequestParam>()
{
	return FDescribePlayerSessions_RequestParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDescribePlayerSessions_RequestParam(FDescribePlayerSessions_RequestParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DescribePlayerSessions_RequestParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDescribePlayerSessions_RequestParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDescribePlayerSessions_RequestParam()
	{
		UScriptStruct::DeferCppStructOps<FDescribePlayerSessions_RequestParam>(FName(TEXT("DescribePlayerSessions_RequestParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDescribePlayerSessions_RequestParam;
	struct Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nextToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSessionStatusFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerSessionStatusFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DescribePlayerSessions_RequestParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDescribePlayerSessions_RequestParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_gameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DescribePlayerSessions_RequestParam" },
		{ "ModuleRelativePath", "Public/DescribePlayerSessions_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_gameSessionId = { "gameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDescribePlayerSessions_RequestParam, gameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_gameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_gameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DescribePlayerSessions_RequestParam" },
		{ "ModuleRelativePath", "Public/DescribePlayerSessions_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionId = { "playerSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDescribePlayerSessions_RequestParam, playerSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DescribePlayerSessions_RequestParam" },
		{ "ModuleRelativePath", "Public/DescribePlayerSessions_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDescribePlayerSessions_RequestParam, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DescribePlayerSessions_RequestParam" },
		{ "ModuleRelativePath", "Public/DescribePlayerSessions_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDescribePlayerSessions_RequestParam, limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_nextToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DescribePlayerSessions_RequestParam" },
		{ "ModuleRelativePath", "Public/DescribePlayerSessions_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_nextToken = { "nextToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDescribePlayerSessions_RequestParam, nextToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_nextToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_nextToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionStatusFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DescribePlayerSessions_RequestParam" },
		{ "ModuleRelativePath", "Public/DescribePlayerSessions_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionStatusFilter = { "playerSessionStatusFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDescribePlayerSessions_RequestParam, playerSessionStatusFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionStatusFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionStatusFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_gameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_nextToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::NewProp_playerSessionStatusFilter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DescribePlayerSessions_RequestParam",
		sizeof(FDescribePlayerSessions_RequestParam),
		alignof(FDescribePlayerSessions_RequestParam),
		Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DescribePlayerSessions_RequestParam"), sizeof(FDescribePlayerSessions_RequestParam), Get_Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDescribePlayerSessions_RequestParam_Hash() { return 2049724216U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
