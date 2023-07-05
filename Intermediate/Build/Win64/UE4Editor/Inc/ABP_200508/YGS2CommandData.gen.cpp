// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YGS2CommandData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2CommandData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2CommandData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuCommand();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuScriptValueType();
// End Cross Module References
class UScriptStruct* FYGS2CommandData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FYGS2CommandData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2CommandData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("YGS2CommandData"), sizeof(FYGS2CommandData), Get_Z_Construct_UScriptStruct_FYGS2CommandData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FYGS2CommandData>()
{
	return FYGS2CommandData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2CommandData(FYGS2CommandData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("YGS2CommandData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFYGS2CommandData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFYGS2CommandData()
	{
		UScriptStruct::DeferCppStructOps<FYGS2CommandData>(FName(TEXT("YGS2CommandData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFYGS2CommandData;
	struct Z_Construct_UScriptStruct_FYGS2CommandData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Command_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeforeWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeforeWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptValues_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptValues_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScriptValues_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ScriptValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2CommandData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2CommandData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2CommandData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_Command_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_Command_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2CommandData" },
		{ "ModuleRelativePath", "Public/YGS2CommandData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2CommandData, Command), Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_BeforeWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2CommandData" },
		{ "ModuleRelativePath", "Public/YGS2CommandData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_BeforeWaitTime = { "BeforeWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2CommandData, BeforeWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_BeforeWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_BeforeWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ErrorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2CommandData" },
		{ "ModuleRelativePath", "Public/YGS2CommandData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2CommandData, ErrorType), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ErrorType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_ValueProp = { "ScriptValues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_Key_KeyProp = { "ScriptValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuScriptValueType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2CommandData" },
		{ "ModuleRelativePath", "Public/YGS2CommandData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues = { "ScriptValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2CommandData, ScriptValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2CommandData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_Command_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_BeforeWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2CommandData_Statics::NewProp_ScriptValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2CommandData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"YGS2CommandData",
		sizeof(FYGS2CommandData),
		alignof(FYGS2CommandData),
		Z_Construct_UScriptStruct_FYGS2CommandData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2CommandData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2CommandData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2CommandData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2CommandData"), sizeof(FYGS2CommandData), Get_Z_Construct_UScriptStruct_FYGS2CommandData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2CommandData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2CommandData_Hash() { return 3208586306U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
