// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnCanPlayOnlinePrivilegeDelegate_generated_h
#error "OnCanPlayOnlinePrivilegeDelegate.generated.h already included, missing '#pragma once' in OnCanPlayOnlinePrivilegeDelegate.h"
#endif
#define ABP_200508_OnCanPlayOnlinePrivilegeDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnCanPlayOnlinePrivilegeDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnCanPlayOnlinePrivilege_Parms \
{ \
	bool IsCanPlayOnline; \
}; \
static inline void FOnCanPlayOnlinePrivilege_DelegateWrapper(const FScriptDelegate& OnCanPlayOnlinePrivilege, bool IsCanPlayOnline) \
{ \
	_Script_ABP_200508_eventOnCanPlayOnlinePrivilege_Parms Parms; \
	Parms.IsCanPlayOnline=IsCanPlayOnline ? true : false; \
	OnCanPlayOnlinePrivilege.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnCanPlayOnlinePrivilegeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
