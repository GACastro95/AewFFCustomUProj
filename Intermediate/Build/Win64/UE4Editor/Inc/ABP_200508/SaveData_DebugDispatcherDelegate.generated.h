// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataDebugEvent : uint8;
class USaveData_DebugBase;
#ifdef ABP_200508_SaveData_DebugDispatcherDelegate_generated_h
#error "SaveData_DebugDispatcherDelegate.generated.h already included, missing '#pragma once' in SaveData_DebugDispatcherDelegate.h"
#endif
#define ABP_200508_SaveData_DebugDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DebugDispatcherDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventSaveData_DebugDispatcher_Parms \
{ \
	ESaveDataDebugEvent SaveDataDebugEvent; \
	USaveData_DebugBase* SaveData_DebugBase; \
}; \
static inline void FSaveData_DebugDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SaveData_DebugDispatcher, ESaveDataDebugEvent SaveDataDebugEvent, USaveData_DebugBase* SaveData_DebugBase) \
{ \
	_Script_ABP_200508_eventSaveData_DebugDispatcher_Parms Parms; \
	Parms.SaveDataDebugEvent=SaveDataDebugEvent; \
	Parms.SaveData_DebugBase=SaveData_DebugBase; \
	SaveData_DebugDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DebugDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
