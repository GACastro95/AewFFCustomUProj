// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRewardMotivation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRewardMotivation() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRewardMotivation();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerRewardMotivation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerRewardMotivation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerRewardMotivation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRewardMotivation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRewardMotivation, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRewardMotivation"), sizeof(FCareerRewardMotivation), Get_Z_Construct_UScriptStruct_FCareerRewardMotivation_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRewardMotivation>()
{
	return FCareerRewardMotivation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRewardMotivation(FCareerRewardMotivation::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRewardMotivation"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardMotivation
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardMotivation()
	{
		UScriptStruct::DeferCppStructOps<FCareerRewardMotivation>(FName(TEXT("CareerRewardMotivation")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRewardMotivation;
	struct Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Injury_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Injury;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Win_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Win;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lose_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRewardMotivation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRewardMotivation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardMotivation" },
		{ "ModuleRelativePath", "Public/CareerRewardMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardMotivation, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Injury_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardMotivation" },
		{ "ModuleRelativePath", "Public/CareerRewardMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Injury = { "Injury", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardMotivation, Injury), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Injury_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Injury_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardMotivation" },
		{ "ModuleRelativePath", "Public/CareerRewardMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Win = { "Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardMotivation, Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Lose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRewardMotivation" },
		{ "ModuleRelativePath", "Public/CareerRewardMotivation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Lose = { "Lose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRewardMotivation, Lose), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Lose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Lose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Injury,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::NewProp_Lose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerRewardMotivation",
		sizeof(FCareerRewardMotivation),
		alignof(FCareerRewardMotivation),
		Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRewardMotivation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRewardMotivation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRewardMotivation"), sizeof(FCareerRewardMotivation), Get_Z_Construct_UScriptStruct_FCareerRewardMotivation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRewardMotivation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRewardMotivation_Hash() { return 4272843885U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
