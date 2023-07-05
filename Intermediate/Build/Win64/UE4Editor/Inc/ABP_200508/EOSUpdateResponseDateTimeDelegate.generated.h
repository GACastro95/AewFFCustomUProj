// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef ABP_200508_EOSUpdateResponseDateTimeDelegate_generated_h
#error "EOSUpdateResponseDateTimeDelegate.generated.h already included, missing '#pragma once' in EOSUpdateResponseDateTimeDelegate.h"
#endif
#define ABP_200508_EOSUpdateResponseDateTimeDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSUpdateResponseDateTimeDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventEOSUpdateResponseDateTime_Parms \
{ \
	FDateTime DateTime; \
}; \
static inline void FEOSUpdateResponseDateTime_DelegateWrapper(const FMulticastScriptDelegate& EOSUpdateResponseDateTime, FDateTime DateTime) \
{ \
	_Script_ABP_200508_eventEOSUpdateResponseDateTime_Parms Parms; \
	Parms.DateTime=DateTime; \
	EOSUpdateResponseDateTime.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSUpdateResponseDateTimeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
