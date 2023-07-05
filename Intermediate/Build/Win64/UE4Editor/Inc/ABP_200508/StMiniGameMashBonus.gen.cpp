// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StMiniGameMashBonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMiniGameMashBonus() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStMiniGameMashBonus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMomentumStateType();
// End Cross Module References

static_assert(std::is_polymorphic<FStMiniGameMashBonus>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStMiniGameMashBonus cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStMiniGameMashBonus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStMiniGameMashBonus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMiniGameMashBonus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StMiniGameMashBonus"), sizeof(FStMiniGameMashBonus), Get_Z_Construct_UScriptStruct_FStMiniGameMashBonus_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStMiniGameMashBonus>()
{
	return FStMiniGameMashBonus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMiniGameMashBonus(FStMiniGameMashBonus::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StMiniGameMashBonus"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStMiniGameMashBonus
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStMiniGameMashBonus()
	{
		UScriptStruct::DeferCppStructOps<FStMiniGameMashBonus>(FName(TEXT("StMiniGameMashBonus")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStMiniGameMashBonus;
	struct Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeterState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeterState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeterState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Momentun_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Momentun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MashBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MashBonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMiniGameMashBonus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMiniGameMashBonus>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MeterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MeterState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMiniGameMashBonus" },
		{ "ModuleRelativePath", "Public/StMiniGameMashBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MeterState = { "MeterState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMiniGameMashBonus, MeterState), Z_Construct_UEnum_ABP_200508_EMomentumStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MeterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MeterState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_Momentun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMiniGameMashBonus" },
		{ "ModuleRelativePath", "Public/StMiniGameMashBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_Momentun = { "Momentun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMiniGameMashBonus, Momentun), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_Momentun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_Momentun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MashBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMiniGameMashBonus" },
		{ "ModuleRelativePath", "Public/StMiniGameMashBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MashBonus = { "MashBonus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMiniGameMashBonus, MashBonus), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MashBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MashBonus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MeterState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MeterState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_Momentun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::NewProp_MashBonus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StMiniGameMashBonus",
		sizeof(FStMiniGameMashBonus),
		alignof(FStMiniGameMashBonus),
		Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMiniGameMashBonus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMiniGameMashBonus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMiniGameMashBonus"), sizeof(FStMiniGameMashBonus), Get_Z_Construct_UScriptStruct_FStMiniGameMashBonus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMiniGameMashBonus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMiniGameMashBonus_Hash() { return 2397629924U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
