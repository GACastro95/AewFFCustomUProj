// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StWeaponSingleMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStWeaponSingleMotion() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStWeaponSingleMotion();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStWeaponSingleMotion>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStWeaponSingleMotion cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStWeaponSingleMotion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStWeaponSingleMotion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStWeaponSingleMotion, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StWeaponSingleMotion"), sizeof(FStWeaponSingleMotion), Get_Z_Construct_UScriptStruct_FStWeaponSingleMotion_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStWeaponSingleMotion>()
{
	return FStWeaponSingleMotion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStWeaponSingleMotion(FStWeaponSingleMotion::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StWeaponSingleMotion"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStWeaponSingleMotion
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStWeaponSingleMotion()
	{
		UScriptStruct::DeferCppStructOps<FStWeaponSingleMotion>(FName(TEXT("StWeaponSingleMotion")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStWeaponSingleMotion;
	struct Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_Char_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage_Char;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StWeaponSingleMotion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStWeaponSingleMotion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Char_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StWeaponSingleMotion" },
		{ "ModuleRelativePath", "Public/StWeaponSingleMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Char = { "Montage_Char", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStWeaponSingleMotion, Montage_Char), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Char_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Char_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StWeaponSingleMotion" },
		{ "ModuleRelativePath", "Public/StWeaponSingleMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Weapon = { "Montage_Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStWeaponSingleMotion, Montage_Weapon), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Char,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::NewProp_Montage_Weapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StWeaponSingleMotion",
		sizeof(FStWeaponSingleMotion),
		alignof(FStWeaponSingleMotion),
		Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStWeaponSingleMotion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStWeaponSingleMotion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StWeaponSingleMotion"), sizeof(FStWeaponSingleMotion), Get_Z_Construct_UScriptStruct_FStWeaponSingleMotion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStWeaponSingleMotion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStWeaponSingleMotion_Hash() { return 4282279596U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
