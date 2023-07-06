// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/NamedPresetParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedPresetParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FNamedPresetParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPresetParam();
// End Cross Module References
class UScriptStruct* FNamedPresetParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FNamedPresetParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedPresetParam, Z_Construct_UPackage__Script_Creation(), TEXT("NamedPresetParam"), sizeof(FNamedPresetParam), Get_Z_Construct_UScriptStruct_FNamedPresetParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FNamedPresetParam>()
{
	return FNamedPresetParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedPresetParam(FNamedPresetParam::StaticStruct, TEXT("/Script/Creation"), TEXT("NamedPresetParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFNamedPresetParam
{
	FScriptStruct_Creation_StaticRegisterNativesFNamedPresetParam()
	{
		UScriptStruct::DeferCppStructOps<FNamedPresetParam>(FName(TEXT("NamedPresetParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFNamedPresetParam;
	struct Z_Construct_UScriptStruct_FNamedPresetParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedPresetParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NamedPresetParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedPresetParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NamedPresetParam" },
		{ "ModuleRelativePath", "Public/NamedPresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedPresetParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Preset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NamedPresetParam" },
		{ "ModuleRelativePath", "Public/NamedPresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedPresetParam, Preset), Z_Construct_UScriptStruct_FPresetParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Preset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedPresetParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedPresetParam_Statics::NewProp_Preset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedPresetParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"NamedPresetParam",
		sizeof(FNamedPresetParam),
		alignof(FNamedPresetParam),
		Z_Construct_UScriptStruct_FNamedPresetParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPresetParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedPresetParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPresetParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedPresetParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedPresetParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedPresetParam"), sizeof(FNamedPresetParam), Get_Z_Construct_UScriptStruct_FNamedPresetParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedPresetParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedPresetParam_Hash() { return 4273566946U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif