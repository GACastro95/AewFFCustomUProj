// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ItemPurchaseCompleteDelegateDelegate_generated_h
#error "ItemPurchaseCompleteDelegateDelegate.generated.h already included, missing '#pragma once' in ItemPurchaseCompleteDelegateDelegate.h"
#endif
#define ABP_200508_ItemPurchaseCompleteDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ItemPurchaseCompleteDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventItemPurchaseCompleteDelegate_Parms \
{ \
	bool Successed; \
}; \
static inline void FItemPurchaseCompleteDelegate_DelegateWrapper(const FScriptDelegate& ItemPurchaseCompleteDelegate, bool Successed) \
{ \
	_Script_ABP_200508_eventItemPurchaseCompleteDelegate_Parms Parms; \
	Parms.Successed=Successed ? true : false; \
	ItemPurchaseCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ItemPurchaseCompleteDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
