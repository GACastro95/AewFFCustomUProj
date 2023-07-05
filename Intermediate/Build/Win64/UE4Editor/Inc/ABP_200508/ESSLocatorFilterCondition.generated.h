// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSLocatorFilterCondition_generated_h
#error "ESSLocatorFilterCondition.generated.h already included, missing '#pragma once' in ESSLocatorFilterCondition.h"
#endif
#define ABP_200508_ESSLocatorFilterCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSLocatorFilterCondition_h


#define FOREACH_ENUM_ESSLOCATORFILTERCONDITION(op) \
	op(ESSLocatorFilterCondition::None) \
	op(ESSLocatorFilterCondition::SafeArea) \
	op(ESSLocatorFilterCondition::SafeAreaAndNear) \
	op(ESSLocatorFilterCondition::NearSafeArea) \
	op(ESSLocatorFilterCondition::AnnounceSafeArea) \
	op(ESSLocatorFilterCondition::DamageArea) 

enum class ESSLocatorFilterCondition : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSLocatorFilterCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
