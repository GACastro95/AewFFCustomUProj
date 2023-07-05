// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerParameterSkillItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerParameterSkillItem() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerParameterSkillItem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerParameterSkillItem"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerParameterSkillItem>()
	{
		return ECareerParameterSkillItem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerParameterSkillItem(ECareerParameterSkillItem_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerParameterSkillItem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem_Hash() { return 1695316845U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerParameterSkillItem"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerParameterSkillItem::None", (int64)ECareerParameterSkillItem::None },
				{ "ECareerParameterSkillItem::Momentum", (int64)ECareerParameterSkillItem::Momentum },
				{ "ECareerParameterSkillItem::FinisherSlot", (int64)ECareerParameterSkillItem::FinisherSlot },
				{ "ECareerParameterSkillItem::SignatureSlot", (int64)ECareerParameterSkillItem::SignatureSlot },
				{ "ECareerParameterSkillItem::FinisherDamage1", (int64)ECareerParameterSkillItem::FinisherDamage1 },
				{ "ECareerParameterSkillItem::FinisherDamage2", (int64)ECareerParameterSkillItem::FinisherDamage2 },
				{ "ECareerParameterSkillItem::FinisherDamage3", (int64)ECareerParameterSkillItem::FinisherDamage3 },
				{ "ECareerParameterSkillItem::FinisherDamage4", (int64)ECareerParameterSkillItem::FinisherDamage4 },
				{ "ECareerParameterSkillItem::FinisherDamage5", (int64)ECareerParameterSkillItem::FinisherDamage5 },
				{ "ECareerParameterSkillItem::SignatureDamage1", (int64)ECareerParameterSkillItem::SignatureDamage1 },
				{ "ECareerParameterSkillItem::SignatureDamage2", (int64)ECareerParameterSkillItem::SignatureDamage2 },
				{ "ECareerParameterSkillItem::SignatureDamage3", (int64)ECareerParameterSkillItem::SignatureDamage3 },
				{ "ECareerParameterSkillItem::SignatureDamage4", (int64)ECareerParameterSkillItem::SignatureDamage4 },
				{ "ECareerParameterSkillItem::SignatureDamage5", (int64)ECareerParameterSkillItem::SignatureDamage5 },
				{ "ECareerParameterSkillItem::ChainWrestling", (int64)ECareerParameterSkillItem::ChainWrestling },
				{ "ECareerParameterSkillItem::ArmPower", (int64)ECareerParameterSkillItem::ArmPower },
				{ "ECareerParameterSkillItem::KickPower", (int64)ECareerParameterSkillItem::KickPower },
				{ "ECareerParameterSkillItem::GrapplePower", (int64)ECareerParameterSkillItem::GrapplePower },
				{ "ECareerParameterSkillItem::DivingPower", (int64)ECareerParameterSkillItem::DivingPower },
				{ "ECareerParameterSkillItem::SpringboardPower", (int64)ECareerParameterSkillItem::SpringboardPower },
				{ "ECareerParameterSkillItem::MovementSpeed", (int64)ECareerParameterSkillItem::MovementSpeed },
				{ "ECareerParameterSkillItem::SkillLimit", (int64)ECareerParameterSkillItem::SkillLimit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArmPower.Name", "ECareerParameterSkillItem::ArmPower" },
				{ "BlueprintType", "true" },
				{ "ChainWrestling.Name", "ECareerParameterSkillItem::ChainWrestling" },
				{ "DivingPower.Name", "ECareerParameterSkillItem::DivingPower" },
				{ "FinisherDamage1.Name", "ECareerParameterSkillItem::FinisherDamage1" },
				{ "FinisherDamage2.Name", "ECareerParameterSkillItem::FinisherDamage2" },
				{ "FinisherDamage3.Name", "ECareerParameterSkillItem::FinisherDamage3" },
				{ "FinisherDamage4.Name", "ECareerParameterSkillItem::FinisherDamage4" },
				{ "FinisherDamage5.Name", "ECareerParameterSkillItem::FinisherDamage5" },
				{ "FinisherSlot.Name", "ECareerParameterSkillItem::FinisherSlot" },
				{ "GrapplePower.Name", "ECareerParameterSkillItem::GrapplePower" },
				{ "KickPower.Name", "ECareerParameterSkillItem::KickPower" },
				{ "ModuleRelativePath", "Public/ECareerParameterSkillItem.h" },
				{ "Momentum.Name", "ECareerParameterSkillItem::Momentum" },
				{ "MovementSpeed.Name", "ECareerParameterSkillItem::MovementSpeed" },
				{ "None.Name", "ECareerParameterSkillItem::None" },
				{ "SignatureDamage1.Name", "ECareerParameterSkillItem::SignatureDamage1" },
				{ "SignatureDamage2.Name", "ECareerParameterSkillItem::SignatureDamage2" },
				{ "SignatureDamage3.Name", "ECareerParameterSkillItem::SignatureDamage3" },
				{ "SignatureDamage4.Name", "ECareerParameterSkillItem::SignatureDamage4" },
				{ "SignatureDamage5.Name", "ECareerParameterSkillItem::SignatureDamage5" },
				{ "SignatureSlot.Name", "ECareerParameterSkillItem::SignatureSlot" },
				{ "SkillLimit.Name", "ECareerParameterSkillItem::SkillLimit" },
				{ "SpringboardPower.Name", "ECareerParameterSkillItem::SpringboardPower" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerParameterSkillItem",
				"ECareerParameterSkillItem",
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
