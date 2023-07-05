// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSHitEffectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSHitEffectType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitEffectType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSHitEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSHitEffectType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSHitEffectType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSHitEffectType>()
	{
		return ESSHitEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSHitEffectType(ESSHitEffectType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSHitEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSHitEffectType_Hash() { return 4161773981U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSHitEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSHitEffectType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSHitEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSHitEffectType::None", (int64)ESSHitEffectType::None },
				{ "ESSHitEffectType::BareHand_Character", (int64)ESSHitEffectType::BareHand_Character },
				{ "ESSHitEffectType::BareHand_Vehicle", (int64)ESSHitEffectType::BareHand_Vehicle },
				{ "ESSHitEffectType::BareHand_DestructibleProp", (int64)ESSHitEffectType::BareHand_DestructibleProp },
				{ "ESSHitEffectType::BareHand_ItemBox", (int64)ESSHitEffectType::BareHand_ItemBox },
				{ "ESSHitEffectType::BareHand_WeaponTrapObject", (int64)ESSHitEffectType::BareHand_WeaponTrapObject },
				{ "ESSHitEffectType::WeaponMelee_Character", (int64)ESSHitEffectType::WeaponMelee_Character },
				{ "ESSHitEffectType::WeaponMelee_Vehicle", (int64)ESSHitEffectType::WeaponMelee_Vehicle },
				{ "ESSHitEffectType::WeaponMelee_DestructibleProp", (int64)ESSHitEffectType::WeaponMelee_DestructibleProp },
				{ "ESSHitEffectType::WeaponMelee_ItemBox", (int64)ESSHitEffectType::WeaponMelee_ItemBox },
				{ "ESSHitEffectType::WeaponMelee_WeaponTrapObject", (int64)ESSHitEffectType::WeaponMelee_WeaponTrapObject },
				{ "ESSHitEffectType::WeaponGun_Character", (int64)ESSHitEffectType::WeaponGun_Character },
				{ "ESSHitEffectType::WeaponGun_Vehicle", (int64)ESSHitEffectType::WeaponGun_Vehicle },
				{ "ESSHitEffectType::WeaponGun_DestructibleProp", (int64)ESSHitEffectType::WeaponGun_DestructibleProp },
				{ "ESSHitEffectType::WeaponGun_ItemBox", (int64)ESSHitEffectType::WeaponGun_ItemBox },
				{ "ESSHitEffectType::WeaponGun_WeaponTrapObject", (int64)ESSHitEffectType::WeaponGun_WeaponTrapObject },
				{ "ESSHitEffectType::WeaponGun_Field", (int64)ESSHitEffectType::WeaponGun_Field },
				{ "ESSHitEffectType::Vehicle_Character", (int64)ESSHitEffectType::Vehicle_Character },
				{ "ESSHitEffectType::Vehicle_Vehicle", (int64)ESSHitEffectType::Vehicle_Vehicle },
				{ "ESSHitEffectType::Vehicle_DestructibleProp", (int64)ESSHitEffectType::Vehicle_DestructibleProp },
				{ "ESSHitEffectType::Vehicle_ItemBox", (int64)ESSHitEffectType::Vehicle_ItemBox },
				{ "ESSHitEffectType::Vehicle_WeaponTrapObject", (int64)ESSHitEffectType::Vehicle_WeaponTrapObject },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BareHand_Character.Name", "ESSHitEffectType::BareHand_Character" },
				{ "BareHand_DestructibleProp.Name", "ESSHitEffectType::BareHand_DestructibleProp" },
				{ "BareHand_ItemBox.Name", "ESSHitEffectType::BareHand_ItemBox" },
				{ "BareHand_Vehicle.Name", "ESSHitEffectType::BareHand_Vehicle" },
				{ "BareHand_WeaponTrapObject.Name", "ESSHitEffectType::BareHand_WeaponTrapObject" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSHitEffectType.h" },
				{ "None.Name", "ESSHitEffectType::None" },
				{ "Vehicle_Character.Name", "ESSHitEffectType::Vehicle_Character" },
				{ "Vehicle_DestructibleProp.Name", "ESSHitEffectType::Vehicle_DestructibleProp" },
				{ "Vehicle_ItemBox.Name", "ESSHitEffectType::Vehicle_ItemBox" },
				{ "Vehicle_Vehicle.Name", "ESSHitEffectType::Vehicle_Vehicle" },
				{ "Vehicle_WeaponTrapObject.Name", "ESSHitEffectType::Vehicle_WeaponTrapObject" },
				{ "WeaponGun_Character.Name", "ESSHitEffectType::WeaponGun_Character" },
				{ "WeaponGun_DestructibleProp.Name", "ESSHitEffectType::WeaponGun_DestructibleProp" },
				{ "WeaponGun_Field.Name", "ESSHitEffectType::WeaponGun_Field" },
				{ "WeaponGun_ItemBox.Name", "ESSHitEffectType::WeaponGun_ItemBox" },
				{ "WeaponGun_Vehicle.Name", "ESSHitEffectType::WeaponGun_Vehicle" },
				{ "WeaponGun_WeaponTrapObject.Name", "ESSHitEffectType::WeaponGun_WeaponTrapObject" },
				{ "WeaponMelee_Character.Name", "ESSHitEffectType::WeaponMelee_Character" },
				{ "WeaponMelee_DestructibleProp.Name", "ESSHitEffectType::WeaponMelee_DestructibleProp" },
				{ "WeaponMelee_ItemBox.Name", "ESSHitEffectType::WeaponMelee_ItemBox" },
				{ "WeaponMelee_Vehicle.Name", "ESSHitEffectType::WeaponMelee_Vehicle" },
				{ "WeaponMelee_WeaponTrapObject.Name", "ESSHitEffectType::WeaponMelee_WeaponTrapObject" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSHitEffectType",
				"ESSHitEffectType",
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
