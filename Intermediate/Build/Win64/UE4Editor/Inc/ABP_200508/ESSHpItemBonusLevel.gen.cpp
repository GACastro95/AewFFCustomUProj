// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSHpItemBonusLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSHpItemBonusLevel() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSHpItemBonusLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSHpItemBonusLevel"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSHpItemBonusLevel>()
	{
		return ESSHpItemBonusLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSHpItemBonusLevel(ESSHpItemBonusLevel_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSHpItemBonusLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel_Hash() { return 3957618478U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSHpItemBonusLevel"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSHpItemBonusLevel::Lv1", (int64)ESSHpItemBonusLevel::Lv1 },
				{ "ESSHpItemBonusLevel::Lv2", (int64)ESSHpItemBonusLevel::Lv2 },
				{ "ESSHpItemBonusLevel::Lv3", (int64)ESSHpItemBonusLevel::Lv3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Lv1.Name", "ESSHpItemBonusLevel::Lv1" },
				{ "Lv2.Name", "ESSHpItemBonusLevel::Lv2" },
				{ "Lv3.Name", "ESSHpItemBonusLevel::Lv3" },
				{ "ModuleRelativePath", "Public/ESSHpItemBonusLevel.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSHpItemBonusLevel",
				"ESSHpItemBonusLevel",
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
