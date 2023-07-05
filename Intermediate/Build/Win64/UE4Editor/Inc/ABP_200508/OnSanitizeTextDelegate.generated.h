// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ABP_200508_OnSanitizeTextDelegate_generated_h
#error "OnSanitizeTextDelegate.generated.h already included, missing '#pragma once' in OnSanitizeTextDelegate.h"
#endif
#define ABP_200508_OnSanitizeTextDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnSanitizeTextDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnSanitizeText_Parms \
{ \
	FString SanitizeText; \
	UObject* UserData; \
}; \
static inline void FOnSanitizeText_DelegateWrapper(const FScriptDelegate& OnSanitizeText, const FString& SanitizeText, UObject* UserData) \
{ \
	_Script_ABP_200508_eventOnSanitizeText_Parms Parms; \
	Parms.SanitizeText=SanitizeText; \
	Parms.UserData=UserData; \
	OnSanitizeText.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnSanitizeTextDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
