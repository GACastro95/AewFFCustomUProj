// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSPlayerSanction;
#ifdef YEOSSDK_EOSSanctionsQueryPlayerSanctionsDispatcherDelegate_generated_h
#error "EOSSanctionsQueryPlayerSanctionsDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSanctionsQueryPlayerSanctionsDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSanctionsQueryPlayerSanctionsDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSanctionsQueryPlayerSanctionsDispatcherDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventEOSSanctionsQueryPlayerSanctionsDispatcher_Parms \
{ \
	FString ProductUserID; \
	TArray<FEOSPlayerSanction> PlayerSanctions; \
}; \
static inline void FEOSSanctionsQueryPlayerSanctionsDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSanctionsQueryPlayerSanctionsDispatcher, const FString& ProductUserID, TArray<FEOSPlayerSanction> const& PlayerSanctions) \
{ \
	_Script_yEOSSDK_eventEOSSanctionsQueryPlayerSanctionsDispatcher_Parms Parms; \
	Parms.ProductUserID=ProductUserID; \
	Parms.PlayerSanctions=PlayerSanctions; \
	EOSSanctionsQueryPlayerSanctionsDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSanctionsQueryPlayerSanctionsDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
