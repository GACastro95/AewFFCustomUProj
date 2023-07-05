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
#ifdef ABP_200508_MachMakeEvent_FailedDelegate_generated_h
#error "MachMakeEvent_FailedDelegate.generated.h already included, missing '#pragma once' in MachMakeEvent_FailedDelegate.h"
#endif
#define ABP_200508_MachMakeEvent_FailedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MachMakeEvent_FailedDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventMachMakeEvent_Failed_Parms \
{ \
	EGameLiftMatchMakeState nowState; \
	EMatchMakeExecuteType callType; \
	FString errorMsg; \
}; \
static inline void FMachMakeEvent_Failed_DelegateWrapper(const FMulticastScriptDelegate& MachMakeEvent_Failed, EGameLiftMatchMakeState const& nowState, EMatchMakeExecuteType const& callType, const FString& errorMsg) \
{ \
	_Script_ABP_200508_eventMachMakeEvent_Failed_Parms Parms; \
	Parms.nowState=nowState; \
	Parms.callType=callType; \
	Parms.errorMsg=errorMsg; \
	MachMakeEvent_Failed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MachMakeEvent_FailedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
