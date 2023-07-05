// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/DBGSettingDATA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBGSettingDATA() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FDBGSettingDATA();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EDBGSettingValueType();
// End Cross Module References
class UScriptStruct* FDBGSettingDATA::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FDBGSettingDATA_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBGSettingDATA, Z_Construct_UPackage__Script_yDebug(), TEXT("DBGSettingDATA"), sizeof(FDBGSettingDATA), Get_Z_Construct_UScriptStruct_FDBGSettingDATA_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FDBGSettingDATA>()
{
	return FDBGSettingDATA::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBGSettingDATA(FDBGSettingDATA::StaticStruct, TEXT("/Script/yDebug"), TEXT("DBGSettingDATA"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFDBGSettingDATA
{
	FScriptStruct_yDebug_StaticRegisterNativesFDBGSettingDATA()
	{
		UScriptStruct::DeferCppStructOps<FDBGSettingDATA>(FName(TEXT("DBGSettingDATA")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFDBGSettingDATA;
	struct Z_Construct_UScriptStruct_FDBGSettingDATA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_STRING_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_STRING;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMMENT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_COMMENT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Active;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBGSettingDATA.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBGSettingDATA>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_STRING_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBGSettingDATA" },
		{ "ModuleRelativePath", "Public/DBGSettingDATA.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_STRING = { "STRING", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBGSettingDATA, STRING), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_STRING_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_STRING_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBGSettingDATA" },
		{ "ModuleRelativePath", "Public/DBGSettingDATA.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBGSettingDATA, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_COMMENT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBGSettingDATA" },
		{ "ModuleRelativePath", "Public/DBGSettingDATA.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_COMMENT = { "COMMENT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBGSettingDATA, COMMENT), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_COMMENT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_COMMENT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Active_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBGSettingDATA" },
		{ "ModuleRelativePath", "Public/DBGSettingDATA.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FDBGSettingDATA*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDBGSettingDATA), &Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Active_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DBGSettingDATA" },
		{ "ModuleRelativePath", "Public/DBGSettingDATA.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBGSettingDATA, Type), Z_Construct_UEnum_yDebug_EDBGSettingValueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_STRING,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_COMMENT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"DBGSettingDATA",
		sizeof(FDBGSettingDATA),
		alignof(FDBGSettingDATA),
		Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBGSettingDATA()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBGSettingDATA_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBGSettingDATA"), sizeof(FDBGSettingDATA), Get_Z_Construct_UScriptStruct_FDBGSettingDATA_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBGSettingDATA_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBGSettingDATA_Hash() { return 4152613952U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
