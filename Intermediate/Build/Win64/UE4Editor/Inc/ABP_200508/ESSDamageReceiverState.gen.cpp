// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSDamageReceiverState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSDamageReceiverState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSDamageReceiverState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSDamageReceiverState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSDamageReceiverState>()
	{
		return ESSDamageReceiverState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSDamageReceiverState(ESSDamageReceiverState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSDamageReceiverState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState_Hash() { return 1178232131U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSDamageReceiverState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSDamageReceiverState::Default", (int64)ESSDamageReceiverState::Default },
				{ "ESSDamageReceiverState::DefaultOnGround", (int64)ESSDamageReceiverState::DefaultOnGround },
				{ "ESSDamageReceiverState::DefaultInAir", (int64)ESSDamageReceiverState::DefaultInAir },
				{ "ESSDamageReceiverState::Guard", (int64)ESSDamageReceiverState::Guard },
				{ "ESSDamageReceiverState::Attack", (int64)ESSDamageReceiverState::Attack },
				{ "ESSDamageReceiverState::AttackWithArmor", (int64)ESSDamageReceiverState::AttackWithArmor },
				{ "ESSDamageReceiverState::LongRangeAttack", (int64)ESSDamageReceiverState::LongRangeAttack },
				{ "ESSDamageReceiverState::Grapple", (int64)ESSDamageReceiverState::Grapple },
				{ "ESSDamageReceiverState::Sync", (int64)ESSDamageReceiverState::Sync },
				{ "ESSDamageReceiverState::DamagedOnGround", (int64)ESSDamageReceiverState::DamagedOnGround },
				{ "ESSDamageReceiverState::DamagedInAir", (int64)ESSDamageReceiverState::DamagedInAir },
				{ "ESSDamageReceiverState::DamagedBlow", (int64)ESSDamageReceiverState::DamagedBlow },
				{ "ESSDamageReceiverState::DamagedWaitSituationMove", (int64)ESSDamageReceiverState::DamagedWaitSituationMove },
				{ "ESSDamageReceiverState::DamagedWallHit", (int64)ESSDamageReceiverState::DamagedWallHit },
				{ "ESSDamageReceiverState::Down", (int64)ESSDamageReceiverState::Down },
				{ "ESSDamageReceiverState::DownStandUp", (int64)ESSDamageReceiverState::DownStandUp },
				{ "ESSDamageReceiverState::VehicleRiding", (int64)ESSDamageReceiverState::VehicleRiding },
				{ "ESSDamageReceiverState::Invincible", (int64)ESSDamageReceiverState::Invincible },
				{ "ESSDamageReceiverState::AfterDownStandUp", (int64)ESSDamageReceiverState::AfterDownStandUp },
				{ "ESSDamageReceiverState::AdditionalSuperArmor", (int64)ESSDamageReceiverState::AdditionalSuperArmor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AdditionalSuperArmor.Name", "ESSDamageReceiverState::AdditionalSuperArmor" },
				{ "AfterDownStandUp.Name", "ESSDamageReceiverState::AfterDownStandUp" },
				{ "Attack.Name", "ESSDamageReceiverState::Attack" },
				{ "AttackWithArmor.Name", "ESSDamageReceiverState::AttackWithArmor" },
				{ "BlueprintType", "true" },
				{ "DamagedBlow.Name", "ESSDamageReceiverState::DamagedBlow" },
				{ "DamagedInAir.Name", "ESSDamageReceiverState::DamagedInAir" },
				{ "DamagedOnGround.Name", "ESSDamageReceiverState::DamagedOnGround" },
				{ "DamagedWaitSituationMove.Name", "ESSDamageReceiverState::DamagedWaitSituationMove" },
				{ "DamagedWallHit.Name", "ESSDamageReceiverState::DamagedWallHit" },
				{ "Default.Name", "ESSDamageReceiverState::Default" },
				{ "DefaultInAir.Name", "ESSDamageReceiverState::DefaultInAir" },
				{ "DefaultOnGround.Name", "ESSDamageReceiverState::DefaultOnGround" },
				{ "Down.Name", "ESSDamageReceiverState::Down" },
				{ "DownStandUp.Name", "ESSDamageReceiverState::DownStandUp" },
				{ "Grapple.Name", "ESSDamageReceiverState::Grapple" },
				{ "Guard.Name", "ESSDamageReceiverState::Guard" },
				{ "Invincible.Name", "ESSDamageReceiverState::Invincible" },
				{ "LongRangeAttack.Name", "ESSDamageReceiverState::LongRangeAttack" },
				{ "ModuleRelativePath", "Public/ESSDamageReceiverState.h" },
				{ "Sync.Name", "ESSDamageReceiverState::Sync" },
				{ "VehicleRiding.Name", "ESSDamageReceiverState::VehicleRiding" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSDamageReceiverState",
				"ESSDamageReceiverState",
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
