// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSMoveLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSMoveLevel() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveLevel();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSMoveLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSMoveLevel, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSMoveLevel"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSMoveLevel>()
	{
		return ESSMoveLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSMoveLevel(ESSMoveLevel_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSMoveLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSMoveLevel_Hash() { return 2760909033U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSMoveLevel"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSMoveLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSMoveLevel::Lv1", (int64)ESSMoveLevel::Lv1 },
				{ "ESSMoveLevel::Lv2", (int64)ESSMoveLevel::Lv2 },
				{ "ESSMoveLevel::Lv3", (int64)ESSMoveLevel::Lv3 },
				{ "ESSMoveLevel::Lv4", (int64)ESSMoveLevel::Lv4 },
				{ "ESSMoveLevel::Lv5", (int64)ESSMoveLevel::Lv5 },
				{ "ESSMoveLevel::WeaponLv1", (int64)ESSMoveLevel::WeaponLv1 },
				{ "ESSMoveLevel::WeaponLv2", (int64)ESSMoveLevel::WeaponLv2 },
				{ "ESSMoveLevel::WeaponLv3", (int64)ESSMoveLevel::WeaponLv3 },
				{ "ESSMoveLevel::WeaponLv4", (int64)ESSMoveLevel::WeaponLv4 },
				{ "ESSMoveLevel::WeaponLv5", (int64)ESSMoveLevel::WeaponLv5 },
				{ "ESSMoveLevel::WeaponSpecial", (int64)ESSMoveLevel::WeaponSpecial },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Lv1.Name", "ESSMoveLevel::Lv1" },
				{ "Lv2.Name", "ESSMoveLevel::Lv2" },
				{ "Lv3.Name", "ESSMoveLevel::Lv3" },
				{ "Lv4.Name", "ESSMoveLevel::Lv4" },
				{ "Lv5.Name", "ESSMoveLevel::Lv5" },
				{ "ModuleRelativePath", "Public/ESSMoveLevel.h" },
				{ "WeaponLv1.Name", "ESSMoveLevel::WeaponLv1" },
				{ "WeaponLv2.Name", "ESSMoveLevel::WeaponLv2" },
				{ "WeaponLv3.Name", "ESSMoveLevel::WeaponLv3" },
				{ "WeaponLv4.Name", "ESSMoveLevel::WeaponLv4" },
				{ "WeaponLv5.Name", "ESSMoveLevel::WeaponLv5" },
				{ "WeaponSpecial.Name", "ESSMoveLevel::WeaponSpecial" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSMoveLevel",
				"ESSMoveLevel",
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
