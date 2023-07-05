// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSMainMenuState_generated_h
#error "ESSMainMenuState.generated.h already included, missing '#pragma once' in ESSMainMenuState.h"
#endif
#define ABP_200508_ESSMainMenuState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSMainMenuState_h


#define FOREACH_ENUM_ESSMAINMENUSTATE(op) \
	op(ESSMainMenuState::Initialize) \
	op(ESSMainMenuState::Loading) \
	op(ESSMainMenuState::Login) \
	op(ESSMainMenuState::MenuSetup) \
	op(ESSMainMenuState::Menu) \
	op(ESSMainMenuState::Matching) \
	op(ESSMainMenuState::ReturnToBaseGame) \
	op(ESSMainMenuState::GoToInGame) 

enum class ESSMainMenuState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSMainMenuState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
