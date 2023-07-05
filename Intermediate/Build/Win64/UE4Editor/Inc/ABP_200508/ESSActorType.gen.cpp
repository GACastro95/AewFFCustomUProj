// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSActorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSActorType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActorType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSActorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSActorType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSActorType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSActorType>()
	{
		return ESSActorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSActorType(ESSActorType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSActorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSActorType_Hash() { return 1513943257U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSActorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSActorType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSActorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSActorType::Misc", (int64)ESSActorType::Misc },
				{ "ESSActorType::Storm", (int64)ESSActorType::Storm },
				{ "ESSActorType::Character", (int64)ESSActorType::Character },
				{ "ESSActorType::Vehicle", (int64)ESSActorType::Vehicle },
				{ "ESSActorType::GunBullet", (int64)ESSActorType::GunBullet },
				{ "ESSActorType::DestructibleProp", (int64)ESSActorType::DestructibleProp },
				{ "ESSActorType::PickupItem", (int64)ESSActorType::PickupItem },
				{ "ESSActorType::PickupWeapon", (int64)ESSActorType::PickupWeapon },
				{ "ESSActorType::PickupShield", (int64)ESSActorType::PickupShield },
				{ "ESSActorType::WeaponThrowProjectie", (int64)ESSActorType::WeaponThrowProjectie },
				{ "ESSActorType::WeaponTrapObject", (int64)ESSActorType::WeaponTrapObject },
				{ "ESSActorType::ItemBox", (int64)ESSActorType::ItemBox },
				{ "ESSActorType::TreasureBox", (int64)ESSActorType::TreasureBox },
				{ "ESSActorType::Gimmick", (int64)ESSActorType::Gimmick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Character.Name", "ESSActorType::Character" },
				{ "DestructibleProp.Name", "ESSActorType::DestructibleProp" },
				{ "Gimmick.Name", "ESSActorType::Gimmick" },
				{ "GunBullet.Name", "ESSActorType::GunBullet" },
				{ "ItemBox.Name", "ESSActorType::ItemBox" },
				{ "Misc.Name", "ESSActorType::Misc" },
				{ "ModuleRelativePath", "Public/ESSActorType.h" },
				{ "PickupItem.Name", "ESSActorType::PickupItem" },
				{ "PickupShield.Name", "ESSActorType::PickupShield" },
				{ "PickupWeapon.Name", "ESSActorType::PickupWeapon" },
				{ "Storm.Name", "ESSActorType::Storm" },
				{ "TreasureBox.Name", "ESSActorType::TreasureBox" },
				{ "Vehicle.Name", "ESSActorType::Vehicle" },
				{ "WeaponThrowProjectie.Name", "ESSActorType::WeaponThrowProjectie" },
				{ "WeaponTrapObject.Name", "ESSActorType::WeaponTrapObject" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSActorType",
				"ESSActorType",
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
