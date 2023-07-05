// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YDebugMenuParamForSSMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuParamForSSMode() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForSSMode();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_NoRegister();
// End Cross Module References
class UScriptStruct* FYDebugMenuParamForSSMode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("YDebugMenuParamForSSMode"), sizeof(FYDebugMenuParamForSSMode), Get_Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FYDebugMenuParamForSSMode>()
{
	return FYDebugMenuParamForSSMode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYDebugMenuParamForSSMode(FYDebugMenuParamForSSMode::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("YDebugMenuParamForSSMode"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFYDebugMenuParamForSSMode
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFYDebugMenuParamForSSMode()
	{
		UScriptStruct::DeferCppStructOps<FYDebugMenuParamForSSMode>(FName(TEXT("YDebugMenuParamForSSMode")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFYDebugMenuParamForSSMode;
	struct Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UITypes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UITypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UITypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UITypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELSSDebugMenuDummyItem01_MenuSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELSSDebugMenuDummyItem01_MenuSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForSSMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYDebugMenuParamForSSMode>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes_Inner = { "UITypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForSSMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForSSMode" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForSSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes = { "UITypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForSSMode, UITypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_ELSSDebugMenuDummyItem01_MenuSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForSSMode" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForSSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_ELSSDebugMenuDummyItem01_MenuSettings = { "ELSSDebugMenuDummyItem01_MenuSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForSSMode, ELSSDebugMenuDummyItem01_MenuSettings), Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_ELSSDebugMenuDummyItem01_MenuSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_ELSSDebugMenuDummyItem01_MenuSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_UITypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::NewProp_ELSSDebugMenuDummyItem01_MenuSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"YDebugMenuParamForSSMode",
		sizeof(FYDebugMenuParamForSSMode),
		alignof(FYDebugMenuParamForSSMode),
		Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YDebugMenuParamForSSMode"), sizeof(FYDebugMenuParamForSSMode), Get_Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode_Hash() { return 2274465747U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
