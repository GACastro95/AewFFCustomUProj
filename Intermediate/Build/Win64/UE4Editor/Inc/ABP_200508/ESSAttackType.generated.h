// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAttackType_generated_h
#error "ESSAttackType.generated.h already included, missing '#pragma once' in ESSAttackType.h"
#endif
#define ABP_200508_ESSAttackType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAttackType_h


#define FOREACH_ENUM_ESSATTACKTYPE(op) \
	op(ESSAttackType::None) \
	op(ESSAttackType::Strike) \
	op(ESSAttackType::Grapple) \
	op(ESSAttackType::Storm) \
	op(ESSAttackType::Vehicle) \
	op(ESSAttackType::Pushpin) 

enum class ESSAttackType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAttackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
