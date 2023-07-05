// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_UpdateItemQuantityCompleteDelegateDelegate_generated_h
#error "UpdateItemQuantityCompleteDelegateDelegate.generated.h already included, missing '#pragma once' in UpdateItemQuantityCompleteDelegateDelegate.h"
#endif
#define ABP_200508_UpdateItemQuantityCompleteDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_UpdateItemQuantityCompleteDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventUpdateItemQuantityCompleteDelegate_Parms \
{ \
	bool Successed; \
}; \
static inline void FUpdateItemQuantityCompleteDelegate_DelegateWrapper(const FScriptDelegate& UpdateItemQuantityCompleteDelegate, bool Successed) \
{ \
	_Script_ABP_200508_eventUpdateItemQuantityCompleteDelegate_Parms Parms; \
	Parms.Successed=Successed ? true : false; \
	UpdateItemQuantityCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_UpdateItemQuantityCompleteDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
