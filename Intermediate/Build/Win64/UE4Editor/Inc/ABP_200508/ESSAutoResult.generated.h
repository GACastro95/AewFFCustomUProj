// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAutoResult_generated_h
#error "ESSAutoResult.generated.h already included, missing '#pragma once' in ESSAutoResult.h"
#endif
#define ABP_200508_ESSAutoResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAutoResult_h


#define FOREACH_ENUM_ESSAUTORESULT(op) \
	op(ESSAutoResult::None) \
	op(ESSAutoResult::SkipAll) \
	op(ESSAutoResult::SkipResultOnly) \
	op(ESSAutoResult::Max) 

enum class ESSAutoResult : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAutoResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
