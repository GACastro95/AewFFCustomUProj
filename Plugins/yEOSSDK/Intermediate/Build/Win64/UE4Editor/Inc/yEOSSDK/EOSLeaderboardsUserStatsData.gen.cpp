// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLeaderboardsUserStatsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboardsUserStatsData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FEOSLeaderboardsUserStatsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSLeaderboardsUserStatsData"), sizeof(FEOSLeaderboardsUserStatsData), Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSLeaderboardsUserStatsData>()
{
	return FEOSLeaderboardsUserStatsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSLeaderboardsUserStatsData(FEOSLeaderboardsUserStatsData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSLeaderboardsUserStatsData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsUserStatsData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsUserStatsData()
	{
		UScriptStruct::DeferCppStructOps<FEOSLeaderboardsUserStatsData>(FName(TEXT("EOSLeaderboardsUserStatsData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsUserStatsData;
	struct Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StatMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsUserStatsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSLeaderboardsUserStatsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsUserStatsData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsUserStatsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsUserStatsData, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsUserStatsData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsUserStatsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsUserStatsData, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_EndTime_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap_ValueProp = { "StatMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap_Key_KeyProp = { "StatMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsUserStatsData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsUserStatsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap = { "StatMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsUserStatsData, StatMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::NewProp_StatMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSLeaderboardsUserStatsData",
		sizeof(FEOSLeaderboardsUserStatsData),
		alignof(FEOSLeaderboardsUserStatsData),
		Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSLeaderboardsUserStatsData"), sizeof(FEOSLeaderboardsUserStatsData), Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserStatsData_Hash() { return 87195977U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
