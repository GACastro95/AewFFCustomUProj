// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStatus_ResponseData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStatus_ResponseData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSResponseBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELSSFlexMatchMakeStatus_ResponseData>() == std::is_polymorphic<FELSSResponseBase>(), "USTRUCT FELSSFlexMatchMakeStatus_ResponseData cannot be polymorphic unless super FELSSResponseBase is polymorphic");

class UScriptStruct* FELSSFlexMatchMakeStatus_ResponseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSFlexMatchMakeStatus_ResponseData"), sizeof(FELSSFlexMatchMakeStatus_ResponseData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSFlexMatchMakeStatus_ResponseData>()
{
	return FELSSFlexMatchMakeStatus_ResponseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData(FELSSFlexMatchMakeStatus_ResponseData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSFlexMatchMakeStatus_ResponseData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStatus_ResponseData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStatus_ResponseData()
	{
		UScriptStruct::DeferCppStructOps<FELSSFlexMatchMakeStatus_ResponseData>(FName(TEXT("ELSSFlexMatchMakeStatus_ResponseData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStatus_ResponseData;
	struct Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatus_ResponseData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSFlexMatchMakeStatus_ResponseData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FELSSResponseBase,
		&NewStructOps,
		"ELSSFlexMatchMakeStatus_ResponseData",
		sizeof(FELSSFlexMatchMakeStatus_ResponseData),
		alignof(FELSSFlexMatchMakeStatus_ResponseData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSFlexMatchMakeStatus_ResponseData"), sizeof(FELSSFlexMatchMakeStatus_ResponseData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_ResponseData_Hash() { return 682158116U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
