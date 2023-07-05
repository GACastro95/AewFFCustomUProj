// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWrestlerSetupParam_Json.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWrestlerSetupParam_Json() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
// End Cross Module References
class UScriptStruct* FSSWrestlerSetupParam_Json::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWrestlerSetupParam_Json"), sizeof(FSSWrestlerSetupParam_Json), Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWrestlerSetupParam_Json>()
{
	return FSSWrestlerSetupParam_Json::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWrestlerSetupParam_Json(FSSWrestlerSetupParam_Json::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWrestlerSetupParam_Json"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSetupParam_Json
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSetupParam_Json()
	{
		UScriptStruct::DeferCppStructOps<FSSWrestlerSetupParam_Json>(FName(TEXT("SSWrestlerSetupParam_Json")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSetupParam_Json;
	struct Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JsonSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam_Json.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWrestlerSetupParam_Json>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam_Json" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam_Json.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonSource = { "JsonSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam_Json, JsonSource), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam_Json" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam_Json.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam_Json, JsonValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::NewProp_JsonValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSWrestlerSetupParam_Json",
		sizeof(FSSWrestlerSetupParam_Json),
		alignof(FSSWrestlerSetupParam_Json),
		Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWrestlerSetupParam_Json"), sizeof(FSSWrestlerSetupParam_Json), Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json_Hash() { return 9333057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
