// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStoryTiming.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStoryTiming() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryTiming();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStoryTiming_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStoryTiming, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStoryTiming"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStoryTiming>()
	{
		return ECareerStoryTiming_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStoryTiming(ECareerStoryTiming_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStoryTiming"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStoryTiming_Hash() { return 1708219256U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryTiming()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStoryTiming"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStoryTiming_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStoryTiming::None", (int64)ECareerStoryTiming::None },
				{ "ECareerStoryTiming::Command", (int64)ECareerStoryTiming::Command },
				{ "ECareerStoryTiming::Match", (int64)ECareerStoryTiming::Match },
				{ "ECareerStoryTiming::StartWeek", (int64)ECareerStoryTiming::StartWeek },
				{ "ECareerStoryTiming::VehicleMoveAfter", (int64)ECareerStoryTiming::VehicleMoveAfter },
				{ "ECareerStoryTiming::StartTurn_1", (int64)ECareerStoryTiming::StartTurn_1 },
				{ "ECareerStoryTiming::StartTurn_2", (int64)ECareerStoryTiming::StartTurn_2 },
				{ "ECareerStoryTiming::StartTurn_3", (int64)ECareerStoryTiming::StartTurn_3 },
				{ "ECareerStoryTiming::StartTurn_4", (int64)ECareerStoryTiming::StartTurn_4 },
				{ "ECareerStoryTiming::StartTurn_5", (int64)ECareerStoryTiming::StartTurn_5 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Command.Name", "ECareerStoryTiming::Command" },
				{ "Match.Name", "ECareerStoryTiming::Match" },
				{ "ModuleRelativePath", "Public/ECareerStoryTiming.h" },
				{ "None.Name", "ECareerStoryTiming::None" },
				{ "StartTurn_1.Name", "ECareerStoryTiming::StartTurn_1" },
				{ "StartTurn_2.Name", "ECareerStoryTiming::StartTurn_2" },
				{ "StartTurn_3.Name", "ECareerStoryTiming::StartTurn_3" },
				{ "StartTurn_4.Name", "ECareerStoryTiming::StartTurn_4" },
				{ "StartTurn_5.Name", "ECareerStoryTiming::StartTurn_5" },
				{ "StartWeek.Name", "ECareerStoryTiming::StartWeek" },
				{ "VehicleMoveAfter.Name", "ECareerStoryTiming::VehicleMoveAfter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStoryTiming",
				"ECareerStoryTiming",
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
