// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSHeatLevelSkillType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSHeatLevelSkillType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatLevelSkillType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSHeatLevelSkillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSHeatLevelSkillType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSHeatLevelSkillType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSHeatLevelSkillType>()
	{
		return ESSHeatLevelSkillType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSHeatLevelSkillType(ESSHeatLevelSkillType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSHeatLevelSkillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSHeatLevelSkillType_Hash() { return 66856207U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatLevelSkillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSHeatLevelSkillType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSHeatLevelSkillType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSHeatLevelSkillType::None", (int64)ESSHeatLevelSkillType::None },
				{ "ESSHeatLevelSkillType::StlikeDamageUp", (int64)ESSHeatLevelSkillType::StlikeDamageUp },
				{ "ESSHeatLevelSkillType::GrappleDamageUp", (int64)ESSHeatLevelSkillType::GrappleDamageUp },
				{ "ESSHeatLevelSkillType::HighFlyDamageUp", (int64)ESSHeatLevelSkillType::HighFlyDamageUp },
				{ "ESSHeatLevelSkillType::WeaponDamageUp", (int64)ESSHeatLevelSkillType::WeaponDamageUp },
				{ "ESSHeatLevelSkillType::RecoveryQuantityUp", (int64)ESSHeatLevelSkillType::RecoveryQuantityUp },
				{ "ESSHeatLevelSkillType::Max", (int64)ESSHeatLevelSkillType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GrappleDamageUp.Name", "ESSHeatLevelSkillType::GrappleDamageUp" },
				{ "HighFlyDamageUp.Name", "ESSHeatLevelSkillType::HighFlyDamageUp" },
				{ "Max.Name", "ESSHeatLevelSkillType::Max" },
				{ "ModuleRelativePath", "Public/ESSHeatLevelSkillType.h" },
				{ "None.Name", "ESSHeatLevelSkillType::None" },
				{ "RecoveryQuantityUp.Name", "ESSHeatLevelSkillType::RecoveryQuantityUp" },
				{ "StlikeDamageUp.Name", "ESSHeatLevelSkillType::StlikeDamageUp" },
				{ "WeaponDamageUp.Name", "ESSHeatLevelSkillType::WeaponDamageUp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSHeatLevelSkillType",
				"ESSHeatLevelSkillType",
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
