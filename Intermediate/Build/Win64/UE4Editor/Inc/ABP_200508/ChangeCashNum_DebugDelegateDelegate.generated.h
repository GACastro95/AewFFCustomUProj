// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangeCashNum_DebugDelegateDelegate_generated_h
#error "ChangeCashNum_DebugDelegateDelegate.generated.h already included, missing '#pragma once' in ChangeCashNum_DebugDelegateDelegate.h"
#endif
#define ABP_200508_ChangeCashNum_DebugDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangeCashNum_DebugDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangeCashNum_DebugDelegate_Parms \
{ \
	int32 ChangeNum; \
}; \
static inline void FChangeCashNum_DebugDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeCashNum_DebugDelegate, int32 ChangeNum) \
{ \
	_Script_ABP_200508_eventChangeCashNum_DebugDelegate_Parms Parms; \
	Parms.ChangeNum=ChangeNum; \
	ChangeCashNum_DebugDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangeCashNum_DebugDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
