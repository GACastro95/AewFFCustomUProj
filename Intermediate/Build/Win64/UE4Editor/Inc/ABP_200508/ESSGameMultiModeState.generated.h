// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSGameMultiModeState_generated_h
#error "ESSGameMultiModeState.generated.h already included, missing '#pragma once' in ESSGameMultiModeState.h"
#endif
#define ABP_200508_ESSGameMultiModeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSGameMultiModeState_h


#define FOREACH_ENUM_ESSGAMEMULTIMODESTATE(op) \
	op(ESSGameMultiModeState::EGameMultiModeState_None) \
	op(ESSGameMultiModeState::EGameMultiModeState_Match) \
	op(ESSGameMultiModeState::EGameMultiModeState_LobbyEnd) \
	op(ESSGameMultiModeState::EGameMultiModeState_Prepare) \
	op(ESSGameMultiModeState::EGameMultiModeState_Game) \
	op(ESSGameMultiModeState::EGameMultiModeState_End) 

enum class ESSGameMultiModeState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSGameMultiModeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
