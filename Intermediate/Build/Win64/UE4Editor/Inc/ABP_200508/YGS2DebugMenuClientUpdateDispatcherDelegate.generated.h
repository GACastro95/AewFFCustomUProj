// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYGS2DebugMenuClientStep : uint8;
struct FYGS2CommandData;
class UYGS2DebugMenuClient;
#ifdef ABP_200508_YGS2DebugMenuClientUpdateDispatcherDelegate_generated_h
#error "YGS2DebugMenuClientUpdateDispatcherDelegate.generated.h already included, missing '#pragma once' in YGS2DebugMenuClientUpdateDispatcherDelegate.h"
#endif
#define ABP_200508_YGS2DebugMenuClientUpdateDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuClientUpdateDispatcherDelegate_h_9_DELEGATE \
struct _Script_ABP_200508_eventYGS2DebugMenuClientUpdateDispatcher_Parms \
{ \
	EYGS2DebugMenuClientStep YGS2DebugMenuClientStep; \
	FYGS2CommandData YGS2CommandData; \
	UYGS2DebugMenuClient* YGS2DebugMenuClient; \
}; \
static inline void FYGS2DebugMenuClientUpdateDispatcher_DelegateWrapper(const FMulticastScriptDelegate& YGS2DebugMenuClientUpdateDispatcher, EYGS2DebugMenuClientStep YGS2DebugMenuClientStep, FYGS2CommandData const& YGS2CommandData, UYGS2DebugMenuClient* YGS2DebugMenuClient) \
{ \
	_Script_ABP_200508_eventYGS2DebugMenuClientUpdateDispatcher_Parms Parms; \
	Parms.YGS2DebugMenuClientStep=YGS2DebugMenuClientStep; \
	Parms.YGS2CommandData=YGS2CommandData; \
	Parms.YGS2DebugMenuClient=YGS2DebugMenuClient; \
	YGS2DebugMenuClientUpdateDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_YGS2DebugMenuClientUpdateDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
