// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWrestlerSetupParam;
#ifdef ABP_200508_WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate_generated_h
#error "WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate.generated.h already included, missing '#pragma once' in WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate.h"
#endif
#define ABP_200508_WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventWrestlerSelectOnlineAssetLoadCompleteDelegate_Parms \
{ \
	int32 PositionIndex; \
	FWrestlerSetupParam WrestlerSetupParam; \
}; \
static inline void FWrestlerSelectOnlineAssetLoadCompleteDelegate_DelegateWrapper(const FScriptDelegate& WrestlerSelectOnlineAssetLoadCompleteDelegate, int32 PositionIndex, FWrestlerSetupParam WrestlerSetupParam) \
{ \
	_Script_ABP_200508_eventWrestlerSelectOnlineAssetLoadCompleteDelegate_Parms Parms; \
	Parms.PositionIndex=PositionIndex; \
	Parms.WrestlerSetupParam=WrestlerSetupParam; \
	WrestlerSelectOnlineAssetLoadCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
