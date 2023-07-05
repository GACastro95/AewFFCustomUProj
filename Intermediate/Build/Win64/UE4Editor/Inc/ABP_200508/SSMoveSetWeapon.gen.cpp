// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveSetWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveSetWeapon() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetWeapon();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveLevel();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel();
// End Cross Module References

static_assert(std::is_polymorphic<FSSMoveSetWeapon>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSMoveSetWeapon cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSMoveSetWeapon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetWeapon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveSetWeapon, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveSetWeapon"), sizeof(FSSMoveSetWeapon), Get_Z_Construct_UScriptStruct_FSSMoveSetWeapon_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveSetWeapon>()
{
	return FSSMoveSetWeapon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveSetWeapon(FSSMoveSetWeapon::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveSetWeapon"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetWeapon
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetWeapon()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveSetWeapon>(FName(TEXT("SSMoveSetWeapon")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetWeapon;
	struct Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveSetLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weapon1_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon1_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Weapon1_Lv;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weapon2_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon2_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Weapon2_Lv;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HpItemBonus_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpItemBonus_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HpItemBonus_Lv;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveSetWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveSetWeapon>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetWeapon" },
		{ "ModuleRelativePath", "Public/SSMoveSetWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetWeapon, WrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_WrestlerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_MoveSetLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetWeapon" },
		{ "ModuleRelativePath", "Public/SSMoveSetWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_MoveSetLevel = { "MoveSetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetWeapon, MoveSetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_MoveSetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_MoveSetLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon1_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon1_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetWeapon" },
		{ "ModuleRelativePath", "Public/SSMoveSetWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon1_Lv = { "Weapon1_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetWeapon, Weapon1_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon1_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon1_Lv_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon2_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon2_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetWeapon" },
		{ "ModuleRelativePath", "Public/SSMoveSetWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon2_Lv = { "Weapon2_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetWeapon, Weapon2_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon2_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon2_Lv_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_HpItemBonus_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_HpItemBonus_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetWeapon" },
		{ "ModuleRelativePath", "Public/SSMoveSetWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_HpItemBonus_Lv = { "HpItemBonus_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetWeapon, HpItemBonus_Lv), Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_HpItemBonus_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_HpItemBonus_Lv_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_MoveSetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon1_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon1_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon2_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_Weapon2_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_HpItemBonus_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::NewProp_HpItemBonus_Lv,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSMoveSetWeapon",
		sizeof(FSSMoveSetWeapon),
		alignof(FSSMoveSetWeapon),
		Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetWeapon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetWeapon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveSetWeapon"), sizeof(FSSMoveSetWeapon), Get_Z_Construct_UScriptStruct_FSSMoveSetWeapon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveSetWeapon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetWeapon_Hash() { return 498591557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
