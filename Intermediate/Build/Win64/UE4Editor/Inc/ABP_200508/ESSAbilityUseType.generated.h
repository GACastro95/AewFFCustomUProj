// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAbilityUseType_generated_h
#error "ESSAbilityUseType.generated.h already included, missing '#pragma once' in ESSAbilityUseType.h"
#endif
#define ABP_200508_ESSAbilityUseType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAbilityUseType_h


#define FOREACH_ENUM_ESSABILITYUSETYPE(op) \
	op(ESSAbilityUseType::Passive) \
	op(ESSAbilityUseType::Active) \
	op(ESSAbilityUseType::Auto) \
	op(ESSAbilityUseType::ActiveWhenKo) 

enum class ESSAbilityUseType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAbilityUseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
