// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSModeDataType : uint8;
#ifdef ABP_200508_SSGameDataUpdateEventDelegate_generated_h
#error "SSGameDataUpdateEventDelegate.generated.h already included, missing '#pragma once' in SSGameDataUpdateEventDelegate.h"
#endif
#define ABP_200508_SSGameDataUpdateEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SSGameDataUpdateEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventSSGameDataUpdateEvent_Parms \
{ \
	ESSModeDataType updateDataType; \
}; \
static inline void FSSGameDataUpdateEvent_DelegateWrapper(const FMulticastScriptDelegate& SSGameDataUpdateEvent, const ESSModeDataType updateDataType) \
{ \
	_Script_ABP_200508_eventSSGameDataUpdateEvent_Parms Parms; \
	Parms.updateDataType=updateDataType; \
	SSGameDataUpdateEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SSGameDataUpdateEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
