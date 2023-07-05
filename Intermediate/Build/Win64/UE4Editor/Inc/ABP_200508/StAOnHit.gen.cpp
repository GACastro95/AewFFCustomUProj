// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StAOnHit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStAOnHit() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStAOnHit();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStAOnDamage();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESpecialMovesType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMovesDataTableType_N();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EReserveReversalType();
// End Cross Module References

static_assert(std::is_polymorphic<FStAOnHit>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStAOnHit cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStAOnHit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStAOnHit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStAOnHit, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StAOnHit"), sizeof(FStAOnHit), Get_Z_Construct_UScriptStruct_FStAOnHit_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStAOnHit>()
{
	return FStAOnHit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStAOnHit(FStAOnHit::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StAOnHit"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStAOnHit
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStAOnHit()
	{
		UScriptStruct::DeferCppStructOps<FStAOnHit>(FName(TEXT("StAOnHit")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStAOnHit;
	struct Z_Construct_UScriptStruct_FStAOnHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AtkSeesawState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtkSeesawState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AtkSeesawState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefSeesawState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefSeesawState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefSeesawState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageLv_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageLv;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DownValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EliteMeterState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EliteMeterState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EliteMeterState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroggyValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroggyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitEffectValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovesTableType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesTableType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovesTableType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackKind_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackKind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStAOnHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStAOnHit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, Damage), Z_Construct_UScriptStruct_FStAOnDamage, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AtkSeesawState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AtkSeesawState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AtkSeesawState = { "AtkSeesawState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, AtkSeesawState), Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AtkSeesawState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AtkSeesawState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DefSeesawState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DefSeesawState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DefSeesawState = { "DefSeesawState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, DefSeesawState), Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DefSeesawState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DefSeesawState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DamageLv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DamageLv = { "DamageLv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, DamageLv), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DamageLv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DamageLv_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_SpecialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_SpecialType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, SpecialType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_SpecialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_SpecialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DownValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DownValue = { "DownValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, DownValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DownValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DownValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_EliteMeterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_EliteMeterState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_EliteMeterState = { "EliteMeterState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, EliteMeterState), Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_EliteMeterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_EliteMeterState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_GroggyValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_GroggyValue = { "GroggyValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, GroggyValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_GroggyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_GroggyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_HitEffectValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_HitEffectValue = { "HitEffectValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, HitEffectValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_HitEffectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_HitEffectValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesSlot = { "MovesSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, MovesSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesTableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesTableType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesTableType = { "MovesTableType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, MovesTableType), Z_Construct_UEnum_ABP_200508_EMovesDataTableType_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesTableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesTableType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesCategory = { "MovesCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, MovesCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AttackKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AttackKind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnHit" },
		{ "ModuleRelativePath", "Public/StAOnHit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AttackKind = { "AttackKind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnHit, AttackKind), Z_Construct_UEnum_ELITE_Game_EReserveReversalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AttackKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AttackKind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStAOnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AtkSeesawState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AtkSeesawState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DefSeesawState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DefSeesawState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DamageLv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_SpecialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_DownValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_EliteMeterState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_EliteMeterState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_GroggyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_HitEffectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesTableType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesTableType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_MovesCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AttackKind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnHit_Statics::NewProp_AttackKind,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStAOnHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StAOnHit",
		sizeof(FStAOnHit),
		alignof(FStAOnHit),
		Z_Construct_UScriptStruct_FStAOnHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStAOnHit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStAOnHit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StAOnHit"), sizeof(FStAOnHit), Get_Z_Construct_UScriptStruct_FStAOnHit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStAOnHit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStAOnHit_Hash() { return 1722000983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
