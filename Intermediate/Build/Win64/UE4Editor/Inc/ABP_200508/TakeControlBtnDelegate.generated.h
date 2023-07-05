// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELCharacter_Native;
#ifdef ABP_200508_TakeControlBtnDelegate_generated_h
#error "TakeControlBtnDelegate.generated.h already included, missing '#pragma once' in TakeControlBtnDelegate.h"
#endif
#define ABP_200508_TakeControlBtnDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_TakeControlBtnDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventTakeControlBtn_Parms \
{ \
	const AELCharacter_Native* AtkPlayer; \
}; \
static inline void FTakeControlBtn_DelegateWrapper(const FMulticastScriptDelegate& TakeControlBtn, const AELCharacter_Native* AtkPlayer) \
{ \
	_Script_ABP_200508_eventTakeControlBtn_Parms Parms; \
	Parms.AtkPlayer=AtkPlayer; \
	TakeControlBtn.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_TakeControlBtnDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
