// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ETrackingGroupType_generated_h
#error "ETrackingGroupType.generated.h already included, missing '#pragma once' in ETrackingGroupType.h"
#endif
#define ELITE_GAME_ETrackingGroupType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ETrackingGroupType_h


#define FOREACH_ENUM_ETRACKINGGROUPTYPE(op) \
	op(ETrackingGroupType::Main) \
	op(ETrackingGroupType::Team) \
	op(ETrackingGroupType::Create) \
	op(ETrackingGroupType::SoundTrack) \
	op(ETrackingGroupType::DLC) \
	op(ETrackingGroupType::Other) 

enum class ETrackingGroupType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ETrackingGroupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
