// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELApplicationStatus : uint8;
#ifdef ABP_200508_ApplicationStatusChangedDelegate_generated_h
#error "ApplicationStatusChangedDelegate.generated.h already included, missing '#pragma once' in ApplicationStatusChangedDelegate.h"
#endif
#define ABP_200508_ApplicationStatusChangedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ApplicationStatusChangedDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventApplicationStatusChanged_Parms \
{ \
	EELApplicationStatus AppStatus; \
}; \
static inline void FApplicationStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& ApplicationStatusChanged, EELApplicationStatus AppStatus) \
{ \
	_Script_ABP_200508_eventApplicationStatusChanged_Parms Parms; \
	Parms.AppStatus=AppStatus; \
	ApplicationStatusChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ApplicationStatusChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
