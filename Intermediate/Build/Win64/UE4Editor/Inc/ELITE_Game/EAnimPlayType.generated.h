// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EAnimPlayType_generated_h
#error "EAnimPlayType.generated.h already included, missing '#pragma once' in EAnimPlayType.h"
#endif
#define ELITE_GAME_EAnimPlayType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EAnimPlayType_h


#define FOREACH_ENUM_EANIMPLAYTYPE(op) \
	op(EAnimPlayType::OneShot) \
	op(EAnimPlayType::Start) \
	op(EAnimPlayType::Loop) \
	op(EAnimPlayType::End) 

enum class EAnimPlayType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EAnimPlayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
