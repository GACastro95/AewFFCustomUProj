// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/JIRASearchCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJIRASearchCondition() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchCondition();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAConditionType();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAFieldType();
// End Cross Module References
class UScriptStruct* FJIRASearchCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FJIRASearchCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJIRASearchCondition, Z_Construct_UPackage__Script_yDebug(), TEXT("JIRASearchCondition"), sizeof(FJIRASearchCondition), Get_Z_Construct_UScriptStruct_FJIRASearchCondition_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FJIRASearchCondition>()
{
	return FJIRASearchCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJIRASearchCondition(FJIRASearchCondition::StaticStruct, TEXT("/Script/yDebug"), TEXT("JIRASearchCondition"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFJIRASearchCondition
{
	FScriptStruct_yDebug_StaticRegisterNativesFJIRASearchCondition()
	{
		UScriptStruct::DeferCppStructOps<FJIRASearchCondition>(FName(TEXT("JIRASearchCondition")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFJIRASearchCondition;
	struct Z_Construct_UScriptStruct_FJIRASearchCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Connector;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InValues;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Field_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JIRASearchCondition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJIRASearchCondition>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_ConditionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchCondition" },
		{ "ModuleRelativePath", "Public/JIRASearchCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchCondition, ConditionType), Z_Construct_UEnum_yDebug_EJIRAConditionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_ConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_ConditionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Connector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchCondition" },
		{ "ModuleRelativePath", "Public/JIRASearchCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Connector = { "Connector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchCondition, Connector), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Connector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Connector_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_InValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchCondition" },
		{ "ModuleRelativePath", "Public/JIRASearchCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchCondition, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_InValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_InValues_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Field_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Field_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchCondition" },
		{ "ModuleRelativePath", "Public/JIRASearchCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchCondition, Field), Z_Construct_UEnum_yDebug_EJIRAFieldType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchCondition" },
		{ "ModuleRelativePath", "Public/JIRASearchCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchCondition, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Operation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchCondition" },
		{ "ModuleRelativePath", "Public/JIRASearchCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchCondition, Operation), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_ConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_ConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Connector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_InValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_InValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Field_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::NewProp_Operation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"JIRASearchCondition",
		sizeof(FJIRASearchCondition),
		alignof(FJIRASearchCondition),
		Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJIRASearchCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JIRASearchCondition"), sizeof(FJIRASearchCondition), Get_Z_Construct_UScriptStruct_FJIRASearchCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJIRASearchCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJIRASearchCondition_Hash() { return 3142056801U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
