// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EResultTallyState_generated_h
#error "EResultTallyState.generated.h already included, missing '#pragma once' in EResultTallyState.h"
#endif
#define ABP_200508_EResultTallyState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EResultTallyState_h


#define FOREACH_ENUM_ERESULTTALLYSTATE(op) \
	op(EResultTallyState::EResultTally_None) \
	op(EResultTallyState::EResultTally_Get) \
	op(EResultTallyState::EResultTally_Success) \
	op(EResultTallyState::EResultTally_Failed) \
	op(EResultTallyState::EResultTally_Skip) \
	op(EResultTallyState::EResultTally_NotLogin) 

enum class EResultTallyState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EResultTallyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
