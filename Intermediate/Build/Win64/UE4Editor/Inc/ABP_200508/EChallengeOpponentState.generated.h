// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EChallengeOpponentState_generated_h
#error "EChallengeOpponentState.generated.h already included, missing '#pragma once' in EChallengeOpponentState.h"
#endif
#define ABP_200508_EChallengeOpponentState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EChallengeOpponentState_h


#define FOREACH_ENUM_ECHALLENGEOPPONENTSTATE(op) \
	op(EChallengeOpponentState::None) \
	op(EChallengeOpponentState::CPU) \
	op(EChallengeOpponentState::LocalUser) \
	op(EChallengeOpponentState::OnlineUser) 

enum class EChallengeOpponentState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EChallengeOpponentState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
