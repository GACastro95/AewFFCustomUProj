// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/AttireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttireData() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireData();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsData();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaintData();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
// End Cross Module References
class UScriptStruct* FAttireData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FAttireData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttireData, Z_Construct_UPackage__Script_Creation(), TEXT("AttireData"), sizeof(FAttireData), Get_Z_Construct_UScriptStruct_FAttireData_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FAttireData>()
{
	return FAttireData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttireData(FAttireData::StaticStruct, TEXT("/Script/Creation"), TEXT("AttireData"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFAttireData
{
	FScriptStruct_Creation_StaticRegisterNativesFAttireData()
	{
		UScriptStruct::DeferCppStructOps<FAttireData>(FName(TEXT("AttireData")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFAttireData;
	struct Z_Construct_UScriptStruct_FAttireData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parts_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Parts_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Parts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Parts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paints_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Paints_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Paints_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paints_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Paints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttireData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttireData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttireData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttireData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_ValueProp = { "Parts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditPartsData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_Key_KeyProp = { "Parts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttireData" },
		{ "ModuleRelativePath", "Public/AttireData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttireData, Parts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_ValueProp = { "Paints", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditPaintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_Key_KeyProp = { "Paints_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttireData" },
		{ "ModuleRelativePath", "Public/AttireData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints = { "Paints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttireData, Paints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Parts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireData_Statics::NewProp_Paints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttireData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"AttireData",
		sizeof(FAttireData),
		alignof(FAttireData),
		Z_Construct_UScriptStruct_FAttireData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttireData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttireData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttireData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttireData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttireData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttireData"), sizeof(FAttireData), Get_Z_Construct_UScriptStruct_FAttireData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttireData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttireData_Hash() { return 3450064924U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
