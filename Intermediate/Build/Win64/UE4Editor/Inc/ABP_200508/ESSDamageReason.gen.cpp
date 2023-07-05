// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSDamageReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSDamageReason() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSDamageReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSDamageReason, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSDamageReason"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSDamageReason>()
	{
		return ESSDamageReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSDamageReason(ESSDamageReason_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSDamageReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSDamageReason_Hash() { return 3219043375U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSDamageReason"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSDamageReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSDamageReason::None", (int64)ESSDamageReason::None },
				{ "ESSDamageReason::Strike", (int64)ESSDamageReason::Strike },
				{ "ESSDamageReason::Weapon", (int64)ESSDamageReason::Weapon },
				{ "ESSDamageReason::Grapple", (int64)ESSDamageReason::Grapple },
				{ "ESSDamageReason::Finisher", (int64)ESSDamageReason::Finisher },
				{ "ESSDamageReason::SyncAttack", (int64)ESSDamageReason::SyncAttack },
				{ "ESSDamageReason::Projectile", (int64)ESSDamageReason::Projectile },
				{ "ESSDamageReason::Explosion", (int64)ESSDamageReason::Explosion },
				{ "ESSDamageReason::Pushpin", (int64)ESSDamageReason::Pushpin },
				{ "ESSDamageReason::BadStatus", (int64)ESSDamageReason::BadStatus },
				{ "ESSDamageReason::VehicleRunOver", (int64)ESSDamageReason::VehicleRunOver },
				{ "ESSDamageReason::VehicleDetach", (int64)ESSDamageReason::VehicleDetach },
				{ "ESSDamageReason::AttackFeedback", (int64)ESSDamageReason::AttackFeedback },
				{ "ESSDamageReason::Involve", (int64)ESSDamageReason::Involve },
				{ "ESSDamageReason::InvolveFeedback", (int64)ESSDamageReason::InvolveFeedback },
				{ "ESSDamageReason::Storm", (int64)ESSDamageReason::Storm },
				{ "ESSDamageReason::KoDamage", (int64)ESSDamageReason::KoDamage },
				{ "ESSDamageReason::LandingDamage", (int64)ESSDamageReason::LandingDamage },
				{ "ESSDamageReason::Tramp", (int64)ESSDamageReason::Tramp },
				{ "ESSDamageReason::AttackToDown", (int64)ESSDamageReason::AttackToDown },
				{ "ESSDamageReason::Max", (int64)ESSDamageReason::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttackFeedback.Name", "ESSDamageReason::AttackFeedback" },
				{ "AttackToDown.Name", "ESSDamageReason::AttackToDown" },
				{ "BadStatus.Name", "ESSDamageReason::BadStatus" },
				{ "BlueprintType", "true" },
				{ "Explosion.Name", "ESSDamageReason::Explosion" },
				{ "Finisher.Name", "ESSDamageReason::Finisher" },
				{ "Grapple.Name", "ESSDamageReason::Grapple" },
				{ "Involve.Name", "ESSDamageReason::Involve" },
				{ "InvolveFeedback.Name", "ESSDamageReason::InvolveFeedback" },
				{ "KoDamage.Name", "ESSDamageReason::KoDamage" },
				{ "LandingDamage.Name", "ESSDamageReason::LandingDamage" },
				{ "Max.Name", "ESSDamageReason::Max" },
				{ "ModuleRelativePath", "Public/ESSDamageReason.h" },
				{ "None.Name", "ESSDamageReason::None" },
				{ "Projectile.Name", "ESSDamageReason::Projectile" },
				{ "Pushpin.Name", "ESSDamageReason::Pushpin" },
				{ "Storm.Name", "ESSDamageReason::Storm" },
				{ "Strike.Name", "ESSDamageReason::Strike" },
				{ "SyncAttack.Name", "ESSDamageReason::SyncAttack" },
				{ "Tramp.Name", "ESSDamageReason::Tramp" },
				{ "VehicleDetach.Name", "ESSDamageReason::VehicleDetach" },
				{ "VehicleRunOver.Name", "ESSDamageReason::VehicleRunOver" },
				{ "Weapon.Name", "ESSDamageReason::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSDamageReason",
				"ESSDamageReason",
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
