// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnStartGameSessionPlacementFailedDelegate_generated_h
#error "OnStartGameSessionPlacementFailedDelegate.generated.h already included, missing '#pragma once' in OnStartGameSessionPlacementFailedDelegate.h"
#endif
#define ABP_200508_OnStartGameSessionPlacementFailedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnStartGameSessionPlacementFailedDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnStartGameSessionPlacementFailed_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnStartGameSessionPlacementFailed_DelegateWrapper(const FMulticastScriptDelegate& OnStartGameSessionPlacementFailed, const FString& ErrorMessage) \
{ \
	_Script_ABP_200508_eventOnStartGameSessionPlacementFailed_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnStartGameSessionPlacementFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnStartGameSessionPlacementFailedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
