// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAutoMatch_generated_h
#error "ESSAutoMatch.generated.h already included, missing '#pragma once' in ESSAutoMatch.h"
#endif
#define ABP_200508_ESSAutoMatch_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAutoMatch_h


#define FOREACH_ENUM_ESSAUTOMATCH(op) \
	op(ESSAutoMatch::None) \
	op(ESSAutoMatch::StartOnly) \
	op(ESSAutoMatch::StartAndErrorSkip) \
	op(ESSAutoMatch::Max) 

enum class ESSAutoMatch : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAutoMatch>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
