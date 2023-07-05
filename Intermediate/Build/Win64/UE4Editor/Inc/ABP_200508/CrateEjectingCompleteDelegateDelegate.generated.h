// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_CrateEjectingCompleteDelegateDelegate_generated_h
#error "CrateEjectingCompleteDelegateDelegate.generated.h already included, missing '#pragma once' in CrateEjectingCompleteDelegateDelegate.h"
#endif
#define ABP_200508_CrateEjectingCompleteDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CrateEjectingCompleteDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventCrateEjectingCompleteDelegate_Parms \
{ \
	bool Successed; \
}; \
static inline void FCrateEjectingCompleteDelegate_DelegateWrapper(const FScriptDelegate& CrateEjectingCompleteDelegate, bool Successed) \
{ \
	_Script_ABP_200508_eventCrateEjectingCompleteDelegate_Parms Parms; \
	Parms.Successed=Successed ? true : false; \
	CrateEjectingCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CrateEjectingCompleteDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
