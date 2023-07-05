// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_EPlatformType_generated_h
#error "EPlatformType.generated.h already included, missing '#pragma once' in EPlatformType.h"
#endif
#define ELITE_CORE_EPlatformType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_EPlatformType_h


#define FOREACH_ENUM_EPLATFORMTYPE(op) \
	op(EPlatformType::PLATFORM_TYPE_WINDOWS) \
	op(EPlatformType::PLATFORM_TYPE_PS4) \
	op(EPlatformType::PLATFORM_TYPE_PS5) \
	op(EPlatformType::PLATFORM_TYPE_XBOXONE) \
	op(EPlatformType::PLATFORM_TYPE_XBOXSX) \
	op(EPlatformType::PLATFORM_TYPE_SWITCH) \
	op(EPlatformType::PLATFORM_TYPE_STEAM) \
	op(EPlatformType::PLATFORM_TYPE_EPIC) \
	op(EPlatformType::PLATFORM_TYPE_NONE) 

enum class EPlatformType : uint8;
template<> ELITE_CORE_API UEnum* StaticEnum<EPlatformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
