// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_UpdatedBattlePassPointDelegateDelegate_generated_h
#error "UpdatedBattlePassPointDelegateDelegate.generated.h already included, missing '#pragma once' in UpdatedBattlePassPointDelegateDelegate.h"
#endif
#define ABP_200508_UpdatedBattlePassPointDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_UpdatedBattlePassPointDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventUpdatedBattlePassPointDelegate_Parms \
{ \
	bool Successed; \
}; \
static inline void FUpdatedBattlePassPointDelegate_DelegateWrapper(const FScriptDelegate& UpdatedBattlePassPointDelegate, bool Successed) \
{ \
	_Script_ABP_200508_eventUpdatedBattlePassPointDelegate_Parms Parms; \
	Parms.Successed=Successed ? true : false; \
	UpdatedBattlePassPointDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_UpdatedBattlePassPointDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
