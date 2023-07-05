// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWrestlerID_N : uint8;
struct FGuid;
#ifdef ABP_200508_WrestlerSelectAssetLoadCompleteDelegateDelegate_generated_h
#error "WrestlerSelectAssetLoadCompleteDelegateDelegate.generated.h already included, missing '#pragma once' in WrestlerSelectAssetLoadCompleteDelegateDelegate.h"
#endif
#define ABP_200508_WrestlerSelectAssetLoadCompleteDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerSelectAssetLoadCompleteDelegateDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventWrestlerSelectAssetLoadCompleteDelegate_Parms \
{ \
	int32 PositionIndex; \
	EWrestlerID_N WrestlerID; \
	FGuid WrestlerUID; \
	int32 PresetIndex; \
}; \
static inline void FWrestlerSelectAssetLoadCompleteDelegate_DelegateWrapper(const FScriptDelegate& WrestlerSelectAssetLoadCompleteDelegate, int32 PositionIndex, EWrestlerID_N WrestlerID, FGuid WrestlerUID, int32 PresetIndex) \
{ \
	_Script_ABP_200508_eventWrestlerSelectAssetLoadCompleteDelegate_Parms Parms; \
	Parms.PositionIndex=PositionIndex; \
	Parms.WrestlerID=WrestlerID; \
	Parms.WrestlerUID=WrestlerUID; \
	Parms.PresetIndex=PresetIndex; \
	WrestlerSelectAssetLoadCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_WrestlerSelectAssetLoadCompleteDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
