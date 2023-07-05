// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSLobbyMiniGameSteps_generated_h
#error "EELEOSLobbyMiniGameSteps.generated.h already included, missing '#pragma once' in EELEOSLobbyMiniGameSteps.h"
#endif
#define ABP_200508_EELEOSLobbyMiniGameSteps_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSLobbyMiniGameSteps_h


#define FOREACH_ENUM_EELEOSLOBBYMINIGAMESTEPS(op) \
	op(EELEOSLobbyMiniGameSteps::None) \
	op(EELEOSLobbyMiniGameSteps::Setup_WaitForReceiveMiniGameInfo) \
	op(EELEOSLobbyMiniGameSteps::Setup_End) \
	op(EELEOSLobbyMiniGameSteps::Select_Start) \
	op(EELEOSLobbyMiniGameSteps::Select_End) 

enum class EELEOSLobbyMiniGameSteps : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSLobbyMiniGameSteps>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
