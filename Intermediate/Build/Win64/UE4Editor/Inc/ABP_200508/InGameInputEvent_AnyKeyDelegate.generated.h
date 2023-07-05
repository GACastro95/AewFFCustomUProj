// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_InGameInputEvent_AnyKeyDelegate_generated_h
#error "InGameInputEvent_AnyKeyDelegate.generated.h already included, missing '#pragma once' in InGameInputEvent_AnyKeyDelegate.h"
#endif
#define ABP_200508_InGameInputEvent_AnyKeyDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_InGameInputEvent_AnyKeyDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventInGameInputEvent_AnyKey_Parms \
{ \
	TEnumAsByte<EInputEvent> KeyEvent; \
}; \
static inline void FInGameInputEvent_AnyKey_DelegateWrapper(const FMulticastScriptDelegate& InGameInputEvent_AnyKey, EInputEvent KeyEvent) \
{ \
	_Script_ABP_200508_eventInGameInputEvent_AnyKey_Parms Parms; \
	Parms.KeyEvent=KeyEvent; \
	InGameInputEvent_AnyKey.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_InGameInputEvent_AnyKeyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
