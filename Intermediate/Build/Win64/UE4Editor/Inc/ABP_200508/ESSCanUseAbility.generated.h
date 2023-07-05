// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSCanUseAbility_generated_h
#error "ESSCanUseAbility.generated.h already included, missing '#pragma once' in ESSCanUseAbility.h"
#endif
#define ABP_200508_ESSCanUseAbility_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSCanUseAbility_h


#define FOREACH_ENUM_ESSCANUSEABILITY(op) \
	op(ESSCanUseAbility::CanUse) \
	op(ESSCanUseAbility::CanNotUse_Empty) \
	op(ESSCanUseAbility::CanNotUse_CoolTime) \
	op(ESSCanUseAbility::CanNotUse_State) \
	op(ESSCanUseAbility::CanNotUse_Passive) \
	op(ESSCanUseAbility::CanNotUse_Using) \
	op(ESSCanUseAbility::CanNotUse_Other) 

enum class ESSCanUseAbility : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSCanUseAbility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
