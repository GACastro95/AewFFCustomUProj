// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerScenarioPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerScenarioPart() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerScenarioPart_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerScenarioPart"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerScenarioPart>()
	{
		return ECareerScenarioPart_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerScenarioPart(ECareerScenarioPart_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerScenarioPart"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerScenarioPart_Hash() { return 2913205684U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerScenarioPart"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerScenarioPart_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerScenarioPart::NONE", (int64)ECareerScenarioPart::NONE },
				{ "ECareerScenarioPart::SP_PR_HERO", (int64)ECareerScenarioPart::SP_PR_HERO },
				{ "ECareerScenarioPart::SP_PR_SHY", (int64)ECareerScenarioPart::SP_PR_SHY },
				{ "ECareerScenarioPart::SP_PR_CONFIDENT", (int64)ECareerScenarioPart::SP_PR_CONFIDENT },
				{ "ECareerScenarioPart::SP_PR_MONSTER", (int64)ECareerScenarioPart::SP_PR_MONSTER },
				{ "ECareerScenarioPart::SP_PR_ENIGMA", (int64)ECareerScenarioPart::SP_PR_ENIGMA },
				{ "ECareerScenarioPart::SP_PR_JERK", (int64)ECareerScenarioPart::SP_PR_JERK },
				{ "ECareerScenarioPart::SP_PR_CASSIDY", (int64)ECareerScenarioPart::SP_PR_CASSIDY },
				{ "ECareerScenarioPart::SP_PR_FEMALE", (int64)ECareerScenarioPart::SP_PR_FEMALE },
				{ "ECareerScenarioPart::SP_1A_WEEK1", (int64)ECareerScenarioPart::SP_1A_WEEK1 },
				{ "ECareerScenarioPart::SP_1A_WEEK2_A", (int64)ECareerScenarioPart::SP_1A_WEEK2_A },
				{ "ECareerScenarioPart::SP_1A_WEEK2_B", (int64)ECareerScenarioPart::SP_1A_WEEK2_B },
				{ "ECareerScenarioPart::SP_1A_WEEK3_A", (int64)ECareerScenarioPart::SP_1A_WEEK3_A },
				{ "ECareerScenarioPart::SP_1A_WEEK3_B", (int64)ECareerScenarioPart::SP_1A_WEEK3_B },
				{ "ECareerScenarioPart::SP_1A_WEEK4_A", (int64)ECareerScenarioPart::SP_1A_WEEK4_A },
				{ "ECareerScenarioPart::SP_1A_WEEK4_B", (int64)ECareerScenarioPart::SP_1A_WEEK4_B },
				{ "ECareerScenarioPart::SP_1A_WEEK4_C", (int64)ECareerScenarioPart::SP_1A_WEEK4_C },
				{ "ECareerScenarioPart::SP_1B_WEEK1", (int64)ECareerScenarioPart::SP_1B_WEEK1 },
				{ "ECareerScenarioPart::SP_1B_WEEK2", (int64)ECareerScenarioPart::SP_1B_WEEK2 },
				{ "ECareerScenarioPart::SP_1B_WEEK3", (int64)ECareerScenarioPart::SP_1B_WEEK3 },
				{ "ECareerScenarioPart::SP_1B_WEEK4", (int64)ECareerScenarioPart::SP_1B_WEEK4 },
				{ "ECareerScenarioPart::SP_1C_WEEK1", (int64)ECareerScenarioPart::SP_1C_WEEK1 },
				{ "ECareerScenarioPart::SP_1C_WEEK2_A", (int64)ECareerScenarioPart::SP_1C_WEEK2_A },
				{ "ECareerScenarioPart::SP_1C_WEEK2_B", (int64)ECareerScenarioPart::SP_1C_WEEK2_B },
				{ "ECareerScenarioPart::SP_1C_WEEK3", (int64)ECareerScenarioPart::SP_1C_WEEK3 },
				{ "ECareerScenarioPart::SP_1C_WEEK4_A", (int64)ECareerScenarioPart::SP_1C_WEEK4_A },
				{ "ECareerScenarioPart::SP_1C_WEEK4_B", (int64)ECareerScenarioPart::SP_1C_WEEK4_B },
				{ "ECareerScenarioPart::SP_1C_WEEK4_C", (int64)ECareerScenarioPart::SP_1C_WEEK4_C },
				{ "ECareerScenarioPart::SP_2A_WEEK1", (int64)ECareerScenarioPart::SP_2A_WEEK1 },
				{ "ECareerScenarioPart::SP_2A_WEEK2", (int64)ECareerScenarioPart::SP_2A_WEEK2 },
				{ "ECareerScenarioPart::SP_2A_WEEK3_A", (int64)ECareerScenarioPart::SP_2A_WEEK3_A },
				{ "ECareerScenarioPart::SP_2A_WEEK3_B", (int64)ECareerScenarioPart::SP_2A_WEEK3_B },
				{ "ECareerScenarioPart::SP_2A_WEEK4", (int64)ECareerScenarioPart::SP_2A_WEEK4 },
				{ "ECareerScenarioPart::SP_2B_WEEK1", (int64)ECareerScenarioPart::SP_2B_WEEK1 },
				{ "ECareerScenarioPart::SP_2B_WEEK2", (int64)ECareerScenarioPart::SP_2B_WEEK2 },
				{ "ECareerScenarioPart::SP_2B_WEEK3", (int64)ECareerScenarioPart::SP_2B_WEEK3 },
				{ "ECareerScenarioPart::SP_2B_WEEK4", (int64)ECareerScenarioPart::SP_2B_WEEK4 },
				{ "ECareerScenarioPart::SP_2C_WEEK1", (int64)ECareerScenarioPart::SP_2C_WEEK1 },
				{ "ECareerScenarioPart::SP_2C_WEEK2", (int64)ECareerScenarioPart::SP_2C_WEEK2 },
				{ "ECareerScenarioPart::SP_2C_WEEK3", (int64)ECareerScenarioPart::SP_2C_WEEK3 },
				{ "ECareerScenarioPart::SP_2C_WEEK4", (int64)ECareerScenarioPart::SP_2C_WEEK4 },
				{ "ECareerScenarioPart::SP_3A_WEEK1", (int64)ECareerScenarioPart::SP_3A_WEEK1 },
				{ "ECareerScenarioPart::SP_3A_WEEK2", (int64)ECareerScenarioPart::SP_3A_WEEK2 },
				{ "ECareerScenarioPart::SP_3A_WEEK3", (int64)ECareerScenarioPart::SP_3A_WEEK3 },
				{ "ECareerScenarioPart::SP_3A_WEEK4_A", (int64)ECareerScenarioPart::SP_3A_WEEK4_A },
				{ "ECareerScenarioPart::SP_3A_WEEK4_B", (int64)ECareerScenarioPart::SP_3A_WEEK4_B },
				{ "ECareerScenarioPart::SP_3B_WEEK1", (int64)ECareerScenarioPart::SP_3B_WEEK1 },
				{ "ECareerScenarioPart::SP_3B_WEEK2", (int64)ECareerScenarioPart::SP_3B_WEEK2 },
				{ "ECareerScenarioPart::SP_3B_WEEK3", (int64)ECareerScenarioPart::SP_3B_WEEK3 },
				{ "ECareerScenarioPart::SP_3B_WEEK4", (int64)ECareerScenarioPart::SP_3B_WEEK4 },
				{ "ECareerScenarioPart::SP_3C_WEEK1", (int64)ECareerScenarioPart::SP_3C_WEEK1 },
				{ "ECareerScenarioPart::SP_3C_WEEK2", (int64)ECareerScenarioPart::SP_3C_WEEK2 },
				{ "ECareerScenarioPart::SP_3C_WEEK3", (int64)ECareerScenarioPart::SP_3C_WEEK3 },
				{ "ECareerScenarioPart::SP_3C_WEEK4", (int64)ECareerScenarioPart::SP_3C_WEEK4 },
				{ "ECareerScenarioPart::SP_4A_WEEK1", (int64)ECareerScenarioPart::SP_4A_WEEK1 },
				{ "ECareerScenarioPart::SP_4A_WEEK2", (int64)ECareerScenarioPart::SP_4A_WEEK2 },
				{ "ECareerScenarioPart::SP_4A_WEEK3", (int64)ECareerScenarioPart::SP_4A_WEEK3 },
				{ "ECareerScenarioPart::SP_4A_WEEK4", (int64)ECareerScenarioPart::SP_4A_WEEK4 },
				{ "ECareerScenarioPart::SP_4B_WEEK1", (int64)ECareerScenarioPart::SP_4B_WEEK1 },
				{ "ECareerScenarioPart::SP_4B_WEEK2", (int64)ECareerScenarioPart::SP_4B_WEEK2 },
				{ "ECareerScenarioPart::SP_4B_WEEK3", (int64)ECareerScenarioPart::SP_4B_WEEK3 },
				{ "ECareerScenarioPart::SP_4B_WEEK4", (int64)ECareerScenarioPart::SP_4B_WEEK4 },
				{ "ECareerScenarioPart::SP_4C_WEEK1", (int64)ECareerScenarioPart::SP_4C_WEEK1 },
				{ "ECareerScenarioPart::SP_4C_WEEK2", (int64)ECareerScenarioPart::SP_4C_WEEK2 },
				{ "ECareerScenarioPart::SP_4C_WEEK3", (int64)ECareerScenarioPart::SP_4C_WEEK3 },
				{ "ECareerScenarioPart::SP_4C_WEEK4", (int64)ECareerScenarioPart::SP_4C_WEEK4 },
				{ "ECareerScenarioPart::SP_ENDING", (int64)ECareerScenarioPart::SP_ENDING },
				{ "ECareerScenarioPart::SP_1C_WEEK4_D", (int64)ECareerScenarioPart::SP_1C_WEEK4_D },
				{ "ECareerScenarioPart::SP_2B_WEEK4_A", (int64)ECareerScenarioPart::SP_2B_WEEK4_A },
				{ "ECareerScenarioPart::SP_2B_WEEK4_B", (int64)ECareerScenarioPart::SP_2B_WEEK4_B },
				{ "ECareerScenarioPart::SP_3C_WEEK1_A", (int64)ECareerScenarioPart::SP_3C_WEEK1_A },
				{ "ECareerScenarioPart::SP_3C_WEEK1_B", (int64)ECareerScenarioPart::SP_3C_WEEK1_B },
				{ "ECareerScenarioPart::SP_4B_WEEK4_A", (int64)ECareerScenarioPart::SP_4B_WEEK4_A },
				{ "ECareerScenarioPart::SP_4C_WEEK1_A", (int64)ECareerScenarioPart::SP_4C_WEEK1_A },
				{ "ECareerScenarioPart::SP_4C_WEEK1_B", (int64)ECareerScenarioPart::SP_4C_WEEK1_B },
				{ "ECareerScenarioPart::SP_4C_WEEK1_C", (int64)ECareerScenarioPart::SP_4C_WEEK1_C },
				{ "ECareerScenarioPart::SP_4C_WEEK2_A", (int64)ECareerScenarioPart::SP_4C_WEEK2_A },
				{ "ECareerScenarioPart::SP_4C_WEEK2_B", (int64)ECareerScenarioPart::SP_4C_WEEK2_B },
				{ "ECareerScenarioPart::SP_4C_WEEK2_C", (int64)ECareerScenarioPart::SP_4C_WEEK2_C },
				{ "ECareerScenarioPart::SP_4C_WEEK4_A", (int64)ECareerScenarioPart::SP_4C_WEEK4_A },
				{ "ECareerScenarioPart::SP_4C_WEEK4_B", (int64)ECareerScenarioPart::SP_4C_WEEK4_B },
				{ "ECareerScenarioPart::SP_4C_WEEK4_C", (int64)ECareerScenarioPart::SP_4C_WEEK4_C },
				{ "ECareerScenarioPart::DARK_SINGLE", (int64)ECareerScenarioPart::DARK_SINGLE },
				{ "ECareerScenarioPart::DARK_TAG", (int64)ECareerScenarioPart::DARK_TAG },
				{ "ECareerScenarioPart::DARK_3WAY", (int64)ECareerScenarioPart::DARK_3WAY },
				{ "ECareerScenarioPart::DARK_4WAY", (int64)ECareerScenarioPart::DARK_4WAY },
				{ "ECareerScenarioPart::RAMPAGE_SINGLE", (int64)ECareerScenarioPart::RAMPAGE_SINGLE },
				{ "ECareerScenarioPart::RAMPAGE_TAG", (int64)ECareerScenarioPart::RAMPAGE_TAG },
				{ "ECareerScenarioPart::RAMPAGE_3WAY", (int64)ECareerScenarioPart::RAMPAGE_3WAY },
				{ "ECareerScenarioPart::RAMPAGE_4WAY", (int64)ECareerScenarioPart::RAMPAGE_4WAY },
				{ "ECareerScenarioPart::RAMPAGE_SINGLE_TBS", (int64)ECareerScenarioPart::RAMPAGE_SINGLE_TBS },
				{ "ECareerScenarioPart::RAMPAGE_SINGLE_LADDER_TBS", (int64)ECareerScenarioPart::RAMPAGE_SINGLE_LADDER_TBS },
				{ "ECareerScenarioPart::MAX", (int64)ECareerScenarioPart::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DARK_3WAY.Name", "ECareerScenarioPart::DARK_3WAY" },
				{ "DARK_4WAY.Name", "ECareerScenarioPart::DARK_4WAY" },
				{ "DARK_SINGLE.Name", "ECareerScenarioPart::DARK_SINGLE" },
				{ "DARK_TAG.Name", "ECareerScenarioPart::DARK_TAG" },
				{ "MAX.Name", "ECareerScenarioPart::MAX" },
				{ "ModuleRelativePath", "Public/ECareerScenarioPart.h" },
				{ "NONE.Name", "ECareerScenarioPart::NONE" },
				{ "RAMPAGE_3WAY.Name", "ECareerScenarioPart::RAMPAGE_3WAY" },
				{ "RAMPAGE_4WAY.Name", "ECareerScenarioPart::RAMPAGE_4WAY" },
				{ "RAMPAGE_SINGLE.Name", "ECareerScenarioPart::RAMPAGE_SINGLE" },
				{ "RAMPAGE_SINGLE_LADDER_TBS.Name", "ECareerScenarioPart::RAMPAGE_SINGLE_LADDER_TBS" },
				{ "RAMPAGE_SINGLE_TBS.Name", "ECareerScenarioPart::RAMPAGE_SINGLE_TBS" },
				{ "RAMPAGE_TAG.Name", "ECareerScenarioPart::RAMPAGE_TAG" },
				{ "SP_1A_WEEK1.Name", "ECareerScenarioPart::SP_1A_WEEK1" },
				{ "SP_1A_WEEK2_A.Name", "ECareerScenarioPart::SP_1A_WEEK2_A" },
				{ "SP_1A_WEEK2_B.Name", "ECareerScenarioPart::SP_1A_WEEK2_B" },
				{ "SP_1A_WEEK3_A.Name", "ECareerScenarioPart::SP_1A_WEEK3_A" },
				{ "SP_1A_WEEK3_B.Name", "ECareerScenarioPart::SP_1A_WEEK3_B" },
				{ "SP_1A_WEEK4_A.Name", "ECareerScenarioPart::SP_1A_WEEK4_A" },
				{ "SP_1A_WEEK4_B.Name", "ECareerScenarioPart::SP_1A_WEEK4_B" },
				{ "SP_1A_WEEK4_C.Name", "ECareerScenarioPart::SP_1A_WEEK4_C" },
				{ "SP_1B_WEEK1.Name", "ECareerScenarioPart::SP_1B_WEEK1" },
				{ "SP_1B_WEEK2.Name", "ECareerScenarioPart::SP_1B_WEEK2" },
				{ "SP_1B_WEEK3.Name", "ECareerScenarioPart::SP_1B_WEEK3" },
				{ "SP_1B_WEEK4.Name", "ECareerScenarioPart::SP_1B_WEEK4" },
				{ "SP_1C_WEEK1.Name", "ECareerScenarioPart::SP_1C_WEEK1" },
				{ "SP_1C_WEEK2_A.Name", "ECareerScenarioPart::SP_1C_WEEK2_A" },
				{ "SP_1C_WEEK2_B.Name", "ECareerScenarioPart::SP_1C_WEEK2_B" },
				{ "SP_1C_WEEK3.Name", "ECareerScenarioPart::SP_1C_WEEK3" },
				{ "SP_1C_WEEK4_A.Name", "ECareerScenarioPart::SP_1C_WEEK4_A" },
				{ "SP_1C_WEEK4_B.Name", "ECareerScenarioPart::SP_1C_WEEK4_B" },
				{ "SP_1C_WEEK4_C.Name", "ECareerScenarioPart::SP_1C_WEEK4_C" },
				{ "SP_1C_WEEK4_D.Name", "ECareerScenarioPart::SP_1C_WEEK4_D" },
				{ "SP_2A_WEEK1.Name", "ECareerScenarioPart::SP_2A_WEEK1" },
				{ "SP_2A_WEEK2.Name", "ECareerScenarioPart::SP_2A_WEEK2" },
				{ "SP_2A_WEEK3_A.Name", "ECareerScenarioPart::SP_2A_WEEK3_A" },
				{ "SP_2A_WEEK3_B.Name", "ECareerScenarioPart::SP_2A_WEEK3_B" },
				{ "SP_2A_WEEK4.Name", "ECareerScenarioPart::SP_2A_WEEK4" },
				{ "SP_2B_WEEK1.Name", "ECareerScenarioPart::SP_2B_WEEK1" },
				{ "SP_2B_WEEK2.Name", "ECareerScenarioPart::SP_2B_WEEK2" },
				{ "SP_2B_WEEK3.Name", "ECareerScenarioPart::SP_2B_WEEK3" },
				{ "SP_2B_WEEK4.Name", "ECareerScenarioPart::SP_2B_WEEK4" },
				{ "SP_2B_WEEK4_A.Name", "ECareerScenarioPart::SP_2B_WEEK4_A" },
				{ "SP_2B_WEEK4_B.Name", "ECareerScenarioPart::SP_2B_WEEK4_B" },
				{ "SP_2C_WEEK1.Name", "ECareerScenarioPart::SP_2C_WEEK1" },
				{ "SP_2C_WEEK2.Name", "ECareerScenarioPart::SP_2C_WEEK2" },
				{ "SP_2C_WEEK3.Name", "ECareerScenarioPart::SP_2C_WEEK3" },
				{ "SP_2C_WEEK4.Name", "ECareerScenarioPart::SP_2C_WEEK4" },
				{ "SP_3A_WEEK1.Name", "ECareerScenarioPart::SP_3A_WEEK1" },
				{ "SP_3A_WEEK2.Name", "ECareerScenarioPart::SP_3A_WEEK2" },
				{ "SP_3A_WEEK3.Name", "ECareerScenarioPart::SP_3A_WEEK3" },
				{ "SP_3A_WEEK4_A.Name", "ECareerScenarioPart::SP_3A_WEEK4_A" },
				{ "SP_3A_WEEK4_B.Name", "ECareerScenarioPart::SP_3A_WEEK4_B" },
				{ "SP_3B_WEEK1.Name", "ECareerScenarioPart::SP_3B_WEEK1" },
				{ "SP_3B_WEEK2.Name", "ECareerScenarioPart::SP_3B_WEEK2" },
				{ "SP_3B_WEEK3.Name", "ECareerScenarioPart::SP_3B_WEEK3" },
				{ "SP_3B_WEEK4.Name", "ECareerScenarioPart::SP_3B_WEEK4" },
				{ "SP_3C_WEEK1.Name", "ECareerScenarioPart::SP_3C_WEEK1" },
				{ "SP_3C_WEEK1_A.Name", "ECareerScenarioPart::SP_3C_WEEK1_A" },
				{ "SP_3C_WEEK1_B.Name", "ECareerScenarioPart::SP_3C_WEEK1_B" },
				{ "SP_3C_WEEK2.Name", "ECareerScenarioPart::SP_3C_WEEK2" },
				{ "SP_3C_WEEK3.Name", "ECareerScenarioPart::SP_3C_WEEK3" },
				{ "SP_3C_WEEK4.Name", "ECareerScenarioPart::SP_3C_WEEK4" },
				{ "SP_4A_WEEK1.Name", "ECareerScenarioPart::SP_4A_WEEK1" },
				{ "SP_4A_WEEK2.Name", "ECareerScenarioPart::SP_4A_WEEK2" },
				{ "SP_4A_WEEK3.Name", "ECareerScenarioPart::SP_4A_WEEK3" },
				{ "SP_4A_WEEK4.Name", "ECareerScenarioPart::SP_4A_WEEK4" },
				{ "SP_4B_WEEK1.Name", "ECareerScenarioPart::SP_4B_WEEK1" },
				{ "SP_4B_WEEK2.Name", "ECareerScenarioPart::SP_4B_WEEK2" },
				{ "SP_4B_WEEK3.Name", "ECareerScenarioPart::SP_4B_WEEK3" },
				{ "SP_4B_WEEK4.Name", "ECareerScenarioPart::SP_4B_WEEK4" },
				{ "SP_4B_WEEK4_A.Name", "ECareerScenarioPart::SP_4B_WEEK4_A" },
				{ "SP_4C_WEEK1.Name", "ECareerScenarioPart::SP_4C_WEEK1" },
				{ "SP_4C_WEEK1_A.Name", "ECareerScenarioPart::SP_4C_WEEK1_A" },
				{ "SP_4C_WEEK1_B.Name", "ECareerScenarioPart::SP_4C_WEEK1_B" },
				{ "SP_4C_WEEK1_C.Name", "ECareerScenarioPart::SP_4C_WEEK1_C" },
				{ "SP_4C_WEEK2.Name", "ECareerScenarioPart::SP_4C_WEEK2" },
				{ "SP_4C_WEEK2_A.Name", "ECareerScenarioPart::SP_4C_WEEK2_A" },
				{ "SP_4C_WEEK2_B.Name", "ECareerScenarioPart::SP_4C_WEEK2_B" },
				{ "SP_4C_WEEK2_C.Name", "ECareerScenarioPart::SP_4C_WEEK2_C" },
				{ "SP_4C_WEEK3.Name", "ECareerScenarioPart::SP_4C_WEEK3" },
				{ "SP_4C_WEEK4.Name", "ECareerScenarioPart::SP_4C_WEEK4" },
				{ "SP_4C_WEEK4_A.Name", "ECareerScenarioPart::SP_4C_WEEK4_A" },
				{ "SP_4C_WEEK4_B.Name", "ECareerScenarioPart::SP_4C_WEEK4_B" },
				{ "SP_4C_WEEK4_C.Name", "ECareerScenarioPart::SP_4C_WEEK4_C" },
				{ "SP_ENDING.Name", "ECareerScenarioPart::SP_ENDING" },
				{ "SP_PR_CASSIDY.Name", "ECareerScenarioPart::SP_PR_CASSIDY" },
				{ "SP_PR_CONFIDENT.Name", "ECareerScenarioPart::SP_PR_CONFIDENT" },
				{ "SP_PR_ENIGMA.Name", "ECareerScenarioPart::SP_PR_ENIGMA" },
				{ "SP_PR_FEMALE.Name", "ECareerScenarioPart::SP_PR_FEMALE" },
				{ "SP_PR_HERO.Name", "ECareerScenarioPart::SP_PR_HERO" },
				{ "SP_PR_JERK.Name", "ECareerScenarioPart::SP_PR_JERK" },
				{ "SP_PR_MONSTER.Name", "ECareerScenarioPart::SP_PR_MONSTER" },
				{ "SP_PR_SHY.Name", "ECareerScenarioPart::SP_PR_SHY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerScenarioPart",
				"ECareerScenarioPart",
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
