// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESaveDataDebugEvent_generated_h
#error "ESaveDataDebugEvent.generated.h already included, missing '#pragma once' in ESaveDataDebugEvent.h"
#endif
#define ABP_200508_ESaveDataDebugEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESaveDataDebugEvent_h


#define FOREACH_ENUM_ESAVEDATADEBUGEVENT(op) \
	op(ESaveDataDebugEvent::None) \
	op(ESaveDataDebugEvent::OnClick_Login) \
	op(ESaveDataDebugEvent::OnClick_Logout) 

enum class ESaveDataDebugEvent : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESaveDataDebugEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
