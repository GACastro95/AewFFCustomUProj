// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2AnalyticsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2AnalyticsData() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2AnalyticsData();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2AnalyticsType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FYGS2AnalyticsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2AnalyticsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2AnalyticsData, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2AnalyticsData"), sizeof(FYGS2AnalyticsData), Get_Z_Construct_UScriptStruct_FYGS2AnalyticsData_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2AnalyticsData>()
{
	return FYGS2AnalyticsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2AnalyticsData(FYGS2AnalyticsData::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2AnalyticsData"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2AnalyticsData
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2AnalyticsData()
	{
		UScriptStruct::DeferCppStructOps<FYGS2AnalyticsData>(FName(TEXT("YGS2AnalyticsData")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2AnalyticsData;
	struct Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnalyticsType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnalyticsType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessStop;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Values_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Values_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Strings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Strings_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Strings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2AnalyticsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2AnalyticsData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_AnalyticsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_AnalyticsType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2AnalyticsData" },
		{ "ModuleRelativePath", "Public/YGS2AnalyticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_AnalyticsType = { "AnalyticsType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2AnalyticsData, AnalyticsType), Z_Construct_UEnum_yGS2Client_EYGS2AnalyticsType, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_AnalyticsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_AnalyticsType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2AnalyticsData" },
		{ "ModuleRelativePath", "Public/YGS2AnalyticsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FYGS2AnalyticsData*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FYGS2AnalyticsData), &Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2AnalyticsData" },
		{ "ModuleRelativePath", "Public/YGS2AnalyticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStart = { "ProcessStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2AnalyticsData, ProcessStart), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2AnalyticsData" },
		{ "ModuleRelativePath", "Public/YGS2AnalyticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStop = { "ProcessStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2AnalyticsData, ProcessStop), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStop_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values_ValueProp = { "Values", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values_Key_KeyProp = { "Values_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2AnalyticsData" },
		{ "ModuleRelativePath", "Public/YGS2AnalyticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2AnalyticsData, Values), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings_ValueProp = { "Strings", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings_Key_KeyProp = { "Strings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2AnalyticsData" },
		{ "ModuleRelativePath", "Public/YGS2AnalyticsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2AnalyticsData, Strings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_AnalyticsType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_AnalyticsType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_ProcessStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::NewProp_Strings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2AnalyticsData",
		sizeof(FYGS2AnalyticsData),
		alignof(FYGS2AnalyticsData),
		Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2AnalyticsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2AnalyticsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2AnalyticsData"), sizeof(FYGS2AnalyticsData), Get_Z_Construct_UScriptStruct_FYGS2AnalyticsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2AnalyticsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2AnalyticsData_Hash() { return 2233262572U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
