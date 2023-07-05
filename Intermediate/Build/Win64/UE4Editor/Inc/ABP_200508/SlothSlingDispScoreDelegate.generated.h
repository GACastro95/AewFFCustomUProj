// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_SlothSlingDispScoreDelegate_generated_h
#error "SlothSlingDispScoreDelegate.generated.h already included, missing '#pragma once' in SlothSlingDispScoreDelegate.h"
#endif
#define ABP_200508_SlothSlingDispScoreDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingDispScoreDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventSlothSlingDispScore_Parms \
{ \
	bool IsEnableDisplay; \
}; \
static inline void FSlothSlingDispScore_DelegateWrapper(const FMulticastScriptDelegate& SlothSlingDispScore, bool IsEnableDisplay) \
{ \
	_Script_ABP_200508_eventSlothSlingDispScore_Parms Parms; \
	Parms.IsEnableDisplay=IsEnableDisplay ? true : false; \
	SlothSlingDispScore.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingDispScoreDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
