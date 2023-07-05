// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_SlothSlingDispInputInfoDelegate_generated_h
#error "SlothSlingDispInputInfoDelegate.generated.h already included, missing '#pragma once' in SlothSlingDispInputInfoDelegate.h"
#endif
#define ABP_200508_SlothSlingDispInputInfoDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingDispInputInfoDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventSlothSlingDispInputInfo_Parms \
{ \
	bool IsEnableDisplay; \
}; \
static inline void FSlothSlingDispInputInfo_DelegateWrapper(const FMulticastScriptDelegate& SlothSlingDispInputInfo, bool IsEnableDisplay) \
{ \
	_Script_ABP_200508_eventSlothSlingDispInputInfo_Parms Parms; \
	Parms.IsEnableDisplay=IsEnableDisplay ? true : false; \
	SlothSlingDispInputInfo.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingDispInputInfoDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
