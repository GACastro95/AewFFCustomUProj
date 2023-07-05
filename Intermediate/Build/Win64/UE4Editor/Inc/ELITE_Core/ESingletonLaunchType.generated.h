// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_ESingletonLaunchType_generated_h
#error "ESingletonLaunchType.generated.h already included, missing '#pragma once' in ESingletonLaunchType.h"
#endif
#define ELITE_CORE_ESingletonLaunchType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_ESingletonLaunchType_h


#define FOREACH_ENUM_ESINGLETONLAUNCHTYPE(op) \
	op(ESingletonLaunchType::GameOnly) \
	op(ESingletonLaunchType::AnyTime) \
	op(ESingletonLaunchType::Manual) 

enum class ESingletonLaunchType : uint8;
template<> ELITE_CORE_API UEnum* StaticEnum<ESingletonLaunchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
