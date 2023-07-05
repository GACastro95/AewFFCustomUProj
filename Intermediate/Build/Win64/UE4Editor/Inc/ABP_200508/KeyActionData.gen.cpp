// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/KeyActionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyActionData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyActionData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyActionType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
// End Cross Module References
class UScriptStruct* FKeyActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FKeyActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyActionData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("KeyActionData"), sizeof(FKeyActionData), Get_Z_Construct_UScriptStruct_FKeyActionData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FKeyActionData>()
{
	return FKeyActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyActionData(FKeyActionData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("KeyActionData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFKeyActionData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFKeyActionData()
	{
		UScriptStruct::DeferCppStructOps<FKeyActionData>(FName(TEXT("KeyActionData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFKeyActionData;
	struct Z_Construct_UScriptStruct_FKeyActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyActionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KeyActionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyMapType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KeyActionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyActionData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyActionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KeyActionData" },
		{ "ModuleRelativePath", "Public/KeyActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyActionType = { "KeyActionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyActionData, KeyActionType), Z_Construct_UEnum_ABP_200508_EKeyActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyActionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyMapType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KeyActionData" },
		{ "ModuleRelativePath", "Public/KeyActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyMapType = { "KeyMapType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyActionData, KeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyMapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyMapType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyActionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyActionData_Statics::NewProp_KeyMapType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"KeyActionData",
		sizeof(FKeyActionData),
		alignof(FKeyActionData),
		Z_Construct_UScriptStruct_FKeyActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyActionData"), sizeof(FKeyActionData), Get_Z_Construct_UScriptStruct_FKeyActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyActionData_Hash() { return 2588914956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
