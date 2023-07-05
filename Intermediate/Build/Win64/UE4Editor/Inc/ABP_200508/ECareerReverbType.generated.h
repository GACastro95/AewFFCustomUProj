// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerReverbType_generated_h
#error "ECareerReverbType.generated.h already included, missing '#pragma once' in ECareerReverbType.h"
#endif
#define ABP_200508_ECareerReverbType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerReverbType_h


#define FOREACH_ENUM_ECAREERREVERBTYPE(op) \
	op(ECareerReverbType::Auto) \
	op(ECareerReverbType::SmallRoom) \
	op(ECareerReverbType::LargeRoom) \
	op(ECareerReverbType::MediumHall) \
	op(ECareerReverbType::Restaurant) \
	op(ECareerReverbType::GenericIndoor) \
	op(ECareerReverbType::GenericOutdoor) \
	op(ECareerReverbType::ReverbFromArena) 

enum class ECareerReverbType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerReverbType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
