// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStop_ResponseData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStop_ResponseData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSResponseBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELSSFlexMatchMakeStop_ResponseData>() == std::is_polymorphic<FELSSResponseBase>(), "USTRUCT FELSSFlexMatchMakeStop_ResponseData cannot be polymorphic unless super FELSSResponseBase is polymorphic");

class UScriptStruct* FELSSFlexMatchMakeStop_ResponseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSFlexMatchMakeStop_ResponseData"), sizeof(FELSSFlexMatchMakeStop_ResponseData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSFlexMatchMakeStop_ResponseData>()
{
	return FELSSFlexMatchMakeStop_ResponseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData(FELSSFlexMatchMakeStop_ResponseData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSFlexMatchMakeStop_ResponseData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStop_ResponseData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStop_ResponseData()
	{
		UScriptStruct::DeferCppStructOps<FELSSFlexMatchMakeStop_ResponseData>(FName(TEXT("ELSSFlexMatchMakeStop_ResponseData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStop_ResponseData;
	struct Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStop_ResponseData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSFlexMatchMakeStop_ResponseData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FELSSResponseBase,
		&NewStructOps,
		"ELSSFlexMatchMakeStop_ResponseData",
		sizeof(FELSSFlexMatchMakeStop_ResponseData),
		alignof(FELSSFlexMatchMakeStop_ResponseData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSFlexMatchMakeStop_ResponseData"), sizeof(FELSSFlexMatchMakeStop_ResponseData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStop_ResponseData_Hash() { return 2117685188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
