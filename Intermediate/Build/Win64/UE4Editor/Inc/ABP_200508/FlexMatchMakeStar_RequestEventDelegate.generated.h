// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELSSFlexMatchMakeStart_ResponseData;
enum class eSSRequestResultType : uint8;
#ifdef ABP_200508_FlexMatchMakeStar_RequestEventDelegate_generated_h
#error "FlexMatchMakeStar_RequestEventDelegate.generated.h already included, missing '#pragma once' in FlexMatchMakeStar_RequestEventDelegate.h"
#endif
#define ABP_200508_FlexMatchMakeStar_RequestEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_FlexMatchMakeStar_RequestEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventFlexMatchMakeStar_RequestEvent_Parms \
{ \
	FELSSFlexMatchMakeStart_ResponseData response; \
	eSSRequestResultType responseType; \
}; \
static inline void FFlexMatchMakeStar_RequestEvent_DelegateWrapper(const FMulticastScriptDelegate& FlexMatchMakeStar_RequestEvent, FELSSFlexMatchMakeStart_ResponseData const& response, eSSRequestResultType responseType) \
{ \
	_Script_ABP_200508_eventFlexMatchMakeStar_RequestEvent_Parms Parms; \
	Parms.response=response; \
	Parms.responseType=responseType; \
	FlexMatchMakeStar_RequestEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_FlexMatchMakeStar_RequestEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
