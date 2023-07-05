// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_StatData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_StatData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_StatData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSaveData_StatData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSaveData_StatData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveData_StatData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SaveData_StatData"), sizeof(FSaveData_StatData), Get_Z_Construct_UScriptStruct_FSaveData_StatData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSaveData_StatData>()
{
	return FSaveData_StatData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveData_StatData(FSaveData_StatData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SaveData_StatData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSaveData_StatData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSaveData_StatData()
	{
		UScriptStruct::DeferCppStructOps<FSaveData_StatData>(FName(TEXT("SaveData_StatData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSaveData_StatData;
	struct Z_Construct_UScriptStruct_FSaveData_StatData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_KeyHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_m_KeyHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_m_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_StatData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveData_StatData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveData_StatData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_StatData" },
		{ "ModuleRelativePath", "Public/SaveData_StatData.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyHash = { "m_KeyHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveData_StatData, m_KeyHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_StatData" },
		{ "ModuleRelativePath", "Public/SaveData_StatData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_Value = { "m_Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveData_StatData, m_Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_StatData" },
		{ "ModuleRelativePath", "Public/SaveData_StatData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyName = { "m_KeyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_KeyName, FSaveData_StatData), STRUCT_OFFSET(FSaveData_StatData, m_KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveData_StatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_StatData_Statics::NewProp_m_KeyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveData_StatData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SaveData_StatData",
		sizeof(FSaveData_StatData),
		alignof(FSaveData_StatData),
		Z_Construct_UScriptStruct_FSaveData_StatData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_StatData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveData_StatData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveData_StatData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveData_StatData"), sizeof(FSaveData_StatData), Get_Z_Construct_UScriptStruct_FSaveData_StatData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveData_StatData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveData_StatData_Hash() { return 1010475112U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
