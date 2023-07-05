// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EReserveReversalType_generated_h
#error "EReserveReversalType.generated.h already included, missing '#pragma once' in EReserveReversalType.h"
#endif
#define ELITE_GAME_EReserveReversalType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EReserveReversalType_h


#define FOREACH_ENUM_ERESERVEREVERSALTYPE(op) \
	op(EReserveReversalType::None) \
	op(EReserveReversalType::Strike) \
	op(EReserveReversalType::Grapple) \
	op(EReserveReversalType::Special) \
	op(EReserveReversalType::RS_Up) \
	op(EReserveReversalType::RS_Down) \
	op(EReserveReversalType::RS_Left) \
	op(EReserveReversalType::RS_Right) \
	op(EReserveReversalType::Kick) \
	op(EReserveReversalType::Strike_RandomChoiceFailed) \
	op(EReserveReversalType::Grapple_RandomChoiceFailed) 

enum class EReserveReversalType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EReserveReversalType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
