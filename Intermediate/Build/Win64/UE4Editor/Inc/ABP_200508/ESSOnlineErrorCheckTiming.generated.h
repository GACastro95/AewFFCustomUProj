// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSOnlineErrorCheckTiming_generated_h
#error "ESSOnlineErrorCheckTiming.generated.h already included, missing '#pragma once' in ESSOnlineErrorCheckTiming.h"
#endif
#define ABP_200508_ESSOnlineErrorCheckTiming_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSOnlineErrorCheckTiming_h


#define FOREACH_ENUM_ESSONLINEERRORCHECKTIMING(op) \
	op(ESSOnlineErrorCheckTiming::None) \
	op(ESSOnlineErrorCheckTiming::EnterSSMainMenu) \
	op(ESSOnlineErrorCheckTiming::StaySSMainMenu) \
	op(ESSOnlineErrorCheckTiming::Matchmaking) \
	op(ESSOnlineErrorCheckTiming::MatchStart) 

enum class ESSOnlineErrorCheckTiming : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSOnlineErrorCheckTiming>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
