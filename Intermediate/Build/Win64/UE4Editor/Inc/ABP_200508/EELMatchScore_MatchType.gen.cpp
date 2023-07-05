// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELMatchScore_MatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMatchScore_MatchType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELMatchScore_MatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELMatchScore_MatchType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELMatchScore_MatchType>()
	{
		return EELMatchScore_MatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMatchScore_MatchType(EELMatchScore_MatchType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELMatchScore_MatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType_Hash() { return 1375926183U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMatchScore_MatchType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMatchScore_MatchType::None", (int64)EELMatchScore_MatchType::None },
				{ "EELMatchScore_MatchType::SingleMatch", (int64)EELMatchScore_MatchType::SingleMatch },
				{ "EELMatchScore_MatchType::TagMatch", (int64)EELMatchScore_MatchType::TagMatch },
				{ "EELMatchScore_MatchType::ThreeWay", (int64)EELMatchScore_MatchType::ThreeWay },
				{ "EELMatchScore_MatchType::FourWay", (int64)EELMatchScore_MatchType::FourWay },
				{ "EELMatchScore_MatchType::CasinoBattleRoyale", (int64)EELMatchScore_MatchType::CasinoBattleRoyale },
				{ "EELMatchScore_MatchType::EELMatchScore_MAX", (int64)EELMatchScore_MatchType::EELMatchScore_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CasinoBattleRoyale.Name", "EELMatchScore_MatchType::CasinoBattleRoyale" },
				{ "EELMatchScore_MAX.Hidden", "" },
				{ "EELMatchScore_MAX.Name", "EELMatchScore_MatchType::EELMatchScore_MAX" },
				{ "FourWay.Name", "EELMatchScore_MatchType::FourWay" },
				{ "ModuleRelativePath", "Public/EELMatchScore_MatchType.h" },
				{ "None.Name", "EELMatchScore_MatchType::None" },
				{ "SingleMatch.Name", "EELMatchScore_MatchType::SingleMatch" },
				{ "TagMatch.Name", "EELMatchScore_MatchType::TagMatch" },
				{ "ThreeWay.Name", "EELMatchScore_MatchType::ThreeWay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELMatchScore_MatchType",
				"EELMatchScore_MatchType",
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
