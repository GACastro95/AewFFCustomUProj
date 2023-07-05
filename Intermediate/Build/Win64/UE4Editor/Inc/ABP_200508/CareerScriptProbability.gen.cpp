// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerScriptProbability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerScriptProbability() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerScriptProbability();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerScriptProbability>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerScriptProbability cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerScriptProbability::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerScriptProbability_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerScriptProbability, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerScriptProbability"), sizeof(FCareerScriptProbability), Get_Z_Construct_UScriptStruct_FCareerScriptProbability_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerScriptProbability>()
{
	return FCareerScriptProbability::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerScriptProbability(FCareerScriptProbability::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerScriptProbability"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerScriptProbability
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerScriptProbability()
	{
		UScriptStruct::DeferCppStructOps<FCareerScriptProbability>(FName(TEXT("CareerScriptProbability")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerScriptProbability;
	struct Z_Construct_UScriptStruct_FCareerScriptProbability_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerScriptProbability.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerScriptProbability>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerScriptProbability" },
		{ "ModuleRelativePath", "Public/CareerScriptProbability.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerScriptProbability, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Percent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerScriptProbability" },
		{ "ModuleRelativePath", "Public/CareerScriptProbability.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerScriptProbability, Percent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Percent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::NewProp_Percent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerScriptProbability",
		sizeof(FCareerScriptProbability),
		alignof(FCareerScriptProbability),
		Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerScriptProbability()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerScriptProbability_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerScriptProbability"), sizeof(FCareerScriptProbability), Get_Z_Construct_UScriptStruct_FCareerScriptProbability_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerScriptProbability_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerScriptProbability_Hash() { return 1467184564U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
