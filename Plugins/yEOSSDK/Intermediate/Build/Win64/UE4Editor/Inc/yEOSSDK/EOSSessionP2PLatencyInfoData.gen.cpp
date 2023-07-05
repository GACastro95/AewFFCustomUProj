// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PLatencyInfoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PLatencyInfoData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSSessionP2PLatencyInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSSessionP2PLatencyInfoData"), sizeof(FEOSSessionP2PLatencyInfoData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSSessionP2PLatencyInfoData>()
{
	return FEOSSessionP2PLatencyInfoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSSessionP2PLatencyInfoData(FEOSSessionP2PLatencyInfoData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSSessionP2PLatencyInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PLatencyInfoData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PLatencyInfoData()
	{
		UScriptStruct::DeferCppStructOps<FEOSSessionP2PLatencyInfoData>(FName(TEXT("EOSSessionP2PLatencyInfoData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PLatencyInfoData;
	struct Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Average_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Average;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSSessionP2PLatencyInfoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PLatencyInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PLatencyInfoData, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Average_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PLatencyInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Average = { "Average", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PLatencyInfoData, Average), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Average_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Average_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Min_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PLatencyInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PLatencyInfoData, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Max_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PLatencyInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PLatencyInfoData, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PLatencyInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PLatencyInfoData, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Average,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSSessionP2PLatencyInfoData",
		sizeof(FEOSSessionP2PLatencyInfoData),
		alignof(FEOSSessionP2PLatencyInfoData),
		Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSSessionP2PLatencyInfoData"), sizeof(FEOSSessionP2PLatencyInfoData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData_Hash() { return 1408242381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
