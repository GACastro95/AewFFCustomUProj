// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StAOnDamage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStAOnDamage() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStAOnDamage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EDamageReactionType_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAOnDamageAttackDir_N();
// End Cross Module References

static_assert(std::is_polymorphic<FStAOnDamage>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStAOnDamage cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStAOnDamage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStAOnDamage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStAOnDamage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StAOnDamage"), sizeof(FStAOnDamage), Get_Z_Construct_UScriptStruct_FStAOnDamage_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStAOnDamage>()
{
	return FStAOnDamage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStAOnDamage(FStAOnDamage::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StAOnDamage"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStAOnDamage
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStAOnDamage()
	{
		UScriptStruct::DeferCppStructOps<FStAOnDamage>(FName(TEXT("StAOnDamage")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStAOnDamage;
	struct Z_Construct_UScriptStruct_FStAOnDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Arm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Leg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shock_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Shock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELITE_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ELITE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjuryRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InjuryRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageReaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageReaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownDamageReaction_MetaData[];
#endif
		static void NewProp_DownDamageReaction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DownDamageReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Critical_MetaData[];
#endif
		static void NewProp_Critical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Critical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static void NewProp_WeaponDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestDamage_MetaData[];
#endif
		static void NewProp_ChestDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChestDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageReactionVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageReactionVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[];
#endif
		static void NewProp_Reverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reverse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackDir_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStAOnDamage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Head_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, Head), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Arm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, Arm), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Arm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Arm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Leg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Leg = { "Leg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, Leg), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Leg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Leg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Shock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Shock = { "Shock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, Shock), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Shock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Shock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ELITE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ELITE = { "ELITE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, ELITE), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ELITE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ELITE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_CriticalRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_CriticalRate = { "CriticalRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, CriticalRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_CriticalRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_CriticalRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_InjuryRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_InjuryRate = { "InjuryRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, InjuryRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_InjuryRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_InjuryRate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReaction = { "DamageReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, DamageReaction), Z_Construct_UEnum_ABP_200508_EDamageReactionType_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DownDamageReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DownDamageReaction_SetBit(void* Obj)
	{
		((FStAOnDamage*)Obj)->DownDamageReaction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DownDamageReaction = { "DownDamageReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnDamage), &Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DownDamageReaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DownDamageReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DownDamageReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Critical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Critical_SetBit(void* Obj)
	{
		((FStAOnDamage*)Obj)->Critical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Critical = { "Critical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnDamage), &Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Critical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Critical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Critical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_WeaponDamage_SetBit(void* Obj)
	{
		((FStAOnDamage*)Obj)->WeaponDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnDamage), &Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_WeaponDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_WeaponDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ChestDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ChestDamage_SetBit(void* Obj)
	{
		((FStAOnDamage*)Obj)->ChestDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ChestDamage = { "ChestDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnDamage), &Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ChestDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ChestDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ChestDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReactionVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReactionVector = { "DamageReactionVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, DamageReactionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReactionVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReactionVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Reverse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Reverse_SetBit(void* Obj)
	{
		((FStAOnDamage*)Obj)->Reverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnDamage), &Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Reverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Reverse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_AttackDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_AttackDir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnDamage" },
		{ "ModuleRelativePath", "Public/StAOnDamage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_AttackDir = { "AttackDir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStAOnDamage, AttackDir), Z_Construct_UEnum_ABP_200508_EAOnDamageAttackDir_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_AttackDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_AttackDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStAOnDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Arm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Leg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Shock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ELITE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_CriticalRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_InjuryRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DownDamageReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Critical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_WeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_ChestDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_DamageReactionVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_Reverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_AttackDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnDamage_Statics::NewProp_AttackDir,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStAOnDamage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StAOnDamage",
		sizeof(FStAOnDamage),
		alignof(FStAOnDamage),
		Z_Construct_UScriptStruct_FStAOnDamage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnDamage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnDamage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStAOnDamage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStAOnDamage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StAOnDamage"), sizeof(FStAOnDamage), Get_Z_Construct_UScriptStruct_FStAOnDamage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStAOnDamage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStAOnDamage_Hash() { return 3588448793U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
