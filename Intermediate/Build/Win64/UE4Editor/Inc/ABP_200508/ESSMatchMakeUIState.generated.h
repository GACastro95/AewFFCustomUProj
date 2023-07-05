// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSMatchMakeUIState_generated_h
#error "ESSMatchMakeUIState.generated.h already included, missing '#pragma once' in ESSMatchMakeUIState.h"
#endif
#define ABP_200508_ESSMatchMakeUIState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSMatchMakeUIState_h


#define FOREACH_ENUM_ESSMATCHMAKEUISTATE(op) \
	op(ESSMatchMakeUIState::Default) \
	op(ESSMatchMakeUIState::Matching) \
	op(ESSMatchMakeUIState::MatchingWithCancel) \
	op(ESSMatchMakeUIState::Canceling) \
	op(ESSMatchMakeUIState::ConnectToMatch) 

enum class ESSMatchMakeUIState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSMatchMakeUIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
