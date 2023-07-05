// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMatchType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMatchType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMatchType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMatchType>()
	{
		return ECareerMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMatchType(ECareerMatchType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMatchType_Hash() { return 1027362777U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMatchType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMatchType::SINGLE", (int64)ECareerMatchType::SINGLE },
				{ "ECareerMatchType::TAG", (int64)ECareerMatchType::TAG },
				{ "ECareerMatchType::WAY3", (int64)ECareerMatchType::WAY3 },
				{ "ECareerMatchType::WAY4", (int64)ECareerMatchType::WAY4 },
				{ "ECareerMatchType::CBR_SOLO", (int64)ECareerMatchType::CBR_SOLO },
				{ "ECareerMatchType::CBR_GROUP", (int64)ECareerMatchType::CBR_GROUP },
				{ "ECareerMatchType::SINGLE_OPP_WM", (int64)ECareerMatchType::SINGLE_OPP_WM },
				{ "ECareerMatchType::SINGLE_WM_OPP", (int64)ECareerMatchType::SINGLE_WM_OPP },
				{ "ECareerMatchType::SINGLE_WM_WM", (int64)ECareerMatchType::SINGLE_WM_WM },
				{ "ECareerMatchType::HANDICAP_1ON2", (int64)ECareerMatchType::HANDICAP_1ON2 },
				{ "ECareerMatchType::HANDICAP_1ON3", (int64)ECareerMatchType::HANDICAP_1ON3 },
				{ "ECareerMatchType::HND_1ON2_OPP_WM", (int64)ECareerMatchType::HND_1ON2_OPP_WM },
				{ "ECareerMatchType::HANDICAP_TAG", (int64)ECareerMatchType::HANDICAP_TAG },
				{ "ECareerMatchType::GAUNTLET", (int64)ECareerMatchType::GAUNTLET },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CBR_GROUP.Name", "ECareerMatchType::CBR_GROUP" },
				{ "CBR_SOLO.Name", "ECareerMatchType::CBR_SOLO" },
				{ "GAUNTLET.Name", "ECareerMatchType::GAUNTLET" },
				{ "HANDICAP_1ON2.Name", "ECareerMatchType::HANDICAP_1ON2" },
				{ "HANDICAP_1ON3.Name", "ECareerMatchType::HANDICAP_1ON3" },
				{ "HANDICAP_TAG.Name", "ECareerMatchType::HANDICAP_TAG" },
				{ "HND_1ON2_OPP_WM.Name", "ECareerMatchType::HND_1ON2_OPP_WM" },
				{ "ModuleRelativePath", "Public/ECareerMatchType.h" },
				{ "SINGLE.Name", "ECareerMatchType::SINGLE" },
				{ "SINGLE_OPP_WM.Name", "ECareerMatchType::SINGLE_OPP_WM" },
				{ "SINGLE_WM_OPP.Name", "ECareerMatchType::SINGLE_WM_OPP" },
				{ "SINGLE_WM_WM.Name", "ECareerMatchType::SINGLE_WM_WM" },
				{ "TAG.Name", "ECareerMatchType::TAG" },
				{ "WAY3.Name", "ECareerMatchType::WAY3" },
				{ "WAY4.Name", "ECareerMatchType::WAY4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMatchType",
				"ECareerMatchType",
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
