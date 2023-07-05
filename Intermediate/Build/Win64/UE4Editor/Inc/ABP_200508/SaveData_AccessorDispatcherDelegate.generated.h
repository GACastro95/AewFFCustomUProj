// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataAccessorEvent : uint8;
class USaveData_AccessorBase;
enum class ESaveDataProcResult : uint8;
#ifdef ABP_200508_SaveData_AccessorDispatcherDelegate_generated_h
#error "SaveData_AccessorDispatcherDelegate.generated.h already included, missing '#pragma once' in SaveData_AccessorDispatcherDelegate.h"
#endif
#define ABP_200508_SaveData_AccessorDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorDispatcherDelegate_h_9_DELEGATE \
struct _Script_ABP_200508_eventSaveData_AccessorDispatcher_Parms \
{ \
	ESaveDataAccessorEvent SaveDataAccessorEvent; \
	USaveData_AccessorBase* SaveDataAccessor; \
	ESaveDataProcResult Result; \
}; \
static inline void FSaveData_AccessorDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SaveData_AccessorDispatcher, ESaveDataAccessorEvent SaveDataAccessorEvent, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) \
{ \
	_Script_ABP_200508_eventSaveData_AccessorDispatcher_Parms Parms; \
	Parms.SaveDataAccessorEvent=SaveDataAccessorEvent; \
	Parms.SaveDataAccessor=SaveDataAccessor; \
	Parms.Result=Result; \
	SaveData_AccessorDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
