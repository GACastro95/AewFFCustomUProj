// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerProfile_BodyWeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerProfile_BodyWeight() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightType();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerProfile_BodyWeight>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerProfile_BodyWeight cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerProfile_BodyWeight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerProfile_BodyWeight"), sizeof(FELWrestlerProfile_BodyWeight), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerProfile_BodyWeight>()
{
	return FELWrestlerProfile_BodyWeight::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerProfile_BodyWeight(FELWrestlerProfile_BodyWeight::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerProfile_BodyWeight"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_BodyWeight
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_BodyWeight()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerProfile_BodyWeight>(FName(TEXT("ELWrestlerProfile_BodyWeight")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_BodyWeight;
	struct Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyWeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyWeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyWeightType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_BodyWeight.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerProfile_BodyWeight>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_BodyWeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_BodyWeightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_BodyWeight" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_BodyWeight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_BodyWeightType = { "BodyWeightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile_BodyWeight, BodyWeightType), Z_Construct_UEnum_ELITE_Game_EBodyWeightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_BodyWeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_BodyWeightType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_BodyWeight" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_BodyWeight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile_BodyWeight, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_BodyWeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_BodyWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerProfile_BodyWeight",
		sizeof(FELWrestlerProfile_BodyWeight),
		alignof(FELWrestlerProfile_BodyWeight),
		Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerProfile_BodyWeight"), sizeof(FELWrestlerProfile_BodyWeight), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyWeight_Hash() { return 1676269739U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
