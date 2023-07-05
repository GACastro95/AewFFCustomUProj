// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELSSFlexMatchMakeStatus_ResponseData;
enum class eSSRequestResultType : uint8;
#ifdef ABP_200508_FlexMatchMakeStatus_RequestEventDelegate_generated_h
#error "FlexMatchMakeStatus_RequestEventDelegate.generated.h already included, missing '#pragma once' in FlexMatchMakeStatus_RequestEventDelegate.h"
#endif
#define ABP_200508_FlexMatchMakeStatus_RequestEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_FlexMatchMakeStatus_RequestEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventFlexMatchMakeStatus_RequestEvent_Parms \
{ \
	FELSSFlexMatchMakeStatus_ResponseData response; \
	eSSRequestResultType responseType; \
}; \
static inline void FFlexMatchMakeStatus_RequestEvent_DelegateWrapper(const FMulticastScriptDelegate& FlexMatchMakeStatus_RequestEvent, FELSSFlexMatchMakeStatus_ResponseData const& response, eSSRequestResultType responseType) \
{ \
	_Script_ABP_200508_eventFlexMatchMakeStatus_RequestEvent_Parms Parms; \
	Parms.response=response; \
	Parms.responseType=responseType; \
	FlexMatchMakeStatus_RequestEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_FlexMatchMakeStatus_RequestEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
