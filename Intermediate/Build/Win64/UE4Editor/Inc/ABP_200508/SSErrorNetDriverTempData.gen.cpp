// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSErrorNetDriverTempData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSErrorNetDriverTempData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorNetDriverTempData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSErrorNetDriverTempData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSErrorNetDriverTempData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSErrorNetDriverTempData"), sizeof(FSSErrorNetDriverTempData), Get_Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSErrorNetDriverTempData>()
{
	return FSSErrorNetDriverTempData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSErrorNetDriverTempData(FSSErrorNetDriverTempData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSErrorNetDriverTempData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorNetDriverTempData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorNetDriverTempData()
	{
		UScriptStruct::DeferCppStructOps<FSSErrorNetDriverTempData>(FName(TEXT("SSErrorNetDriverTempData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorNetDriverTempData;
	struct Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSErrorNetDriverTempData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSErrorNetDriverTempData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSErrorNetDriverTempData",
		sizeof(FSSErrorNetDriverTempData),
		alignof(FSSErrorNetDriverTempData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSErrorNetDriverTempData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSErrorNetDriverTempData"), sizeof(FSSErrorNetDriverTempData), Get_Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSErrorNetDriverTempData_Hash() { return 633511779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
