// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELEOSLobbyEventType : uint8;
class UEOSUserBase;
class UEOSCommunityInfoBase;
#ifdef ABP_200508_EOSLobbyEvent2Delegate_generated_h
#error "EOSLobbyEvent2Delegate.generated.h already included, missing '#pragma once' in EOSLobbyEvent2Delegate.h"
#endif
#define ABP_200508_EOSLobbyEvent2Delegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyEvent2Delegate_h_9_DELEGATE \
struct _Script_ABP_200508_eventEOSLobbyEvent2_Parms \
{ \
	EELEOSLobbyEventType EventType; \
	UEOSUserBase* _User; \
	UEOSCommunityInfoBase* _CommunityInfoBase; \
}; \
static inline void FEOSLobbyEvent2_DelegateWrapper(const FMulticastScriptDelegate& EOSLobbyEvent2, EELEOSLobbyEventType EventType, UEOSUserBase* _User, UEOSCommunityInfoBase* _CommunityInfoBase) \
{ \
	_Script_ABP_200508_eventEOSLobbyEvent2_Parms Parms; \
	Parms.EventType=EventType; \
	Parms._User=_User; \
	Parms._CommunityInfoBase=_CommunityInfoBase; \
	EOSLobbyEvent2.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyEvent2Delegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
