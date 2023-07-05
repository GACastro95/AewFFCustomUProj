// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EOutGamePanelEventType_generated_h
#error "EOutGamePanelEventType.generated.h already included, missing '#pragma once' in EOutGamePanelEventType.h"
#endif
#define ABP_200508_EOutGamePanelEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOutGamePanelEventType_h


#define FOREACH_ENUM_EOUTGAMEPANELEVENTTYPE(op) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_SETUP) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_OPEN) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_CLOSE) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_PREV) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_NEXT) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_LOAD) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_END) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_FAILED) \
	op(EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_ALL_END) 

enum class EOutGamePanelEventType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EOutGamePanelEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
