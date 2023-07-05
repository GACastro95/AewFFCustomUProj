// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSPlayerDebugFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSPlayerDebugFlag() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerDebugFlag();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSPlayerDebugFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSPlayerDebugFlag, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSPlayerDebugFlag"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerDebugFlag>()
	{
		return ESSPlayerDebugFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSPlayerDebugFlag(ESSPlayerDebugFlag_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSPlayerDebugFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSPlayerDebugFlag_Hash() { return 2166479959U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerDebugFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSPlayerDebugFlag"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSPlayerDebugFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSPlayerDebugFlag::None", (int64)ESSPlayerDebugFlag::None },
				{ "ESSPlayerDebugFlag::CriticalAttack", (int64)ESSPlayerDebugFlag::CriticalAttack },
				{ "ESSPlayerDebugFlag::NoDamage", (int64)ESSPlayerDebugFlag::NoDamage },
				{ "ESSPlayerDebugFlag::Invincible", (int64)ESSPlayerDebugFlag::Invincible },
				{ "ESSPlayerDebugFlag::IgnoreAbilityCoolTime", (int64)ESSPlayerDebugFlag::IgnoreAbilityCoolTime },
				{ "ESSPlayerDebugFlag::HighSpeed", (int64)ESSPlayerDebugFlag::HighSpeed },
				{ "ESSPlayerDebugFlag::SuperJump", (int64)ESSPlayerDebugFlag::SuperJump },
				{ "ESSPlayerDebugFlag::IgnoreGimmickCoolTime", (int64)ESSPlayerDebugFlag::IgnoreGimmickCoolTime },
				{ "ESSPlayerDebugFlag::FixedAttentionPoint", (int64)ESSPlayerDebugFlag::FixedAttentionPoint },
				{ "ESSPlayerDebugFlag::TestReliableRPC", (int64)ESSPlayerDebugFlag::TestReliableRPC },
				{ "ESSPlayerDebugFlag::TestUnreliableRPC", (int64)ESSPlayerDebugFlag::TestUnreliableRPC },
				{ "ESSPlayerDebugFlag::MaxHpBoost", (int64)ESSPlayerDebugFlag::MaxHpBoost },
				{ "ESSPlayerDebugFlag::UnlimitedUseItemAndWeapon", (int64)ESSPlayerDebugFlag::UnlimitedUseItemAndWeapon },
				{ "ESSPlayerDebugFlag::AutoAttack", (int64)ESSPlayerDebugFlag::AutoAttack },
				{ "ESSPlayerDebugFlag::AutoInput_MoveForward", (int64)ESSPlayerDebugFlag::AutoInput_MoveForward },
				{ "ESSPlayerDebugFlag::AutoInput_MoveRotate", (int64)ESSPlayerDebugFlag::AutoInput_MoveRotate },
				{ "ESSPlayerDebugFlag::AutoInput_MoveToTarget", (int64)ESSPlayerDebugFlag::AutoInput_MoveToTarget },
				{ "ESSPlayerDebugFlag::AutoInput_Guard", (int64)ESSPlayerDebugFlag::AutoInput_Guard },
				{ "ESSPlayerDebugFlag::AutoInput_Jump", (int64)ESSPlayerDebugFlag::AutoInput_Jump },
				{ "ESSPlayerDebugFlag::AutoInput_AirJump", (int64)ESSPlayerDebugFlag::AutoInput_AirJump },
				{ "ESSPlayerDebugFlag::AutoInput_Attack", (int64)ESSPlayerDebugFlag::AutoInput_Attack },
				{ "ESSPlayerDebugFlag::AutoInput_AirAttack", (int64)ESSPlayerDebugFlag::AutoInput_AirAttack },
				{ "ESSPlayerDebugFlag::IgnoreMovementTimeout", (int64)ESSPlayerDebugFlag::IgnoreMovementTimeout },
				{ "ESSPlayerDebugFlag::Max", (int64)ESSPlayerDebugFlag::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoAttack.Name", "ESSPlayerDebugFlag::AutoAttack" },
				{ "AutoInput_AirAttack.Name", "ESSPlayerDebugFlag::AutoInput_AirAttack" },
				{ "AutoInput_AirJump.Name", "ESSPlayerDebugFlag::AutoInput_AirJump" },
				{ "AutoInput_Attack.Name", "ESSPlayerDebugFlag::AutoInput_Attack" },
				{ "AutoInput_Guard.Name", "ESSPlayerDebugFlag::AutoInput_Guard" },
				{ "AutoInput_Jump.Name", "ESSPlayerDebugFlag::AutoInput_Jump" },
				{ "AutoInput_MoveForward.Name", "ESSPlayerDebugFlag::AutoInput_MoveForward" },
				{ "AutoInput_MoveRotate.Name", "ESSPlayerDebugFlag::AutoInput_MoveRotate" },
				{ "AutoInput_MoveToTarget.Name", "ESSPlayerDebugFlag::AutoInput_MoveToTarget" },
				{ "BlueprintType", "true" },
				{ "CriticalAttack.Name", "ESSPlayerDebugFlag::CriticalAttack" },
				{ "FixedAttentionPoint.Name", "ESSPlayerDebugFlag::FixedAttentionPoint" },
				{ "HighSpeed.Name", "ESSPlayerDebugFlag::HighSpeed" },
				{ "IgnoreAbilityCoolTime.Name", "ESSPlayerDebugFlag::IgnoreAbilityCoolTime" },
				{ "IgnoreGimmickCoolTime.Name", "ESSPlayerDebugFlag::IgnoreGimmickCoolTime" },
				{ "IgnoreMovementTimeout.Name", "ESSPlayerDebugFlag::IgnoreMovementTimeout" },
				{ "Invincible.Name", "ESSPlayerDebugFlag::Invincible" },
				{ "Max.Name", "ESSPlayerDebugFlag::Max" },
				{ "MaxHpBoost.Name", "ESSPlayerDebugFlag::MaxHpBoost" },
				{ "ModuleRelativePath", "Public/ESSPlayerDebugFlag.h" },
				{ "NoDamage.Name", "ESSPlayerDebugFlag::NoDamage" },
				{ "None.Name", "ESSPlayerDebugFlag::None" },
				{ "SuperJump.Name", "ESSPlayerDebugFlag::SuperJump" },
				{ "TestReliableRPC.Name", "ESSPlayerDebugFlag::TestReliableRPC" },
				{ "TestUnreliableRPC.Name", "ESSPlayerDebugFlag::TestUnreliableRPC" },
				{ "UnlimitedUseItemAndWeapon.Name", "ESSPlayerDebugFlag::UnlimitedUseItemAndWeapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSPlayerDebugFlag",
				"ESSPlayerDebugFlag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
