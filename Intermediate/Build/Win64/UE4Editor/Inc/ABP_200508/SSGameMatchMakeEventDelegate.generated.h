// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class eSSGameMatchMakeState : uint8;
#ifdef ABP_200508_SSGameMatchMakeEventDelegate_generated_h
#error "SSGameMatchMakeEventDelegate.generated.h already included, missing '#pragma once' in SSGameMatchMakeEventDelegate.h"
#endif
#define ABP_200508_SSGameMatchMakeEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SSGameMatchMakeEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventSSGameMatchMakeEvent_Parms \
{ \
	eSSGameMatchMakeState resultType; \
}; \
static inline void FSSGameMatchMakeEvent_DelegateWrapper(const FMulticastScriptDelegate& SSGameMatchMakeEvent, eSSGameMatchMakeState resultType) \
{ \
	_Script_ABP_200508_eventSSGameMatchMakeEvent_Parms Parms; \
	Parms.resultType=resultType; \
	SSGameMatchMakeEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SSGameMatchMakeEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
