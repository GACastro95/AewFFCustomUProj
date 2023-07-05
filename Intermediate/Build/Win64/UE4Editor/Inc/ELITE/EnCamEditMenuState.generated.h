// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_EnCamEditMenuState_generated_h
#error "EnCamEditMenuState.generated.h already included, missing '#pragma once' in EnCamEditMenuState.h"
#endif
#define ELITE_EnCamEditMenuState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_EnCamEditMenuState_h


#define FOREACH_ENUM_ENCAMEDITMENUSTATE(op) \
	op(EnCamEditMenuState::SettingList) \
	op(EnCamEditMenuState::ItemList) \
	op(EnCamEditMenuState::TemporarySave) \
	op(EnCamEditMenuState::Purchase) 

enum class EnCamEditMenuState : uint8;
template<> ELITE_API UEnum* StaticEnum<EnCamEditMenuState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
