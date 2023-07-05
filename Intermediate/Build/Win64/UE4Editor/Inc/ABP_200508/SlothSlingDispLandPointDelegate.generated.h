// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_SlothSlingDispLandPointDelegate_generated_h
#error "SlothSlingDispLandPointDelegate.generated.h already included, missing '#pragma once' in SlothSlingDispLandPointDelegate.h"
#endif
#define ABP_200508_SlothSlingDispLandPointDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingDispLandPointDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventSlothSlingDispLandPoint_Parms \
{ \
	bool IsEnableDisplay; \
}; \
static inline void FSlothSlingDispLandPoint_DelegateWrapper(const FMulticastScriptDelegate& SlothSlingDispLandPoint, bool IsEnableDisplay) \
{ \
	_Script_ABP_200508_eventSlothSlingDispLandPoint_Parms Parms; \
	Parms.IsEnableDisplay=IsEnableDisplay ? true : false; \
	SlothSlingDispLandPoint.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingDispLandPointDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
