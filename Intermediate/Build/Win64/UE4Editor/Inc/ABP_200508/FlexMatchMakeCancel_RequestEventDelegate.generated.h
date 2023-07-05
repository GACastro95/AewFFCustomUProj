// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class eSSRequestResultType : uint8;
struct FELSSFlexMatchMakeStop_ResponseData;
#ifdef ABP_200508_FlexMatchMakeCancel_RequestEventDelegate_generated_h
#error "FlexMatchMakeCancel_RequestEventDelegate.generated.h already included, missing '#pragma once' in FlexMatchMakeCancel_RequestEventDelegate.h"
#endif
#define ABP_200508_FlexMatchMakeCancel_RequestEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_FlexMatchMakeCancel_RequestEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventFlexMatchMakeCancel_RequestEvent_Parms \
{ \
	eSSRequestResultType responseType; \
	FELSSFlexMatchMakeStop_ResponseData response; \
}; \
static inline void FFlexMatchMakeCancel_RequestEvent_DelegateWrapper(const FMulticastScriptDelegate& FlexMatchMakeCancel_RequestEvent, eSSRequestResultType responseType, FELSSFlexMatchMakeStop_ResponseData const& response) \
{ \
	_Script_ABP_200508_eventFlexMatchMakeCancel_RequestEvent_Parms Parms; \
	Parms.responseType=responseType; \
	Parms.response=response; \
	FlexMatchMakeCancel_RequestEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_FlexMatchMakeCancel_RequestEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
