// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSPlayerState;
#ifdef ABP_200508_PlayerSpawnPointChangeResultDelegate_generated_h
#error "PlayerSpawnPointChangeResultDelegate.generated.h already included, missing '#pragma once' in PlayerSpawnPointChangeResultDelegate.h"
#endif
#define ABP_200508_PlayerSpawnPointChangeResultDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_PlayerSpawnPointChangeResultDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventPlayerSpawnPointChangeResult_Parms \
{ \
	AELSSPlayerState* PlayerState; \
	bool isChange; \
}; \
static inline void FPlayerSpawnPointChangeResult_DelegateWrapper(const FMulticastScriptDelegate& PlayerSpawnPointChangeResult, AELSSPlayerState* PlayerState, bool isChange) \
{ \
	_Script_ABP_200508_eventPlayerSpawnPointChangeResult_Parms Parms; \
	Parms.PlayerState=PlayerState; \
	Parms.isChange=isChange ? true : false; \
	PlayerSpawnPointChangeResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_PlayerSpawnPointChangeResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
