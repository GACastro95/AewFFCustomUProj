// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerProfile_BodyHeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerProfile_BodyHeight() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyHeightType();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerProfile_BodyHeight>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerProfile_BodyHeight cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerProfile_BodyHeight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerProfile_BodyHeight"), sizeof(FELWrestlerProfile_BodyHeight), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerProfile_BodyHeight>()
{
	return FELWrestlerProfile_BodyHeight::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerProfile_BodyHeight(FELWrestlerProfile_BodyHeight::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerProfile_BodyHeight"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_BodyHeight
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_BodyHeight()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerProfile_BodyHeight>(FName(TEXT("ELWrestlerProfile_BodyHeight")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_BodyHeight;
	struct Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyHeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyHeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyHeightType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heigth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Heigth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_BodyHeight.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerProfile_BodyHeight>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_BodyHeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_BodyHeightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_BodyHeight" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_BodyHeight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_BodyHeightType = { "BodyHeightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile_BodyHeight, BodyHeightType), Z_Construct_UEnum_ELITE_Game_EBodyHeightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_BodyHeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_BodyHeightType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_Heigth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_BodyHeight" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_BodyHeight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_Heigth = { "Heigth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile_BodyHeight, Heigth), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_Heigth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_Heigth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_BodyHeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_BodyHeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::NewProp_Heigth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerProfile_BodyHeight",
		sizeof(FELWrestlerProfile_BodyHeight),
		alignof(FELWrestlerProfile_BodyHeight),
		Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerProfile_BodyHeight"), sizeof(FELWrestlerProfile_BodyHeight), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_BodyHeight_Hash() { return 2414055221U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
