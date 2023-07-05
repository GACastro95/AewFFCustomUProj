// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSFallReason_generated_h
#error "ESSFallReason.generated.h already included, missing '#pragma once' in ESSFallReason.h"
#endif
#define ABP_200508_ESSFallReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSFallReason_h


#define FOREACH_ENUM_ESSFALLREASON(op) \
	op(ESSFallReason::None) \
	op(ESSFallReason::Fall) \
	op(ESSFallReason::Jump) \
	op(ESSFallReason::Damage) \
	op(ESSFallReason::Max) 

enum class ESSFallReason : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSFallReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
