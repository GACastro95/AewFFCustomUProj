// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EMainMenuState_generated_h
#error "EMainMenuState.generated.h already included, missing '#pragma once' in EMainMenuState.h"
#endif
#define ABP_200508_EMainMenuState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EMainMenuState_h


#define FOREACH_ENUM_EMAINMENUSTATE(op) \
	op(EMainMenuState::EMainMenuState_Start) \
	op(EMainMenuState::EMainMenuState_PlayNetwork) \
	op(EMainMenuState::EMainMenuState_RecoveryData) \
	op(EMainMenuState::EMainMenuState_Setup) \
	op(EMainMenuState::EMainMenuState_Error) \
	op(EMainMenuState::EMainMenuState_Login) \
	op(EMainMenuState::EMainMenuState_Menu) \
	op(EMainMenuState::EMainMenuState_End) 

enum class EMainMenuState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EMainMenuState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
