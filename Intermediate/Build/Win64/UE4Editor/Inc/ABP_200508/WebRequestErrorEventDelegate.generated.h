// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class eSSRequestResultType : uint8;
#ifdef ABP_200508_WebRequestErrorEventDelegate_generated_h
#error "WebRequestErrorEventDelegate.generated.h already included, missing '#pragma once' in WebRequestErrorEventDelegate.h"
#endif
#define ABP_200508_WebRequestErrorEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_WebRequestErrorEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventWebRequestErrorEvent_Parms \
{ \
	int32 responseCode; \
	FString responseData; \
	FString apiUniqueID; \
	eSSRequestResultType resultType; \
}; \
static inline void FWebRequestErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& WebRequestErrorEvent, const int32 responseCode, const FString& responseData, const FString& apiUniqueID, eSSRequestResultType resultType) \
{ \
	_Script_ABP_200508_eventWebRequestErrorEvent_Parms Parms; \
	Parms.responseCode=responseCode; \
	Parms.responseData=responseData; \
	Parms.apiUniqueID=apiUniqueID; \
	Parms.resultType=resultType; \
	WebRequestErrorEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_WebRequestErrorEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
