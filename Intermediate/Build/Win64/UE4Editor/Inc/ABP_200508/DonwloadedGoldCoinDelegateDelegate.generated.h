// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_DonwloadedGoldCoinDelegateDelegate_generated_h
#error "DonwloadedGoldCoinDelegateDelegate.generated.h already included, missing '#pragma once' in DonwloadedGoldCoinDelegateDelegate.h"
#endif
#define ABP_200508_DonwloadedGoldCoinDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_DonwloadedGoldCoinDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventDonwloadedGoldCoinDelegate_Parms \
{ \
	bool Successed; \
	int32 GoldCoinNum; \
}; \
static inline void FDonwloadedGoldCoinDelegate_DelegateWrapper(const FScriptDelegate& DonwloadedGoldCoinDelegate, bool Successed, int32 GoldCoinNum) \
{ \
	_Script_ABP_200508_eventDonwloadedGoldCoinDelegate_Parms Parms; \
	Parms.Successed=Successed ? true : false; \
	Parms.GoldCoinNum=GoldCoinNum; \
	DonwloadedGoldCoinDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_DonwloadedGoldCoinDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS