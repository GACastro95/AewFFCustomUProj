// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_SlothSlingThrowUnlimitedDispatcherDelegate_generated_h
#error "SlothSlingThrowUnlimitedDispatcherDelegate.generated.h already included, missing '#pragma once' in SlothSlingThrowUnlimitedDispatcherDelegate.h"
#endif
#define ABP_200508_SlothSlingThrowUnlimitedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingThrowUnlimitedDispatcherDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventSlothSlingThrowUnlimitedDispatcher_Parms \
{ \
	bool IsThorwUnlimited; \
}; \
static inline void FSlothSlingThrowUnlimitedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SlothSlingThrowUnlimitedDispatcher, bool IsThorwUnlimited) \
{ \
	_Script_ABP_200508_eventSlothSlingThrowUnlimitedDispatcher_Parms Parms; \
	Parms.IsThorwUnlimited=IsThorwUnlimited ? true : false; \
	SlothSlingThrowUnlimitedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SlothSlingThrowUnlimitedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
