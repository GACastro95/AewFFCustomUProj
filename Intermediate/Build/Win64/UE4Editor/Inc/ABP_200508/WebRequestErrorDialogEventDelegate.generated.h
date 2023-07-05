// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class yEnDialogBoxChoices : uint8;
enum class eSSWebRequestErrorDialogType : uint8;
class UELSSWebRequestBase;
#ifdef ABP_200508_WebRequestErrorDialogEventDelegate_generated_h
#error "WebRequestErrorDialogEventDelegate.generated.h already included, missing '#pragma once' in WebRequestErrorDialogEventDelegate.h"
#endif
#define ABP_200508_WebRequestErrorDialogEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_WebRequestErrorDialogEventDelegate_h_9_DELEGATE \
struct _Script_ABP_200508_eventWebRequestErrorDialogEvent_Parms \
{ \
	yEnDialogBoxChoices dialogBtmType; \
	eSSWebRequestErrorDialogType dialogErrorType; \
	FString dialogMessageText; \
	UELSSWebRequestBase* dialogCallRequest; \
}; \
static inline void FWebRequestErrorDialogEvent_DelegateWrapper(const FMulticastScriptDelegate& WebRequestErrorDialogEvent, yEnDialogBoxChoices dialogBtmType, eSSWebRequestErrorDialogType dialogErrorType, const FString& dialogMessageText, UELSSWebRequestBase* dialogCallRequest) \
{ \
	_Script_ABP_200508_eventWebRequestErrorDialogEvent_Parms Parms; \
	Parms.dialogBtmType=dialogBtmType; \
	Parms.dialogErrorType=dialogErrorType; \
	Parms.dialogMessageText=dialogMessageText; \
	Parms.dialogCallRequest=dialogCallRequest; \
	WebRequestErrorDialogEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_WebRequestErrorDialogEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
