// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSUserDataParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSUserDataParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSUserDataParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSGameRankData();
// End Cross Module References
class UScriptStruct* FELSSUserDataParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSUserDataParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSUserDataParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSUserDataParam"), sizeof(FELSSUserDataParam), Get_Z_Construct_UScriptStruct_FELSSUserDataParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSUserDataParam>()
{
	return FELSSUserDataParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSUserDataParam(FELSSUserDataParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSUserDataParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSUserDataParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSUserDataParam()
	{
		UScriptStruct::DeferCppStructOps<FELSSUserDataParam>(FName(TEXT("ELSSUserDataParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSUserDataParam;
	struct Z_Construct_UScriptStruct_FELSSUserDataParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssGameRankData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssGameRankData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSUserDataParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSUserDataParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssUserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUserDataParam" },
		{ "ModuleRelativePath", "Public/ELSSUserDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssUserData = { "ssUserData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSUserDataParam, ssUserData), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssGameRankData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUserDataParam" },
		{ "ModuleRelativePath", "Public/ELSSUserDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssGameRankData = { "ssGameRankData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSUserDataParam, ssGameRankData), Z_Construct_UScriptStruct_FELSSGameRankData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssGameRankData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssGameRankData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::NewProp_ssGameRankData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSUserDataParam",
		sizeof(FELSSUserDataParam),
		alignof(FELSSUserDataParam),
		Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSUserDataParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSUserDataParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSUserDataParam"), sizeof(FELSSUserDataParam), Get_Z_Construct_UScriptStruct_FELSSUserDataParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSUserDataParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSUserDataParam_Hash() { return 1966144554U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
