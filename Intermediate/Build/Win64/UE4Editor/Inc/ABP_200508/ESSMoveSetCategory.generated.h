// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSMoveSetCategory_generated_h
#error "ESSMoveSetCategory.generated.h already included, missing '#pragma once' in ESSMoveSetCategory.h"
#endif
#define ABP_200508_ESSMoveSetCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSMoveSetCategory_h


#define FOREACH_ENUM_ESSMOVESETCATEGORY(op) \
	op(ESSMoveSetCategory::None) \
	op(ESSMoveSetCategory::Strike) \
	op(ESSMoveSetCategory::Grapple) \
	op(ESSMoveSetCategory::HighFly) \
	op(ESSMoveSetCategory::Weapon) 

enum class ESSMoveSetCategory : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSMoveSetCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
