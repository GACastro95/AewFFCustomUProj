// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLeaderboardsDefinitionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboardsDefinitionData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardAggregation();
// End Cross Module References
class UScriptStruct* FEOSLeaderboardsDefinitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSLeaderboardsDefinitionData"), sizeof(FEOSLeaderboardsDefinitionData), Get_Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSLeaderboardsDefinitionData>()
{
	return FEOSLeaderboardsDefinitionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSLeaderboardsDefinitionData(FEOSLeaderboardsDefinitionData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSLeaderboardsDefinitionData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsDefinitionData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsDefinitionData()
	{
		UScriptStruct::DeferCppStructOps<FEOSLeaderboardsDefinitionData>(FName(TEXT("EOSLeaderboardsDefinitionData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsDefinitionData;
	struct Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Aggregation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aggregation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Aggregation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsDefinitionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSLeaderboardsDefinitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_LeaderboardId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsDefinitionData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsDefinitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsDefinitionData, LeaderboardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_LeaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_LeaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StatName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsDefinitionData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsDefinitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsDefinitionData, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StatName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsDefinitionData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsDefinitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsDefinitionData, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsDefinitionData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsDefinitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsDefinitionData, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_EndTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_Aggregation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_Aggregation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsDefinitionData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsDefinitionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_Aggregation = { "Aggregation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsDefinitionData, Aggregation), Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardAggregation, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_Aggregation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_Aggregation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_LeaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_Aggregation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::NewProp_Aggregation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSLeaderboardsDefinitionData",
		sizeof(FEOSLeaderboardsDefinitionData),
		alignof(FEOSLeaderboardsDefinitionData),
		Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSLeaderboardsDefinitionData"), sizeof(FEOSLeaderboardsDefinitionData), Get_Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData_Hash() { return 2968330277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
