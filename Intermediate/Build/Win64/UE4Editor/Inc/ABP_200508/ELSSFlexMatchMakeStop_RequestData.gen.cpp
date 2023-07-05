// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStop_RequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStop_RequestData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSFlexMatchMakeStop_RequestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSFlexMatchMakeStop_RequestData"), sizeof(FELSSFlexMatchMakeStop_RequestData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSFlexMatchMakeStop_RequestData>()
{
	return FELSSFlexMatchMakeStop_RequestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData(FELSSFlexMatchMakeStop_RequestData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSFlexMatchMakeStop_RequestData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStop_RequestData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStop_RequestData()
	{
		UScriptStruct::DeferCppStructOps<FELSSFlexMatchMakeStop_RequestData>(FName(TEXT("ELSSFlexMatchMakeStop_RequestData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStop_RequestData;
	struct Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStop_RequestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSFlexMatchMakeStop_RequestData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSFlexMatchMakeStop_RequestData",
		sizeof(FELSSFlexMatchMakeStop_RequestData),
		alignof(FELSSFlexMatchMakeStop_RequestData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSFlexMatchMakeStop_RequestData"), sizeof(FELSSFlexMatchMakeStop_RequestData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_RequestData_Hash() { return 217999847U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
