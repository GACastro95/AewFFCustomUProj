// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnScrollMenuDelegate_generated_h
#error "OnScrollMenuDelegate.generated.h already included, missing '#pragma once' in OnScrollMenuDelegate.h"
#endif
#define ABP_200508_OnScrollMenuDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnScrollMenuDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnScrollMenu_Parms \
{ \
	int32 Offset; \
}; \
static inline void FOnScrollMenu_DelegateWrapper(const FMulticastScriptDelegate& OnScrollMenu, int32 Offset) \
{ \
	_Script_ABP_200508_eventOnScrollMenu_Parms Parms; \
	Parms.Offset=Offset; \
	OnScrollMenu.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnScrollMenuDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
