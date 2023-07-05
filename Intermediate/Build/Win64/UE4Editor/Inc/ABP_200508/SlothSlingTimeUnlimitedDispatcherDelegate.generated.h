// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_SlothSlingTimeUnlimitedDispatcherDelegate_generated_h
#error "SlothSlingTimeUnlimitedDispatcherDelegate.generated.h already included, missing '#pragma once' in SlothSlingTimeUnlimitedDispatcherDelegate.h"
#endif
#define ABP_200508_SlothSlingTimeUnlimitedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingTimeUnlimitedDispatcherDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventSlothSlingTimeUnlimitedDispatcher_Parms \
{ \
	bool IsTimeUnlimited; \
}; \
static inline void FSlothSlingTimeUnlimitedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SlothSlingTimeUnlimitedDispatcher, bool IsTimeUnlimited) \
{ \
	_Script_ABP_200508_eventSlothSlingTimeUnlimitedDispatcher_Parms Parms; \
	Parms.IsTimeUnlimited=IsTimeUnlimited ? true : false; \
	SlothSlingTimeUnlimitedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingTimeUnlimitedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
