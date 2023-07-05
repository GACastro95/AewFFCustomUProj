// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSApiResult : uint8;
#ifdef YEOSSDK_EOSAPIBaseEventDispatcharDelegate_generated_h
#error "EOSAPIBaseEventDispatcharDelegate.generated.h already included, missing '#pragma once' in EOSAPIBaseEventDispatcharDelegate.h"
#endif
#define YEOSSDK_EOSAPIBaseEventDispatcharDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAPIBaseEventDispatcharDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventEOSAPIBaseEventDispatchar_Parms \
{ \
	bool Success; \
	EEOSApiResult ApiResult; \
}; \
static inline void FEOSAPIBaseEventDispatchar_DelegateWrapper(const FMulticastScriptDelegate& EOSAPIBaseEventDispatchar, bool Success, EEOSApiResult ApiResult) \
{ \
	_Script_yEOSSDK_eventEOSAPIBaseEventDispatchar_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.ApiResult=ApiResult; \
	EOSAPIBaseEventDispatchar.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAPIBaseEventDispatcharDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
