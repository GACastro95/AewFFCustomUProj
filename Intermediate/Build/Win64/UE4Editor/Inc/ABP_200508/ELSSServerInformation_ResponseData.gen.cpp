// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSServerInformation_ResponseData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSServerInformation_ResponseData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSResponseBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSGameLiftInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FELSSServerInformation_ResponseData>() == std::is_polymorphic<FELSSResponseBase>(), "USTRUCT FELSSServerInformation_ResponseData cannot be polymorphic unless super FELSSResponseBase is polymorphic");

class UScriptStruct* FELSSServerInformation_ResponseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSServerInformation_ResponseData"), sizeof(FELSSServerInformation_ResponseData), Get_Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSServerInformation_ResponseData>()
{
	return FELSSServerInformation_ResponseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSServerInformation_ResponseData(FELSSServerInformation_ResponseData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSServerInformation_ResponseData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSServerInformation_ResponseData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSServerInformation_ResponseData()
	{
		UScriptStruct::DeferCppStructOps<FELSSServerInformation_ResponseData>(FName(TEXT("ELSSServerInformation_ResponseData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSServerInformation_ResponseData;
	struct Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssGameLiftInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssGameLiftInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSServerInformation_ResponseData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSServerInformation_ResponseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::NewProp_ssGameLiftInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSServerInformation_ResponseData" },
		{ "ModuleRelativePath", "Public/ELSSServerInformation_ResponseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::NewProp_ssGameLiftInfo = { "ssGameLiftInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSServerInformation_ResponseData, ssGameLiftInfo), Z_Construct_UScriptStruct_FELSSGameLiftInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::NewProp_ssGameLiftInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::NewProp_ssGameLiftInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::NewProp_ssGameLiftInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FELSSResponseBase,
		&NewStructOps,
		"ELSSServerInformation_ResponseData",
		sizeof(FELSSServerInformation_ResponseData),
		alignof(FELSSServerInformation_ResponseData),
		Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSServerInformation_ResponseData"), sizeof(FELSSServerInformation_ResponseData), Get_Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSServerInformation_ResponseData_Hash() { return 1141268650U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
