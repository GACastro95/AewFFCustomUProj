// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSChallengeCountData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSChallengeCountData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSChallengeCountData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
// End Cross Module References
class UScriptStruct* FSSChallengeCountData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSChallengeCountData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSChallengeCountData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSChallengeCountData"), sizeof(FSSChallengeCountData), Get_Z_Construct_UScriptStruct_FSSChallengeCountData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSChallengeCountData>()
{
	return FSSChallengeCountData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSChallengeCountData(FSSChallengeCountData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSChallengeCountData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSChallengeCountData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSChallengeCountData()
	{
		UScriptStruct::DeferCppStructOps<FSSChallengeCountData>(FName(TEXT("SSChallengeCountData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSChallengeCountData;
	struct Z_Construct_UScriptStruct_FSSChallengeCountData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fixed_MetaData[];
#endif
		static void NewProp_Fixed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fixed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSChallengeCountData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSChallengeCountData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSChallengeCountData" },
		{ "ModuleRelativePath", "Public/SSChallengeCountData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSChallengeCountData, WrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_WrestlerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSChallengeCountData" },
		{ "ModuleRelativePath", "Public/SSChallengeCountData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Count, FSSChallengeCountData), STRUCT_OFFSET(FSSChallengeCountData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Fixed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSChallengeCountData" },
		{ "ModuleRelativePath", "Public/SSChallengeCountData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Fixed_SetBit(void* Obj)
	{
		((FSSChallengeCountData*)Obj)->Fixed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Fixed = { "Fixed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSChallengeCountData), &Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Fixed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Fixed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Fixed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::NewProp_Fixed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSChallengeCountData",
		sizeof(FSSChallengeCountData),
		alignof(FSSChallengeCountData),
		Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSChallengeCountData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSChallengeCountData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSChallengeCountData"), sizeof(FSSChallengeCountData), Get_Z_Construct_UScriptStruct_FSSChallengeCountData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSChallengeCountData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSChallengeCountData_Hash() { return 2620142118U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
