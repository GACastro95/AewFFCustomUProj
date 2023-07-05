// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameLiftMatchMakeState : uint8;
enum class EMatchMakeExecuteType : uint8;
struct FMatchMakeSystemData;
#ifdef ABP_200508_MachMakeEvent_SuccessDelegate_generated_h
#error "MachMakeEvent_SuccessDelegate.generated.h already included, missing '#pragma once' in MachMakeEvent_SuccessDelegate.h"
#endif
#define ABP_200508_MachMakeEvent_SuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MachMakeEvent_SuccessDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventMachMakeEvent_Success_Parms \
{ \
	EGameLiftMatchMakeState nowState; \
	EMatchMakeExecuteType callType; \
	FMatchMakeSystemData matchmake; \
}; \
static inline void FMachMakeEvent_Success_DelegateWrapper(const FMulticastScriptDelegate& MachMakeEvent_Success, EGameLiftMatchMakeState const& nowState, EMatchMakeExecuteType const& callType, FMatchMakeSystemData const& matchmake) \
{ \
	_Script_ABP_200508_eventMachMakeEvent_Success_Parms Parms; \
	Parms.nowState=nowState; \
	Parms.callType=callType; \
	Parms.matchmake=matchmake; \
	MachMakeEvent_Success.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MachMakeEvent_SuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
