// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_EnPreviewInputMode_generated_h
#error "EnPreviewInputMode.generated.h already included, missing '#pragma once' in EnPreviewInputMode.h"
#endif
#define ELITE_EnPreviewInputMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_EnPreviewInputMode_h


#define FOREACH_ENUM_ENPREVIEWINPUTMODE(op) \
	op(EnPreviewInputMode::InputEnabled) \
	op(EnPreviewInputMode::KeyboardNavigationEnabled) \
	op(EnPreviewInputMode::GamepadNavigationEnabled) \
	op(EnPreviewInputMode::KeyboardInputShared) \
	op(EnPreviewInputMode::GamepadInputShared) \
	op(EnPreviewInputMode::MouseInputShared) 

enum class EnPreviewInputMode : uint8;
template<> ELITE_API UEnum* StaticEnum<EnPreviewInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
