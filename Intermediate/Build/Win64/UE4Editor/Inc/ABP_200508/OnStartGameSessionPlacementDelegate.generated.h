// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStartGameSessionPlace_RequestParam;
struct FGameLiftGameSessionPlacement_Response;
#ifdef ABP_200508_OnStartGameSessionPlacementDelegate_generated_h
#error "OnStartGameSessionPlacementDelegate.generated.h already included, missing '#pragma once' in OnStartGameSessionPlacementDelegate.h"
#endif
#define ABP_200508_OnStartGameSessionPlacementDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnStartGameSessionPlacementDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnStartGameSessionPlacement_Parms \
{ \
	FStartGameSessionPlace_RequestParam requestParam; \
	FGameLiftGameSessionPlacement_Response responseParam; \
}; \
static inline void FOnStartGameSessionPlacement_DelegateWrapper(const FMulticastScriptDelegate& OnStartGameSessionPlacement, FStartGameSessionPlace_RequestParam const& requestParam, FGameLiftGameSessionPlacement_Response const& responseParam) \
{ \
	_Script_ABP_200508_eventOnStartGameSessionPlacement_Parms Parms; \
	Parms.requestParam=requestParam; \
	Parms.responseParam=responseParam; \
	OnStartGameSessionPlacement.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnStartGameSessionPlacementDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
