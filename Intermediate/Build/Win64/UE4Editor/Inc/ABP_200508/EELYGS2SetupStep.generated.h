// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELYGS2SetupStep_generated_h
#error "EELYGS2SetupStep.generated.h already included, missing '#pragma once' in EELYGS2SetupStep.h"
#endif
#define ABP_200508_EELYGS2SetupStep_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELYGS2SetupStep_h


#define FOREACH_ENUM_EELYGS2SETUPSTEP(op) \
	op(EELYGS2SetupStep::None) \
	op(EELYGS2SetupStep::DownloadedServerList) \
	op(EELYGS2SetupStep::RequestPing) \
	op(EELYGS2SetupStep::Ready) 

enum class EELYGS2SetupStep : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELYGS2SetupStep>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
