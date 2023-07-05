// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnQueryPrivilegeDelegate_generated_h
#error "OnQueryPrivilegeDelegate.generated.h already included, missing '#pragma once' in OnQueryPrivilegeDelegate.h"
#endif
#define ABP_200508_OnQueryPrivilegeDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnQueryPrivilegeDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnQueryPrivilege_Parms \
{ \
	int32 PrivilegeResults; \
}; \
static inline void FOnQueryPrivilege_DelegateWrapper(const FScriptDelegate& OnQueryPrivilege, int32 PrivilegeResults) \
{ \
	_Script_ABP_200508_eventOnQueryPrivilege_Parms Parms; \
	Parms.PrivilegeResults=PrivilegeResults; \
	OnQueryPrivilege.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnQueryPrivilegeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
