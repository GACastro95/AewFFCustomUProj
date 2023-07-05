// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPassiveSkillData_EffectDamage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPassiveSkillData_EffectDamage() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStPassiveSkillData_EffectDamage>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPassiveSkillData_EffectDamage cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPassiveSkillData_EffectDamage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPassiveSkillData_EffectDamage"), sizeof(FStPassiveSkillData_EffectDamage), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPassiveSkillData_EffectDamage>()
{
	return FStPassiveSkillData_EffectDamage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPassiveSkillData_EffectDamage(FStPassiveSkillData_EffectDamage::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPassiveSkillData_EffectDamage"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_EffectDamage
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_EffectDamage()
	{
		UScriptStruct::DeferCppStructOps<FStPassiveSkillData_EffectDamage>(FName(TEXT("StPassiveSkillData_EffectDamage")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_EffectDamage;
	struct Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fFeet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fFeet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_EffectDamage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPassiveSkillData_EffectDamage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_EffectDamage" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_EffectDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHP = { "fHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_EffectDamage, fHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_EffectDamage" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_EffectDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHead = { "fHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_EffectDamage, fHead), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_EffectDamage" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_EffectDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fBody = { "fBody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_EffectDamage, fBody), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_EffectDamage" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_EffectDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fArm = { "fArm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_EffectDamage, fArm), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fFeet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_EffectDamage" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_EffectDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fFeet = { "fFeet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_EffectDamage, fFeet), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fFeet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::NewProp_fFeet,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPassiveSkillData_EffectDamage",
		sizeof(FStPassiveSkillData_EffectDamage),
		alignof(FStPassiveSkillData_EffectDamage),
		Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPassiveSkillData_EffectDamage"), sizeof(FStPassiveSkillData_EffectDamage), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage_Hash() { return 738365157U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
