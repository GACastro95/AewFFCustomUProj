// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerIconTextureType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerIconTextureType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerIconTextureType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerIconTextureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerIconTextureType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerIconTextureType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerIconTextureType>()
	{
		return ECareerIconTextureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerIconTextureType(ECareerIconTextureType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerIconTextureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerIconTextureType_Hash() { return 1001218032U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerIconTextureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerIconTextureType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerIconTextureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerIconTextureType::IconNone", (int64)ECareerIconTextureType::IconNone },
				{ "ECareerIconTextureType::IconSkillPoint", (int64)ECareerIconTextureType::IconSkillPoint },
				{ "ECareerIconTextureType::IconCareerMoney", (int64)ECareerIconTextureType::IconCareerMoney },
				{ "ECareerIconTextureType::IconEnergy", (int64)ECareerIconTextureType::IconEnergy },
				{ "ECareerIconTextureType::IconMotivation", (int64)ECareerIconTextureType::IconMotivation },
				{ "ECareerIconTextureType::IconInjury", (int64)ECareerIconTextureType::IconInjury },
				{ "ECareerIconTextureType::IconFinisher", (int64)ECareerIconTextureType::IconFinisher },
				{ "ECareerIconTextureType::IconInjuryRecovery", (int64)ECareerIconTextureType::IconInjuryRecovery },
				{ "ECareerIconTextureType::IconMotivationBoost", (int64)ECareerIconTextureType::IconMotivationBoost },
				{ "ECareerIconTextureType::IconMomentumBoost", (int64)ECareerIconTextureType::IconMomentumBoost },
				{ "ECareerIconTextureType::IconSkillPointBoost", (int64)ECareerIconTextureType::IconSkillPointBoost },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IconCareerMoney.Name", "ECareerIconTextureType::IconCareerMoney" },
				{ "IconEnergy.Name", "ECareerIconTextureType::IconEnergy" },
				{ "IconFinisher.Name", "ECareerIconTextureType::IconFinisher" },
				{ "IconInjury.Name", "ECareerIconTextureType::IconInjury" },
				{ "IconInjuryRecovery.Name", "ECareerIconTextureType::IconInjuryRecovery" },
				{ "IconMomentumBoost.Name", "ECareerIconTextureType::IconMomentumBoost" },
				{ "IconMotivation.Name", "ECareerIconTextureType::IconMotivation" },
				{ "IconMotivationBoost.Name", "ECareerIconTextureType::IconMotivationBoost" },
				{ "IconNone.Name", "ECareerIconTextureType::IconNone" },
				{ "IconSkillPoint.Name", "ECareerIconTextureType::IconSkillPoint" },
				{ "IconSkillPointBoost.Name", "ECareerIconTextureType::IconSkillPointBoost" },
				{ "ModuleRelativePath", "Public/ECareerIconTextureType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerIconTextureType",
				"ECareerIconTextureType",
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
