// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class yEnInputKey : uint32;
class APlayerController;
#ifdef ABP_200508_InGameInputEventDelegate_generated_h
#error "InGameInputEventDelegate.generated.h already included, missing '#pragma once' in InGameInputEventDelegate.h"
#endif
#define ABP_200508_InGameInputEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_InGameInputEventDelegate_h_9_DELEGATE \
struct _Script_ABP_200508_eventInGameInputEvent_Parms \
{ \
	yEnInputKey InputKey; \
	TEnumAsByte<EInputEvent> KeyEvent; \
	APlayerController* PlayerController; \
}; \
static inline void FInGameInputEvent_DelegateWrapper(const FMulticastScriptDelegate& InGameInputEvent, yEnInputKey InputKey, EInputEvent KeyEvent, APlayerController* PlayerController) \
{ \
	_Script_ABP_200508_eventInGameInputEvent_Parms Parms; \
	Parms.InputKey=InputKey; \
	Parms.KeyEvent=KeyEvent; \
	Parms.PlayerController=PlayerController; \
	InGameInputEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_InGameInputEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
