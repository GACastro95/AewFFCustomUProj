// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangedInputDeviceDelegate_generated_h
#error "ChangedInputDeviceDelegate.generated.h already included, missing '#pragma once' in ChangedInputDeviceDelegate.h"
#endif
#define ABP_200508_ChangedInputDeviceDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangedInputDeviceDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangedInputDevice_Parms \
{ \
	bool Connected; \
	int32 ControllerId; \
}; \
static inline void FChangedInputDevice_DelegateWrapper(const FMulticastScriptDelegate& ChangedInputDevice, bool Connected, int32 ControllerId) \
{ \
	_Script_ABP_200508_eventChangedInputDevice_Parms Parms; \
	Parms.Connected=Connected ? true : false; \
	Parms.ControllerId=ControllerId; \
	ChangedInputDevice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangedInputDeviceDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
