// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ABP_200508_OnTransderOperateInputDelegate_generated_h
#error "OnTransderOperateInputDelegate.generated.h already included, missing '#pragma once' in OnTransderOperateInputDelegate.h"
#endif
#define ABP_200508_OnTransderOperateInputDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnTransderOperateInputDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnTransderOperateInput_Parms \
{ \
	APawn* ApplyPawn; \
}; \
static inline void FOnTransderOperateInput_DelegateWrapper(const FMulticastScriptDelegate& OnTransderOperateInput, APawn* ApplyPawn) \
{ \
	_Script_ABP_200508_eventOnTransderOperateInput_Parms Parms; \
	Parms.ApplyPawn=ApplyPawn; \
	OnTransderOperateInput.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnTransderOperateInputDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
