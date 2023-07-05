// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EUpperBodyBlendCondition_generated_h
#error "EUpperBodyBlendCondition.generated.h already included, missing '#pragma once' in EUpperBodyBlendCondition.h"
#endif
#define ABP_200508_EUpperBodyBlendCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EUpperBodyBlendCondition_h


#define FOREACH_ENUM_EUPPERBODYBLENDCONDITION(op) \
	op(EUpperBodyBlendCondition::CoreHP_Over) \
	op(EUpperBodyBlendCondition::CoreHP_Under) \
	op(EUpperBodyBlendCondition::HeadHP_Over) \
	op(EUpperBodyBlendCondition::HeadHP_Under) \
	op(EUpperBodyBlendCondition::BodyHP_Over) \
	op(EUpperBodyBlendCondition::BodyHP_Under) \
	op(EUpperBodyBlendCondition::LegHP_Over) \
	op(EUpperBodyBlendCondition::LegHP_Under) \
	op(EUpperBodyBlendCondition::ArmHP_Over) \
	op(EUpperBodyBlendCondition::ArmHP_Under) \
	op(EUpperBodyBlendCondition::Momentum_Over) \
	op(EUpperBodyBlendCondition::Momentum_Under) \
	op(EUpperBodyBlendCondition::Momentum_Special) \
	op(EUpperBodyBlendCondition::Arg_Over) \
	op(EUpperBodyBlendCondition::Arg_Under) \
	op(EUpperBodyBlendCondition::SpringBoard) \
	op(EUpperBodyBlendCondition::Fence) \
	op(EUpperBodyBlendCondition::Topecon) \
	op(EUpperBodyBlendCondition::DirectionReverse) 

enum class EUpperBodyBlendCondition : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EUpperBodyBlendCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
