// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/KeyMapSettingsDataReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyMapSettingsDataReference() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingsDataReference();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData();
// End Cross Module References
class UScriptStruct* FKeyMapSettingsDataReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyMapSettingsDataReference, Z_Construct_UPackage__Script_ABP_200508(), TEXT("KeyMapSettingsDataReference"), sizeof(FKeyMapSettingsDataReference), Get_Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FKeyMapSettingsDataReference>()
{
	return FKeyMapSettingsDataReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyMapSettingsDataReference(FKeyMapSettingsDataReference::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("KeyMapSettingsDataReference"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFKeyMapSettingsDataReference
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFKeyMapSettingsDataReference()
	{
		UScriptStruct::DeferCppStructOps<FKeyMapSettingsDataReference>(FName(TEXT("KeyMapSettingsDataReference")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFKeyMapSettingsDataReference;
	struct Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapSettingDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapSettingDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyMapSettingDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KeyMapSettingsDataReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyMapSettingsDataReference>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewProp_KeyMapSettingDataList_Inner = { "KeyMapSettingDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewProp_KeyMapSettingDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KeyMapSettingsDataReference" },
		{ "ModuleRelativePath", "Public/KeyMapSettingsDataReference.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewProp_KeyMapSettingDataList = { "KeyMapSettingDataList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyMapSettingsDataReference, KeyMapSettingDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewProp_KeyMapSettingDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewProp_KeyMapSettingDataList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewProp_KeyMapSettingDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::NewProp_KeyMapSettingDataList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"KeyMapSettingsDataReference",
		sizeof(FKeyMapSettingsDataReference),
		alignof(FKeyMapSettingsDataReference),
		Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingsDataReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyMapSettingsDataReference"), sizeof(FKeyMapSettingsDataReference), Get_Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyMapSettingsDataReference_Hash() { return 2952069233U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
