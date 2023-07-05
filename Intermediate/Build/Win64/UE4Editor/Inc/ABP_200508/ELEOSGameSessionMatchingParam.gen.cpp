// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSGameSessionMatchingParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSGameSessionMatchingParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELEOSGameSessionMatchingParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEOSGameSessionMatchingParam"), sizeof(FELEOSGameSessionMatchingParam), Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEOSGameSessionMatchingParam>()
{
	return FELEOSGameSessionMatchingParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEOSGameSessionMatchingParam(FELEOSGameSessionMatchingParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEOSGameSessionMatchingParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionMatchingParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionMatchingParam()
	{
		UScriptStruct::DeferCppStructOps<FELEOSGameSessionMatchingParam>(FName(TEXT("ELEOSGameSessionMatchingParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionMatchingParam;
	struct Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep0RankRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionRankedStep0RankRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep1RankRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionRankedStep1RankRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep2RankRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionRankedStep2RankRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionCasualStep0RankRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionCasualStep0RankRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep0RetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionRankedStep0RetryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep1RetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionRankedStep1RetryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep2RetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionRankedStep2RetryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionCasualStep0RetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchSessionCasualStep0RetryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep0SameRankGroup_MetaData[];
#endif
		static void NewProp_SearchSessionRankedStep0SameRankGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchSessionRankedStep0SameRankGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep1SameRankGroup_MetaData[];
#endif
		static void NewProp_SearchSessionRankedStep1SameRankGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchSessionRankedStep1SameRankGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionRankedStep2SameRankGroup_MetaData[];
#endif
		static void NewProp_SearchSessionRankedStep2SameRankGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchSessionRankedStep2SameRankGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSessionCasualStep0SameRankGroup_MetaData[];
#endif
		static void NewProp_SearchSessionCasualStep0SameRankGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchSessionCasualStep0SameRankGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEOSGameSessionMatchingParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RankRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RankRange = { "SearchSessionRankedStep0RankRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionRankedStep0RankRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RankRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RankRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RankRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RankRange = { "SearchSessionRankedStep1RankRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionRankedStep1RankRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RankRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RankRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RankRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RankRange = { "SearchSessionRankedStep2RankRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionRankedStep2RankRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RankRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RankRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RankRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RankRange = { "SearchSessionCasualStep0RankRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionCasualStep0RankRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RankRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RankRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RetryCount = { "SearchSessionRankedStep0RetryCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionRankedStep0RetryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RetryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RetryCount = { "SearchSessionRankedStep1RetryCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionRankedStep1RetryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RetryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RetryCount = { "SearchSessionRankedStep2RetryCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionRankedStep2RetryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RetryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RetryCount = { "SearchSessionCasualStep0RetryCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingParam, SearchSessionCasualStep0RetryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RetryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0SameRankGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0SameRankGroup_SetBit(void* Obj)
	{
		((FELEOSGameSessionMatchingParam*)Obj)->SearchSessionRankedStep0SameRankGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0SameRankGroup = { "SearchSessionRankedStep0SameRankGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEOSGameSessionMatchingParam), &Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0SameRankGroup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0SameRankGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0SameRankGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1SameRankGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1SameRankGroup_SetBit(void* Obj)
	{
		((FELEOSGameSessionMatchingParam*)Obj)->SearchSessionRankedStep1SameRankGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1SameRankGroup = { "SearchSessionRankedStep1SameRankGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEOSGameSessionMatchingParam), &Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1SameRankGroup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1SameRankGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1SameRankGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2SameRankGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2SameRankGroup_SetBit(void* Obj)
	{
		((FELEOSGameSessionMatchingParam*)Obj)->SearchSessionRankedStep2SameRankGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2SameRankGroup = { "SearchSessionRankedStep2SameRankGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEOSGameSessionMatchingParam), &Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2SameRankGroup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2SameRankGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2SameRankGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0SameRankGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingParam" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0SameRankGroup_SetBit(void* Obj)
	{
		((FELEOSGameSessionMatchingParam*)Obj)->SearchSessionCasualStep0SameRankGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0SameRankGroup = { "SearchSessionCasualStep0SameRankGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEOSGameSessionMatchingParam), &Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0SameRankGroup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0SameRankGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0SameRankGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RankRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RankRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RankRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RankRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0RetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1RetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2RetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0RetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep0SameRankGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep1SameRankGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionRankedStep2SameRankGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::NewProp_SearchSessionCasualStep0SameRankGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEOSGameSessionMatchingParam",
		sizeof(FELEOSGameSessionMatchingParam),
		alignof(FELEOSGameSessionMatchingParam),
		Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEOSGameSessionMatchingParam"), sizeof(FELEOSGameSessionMatchingParam), Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingParam_Hash() { return 1667786251U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
