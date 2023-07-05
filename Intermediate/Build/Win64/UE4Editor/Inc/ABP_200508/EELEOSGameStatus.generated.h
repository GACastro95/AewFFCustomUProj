// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSGameStatus_generated_h
#error "EELEOSGameStatus.generated.h already included, missing '#pragma once' in EELEOSGameStatus.h"
#endif
#define ABP_200508_EELEOSGameStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSGameStatus_h


#define FOREACH_ENUM_EELEOSGAMESTATUS(op) \
	op(EELEOSGameStatus::None) \
	op(EELEOSGameStatus::Default) \
	op(EELEOSGameStatus::OnlineLobby) \
	op(EELEOSGameStatus::OnlineMatch) 

enum class EELEOSGameStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSGameStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
