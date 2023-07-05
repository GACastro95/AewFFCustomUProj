// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_ChangeWrestlerDelegate_generated_h
#error "ChangeWrestlerDelegate.generated.h already included, missing '#pragma once' in ChangeWrestlerDelegate.h"
#endif
#define ELITE_ChangeWrestlerDelegate_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ChangeWrestlerDelegate_h_5_DELEGATE \
struct _Script_ELITE_eventChangeWrestler_Parms \
{ \
	int32 WrestlerID; \
	int32 WrestlerIndex; \
	int32 CostumeNo; \
	bool EntCostume; \
}; \
static inline void FChangeWrestler_DelegateWrapper(const FMulticastScriptDelegate& ChangeWrestler, int32 WrestlerID, int32 WrestlerIndex, int32 CostumeNo, bool EntCostume) \
{ \
	_Script_ELITE_eventChangeWrestler_Parms Parms; \
	Parms.WrestlerID=WrestlerID; \
	Parms.WrestlerIndex=WrestlerIndex; \
	Parms.CostumeNo=CostumeNo; \
	Parms.EntCostume=EntCostume ? true : false; \
	ChangeWrestler.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ChangeWrestlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
