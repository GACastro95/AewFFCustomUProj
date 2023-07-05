// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerAffectMatchInjury.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerAffectMatchInjury() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAffectMatchInjury();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerAffectMatchInjury>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerAffectMatchInjury cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerAffectMatchInjury::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerAffectMatchInjury, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerAffectMatchInjury"), sizeof(FCareerAffectMatchInjury), Get_Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerAffectMatchInjury>()
{
	return FCareerAffectMatchInjury::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerAffectMatchInjury(FCareerAffectMatchInjury::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerAffectMatchInjury"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAffectMatchInjury
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAffectMatchInjury()
	{
		UScriptStruct::DeferCppStructOps<FCareerAffectMatchInjury>(FName(TEXT("CareerAffectMatchInjury")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerAffectMatchInjury;
	struct Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalcLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalcLeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchInjury.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerAffectMatchInjury>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchInjury" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchInjury.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchInjury, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchInjury" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchInjury.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcHead = { "fCalcHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchInjury, fCalcHead), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchInjury" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchInjury.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcArm = { "fCalcArm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchInjury, fCalcArm), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchInjury" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchInjury.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcBody = { "fCalcBody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchInjury, fCalcBody), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcLeg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAffectMatchInjury" },
		{ "ModuleRelativePath", "Public/CareerAffectMatchInjury.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcLeg = { "fCalcLeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAffectMatchInjury, fCalcLeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcLeg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::NewProp_fCalcLeg,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerAffectMatchInjury",
		sizeof(FCareerAffectMatchInjury),
		alignof(FCareerAffectMatchInjury),
		Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerAffectMatchInjury()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerAffectMatchInjury"), sizeof(FCareerAffectMatchInjury), Get_Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerAffectMatchInjury_Hash() { return 3721280934U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
