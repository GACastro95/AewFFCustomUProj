// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_MAPreviewMenuMailCloseDelegateDelegate_generated_h
#error "MAPreviewMenuMailCloseDelegateDelegate.generated.h already included, missing '#pragma once' in MAPreviewMenuMailCloseDelegateDelegate.h"
#endif
#define ELITE_MAPreviewMenuMailCloseDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_MAPreviewMenuMailCloseDelegateDelegate_h_5_DELEGATE \
struct _Script_ELITE_eventMAPreviewMenuMailCloseDelegate_Parms \
{ \
	bool bShow; \
}; \
static inline void FMAPreviewMenuMailCloseDelegate_DelegateWrapper(const FMulticastScriptDelegate& MAPreviewMenuMailCloseDelegate, bool bShow) \
{ \
	_Script_ELITE_eventMAPreviewMenuMailCloseDelegate_Parms Parms; \
	Parms.bShow=bShow ? true : false; \
	MAPreviewMenuMailCloseDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_MAPreviewMenuMailCloseDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
