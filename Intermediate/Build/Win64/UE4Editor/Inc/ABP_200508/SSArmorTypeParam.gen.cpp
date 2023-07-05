// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSArmorTypeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSArmorTypeParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSArmorTypeParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSArmorType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSArmorTypeParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSArmorTypeParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSArmorTypeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSArmorTypeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSArmorTypeParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSArmorTypeParam"), sizeof(FSSArmorTypeParam), Get_Z_Construct_UScriptStruct_FSSArmorTypeParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSArmorTypeParam>()
{
	return FSSArmorTypeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSArmorTypeParam(FSSArmorTypeParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSArmorTypeParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSArmorTypeParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSArmorTypeParam()
	{
		UScriptStruct::DeferCppStructOps<FSSArmorTypeParam>(FName(TEXT("SSArmorTypeParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSArmorTypeParam;
	struct Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultOnGround_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOnGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultOnGround;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultInAir_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInAir_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultInAir;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Guard_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guard_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Guard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attack_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attack;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackWithArmor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackWithArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackWithArmor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LongRangeAttack_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongRangeAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LongRangeAttack;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Grapple_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Grapple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Sync_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sync_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Sync;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagedOnGround_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedOnGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamagedOnGround;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagedInAir_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedInAir_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamagedInAir;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagedBlow_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedBlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamagedBlow;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagedWaitSituationMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedWaitSituationMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamagedWaitSituationMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagedWallHit_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedWallHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamagedWallHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Down_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Down;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DownStandUp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownStandUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DownStandUp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VehicleRiding_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleRiding_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VehicleRiding;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Invincible_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invincible_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Invincible;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AfterDownStandUp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterDownStandUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AfterDownStandUp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditionalSuperArmor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalSuperArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdditionalSuperArmor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSArmorTypeParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultOnGround_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultOnGround = { "DefaultOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DefaultOnGround), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultOnGround_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultInAir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultInAir = { "DefaultInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DefaultInAir), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultInAir_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Guard_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Guard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Guard = { "Guard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, Guard), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Guard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Guard_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Attack_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, Attack), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Attack_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AttackWithArmor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AttackWithArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AttackWithArmor = { "AttackWithArmor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, AttackWithArmor), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AttackWithArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AttackWithArmor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_LongRangeAttack_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_LongRangeAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_LongRangeAttack = { "LongRangeAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, LongRangeAttack), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_LongRangeAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_LongRangeAttack_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Grapple_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, Grapple), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Sync_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Sync_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Sync = { "Sync", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, Sync), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Sync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Sync_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedOnGround_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedOnGround = { "DamagedOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DamagedOnGround), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedOnGround_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedInAir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedInAir = { "DamagedInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DamagedInAir), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedInAir_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedBlow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedBlow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedBlow = { "DamagedBlow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DamagedBlow), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedBlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedBlow_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWaitSituationMove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWaitSituationMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWaitSituationMove = { "DamagedWaitSituationMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DamagedWaitSituationMove), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWaitSituationMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWaitSituationMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWallHit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWallHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWallHit = { "DamagedWallHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DamagedWallHit), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWallHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWallHit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Down_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Down_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, Down), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Down_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DownStandUp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DownStandUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DownStandUp = { "DownStandUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, DownStandUp), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DownStandUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DownStandUp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_VehicleRiding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_VehicleRiding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_VehicleRiding = { "VehicleRiding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, VehicleRiding), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_VehicleRiding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_VehicleRiding_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Invincible_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Invincible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Invincible = { "Invincible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, Invincible), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Invincible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Invincible_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AfterDownStandUp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AfterDownStandUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AfterDownStandUp = { "AfterDownStandUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, AfterDownStandUp), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AfterDownStandUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AfterDownStandUp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AdditionalSuperArmor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AdditionalSuperArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSArmorTypeParam" },
		{ "ModuleRelativePath", "Public/SSArmorTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AdditionalSuperArmor = { "AdditionalSuperArmor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSArmorTypeParam, AdditionalSuperArmor), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AdditionalSuperArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AdditionalSuperArmor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultOnGround_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultInAir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DefaultInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Guard_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Guard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Attack_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AttackWithArmor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AttackWithArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_LongRangeAttack_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_LongRangeAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Grapple_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Sync_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Sync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedOnGround_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedInAir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedBlow_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedBlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWaitSituationMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWaitSituationMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWallHit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DamagedWallHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Down_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DownStandUp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_DownStandUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_VehicleRiding_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_VehicleRiding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Invincible_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_Invincible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AfterDownStandUp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AfterDownStandUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AdditionalSuperArmor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::NewProp_AdditionalSuperArmor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSArmorTypeParam",
		sizeof(FSSArmorTypeParam),
		alignof(FSSArmorTypeParam),
		Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSArmorTypeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSArmorTypeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSArmorTypeParam"), sizeof(FSSArmorTypeParam), Get_Z_Construct_UScriptStruct_FSSArmorTypeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSArmorTypeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSArmorTypeParam_Hash() { return 3643505905U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
