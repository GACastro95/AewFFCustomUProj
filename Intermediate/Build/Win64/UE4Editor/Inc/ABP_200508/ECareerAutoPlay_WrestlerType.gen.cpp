// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerAutoPlay_WrestlerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerAutoPlay_WrestlerType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_WrestlerType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerAutoPlay_WrestlerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_WrestlerType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerAutoPlay_WrestlerType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerAutoPlay_WrestlerType>()
	{
		return ECareerAutoPlay_WrestlerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerAutoPlay_WrestlerType(ECareerAutoPlay_WrestlerType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerAutoPlay_WrestlerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_WrestlerType_Hash() { return 1590913486U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_WrestlerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerAutoPlay_WrestlerType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_WrestlerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerAutoPlay_WrestlerType::None", (int64)ECareerAutoPlay_WrestlerType::None },
				{ "ECareerAutoPlay_WrestlerType::Male_Hero", (int64)ECareerAutoPlay_WrestlerType::Male_Hero },
				{ "ECareerAutoPlay_WrestlerType::Male_Shy", (int64)ECareerAutoPlay_WrestlerType::Male_Shy },
				{ "ECareerAutoPlay_WrestlerType::Male_Confident", (int64)ECareerAutoPlay_WrestlerType::Male_Confident },
				{ "ECareerAutoPlay_WrestlerType::Male_Monster", (int64)ECareerAutoPlay_WrestlerType::Male_Monster },
				{ "ECareerAutoPlay_WrestlerType::Male_Enigma", (int64)ECareerAutoPlay_WrestlerType::Male_Enigma },
				{ "ECareerAutoPlay_WrestlerType::Male_Jerk", (int64)ECareerAutoPlay_WrestlerType::Male_Jerk },
				{ "ECareerAutoPlay_WrestlerType::Female_Hero", (int64)ECareerAutoPlay_WrestlerType::Female_Hero },
				{ "ECareerAutoPlay_WrestlerType::Female_Shy", (int64)ECareerAutoPlay_WrestlerType::Female_Shy },
				{ "ECareerAutoPlay_WrestlerType::Female_Confident", (int64)ECareerAutoPlay_WrestlerType::Female_Confident },
				{ "ECareerAutoPlay_WrestlerType::Female_Monster", (int64)ECareerAutoPlay_WrestlerType::Female_Monster },
				{ "ECareerAutoPlay_WrestlerType::Female_Enigma", (int64)ECareerAutoPlay_WrestlerType::Female_Enigma },
				{ "ECareerAutoPlay_WrestlerType::Female_Jerk", (int64)ECareerAutoPlay_WrestlerType::Female_Jerk },
				{ "ECareerAutoPlay_WrestlerType::Direct", (int64)ECareerAutoPlay_WrestlerType::Direct },
				{ "ECareerAutoPlay_WrestlerType::ECareerAutoPlay_MAX", (int64)ECareerAutoPlay_WrestlerType::ECareerAutoPlay_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Direct.Name", "ECareerAutoPlay_WrestlerType::Direct" },
				{ "ECareerAutoPlay_MAX.Hidden", "" },
				{ "ECareerAutoPlay_MAX.Name", "ECareerAutoPlay_WrestlerType::ECareerAutoPlay_MAX" },
				{ "Female_Confident.Name", "ECareerAutoPlay_WrestlerType::Female_Confident" },
				{ "Female_Enigma.Name", "ECareerAutoPlay_WrestlerType::Female_Enigma" },
				{ "Female_Hero.Name", "ECareerAutoPlay_WrestlerType::Female_Hero" },
				{ "Female_Jerk.Name", "ECareerAutoPlay_WrestlerType::Female_Jerk" },
				{ "Female_Monster.Name", "ECareerAutoPlay_WrestlerType::Female_Monster" },
				{ "Female_Shy.Name", "ECareerAutoPlay_WrestlerType::Female_Shy" },
				{ "Male_Confident.Name", "ECareerAutoPlay_WrestlerType::Male_Confident" },
				{ "Male_Enigma.Name", "ECareerAutoPlay_WrestlerType::Male_Enigma" },
				{ "Male_Hero.Name", "ECareerAutoPlay_WrestlerType::Male_Hero" },
				{ "Male_Jerk.Name", "ECareerAutoPlay_WrestlerType::Male_Jerk" },
				{ "Male_Monster.Name", "ECareerAutoPlay_WrestlerType::Male_Monster" },
				{ "Male_Shy.Name", "ECareerAutoPlay_WrestlerType::Male_Shy" },
				{ "ModuleRelativePath", "Public/ECareerAutoPlay_WrestlerType.h" },
				{ "None.Name", "ECareerAutoPlay_WrestlerType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerAutoPlay_WrestlerType",
				"ECareerAutoPlay_WrestlerType",
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
