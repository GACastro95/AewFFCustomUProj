// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/KeyMapSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyMapSettingData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyActionData();
// End Cross Module References
class UScriptStruct* FKeyMapSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FKeyMapSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyMapSettingData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("KeyMapSettingData"), sizeof(FKeyMapSettingData), Get_Z_Construct_UScriptStruct_FKeyMapSettingData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FKeyMapSettingData>()
{
	return FKeyMapSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyMapSettingData(FKeyMapSettingData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("KeyMapSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFKeyMapSettingData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFKeyMapSettingData()
	{
		UScriptStruct::DeferCppStructOps<FKeyMapSettingData>(FName(TEXT("KeyMapSettingData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFKeyMapSettingData;
	struct Z_Construct_UScriptStruct_FKeyMapSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyActionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KeyMapSettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyMapSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_InputName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KeyMapSettingData" },
		{ "ModuleRelativePath", "Public/KeyMapSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyMapSettingData, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_KeyActionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KeyMapSettingData" },
		{ "ModuleRelativePath", "Public/KeyMapSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_KeyActionData = { "KeyActionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyMapSettingData, KeyActionData), Z_Construct_UScriptStruct_FKeyActionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_KeyActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_KeyActionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_InputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::NewProp_KeyActionData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"KeyMapSettingData",
		sizeof(FKeyMapSettingData),
		alignof(FKeyMapSettingData),
		Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyMapSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyMapSettingData"), sizeof(FKeyMapSettingData), Get_Z_Construct_UScriptStruct_FKeyMapSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyMapSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyMapSettingData_Hash() { return 1431401831U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
