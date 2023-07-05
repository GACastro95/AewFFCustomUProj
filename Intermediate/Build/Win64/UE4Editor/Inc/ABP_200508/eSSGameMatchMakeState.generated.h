// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_eSSGameMatchMakeState_generated_h
#error "eSSGameMatchMakeState.generated.h already included, missing '#pragma once' in eSSGameMatchMakeState.h"
#endif
#define ABP_200508_eSSGameMatchMakeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_eSSGameMatchMakeState_h


#define FOREACH_ENUM_ESSGAMEMATCHMAKESTATE(op) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_Stay) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_MatchMake) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_MatchCheck) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_MatchUpdate) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_TimeOut) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_StartCancel) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_Cancel) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_CancelFailed) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_Placing) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_Active) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_Error) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_Restart) \
	op(eSSGameMatchMakeState::eSSGameMatchMakeState_Failed) 

enum class eSSGameMatchMakeState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<eSSGameMatchMakeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
