// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesEnvironmentGroggy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesEnvironmentGroggy() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnv();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesEnvironmentGroggy>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesEnvironmentGroggy cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesEnvironmentGroggy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesEnvironmentGroggy"), sizeof(FELMovesEnvironmentGroggy), Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesEnvironmentGroggy>()
{
	return FELMovesEnvironmentGroggy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesEnvironmentGroggy(FELMovesEnvironmentGroggy::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesEnvironmentGroggy"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggy
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggy()
	{
		UScriptStruct::DeferCppStructOps<FELMovesEnvironmentGroggy>(FName(TEXT("ELMovesEnvironmentGroggy")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggy;
	struct Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarricadeGroggy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarricadeGroggy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronGroggy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronGroggy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarricadeLeaningAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarricadeLeaningAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarricadeSittingAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarricadeSittingAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerPostAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerPostAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteelStepFrontAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteelStepFrontAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteelStepSideAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteelStepSideAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MonitorAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesEnvironmentGroggy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeGroggy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeGroggy = { "BarricadeGroggy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, BarricadeGroggy), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnv, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeGroggy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeGroggy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_ApronGroggy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_ApronGroggy = { "ApronGroggy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, ApronGroggy), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnv, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_ApronGroggy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_ApronGroggy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeLeaningAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeLeaningAttack = { "BarricadeLeaningAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, BarricadeLeaningAttack), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeLeaningAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeLeaningAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeSittingAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeSittingAttack = { "BarricadeSittingAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, BarricadeSittingAttack), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeSittingAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeSittingAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_CornerPostAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_CornerPostAttack = { "CornerPostAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, CornerPostAttack), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnv, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_CornerPostAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_CornerPostAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepFrontAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepFrontAttack = { "SteelStepFrontAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, SteelStepFrontAttack), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnv, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepFrontAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepFrontAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepSideAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepSideAttack = { "SteelStepSideAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, SteelStepSideAttack), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnv, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepSideAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepSideAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_MonitorAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_MonitorAttack = { "MonitorAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggy, MonitorAttack), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnv, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_MonitorAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_MonitorAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_ApronGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeLeaningAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_BarricadeSittingAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_CornerPostAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepFrontAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_SteelStepSideAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::NewProp_MonitorAttack,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesEnvironmentGroggy",
		sizeof(FELMovesEnvironmentGroggy),
		alignof(FELMovesEnvironmentGroggy),
		Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesEnvironmentGroggy"), sizeof(FELMovesEnvironmentGroggy), Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy_Hash() { return 2535512056U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
