// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELSSServerInformation_ResponseData;
enum class eSSRequestResultType : uint8;
#ifdef ABP_200508_ServerInformation_RequestEventDelegate_generated_h
#error "ServerInformation_RequestEventDelegate.generated.h already included, missing '#pragma once' in ServerInformation_RequestEventDelegate.h"
#endif
#define ABP_200508_ServerInformation_RequestEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ServerInformation_RequestEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventServerInformation_RequestEvent_Parms \
{ \
	FELSSServerInformation_ResponseData response; \
	eSSRequestResultType responseType; \
}; \
static inline void FServerInformation_RequestEvent_DelegateWrapper(const FMulticastScriptDelegate& ServerInformation_RequestEvent, FELSSServerInformation_ResponseData const& response, eSSRequestResultType responseType) \
{ \
	_Script_ABP_200508_eventServerInformation_RequestEvent_Parms Parms; \
	Parms.response=response; \
	Parms.responseType=responseType; \
	ServerInformation_RequestEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ServerInformation_RequestEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
