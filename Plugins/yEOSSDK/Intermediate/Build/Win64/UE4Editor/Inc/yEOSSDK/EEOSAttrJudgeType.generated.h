// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAttrJudgeType_generated_h
#error "EEOSAttrJudgeType.generated.h already included, missing '#pragma once' in EEOSAttrJudgeType.h"
#endif
#define YEOSSDK_EEOSAttrJudgeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAttrJudgeType_h


#define FOREACH_ENUM_EEOSATTRJUDGETYPE(op) \
	op(EEOSAttrJudgeType::Equal) \
	op(EEOSAttrJudgeType::NotEqual) \
	op(EEOSAttrJudgeType::Greater) \
	op(EEOSAttrJudgeType::GreaterEqual) \
	op(EEOSAttrJudgeType::Less) \
	op(EEOSAttrJudgeType::LessEqual) \
	op(EEOSAttrJudgeType::Distance) \
	op(EEOSAttrJudgeType::AnyOf) \
	op(EEOSAttrJudgeType::NotAnyOf) 

enum class EEOSAttrJudgeType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAttrJudgeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
