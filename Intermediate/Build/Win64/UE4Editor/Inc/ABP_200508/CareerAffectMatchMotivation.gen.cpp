// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerAffectMatchMotivation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerAffectMatchMotivation() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAffectMatchMotivation();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerAffectMatchMotivation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerAffectMatchMotivation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerAffectMatchMotivation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerAffectMatchMotivation"), sizeof(FCareerAffectMatchMotivation), Get_Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerAffectMatchMotivation>()
{
	return FCareerAffectMatchMotivation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerAffectMatchMotivation(FCareerAffectMatchMotivation::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerAffectMatchMotivation"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAffectMatchMotivation
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAffectMatchMotivation()
	{
		UScriptStruct::DeferCppStructOps<FCareerAffectMatchMotivation>(FName(TEXT("CareerAffectMatchMotivation")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerAffectMatchMotivation;
	struct Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcVeryLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcVeryLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcGood_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcGood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcExcellent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcExcellent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchMotivation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerAffectMatchMotivation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchMotivation" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchMotivation, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcVeryLow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchMotivation" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcVeryLow = { "fCalcVeryLow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchMotivation, fCalcVeryLow), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcVeryLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcVeryLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcLow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchMotivation" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcLow = { "fCalcLow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchMotivation, fCalcLow), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchMotivation" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcNormal = { "fCalcNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchMotivation, fCalcNormal), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcGood_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchMotivation" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcGood = { "fCalcGood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchMotivation, fCalcGood), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcGood_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcGood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcExcellent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchMotivation" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcExcellent = { "fCalcExcellent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchMotivation, fCalcExcellent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcExcellent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcExcellent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcVeryLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcGood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::NewProp_fCalcExcellent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerAffectMatchMotivation",
		sizeof(FCareerAffectMatchMotivation),
		alignof(FCareerAffectMatchMotivation),
		Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerAffectMatchMotivation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerAffectMatchMotivation"), sizeof(FCareerAffectMatchMotivation), Get_Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerAffectMatchMotivation_Hash() { return 2095502577U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
