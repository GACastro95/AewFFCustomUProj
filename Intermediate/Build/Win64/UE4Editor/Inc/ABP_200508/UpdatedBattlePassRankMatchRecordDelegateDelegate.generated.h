// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_UpdatedBattlePassRankMatchRecordDelegateDelegate_generated_h
#error "UpdatedBattlePassRankMatchRecordDelegateDelegate.generated.h already included, missing '#pragma once' in UpdatedBattlePassRankMatchRecordDelegateDelegate.h"
#endif
#define ABP_200508_UpdatedBattlePassRankMatchRecordDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_UpdatedBattlePassRankMatchRecordDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventUpdatedBattlePassRankMatchRecordDelegate_Parms \
{ \
	bool SUcccesed; \
}; \
static inline void FUpdatedBattlePassRankMatchRecordDelegate_DelegateWrapper(const FScriptDelegate& UpdatedBattlePassRankMatchRecordDelegate, bool SUcccesed) \
{ \
	_Script_ABP_200508_eventUpdatedBattlePassRankMatchRecordDelegate_Parms Parms; \
	Parms.SUcccesed=SUcccesed ? true : false; \
	UpdatedBattlePassRankMatchRecordDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_UpdatedBattlePassRankMatchRecordDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
