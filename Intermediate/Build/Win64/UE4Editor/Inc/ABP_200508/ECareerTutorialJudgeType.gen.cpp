// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerTutorialJudgeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerTutorialJudgeType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerTutorialJudgeType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerTutorialJudgeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerTutorialJudgeType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerTutorialJudgeType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerTutorialJudgeType>()
	{
		return ECareerTutorialJudgeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerTutorialJudgeType(ECareerTutorialJudgeType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerTutorialJudgeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerTutorialJudgeType_Hash() { return 1192785057U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerTutorialJudgeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerTutorialJudgeType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerTutorialJudgeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerTutorialJudgeType::None", (int64)ECareerTutorialJudgeType::None },
				{ "ECareerTutorialJudgeType::EventName", (int64)ECareerTutorialJudgeType::EventName },
				{ "ECareerTutorialJudgeType::OpenDarkMenu", (int64)ECareerTutorialJudgeType::OpenDarkMenu },
				{ "ECareerTutorialJudgeType::OpenRampageMenu", (int64)ECareerTutorialJudgeType::OpenRampageMenu },
				{ "ECareerTutorialJudgeType::SnapShot", (int64)ECareerTutorialJudgeType::SnapShot },
				{ "ECareerTutorialJudgeType::WorkoutFail", (int64)ECareerTutorialJudgeType::WorkoutFail },
				{ "ECareerTutorialJudgeType::WorkoutSuccess", (int64)ECareerTutorialJudgeType::WorkoutSuccess },
				{ "ECareerTutorialJudgeType::MatchReward", (int64)ECareerTutorialJudgeType::MatchReward },
				{ "ECareerTutorialJudgeType::MatchAdvice", (int64)ECareerTutorialJudgeType::MatchAdvice },
				{ "ECareerTutorialJudgeType::Dining", (int64)ECareerTutorialJudgeType::Dining },
				{ "ECareerTutorialJudgeType::SightSeeing", (int64)ECareerTutorialJudgeType::SightSeeing },
				{ "ECareerTutorialJudgeType::Minigame", (int64)ECareerTutorialJudgeType::Minigame },
				{ "ECareerTutorialJudgeType::Promotion", (int64)ECareerTutorialJudgeType::Promotion },
				{ "ECareerTutorialJudgeType::SkillPointOver", (int64)ECareerTutorialJudgeType::SkillPointOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dining.Name", "ECareerTutorialJudgeType::Dining" },
				{ "EventName.Name", "ECareerTutorialJudgeType::EventName" },
				{ "MatchAdvice.Name", "ECareerTutorialJudgeType::MatchAdvice" },
				{ "MatchReward.Name", "ECareerTutorialJudgeType::MatchReward" },
				{ "Minigame.Name", "ECareerTutorialJudgeType::Minigame" },
				{ "ModuleRelativePath", "Public/ECareerTutorialJudgeType.h" },
				{ "None.Name", "ECareerTutorialJudgeType::None" },
				{ "OpenDarkMenu.Name", "ECareerTutorialJudgeType::OpenDarkMenu" },
				{ "OpenRampageMenu.Name", "ECareerTutorialJudgeType::OpenRampageMenu" },
				{ "Promotion.Name", "ECareerTutorialJudgeType::Promotion" },
				{ "SightSeeing.Name", "ECareerTutorialJudgeType::SightSeeing" },
				{ "SkillPointOver.Name", "ECareerTutorialJudgeType::SkillPointOver" },
				{ "SnapShot.Name", "ECareerTutorialJudgeType::SnapShot" },
				{ "WorkoutFail.Name", "ECareerTutorialJudgeType::WorkoutFail" },
				{ "WorkoutSuccess.Name", "ECareerTutorialJudgeType::WorkoutSuccess" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerTutorialJudgeType",
				"ECareerTutorialJudgeType",
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
