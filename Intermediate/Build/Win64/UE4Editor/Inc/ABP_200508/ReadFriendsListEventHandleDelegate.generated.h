// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ReadFriendsListEventHandleDelegate_generated_h
#error "ReadFriendsListEventHandleDelegate.generated.h already included, missing '#pragma once' in ReadFriendsListEventHandleDelegate.h"
#endif
#define ABP_200508_ReadFriendsListEventHandleDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ReadFriendsListEventHandleDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventReadFriendsListEventHandle_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FReadFriendsListEventHandle_DelegateWrapper(const FMulticastScriptDelegate& ReadFriendsListEventHandle, bool bWasSuccessful) \
{ \
	_Script_ABP_200508_eventReadFriendsListEventHandle_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	ReadFriendsListEventHandle.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ReadFriendsListEventHandleDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
