// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangeMenuInputDeviceDelegate_generated_h
#error "ChangeMenuInputDeviceDelegate.generated.h already included, missing '#pragma once' in ChangeMenuInputDeviceDelegate.h"
#endif
#define ABP_200508_ChangeMenuInputDeviceDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangeMenuInputDeviceDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangeMenuInputDevice_Parms \
{ \
	bool IsGamepad; \
}; \
static inline void FChangeMenuInputDevice_DelegateWrapper(const FMulticastScriptDelegate& ChangeMenuInputDevice, bool IsGamepad) \
{ \
	_Script_ABP_200508_eventChangeMenuInputDevice_Parms Parms; \
	Parms.IsGamepad=IsGamepad ? true : false; \
	ChangeMenuInputDevice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangeMenuInputDeviceDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
