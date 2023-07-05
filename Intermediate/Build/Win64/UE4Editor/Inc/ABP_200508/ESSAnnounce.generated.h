// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAnnounce_generated_h
#error "ESSAnnounce.generated.h already included, missing '#pragma once' in ESSAnnounce.h"
#endif
#define ABP_200508_ESSAnnounce_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAnnounce_h


#define FOREACH_ENUM_ESSANNOUNCE(op) \
	op(ESSAnnounce::None) \
	op(ESSAnnounce::BeforeShrink) \
	op(ESSAnnounce::BeginShrink) \
	op(ESSAnnounce::OutOfSafeArea) \
	op(ESSAnnounce::EnterSafeArea) \
	op(ESSAnnounce::AttentionPlayer) \
	op(ESSAnnounce::Congratulations) \
	op(ESSAnnounce::VictoryRoyale) \
	op(ESSAnnounce::Max) 

enum class ESSAnnounce : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAnnounce>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
