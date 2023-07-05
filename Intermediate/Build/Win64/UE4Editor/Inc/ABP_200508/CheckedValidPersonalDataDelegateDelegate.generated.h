// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_CheckedValidPersonalDataDelegateDelegate_generated_h
#error "CheckedValidPersonalDataDelegateDelegate.generated.h already included, missing '#pragma once' in CheckedValidPersonalDataDelegateDelegate.h"
#endif
#define ABP_200508_CheckedValidPersonalDataDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CheckedValidPersonalDataDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventCheckedValidPersonalDataDelegate_Parms \
{ \
	bool ValidParam; \
}; \
static inline void FCheckedValidPersonalDataDelegate_DelegateWrapper(const FScriptDelegate& CheckedValidPersonalDataDelegate, bool ValidParam) \
{ \
	_Script_ABP_200508_eventCheckedValidPersonalDataDelegate_Parms Parms; \
	Parms.ValidParam=ValidParam ? true : false; \
	CheckedValidPersonalDataDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CheckedValidPersonalDataDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
