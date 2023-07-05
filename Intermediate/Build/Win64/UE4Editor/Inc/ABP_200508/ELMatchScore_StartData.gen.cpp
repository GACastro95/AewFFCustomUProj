// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchScore_StartData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchScore_StartData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_StartData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELMatchScore_StartData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_StartData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchScore_StartData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELMatchScore_StartData"), sizeof(FELMatchScore_StartData), Get_Z_Construct_UScriptStruct_FELMatchScore_StartData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELMatchScore_StartData>()
{
	return FELMatchScore_StartData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchScore_StartData(FELMatchScore_StartData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELMatchScore_StartData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_StartData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_StartData()
	{
		UScriptStruct::DeferCppStructOps<FELMatchScore_StartData>(FName(TEXT("ELMatchScore_StartData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_StartData;
	struct Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Star_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Star;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StartData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchScore_StartData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Star_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StartData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StartData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Star = { "Star", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StartData, Star), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Star_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Star_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StartData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StartData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StartData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Star,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::NewProp_Score,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELMatchScore_StartData",
		sizeof(FELMatchScore_StartData),
		alignof(FELMatchScore_StartData),
		Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_StartData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_StartData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchScore_StartData"), sizeof(FELMatchScore_StartData), Get_Z_Construct_UScriptStruct_FELMatchScore_StartData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchScore_StartData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_StartData_Hash() { return 1853766064U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
