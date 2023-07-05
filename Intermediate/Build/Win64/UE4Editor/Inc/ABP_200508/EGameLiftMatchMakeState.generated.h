// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EGameLiftMatchMakeState_generated_h
#error "EGameLiftMatchMakeState.generated.h already included, missing '#pragma once' in EGameLiftMatchMakeState.h"
#endif
#define ABP_200508_EGameLiftMatchMakeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EGameLiftMatchMakeState_h


#define FOREACH_ENUM_EGAMELIFTMATCHMAKESTATE(op) \
	op(EGameLiftMatchMakeState::eGameLiftMatchMakeState_Begin) \
	op(EGameLiftMatchMakeState::eGameLiftMatchMakeState_SearchSession) \
	op(EGameLiftMatchMakeState::eGameLiftMatchMakeState_NewSession) \
	op(EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinGameSession) \
	op(EGameLiftMatchMakeState::eGameLiftMatchMakeState_JoinPlayerSession) \
	op(EGameLiftMatchMakeState::eGameLiftMatchMakeState_SessionStart) \
	op(EGameLiftMatchMakeState::eGameLiftMatchMakeState_RandomMatching) 

enum class EGameLiftMatchMakeState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EGameLiftMatchMakeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
