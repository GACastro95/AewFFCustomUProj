// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerPostCommandEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerPostCommandEventType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerPostCommandEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerPostCommandEventType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerPostCommandEventType>()
	{
		return ECareerPostCommandEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerPostCommandEventType(ECareerPostCommandEventType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerPostCommandEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType_Hash() { return 1169530024U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerPostCommandEventType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerPostCommandEventType::NONE", (int64)ECareerPostCommandEventType::NONE },
				{ "ECareerPostCommandEventType::LIGHT_WORKOUT", (int64)ECareerPostCommandEventType::LIGHT_WORKOUT },
				{ "ECareerPostCommandEventType::STANDARD_ROUTINE", (int64)ECareerPostCommandEventType::STANDARD_ROUTINE },
				{ "ECareerPostCommandEventType::INTENSE_TRAINING", (int64)ECareerPostCommandEventType::INTENSE_TRAINING },
				{ "ECareerPostCommandEventType::DINING", (int64)ECareerPostCommandEventType::DINING },
				{ "ECareerPostCommandEventType::MEDICAL_TREATMENT_A", (int64)ECareerPostCommandEventType::MEDICAL_TREATMENT_A },
				{ "ECareerPostCommandEventType::MEDICAL_TREATMENT_B", (int64)ECareerPostCommandEventType::MEDICAL_TREATMENT_B },
				{ "ECareerPostCommandEventType::SIGHTSEEING", (int64)ECareerPostCommandEventType::SIGHTSEEING },
				{ "ECareerPostCommandEventType::PRESS_CONFERENCE", (int64)ECareerPostCommandEventType::PRESS_CONFERENCE },
				{ "ECareerPostCommandEventType::TV_SHOW", (int64)ECareerPostCommandEventType::TV_SHOW },
				{ "ECareerPostCommandEventType::AUTOGRAPH_SESSION", (int64)ECareerPostCommandEventType::AUTOGRAPH_SESSION },
				{ "ECareerPostCommandEventType::MINIGAME", (int64)ECareerPostCommandEventType::MINIGAME },
				{ "ECareerPostCommandEventType::DARK_MALE_SINGLE_A", (int64)ECareerPostCommandEventType::DARK_MALE_SINGLE_A },
				{ "ECareerPostCommandEventType::DARK_MALE_SINGLE_B", (int64)ECareerPostCommandEventType::DARK_MALE_SINGLE_B },
				{ "ECareerPostCommandEventType::DARK_MALE_TAG_A", (int64)ECareerPostCommandEventType::DARK_MALE_TAG_A },
				{ "ECareerPostCommandEventType::DARK_MALE_TAG_B", (int64)ECareerPostCommandEventType::DARK_MALE_TAG_B },
				{ "ECareerPostCommandEventType::DARK_FEMALE_SINGLE_A", (int64)ECareerPostCommandEventType::DARK_FEMALE_SINGLE_A },
				{ "ECareerPostCommandEventType::DARK_FEMALE_SINGLE_B", (int64)ECareerPostCommandEventType::DARK_FEMALE_SINGLE_B },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AUTOGRAPH_SESSION.Name", "ECareerPostCommandEventType::AUTOGRAPH_SESSION" },
				{ "BlueprintType", "true" },
				{ "DARK_FEMALE_SINGLE_A.Name", "ECareerPostCommandEventType::DARK_FEMALE_SINGLE_A" },
				{ "DARK_FEMALE_SINGLE_B.Name", "ECareerPostCommandEventType::DARK_FEMALE_SINGLE_B" },
				{ "DARK_MALE_SINGLE_A.Name", "ECareerPostCommandEventType::DARK_MALE_SINGLE_A" },
				{ "DARK_MALE_SINGLE_B.Name", "ECareerPostCommandEventType::DARK_MALE_SINGLE_B" },
				{ "DARK_MALE_TAG_A.Name", "ECareerPostCommandEventType::DARK_MALE_TAG_A" },
				{ "DARK_MALE_TAG_B.Name", "ECareerPostCommandEventType::DARK_MALE_TAG_B" },
				{ "DINING.Name", "ECareerPostCommandEventType::DINING" },
				{ "INTENSE_TRAINING.Name", "ECareerPostCommandEventType::INTENSE_TRAINING" },
				{ "LIGHT_WORKOUT.Name", "ECareerPostCommandEventType::LIGHT_WORKOUT" },
				{ "MEDICAL_TREATMENT_A.Name", "ECareerPostCommandEventType::MEDICAL_TREATMENT_A" },
				{ "MEDICAL_TREATMENT_B.Name", "ECareerPostCommandEventType::MEDICAL_TREATMENT_B" },
				{ "MINIGAME.Name", "ECareerPostCommandEventType::MINIGAME" },
				{ "ModuleRelativePath", "Public/ECareerPostCommandEventType.h" },
				{ "NONE.Name", "ECareerPostCommandEventType::NONE" },
				{ "PRESS_CONFERENCE.Name", "ECareerPostCommandEventType::PRESS_CONFERENCE" },
				{ "SIGHTSEEING.Name", "ECareerPostCommandEventType::SIGHTSEEING" },
				{ "STANDARD_ROUTINE.Name", "ECareerPostCommandEventType::STANDARD_ROUTINE" },
				{ "TV_SHOW.Name", "ECareerPostCommandEventType::TV_SHOW" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerPostCommandEventType",
				"ECareerPostCommandEventType",
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
