// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSSessionWrestlerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSSessionWrestlerData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSSessionWrestlerData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FELEOSSessionWrestlerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEOSSessionWrestlerData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEOSSessionWrestlerData"), sizeof(FELEOSSessionWrestlerData), Get_Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEOSSessionWrestlerData>()
{
	return FELEOSSessionWrestlerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEOSSessionWrestlerData(FELEOSSessionWrestlerData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEOSSessionWrestlerData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSessionWrestlerData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSessionWrestlerData()
	{
		UScriptStruct::DeferCppStructOps<FELEOSSessionWrestlerData>(FName(TEXT("ELEOSSessionWrestlerData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSessionWrestlerData;
	struct Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrestlerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEOSSessionWrestlerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEOSSessionWrestlerData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewProp_WrestlerArray_Inner = { "WrestlerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewProp_WrestlerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSessionWrestlerData" },
		{ "ModuleRelativePath", "Public/ELEOSSessionWrestlerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewProp_WrestlerArray = { "WrestlerArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSSessionWrestlerData, WrestlerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewProp_WrestlerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewProp_WrestlerArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewProp_WrestlerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::NewProp_WrestlerArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEOSSessionWrestlerData",
		sizeof(FELEOSSessionWrestlerData),
		alignof(FELEOSSessionWrestlerData),
		Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEOSSessionWrestlerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEOSSessionWrestlerData"), sizeof(FELEOSSessionWrestlerData), Get_Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEOSSessionWrestlerData_Hash() { return 3031451571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
