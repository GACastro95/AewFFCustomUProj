// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSActionTransitableCondition_generated_h
#error "ESSActionTransitableCondition.generated.h already included, missing '#pragma once' in ESSActionTransitableCondition.h"
#endif
#define ABP_200508_ESSActionTransitableCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSActionTransitableCondition_h


#define FOREACH_ENUM_ESSACTIONTRANSITABLECONDITION(op) \
	op(ESSActionTransitableCondition::None) \
	op(ESSActionTransitableCondition::Idle) \
	op(ESSActionTransitableCondition::Action) \
	op(ESSActionTransitableCondition::ActionCancel) \
	op(ESSActionTransitableCondition::Max) 

enum class ESSActionTransitableCondition : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSActionTransitableCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
