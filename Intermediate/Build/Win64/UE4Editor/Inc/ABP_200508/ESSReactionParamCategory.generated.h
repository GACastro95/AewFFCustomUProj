// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSReactionParamCategory_generated_h
#error "ESSReactionParamCategory.generated.h already included, missing '#pragma once' in ESSReactionParamCategory.h"
#endif
#define ABP_200508_ESSReactionParamCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSReactionParamCategory_h


#define FOREACH_ENUM_ESSREACTIONPARAMCATEGORY(op) \
	op(ESSReactionParamCategory::KnockBack) \
	op(ESSReactionParamCategory::Blow) \
	op(ESSReactionParamCategory::WallHit) \
	op(ESSReactionParamCategory::WaitSituation) \
	op(ESSReactionParamCategory::WallOver) \
	op(ESSReactionParamCategory::Max) 

enum class ESSReactionParamCategory : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSReactionParamCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
