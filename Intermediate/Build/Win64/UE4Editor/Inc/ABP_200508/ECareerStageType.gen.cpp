// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStageType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStageType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStageType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStageType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStageType>()
	{
		return ECareerStageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStageType(ECareerStageType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStageType_Hash() { return 1121140161U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStageType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStageType::NONE", (int64)ECareerStageType::NONE },
				{ "ECareerStageType::ARENA", (int64)ECareerStageType::ARENA },
				{ "ECareerStageType::DYNAMITE", (int64)ECareerStageType::DYNAMITE },
				{ "ECareerStageType::DARK", (int64)ECareerStageType::DARK },
				{ "ECareerStageType::ALLOUT", (int64)ECareerStageType::ALLOUT },
				{ "ECareerStageType::FULLGEAR", (int64)ECareerStageType::FULLGEAR },
				{ "ECareerStageType::REVOLUTION", (int64)ECareerStageType::REVOLUTION },
				{ "ECareerStageType::DON", (int64)ECareerStageType::DON },
				{ "ECareerStageType::INDIES", (int64)ECareerStageType::INDIES },
				{ "ECareerStageType::RAMPAGE", (int64)ECareerStageType::RAMPAGE },
				{ "ECareerStageType::MIRROR", (int64)ECareerStageType::MIRROR },
				{ "ECareerStageType::LOCKERROOM", (int64)ECareerStageType::LOCKERROOM },
				{ "ECareerStageType::OFFICE", (int64)ECareerStageType::OFFICE },
				{ "ECareerStageType::DARKORDERROOM", (int64)ECareerStageType::DARKORDERROOM },
				{ "ECareerStageType::TRAININGYM", (int64)ECareerStageType::TRAININGYM },
				{ "ECareerStageType::INTERVIEWSPACE", (int64)ECareerStageType::INTERVIEWSPACE },
				{ "ECareerStageType::PRIVATEJET", (int64)ECareerStageType::PRIVATEJET },
				{ "ECareerStageType::HOSPITAL_CLINIC", (int64)ECareerStageType::HOSPITAL_CLINIC },
				{ "ECareerStageType::HOSPITAL_ENTRANCE", (int64)ECareerStageType::HOSPITAL_ENTRANCE },
				{ "ECareerStageType::TV_TALKSHOW", (int64)ECareerStageType::TV_TALKSHOW },
				{ "ECareerStageType::AIRPLANE", (int64)ECareerStageType::AIRPLANE },
				{ "ECareerStageType::BAGGAGE_CLAIM", (int64)ECareerStageType::BAGGAGE_CLAIM },
				{ "ECareerStageType::CAR_STOP", (int64)ECareerStageType::CAR_STOP },
				{ "ECareerStageType::CAR_DRIVE", (int64)ECareerStageType::CAR_DRIVE },
				{ "ECareerStageType::SIGHTSEEING", (int64)ECareerStageType::SIGHTSEEING },
				{ "ECareerStageType::RESTAURANT", (int64)ECareerStageType::RESTAURANT },
				{ "ECareerStageType::PRESS_CONFERENCE", (int64)ECareerStageType::PRESS_CONFERENCE },
				{ "ECareerStageType::AUTOGRAPH", (int64)ECareerStageType::AUTOGRAPH },
				{ "ECareerStageType::BLACKSCREEN", (int64)ECareerStageType::BLACKSCREEN },
				{ "ECareerStageType::SPECIAL_PRESS_CONFERENCE", (int64)ECareerStageType::SPECIAL_PRESS_CONFERENCE },
				{ "ECareerStageType::SPECIAL_AUTOGRAPH", (int64)ECareerStageType::SPECIAL_AUTOGRAPH },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AIRPLANE.Name", "ECareerStageType::AIRPLANE" },
				{ "ALLOUT.Name", "ECareerStageType::ALLOUT" },
				{ "ARENA.Name", "ECareerStageType::ARENA" },
				{ "AUTOGRAPH.Name", "ECareerStageType::AUTOGRAPH" },
				{ "BAGGAGE_CLAIM.Name", "ECareerStageType::BAGGAGE_CLAIM" },
				{ "BLACKSCREEN.Name", "ECareerStageType::BLACKSCREEN" },
				{ "BlueprintType", "true" },
				{ "CAR_DRIVE.Name", "ECareerStageType::CAR_DRIVE" },
				{ "CAR_STOP.Name", "ECareerStageType::CAR_STOP" },
				{ "DARK.Name", "ECareerStageType::DARK" },
				{ "DARKORDERROOM.Name", "ECareerStageType::DARKORDERROOM" },
				{ "DON.Name", "ECareerStageType::DON" },
				{ "DYNAMITE.Name", "ECareerStageType::DYNAMITE" },
				{ "FULLGEAR.Name", "ECareerStageType::FULLGEAR" },
				{ "HOSPITAL_CLINIC.Name", "ECareerStageType::HOSPITAL_CLINIC" },
				{ "HOSPITAL_ENTRANCE.Name", "ECareerStageType::HOSPITAL_ENTRANCE" },
				{ "INDIES.Name", "ECareerStageType::INDIES" },
				{ "INTERVIEWSPACE.Name", "ECareerStageType::INTERVIEWSPACE" },
				{ "LOCKERROOM.Name", "ECareerStageType::LOCKERROOM" },
				{ "MIRROR.Name", "ECareerStageType::MIRROR" },
				{ "ModuleRelativePath", "Public/ECareerStageType.h" },
				{ "NONE.Name", "ECareerStageType::NONE" },
				{ "OFFICE.Name", "ECareerStageType::OFFICE" },
				{ "PRESS_CONFERENCE.Name", "ECareerStageType::PRESS_CONFERENCE" },
				{ "PRIVATEJET.Name", "ECareerStageType::PRIVATEJET" },
				{ "RAMPAGE.Name", "ECareerStageType::RAMPAGE" },
				{ "RESTAURANT.Name", "ECareerStageType::RESTAURANT" },
				{ "REVOLUTION.Name", "ECareerStageType::REVOLUTION" },
				{ "SIGHTSEEING.Name", "ECareerStageType::SIGHTSEEING" },
				{ "SPECIAL_AUTOGRAPH.Name", "ECareerStageType::SPECIAL_AUTOGRAPH" },
				{ "SPECIAL_PRESS_CONFERENCE.Name", "ECareerStageType::SPECIAL_PRESS_CONFERENCE" },
				{ "TRAININGYM.Name", "ECareerStageType::TRAININGYM" },
				{ "TV_TALKSHOW.Name", "ECareerStageType::TV_TALKSHOW" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStageType",
				"ECareerStageType",
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
