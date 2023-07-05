// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
class UELEOSLobbyMiniGameOwnerSelectInfo;
#ifdef ABP_200508_OnMiniGameOwnerSelectInfoDelegate_generated_h
#error "OnMiniGameOwnerSelectInfoDelegate.generated.h already included, missing '#pragma once' in OnMiniGameOwnerSelectInfoDelegate.h"
#endif
#define ABP_200508_OnMiniGameOwnerSelectInfoDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnMiniGameOwnerSelectInfoDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventOnMiniGameOwnerSelectInfo_Parms \
{ \
	UEOSUserBase* Owner; \
	UELEOSLobbyMiniGameOwnerSelectInfo* Info; \
}; \
static inline void FOnMiniGameOwnerSelectInfo_DelegateWrapper(const FScriptDelegate& OnMiniGameOwnerSelectInfo, UEOSUserBase* Owner, UELEOSLobbyMiniGameOwnerSelectInfo* Info) \
{ \
	_Script_ABP_200508_eventOnMiniGameOwnerSelectInfo_Parms Parms; \
	Parms.Owner=Owner; \
	Parms.Info=Info; \
	OnMiniGameOwnerSelectInfo.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnMiniGameOwnerSelectInfoDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
