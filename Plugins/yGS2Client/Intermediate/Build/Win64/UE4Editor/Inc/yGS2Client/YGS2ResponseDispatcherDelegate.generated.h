// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
#ifdef YGS2CLIENT_YGS2ResponseDispatcherDelegate_generated_h
#error "YGS2ResponseDispatcherDelegate.generated.h already included, missing '#pragma once' in YGS2ResponseDispatcherDelegate.h"
#endif
#define YGS2CLIENT_YGS2ResponseDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2ResponseDispatcherDelegate_h_8_DELEGATE \
struct _Script_yGS2Client_eventYGS2ResponseDispatcher_Parms \
{ \
	EYGS2ErrorType YGS2ErrorType; \
	UYGS2RequestBase* YGS2RequestBase; \
}; \
static inline void FYGS2ResponseDispatcher_DelegateWrapper(const FMulticastScriptDelegate& YGS2ResponseDispatcher, EYGS2ErrorType YGS2ErrorType, UYGS2RequestBase* YGS2RequestBase) \
{ \
	_Script_yGS2Client_eventYGS2ResponseDispatcher_Parms Parms; \
	Parms.YGS2ErrorType=YGS2ErrorType; \
	Parms.YGS2RequestBase=YGS2RequestBase; \
	YGS2ResponseDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2ResponseDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
