// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELEOSLobbyPacketType : uint8;
class ULobbyPacketBase;
class UEOSUserBase;
#ifdef ABP_200508_EOSLobbyReceivePacketEventDelegate_generated_h
#error "EOSLobbyReceivePacketEventDelegate.generated.h already included, missing '#pragma once' in EOSLobbyReceivePacketEventDelegate.h"
#endif
#define ABP_200508_EOSLobbyReceivePacketEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyReceivePacketEventDelegate_h_9_DELEGATE \
struct _Script_ABP_200508_eventEOSLobbyReceivePacketEvent_Parms \
{ \
	EELEOSLobbyPacketType _PacketType; \
	ULobbyPacketBase* _Packet; \
	UEOSUserBase* _UserBase; \
}; \
static inline void FEOSLobbyReceivePacketEvent_DelegateWrapper(const FMulticastScriptDelegate& EOSLobbyReceivePacketEvent, EELEOSLobbyPacketType _PacketType, ULobbyPacketBase* _Packet, UEOSUserBase* _UserBase) \
{ \
	_Script_ABP_200508_eventEOSLobbyReceivePacketEvent_Parms Parms; \
	Parms._PacketType=_PacketType; \
	Parms._Packet=_Packet; \
	Parms._UserBase=_UserBase; \
	EOSLobbyReceivePacketEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyReceivePacketEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
