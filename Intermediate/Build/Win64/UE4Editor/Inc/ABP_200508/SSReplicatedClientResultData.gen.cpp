// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSReplicatedClientResultData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSReplicatedClientResultData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSReplicatedClientResultData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSReplicatedClientResultData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSReplicatedClientResultData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSReplicatedClientResultData"), sizeof(FSSReplicatedClientResultData), Get_Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSReplicatedClientResultData>()
{
	return FSSReplicatedClientResultData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSReplicatedClientResultData(FSSReplicatedClientResultData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSReplicatedClientResultData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSReplicatedClientResultData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSReplicatedClientResultData()
	{
		UScriptStruct::DeferCppStructOps<FSSReplicatedClientResultData>(FName(TEXT("SSReplicatedClientResultData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSReplicatedClientResultData;
	struct Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Available_MetaData[];
#endif
		static void NewProp_Available_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Available;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyStampiedRankPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyStampiedRankPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyStampiedKillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyStampiedKillPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyStampiedFeverPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyStampiedFeverPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyStampiedAttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyStampiedAttentionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyStampiedEXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyStampiedEXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyPlayerKillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyPlayerKillPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyPlayerRankPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyPlayerRankPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyPlayerAttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyPlayerAttentionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyPlayerMatchCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyPlayerMatchCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyPlayerEXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyPlayerEXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyPlayerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tallyPlayerRank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSReplicatedClientResultData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_Available_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_Available_SetBit(void* Obj)
	{
		((FSSReplicatedClientResultData*)Obj)->Available = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_Available = { "Available", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSReplicatedClientResultData), &Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_Available_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_Available_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_Available_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedRankPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedRankPoint = { "tallyStampiedRankPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyStampiedRankPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedRankPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedRankPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedKillPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedKillPoint = { "tallyStampiedKillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyStampiedKillPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedKillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedKillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedFeverPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedFeverPoint = { "tallyStampiedFeverPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyStampiedFeverPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedFeverPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedFeverPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedAttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedAttentionPoint = { "tallyStampiedAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyStampiedAttentionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedAttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedAttentionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedEXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedEXP = { "tallyStampiedEXP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyStampiedEXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedEXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedEXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerKillPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerKillPoint = { "tallyPlayerKillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyPlayerKillPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerKillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerKillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRankPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRankPoint = { "tallyPlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyPlayerRankPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRankPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRankPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerAttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerAttentionPoint = { "tallyPlayerAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyPlayerAttentionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerAttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerAttentionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerMatchCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerMatchCost = { "tallyPlayerMatchCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyPlayerMatchCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerMatchCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerMatchCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerEXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerEXP = { "tallyPlayerEXP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyPlayerEXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerEXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerEXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSReplicatedClientResultData" },
		{ "ModuleRelativePath", "Public/SSReplicatedClientResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRank = { "tallyPlayerRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSReplicatedClientResultData, tallyPlayerRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_Available,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedKillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedFeverPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyStampiedEXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerKillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerMatchCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerEXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::NewProp_tallyPlayerRank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSReplicatedClientResultData",
		sizeof(FSSReplicatedClientResultData),
		alignof(FSSReplicatedClientResultData),
		Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSReplicatedClientResultData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSReplicatedClientResultData"), sizeof(FSSReplicatedClientResultData), Get_Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSReplicatedClientResultData_Hash() { return 3251469974U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
