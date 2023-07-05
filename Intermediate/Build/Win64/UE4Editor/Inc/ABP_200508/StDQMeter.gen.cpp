// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StDQMeter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStDQMeter() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStDQMeter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FStDQMeter>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStDQMeter cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStDQMeter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStDQMeter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStDQMeter, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StDQMeter"), sizeof(FStDQMeter), Get_Z_Construct_UScriptStruct_FStDQMeter_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStDQMeter>()
{
	return FStDQMeter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStDQMeter(FStDQMeter::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StDQMeter"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStDQMeter
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStDQMeter()
	{
		UScriptStruct::DeferCppStructOps<FStDQMeter>(FName(TEXT("StDQMeter")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStDQMeter;
	struct Z_Construct_UScriptStruct_FStDQMeter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_DQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Limit_DQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValue_WeaponAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddValue_WeaponAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValue_ManagerDisturbance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddValue_ManagerDisturbance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValue_ManagerWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddValue_ManagerWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValue_ManagerApron_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddValue_ManagerApron;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_PreDQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Limit_PreDQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_Anger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Limit_Anger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStDQMeter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStDQMeter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_DQ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_DQ = { "Limit_DQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, Limit_DQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_DQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_DQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_DownValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_DownValue = { "DownValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, DownValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_DownValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_DownValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_WeaponAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_WeaponAttack = { "AddValue_WeaponAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, AddValue_WeaponAttack), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_WeaponAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_WeaponAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerDisturbance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerDisturbance = { "AddValue_ManagerDisturbance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, AddValue_ManagerDisturbance), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerDisturbance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerDisturbance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerWeapon = { "AddValue_ManagerWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, AddValue_ManagerWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerApron_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerApron = { "AddValue_ManagerApron", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, AddValue_ManagerApron), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerApron_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerApron_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_PreDQ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_PreDQ = { "Limit_PreDQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, Limit_PreDQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_PreDQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_PreDQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_Anger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_Anger = { "Limit_Anger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, Limit_Anger), METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_Anger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_Anger_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQMeter" },
		{ "ModuleRelativePath", "Public/StDQMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQMeter, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStDQMeter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_DQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_DownValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_WeaponAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerDisturbance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_AddValue_ManagerApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_PreDQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_Limit_Anger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQMeter_Statics::NewProp_WrestlerID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStDQMeter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StDQMeter",
		sizeof(FStDQMeter),
		alignof(FStDQMeter),
		Z_Construct_UScriptStruct_FStDQMeter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQMeter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQMeter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStDQMeter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStDQMeter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StDQMeter"), sizeof(FStDQMeter), Get_Z_Construct_UScriptStruct_FStDQMeter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStDQMeter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStDQMeter_Hash() { return 2123702212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
