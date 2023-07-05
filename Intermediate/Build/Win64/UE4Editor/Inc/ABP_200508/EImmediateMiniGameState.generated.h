// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EImmediateMiniGameState_generated_h
#error "EImmediateMiniGameState.generated.h already included, missing '#pragma once' in EImmediateMiniGameState.h"
#endif
#define ABP_200508_EImmediateMiniGameState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EImmediateMiniGameState_h


#define FOREACH_ENUM_EIMMEDIATEMINIGAMESTATE(op) \
	op(EImmediateMiniGameState::None) \
	op(EImmediateMiniGameState::HomeRunDerby_SkipButter) \
	op(EImmediateMiniGameState::HomeRunDerby_SkipToResult) \
	op(EImmediateMiniGameState::HomeRunDerby_SkipToNextInning) \
	op(EImmediateMiniGameState::ObjectCount_ChangeCamera) \
	op(EImmediateMiniGameState::MiniGame_Localize) \
	op(EImmediateMiniGameState::MiniGame_Restart) \
	op(EImmediateMiniGameState::MiniGame_SkipToResult) \
	op(EImmediateMiniGameState::MiniGame_Pause) 

enum class EImmediateMiniGameState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EImmediateMiniGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
