// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSystemInAirDamage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSystemInAirDamage() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemInAirDamage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStSystemInAirDamage>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSystemInAirDamage cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSystemInAirDamage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSystemInAirDamage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSystemInAirDamage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSystemInAirDamage"), sizeof(FStSystemInAirDamage), Get_Z_Construct_UScriptStruct_FStSystemInAirDamage_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSystemInAirDamage>()
{
	return FStSystemInAirDamage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSystemInAirDamage(FStSystemInAirDamage::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSystemInAirDamage"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemInAirDamage
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemInAirDamage()
	{
		UScriptStruct::DeferCppStructOps<FStSystemInAirDamage>(FName(TEXT("StSystemInAirDamage")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSystemInAirDamage;
	struct Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Falling_Front_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Falling_Front;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Landing_Front_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Landing_Front;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Falling_Back_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Falling_Back;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Landing_Back_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Landing_Back;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSystemInAirDamage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSystemInAirDamage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Front_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemInAirDamage" },
		{ "ModuleRelativePath", "Public/StSystemInAirDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Front = { "Falling_Front", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemInAirDamage, Falling_Front), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Front_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Front_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemInAirDamage" },
		{ "ModuleRelativePath", "Public/StSystemInAirDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Front = { "Landing_Front", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemInAirDamage, Landing_Front), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Front_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemInAirDamage" },
		{ "ModuleRelativePath", "Public/StSystemInAirDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Back = { "Falling_Back", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemInAirDamage, Falling_Back), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Back_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemInAirDamage" },
		{ "ModuleRelativePath", "Public/StSystemInAirDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Back = { "Landing_Back", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemInAirDamage, Landing_Back), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Back_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Falling_Back,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::NewProp_Landing_Back,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSystemInAirDamage",
		sizeof(FStSystemInAirDamage),
		alignof(FStSystemInAirDamage),
		Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSystemInAirDamage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSystemInAirDamage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSystemInAirDamage"), sizeof(FStSystemInAirDamage), Get_Z_Construct_UScriptStruct_FStSystemInAirDamage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSystemInAirDamage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSystemInAirDamage_Hash() { return 2481258519U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
