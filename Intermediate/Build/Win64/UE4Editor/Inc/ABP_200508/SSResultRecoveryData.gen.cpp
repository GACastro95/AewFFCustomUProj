// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSResultRecoveryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSResultRecoveryData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultRecoveryData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSResultRecoveryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSResultRecoveryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSResultRecoveryData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSResultRecoveryData"), sizeof(FSSResultRecoveryData), Get_Z_Construct_UScriptStruct_FSSResultRecoveryData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSResultRecoveryData>()
{
	return FSSResultRecoveryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSResultRecoveryData(FSSResultRecoveryData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSResultRecoveryData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultRecoveryData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSResultRecoveryData()
	{
		UScriptStruct::DeferCppStructOps<FSSResultRecoveryData>(FName(TEXT("SSResultRecoveryData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSResultRecoveryData;
	struct Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExistsRecoveryData_MetaData[];
#endif
		static void NewProp_ExistsRecoveryData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExistsRecoveryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSResultRecoveryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSResultRecoveryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewProp_ExistsRecoveryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSResultRecoveryData" },
		{ "ModuleRelativePath", "Public/SSResultRecoveryData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewProp_ExistsRecoveryData_SetBit(void* Obj)
	{
		((FSSResultRecoveryData*)Obj)->ExistsRecoveryData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewProp_ExistsRecoveryData = { "ExistsRecoveryData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSResultRecoveryData), &Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewProp_ExistsRecoveryData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewProp_ExistsRecoveryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewProp_ExistsRecoveryData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::NewProp_ExistsRecoveryData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSResultRecoveryData",
		sizeof(FSSResultRecoveryData),
		alignof(FSSResultRecoveryData),
		Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSResultRecoveryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSResultRecoveryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSResultRecoveryData"), sizeof(FSSResultRecoveryData), Get_Z_Construct_UScriptStruct_FSSResultRecoveryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSResultRecoveryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSResultRecoveryData_Hash() { return 1759872844U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
