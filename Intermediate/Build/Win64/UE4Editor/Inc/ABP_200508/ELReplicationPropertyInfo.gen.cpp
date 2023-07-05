// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELReplicationPropertyInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELReplicationPropertyInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELReplicationPropertyInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELReplicationCondition();
// End Cross Module References
class UScriptStruct* FELReplicationPropertyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELReplicationPropertyInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELReplicationPropertyInfo"), sizeof(FELReplicationPropertyInfo), Get_Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELReplicationPropertyInfo>()
{
	return FELReplicationPropertyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELReplicationPropertyInfo(FELReplicationPropertyInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELReplicationPropertyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELReplicationPropertyInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELReplicationPropertyInfo()
	{
		UScriptStruct::DeferCppStructOps<FELReplicationPropertyInfo>(FName(TEXT("ELReplicationPropertyInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELReplicationPropertyInfo;
	struct Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Conditions_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HashArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HashArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HashArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELReplicationPropertyInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELReplicationPropertyInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_Conditions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_Conditions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationPropertyInfo" },
		{ "ModuleRelativePath", "Public/ELReplicationPropertyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplicationPropertyInfo, Conditions), Z_Construct_UEnum_ABP_200508_EELReplicationCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_HashArray_Inner = { "HashArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_HashArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationPropertyInfo" },
		{ "ModuleRelativePath", "Public/ELReplicationPropertyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_HashArray = { "HashArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELReplicationPropertyInfo, HashArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_HashArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_HashArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_Conditions_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_HashArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::NewProp_HashArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELReplicationPropertyInfo",
		sizeof(FELReplicationPropertyInfo),
		alignof(FELReplicationPropertyInfo),
		Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELReplicationPropertyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELReplicationPropertyInfo"), sizeof(FELReplicationPropertyInfo), Get_Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELReplicationPropertyInfo_Hash() { return 1319707035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
