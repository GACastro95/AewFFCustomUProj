// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ABP_200508_OnSanitizeTextArrayDelegate_generated_h
#error "OnSanitizeTextArrayDelegate.generated.h already included, missing '#pragma once' in OnSanitizeTextArrayDelegate.h"
#endif
#define ABP_200508_OnSanitizeTextArrayDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnSanitizeTextArrayDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnSanitizeTextArray_Parms \
{ \
	TArray<FString> SanitizeText; \
	UObject* UserData; \
}; \
static inline void FOnSanitizeTextArray_DelegateWrapper(const FScriptDelegate& OnSanitizeTextArray, TArray<FString> const& SanitizeText, UObject* UserData) \
{ \
	_Script_ABP_200508_eventOnSanitizeTextArray_Parms Parms; \
	Parms.SanitizeText=SanitizeText; \
	Parms.UserData=UserData; \
	OnSanitizeTextArray.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnSanitizeTextArrayDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
