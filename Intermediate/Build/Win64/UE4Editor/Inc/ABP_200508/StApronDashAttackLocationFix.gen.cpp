// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StApronDashAttackLocationFix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStApronDashAttackLocationFix() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStApronDashAttackLocationFix();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FStApronDashAttackLocationFix>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStApronDashAttackLocationFix cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStApronDashAttackLocationFix::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StApronDashAttackLocationFix"), sizeof(FStApronDashAttackLocationFix), Get_Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStApronDashAttackLocationFix>()
{
	return FStApronDashAttackLocationFix::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStApronDashAttackLocationFix(FStApronDashAttackLocationFix::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StApronDashAttackLocationFix"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStApronDashAttackLocationFix
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStApronDashAttackLocationFix()
	{
		UScriptStruct::DeferCppStructOps<FStApronDashAttackLocationFix>(FName(TEXT("StApronDashAttackLocationFix")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStApronDashAttackLocationFix;
	struct Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitLineOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitLineOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitLineDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitLineDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StApronDashAttackLocationFix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStApronDashAttackLocationFix>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StApronDashAttackLocationFix" },
		{ "ModuleRelativePath", "Public/StApronDashAttackLocationFix.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStApronDashAttackLocationFix, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_startLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StApronDashAttackLocationFix" },
		{ "ModuleRelativePath", "Public/StApronDashAttackLocationFix.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_startLocation = { "startLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStApronDashAttackLocationFix, startLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_startLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_startLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StApronDashAttackLocationFix" },
		{ "ModuleRelativePath", "Public/StApronDashAttackLocationFix.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineOrigin = { "LimitLineOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStApronDashAttackLocationFix, LimitLineOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StApronDashAttackLocationFix" },
		{ "ModuleRelativePath", "Public/StApronDashAttackLocationFix.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineDirection = { "LimitLineDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStApronDashAttackLocationFix, LimitLineDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_startLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::NewProp_LimitLineDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StApronDashAttackLocationFix",
		sizeof(FStApronDashAttackLocationFix),
		alignof(FStApronDashAttackLocationFix),
		Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStApronDashAttackLocationFix()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StApronDashAttackLocationFix"), sizeof(FStApronDashAttackLocationFix), Get_Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStApronDashAttackLocationFix_Hash() { return 3221086504U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
