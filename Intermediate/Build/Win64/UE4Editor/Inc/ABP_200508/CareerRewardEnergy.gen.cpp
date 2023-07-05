// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRewardEnergy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRewardEnergy() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRewardEnergy();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerRewardEnergy>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerRewardEnergy cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerRewardEnergy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRewardEnergy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRewardEnergy, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRewardEnergy"), sizeof(FCareerRewardEnergy), Get_Z_Construct_UScriptStruct_FCareerRewardEnergy_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRewardEnergy>()
{
	return FCareerRewardEnergy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRewardEnergy(FCareerRewardEnergy::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRewardEnergy"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardEnergy
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardEnergy()
	{
		UScriptStruct::DeferCppStructOps<FCareerRewardEnergy>(FName(TEXT("CareerRewardEnergy")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardEnergy;
	struct Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubstructEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubstructEnergy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRewardEnergy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRewardEnergy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardEnergy" },
		{ "ModuleRelativePath", "Public/CareerRewardEnergy.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardEnergy, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_SubstructEnergy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardEnergy" },
		{ "ModuleRelativePath", "Public/CareerRewardEnergy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_SubstructEnergy = { "SubstructEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardEnergy, SubstructEnergy), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_SubstructEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_SubstructEnergy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::NewProp_SubstructEnergy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerRewardEnergy",
		sizeof(FCareerRewardEnergy),
		alignof(FCareerRewardEnergy),
		Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRewardEnergy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRewardEnergy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRewardEnergy"), sizeof(FCareerRewardEnergy), Get_Z_Construct_UScriptStruct_FCareerRewardEnergy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRewardEnergy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRewardEnergy_Hash() { return 3131420301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
