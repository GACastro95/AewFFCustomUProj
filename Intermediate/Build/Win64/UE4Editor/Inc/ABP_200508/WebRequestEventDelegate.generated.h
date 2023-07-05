// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class eSSRequestResultType : uint8;
#ifdef ABP_200508_WebRequestEventDelegate_generated_h
#error "WebRequestEventDelegate.generated.h already included, missing '#pragma once' in WebRequestEventDelegate.h"
#endif
#define ABP_200508_WebRequestEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_WebRequestEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventWebRequestEvent_Parms \
{ \
	int32 responseCode; \
	FString responseData; \
	eSSRequestResultType resultType; \
}; \
static inline void FWebRequestEvent_DelegateWrapper(const FMulticastScriptDelegate& WebRequestEvent, const int32 responseCode, const FString& responseData, eSSRequestResultType resultType) \
{ \
	_Script_ABP_200508_eventWebRequestEvent_Parms Parms; \
	Parms.responseCode=responseCode; \
	Parms.responseData=responseData; \
	Parms.resultType=resultType; \
	WebRequestEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_WebRequestEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
