// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerScenarioPart_generated_h
#error "ECareerScenarioPart.generated.h already included, missing '#pragma once' in ECareerScenarioPart.h"
#endif
#define ABP_200508_ECareerScenarioPart_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerScenarioPart_h


#define FOREACH_ENUM_ECAREERSCENARIOPART(op) \
	op(ECareerScenarioPart::NONE) \
	op(ECareerScenarioPart::SP_PR_HERO) \
	op(ECareerScenarioPart::SP_PR_SHY) \
	op(ECareerScenarioPart::SP_PR_CONFIDENT) \
	op(ECareerScenarioPart::SP_PR_MONSTER) \
	op(ECareerScenarioPart::SP_PR_ENIGMA) \
	op(ECareerScenarioPart::SP_PR_JERK) \
	op(ECareerScenarioPart::SP_PR_CASSIDY) \
	op(ECareerScenarioPart::SP_PR_FEMALE) \
	op(ECareerScenarioPart::SP_1A_WEEK1) \
	op(ECareerScenarioPart::SP_1A_WEEK2_A) \
	op(ECareerScenarioPart::SP_1A_WEEK2_B) \
	op(ECareerScenarioPart::SP_1A_WEEK3_A) \
	op(ECareerScenarioPart::SP_1A_WEEK3_B) \
	op(ECareerScenarioPart::SP_1A_WEEK4_A) \
	op(ECareerScenarioPart::SP_1A_WEEK4_B) \
	op(ECareerScenarioPart::SP_1A_WEEK4_C) \
	op(ECareerScenarioPart::SP_1B_WEEK1) \
	op(ECareerScenarioPart::SP_1B_WEEK2) \
	op(ECareerScenarioPart::SP_1B_WEEK3) \
	op(ECareerScenarioPart::SP_1B_WEEK4) \
	op(ECareerScenarioPart::SP_1C_WEEK1) \
	op(ECareerScenarioPart::SP_1C_WEEK2_A) \
	op(ECareerScenarioPart::SP_1C_WEEK2_B) \
	op(ECareerScenarioPart::SP_1C_WEEK3) \
	op(ECareerScenarioPart::SP_1C_WEEK4_A) \
	op(ECareerScenarioPart::SP_1C_WEEK4_B) \
	op(ECareerScenarioPart::SP_1C_WEEK4_C) \
	op(ECareerScenarioPart::SP_2A_WEEK1) \
	op(ECareerScenarioPart::SP_2A_WEEK2) \
	op(ECareerScenarioPart::SP_2A_WEEK3_A) \
	op(ECareerScenarioPart::SP_2A_WEEK3_B) \
	op(ECareerScenarioPart::SP_2A_WEEK4) \
	op(ECareerScenarioPart::SP_2B_WEEK1) \
	op(ECareerScenarioPart::SP_2B_WEEK2) \
	op(ECareerScenarioPart::SP_2B_WEEK3) \
	op(ECareerScenarioPart::SP_2B_WEEK4) \
	op(ECareerScenarioPart::SP_2C_WEEK1) \
	op(ECareerScenarioPart::SP_2C_WEEK2) \
	op(ECareerScenarioPart::SP_2C_WEEK3) \
	op(ECareerScenarioPart::SP_2C_WEEK4) \
	op(ECareerScenarioPart::SP_3A_WEEK1) \
	op(ECareerScenarioPart::SP_3A_WEEK2) \
	op(ECareerScenarioPart::SP_3A_WEEK3) \
	op(ECareerScenarioPart::SP_3A_WEEK4_A) \
	op(ECareerScenarioPart::SP_3A_WEEK4_B) \
	op(ECareerScenarioPart::SP_3B_WEEK1) \
	op(ECareerScenarioPart::SP_3B_WEEK2) \
	op(ECareerScenarioPart::SP_3B_WEEK3) \
	op(ECareerScenarioPart::SP_3B_WEEK4) \
	op(ECareerScenarioPart::SP_3C_WEEK1) \
	op(ECareerScenarioPart::SP_3C_WEEK2) \
	op(ECareerScenarioPart::SP_3C_WEEK3) \
	op(ECareerScenarioPart::SP_3C_WEEK4) \
	op(ECareerScenarioPart::SP_4A_WEEK1) \
	op(ECareerScenarioPart::SP_4A_WEEK2) \
	op(ECareerScenarioPart::SP_4A_WEEK3) \
	op(ECareerScenarioPart::SP_4A_WEEK4) \
	op(ECareerScenarioPart::SP_4B_WEEK1) \
	op(ECareerScenarioPart::SP_4B_WEEK2) \
	op(ECareerScenarioPart::SP_4B_WEEK3) \
	op(ECareerScenarioPart::SP_4B_WEEK4) \
	op(ECareerScenarioPart::SP_4C_WEEK1) \
	op(ECareerScenarioPart::SP_4C_WEEK2) \
	op(ECareerScenarioPart::SP_4C_WEEK3) \
	op(ECareerScenarioPart::SP_4C_WEEK4) \
	op(ECareerScenarioPart::SP_ENDING) \
	op(ECareerScenarioPart::SP_1C_WEEK4_D) \
	op(ECareerScenarioPart::SP_2B_WEEK4_A) \
	op(ECareerScenarioPart::SP_2B_WEEK4_B) \
	op(ECareerScenarioPart::SP_3C_WEEK1_A) \
	op(ECareerScenarioPart::SP_3C_WEEK1_B) \
	op(ECareerScenarioPart::SP_4B_WEEK4_A) \
	op(ECareerScenarioPart::SP_4C_WEEK1_A) \
	op(ECareerScenarioPart::SP_4C_WEEK1_B) \
	op(ECareerScenarioPart::SP_4C_WEEK1_C) \
	op(ECareerScenarioPart::SP_4C_WEEK2_A) \
	op(ECareerScenarioPart::SP_4C_WEEK2_B) \
	op(ECareerScenarioPart::SP_4C_WEEK2_C) \
	op(ECareerScenarioPart::SP_4C_WEEK4_A) \
	op(ECareerScenarioPart::SP_4C_WEEK4_B) \
	op(ECareerScenarioPart::SP_4C_WEEK4_C) \
	op(ECareerScenarioPart::DARK_SINGLE) \
	op(ECareerScenarioPart::DARK_TAG) \
	op(ECareerScenarioPart::DARK_3WAY) \
	op(ECareerScenarioPart::DARK_4WAY) \
	op(ECareerScenarioPart::RAMPAGE_SINGLE) \
	op(ECareerScenarioPart::RAMPAGE_TAG) \
	op(ECareerScenarioPart::RAMPAGE_3WAY) \
	op(ECareerScenarioPart::RAMPAGE_4WAY) \
	op(ECareerScenarioPart::RAMPAGE_SINGLE_TBS) \
	op(ECareerScenarioPart::RAMPAGE_SINGLE_LADDER_TBS) 

enum class ECareerScenarioPart : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerScenarioPart>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
