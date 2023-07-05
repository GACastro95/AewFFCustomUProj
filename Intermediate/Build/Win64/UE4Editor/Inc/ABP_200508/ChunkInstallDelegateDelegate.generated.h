// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChunkInstallDelegateDelegate_generated_h
#error "ChunkInstallDelegateDelegate.generated.h already included, missing '#pragma once' in ChunkInstallDelegateDelegate.h"
#endif
#define ABP_200508_ChunkInstallDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChunkInstallDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChunkInstallDelegate_Parms \
{ \
	int32 chunkNo; \
}; \
static inline void FChunkInstallDelegate_DelegateWrapper(const FScriptDelegate& ChunkInstallDelegate, int32 chunkNo) \
{ \
	_Script_ABP_200508_eventChunkInstallDelegate_Parms Parms; \
	Parms.chunkNo=chunkNo; \
	ChunkInstallDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChunkInstallDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
