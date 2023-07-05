// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSGeneralEvent_generated_h
#error "EEOSGeneralEvent.generated.h already included, missing '#pragma once' in EEOSGeneralEvent.h"
#endif
#define YEOSSDK_EEOSGeneralEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSGeneralEvent_h


#define FOREACH_ENUM_EEOSGENERALEVENT(op) \
	op(EEOSGeneralEvent::DisableDispatcher) \
	op(EEOSGeneralEvent::BeginReleaseManager) \
	op(EEOSGeneralEvent::EndReleaseManager) \
	op(EEOSGeneralEvent::RequestLogin) \
	op(EEOSGeneralEvent::RequestLogout) \
	op(EEOSGeneralEvent::LoggedOut) \
	op(EEOSGeneralEvent::LoggedIn) \
	op(EEOSGeneralEvent::Success) \
	op(EEOSGeneralEvent::NoConnection) \
	op(EEOSGeneralEvent::UnexpectedError) 

enum class EEOSGeneralEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSGeneralEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
