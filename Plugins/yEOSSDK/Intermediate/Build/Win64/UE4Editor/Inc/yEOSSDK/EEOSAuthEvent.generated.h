// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAuthEvent_generated_h
#error "EEOSAuthEvent.generated.h already included, missing '#pragma once' in EEOSAuthEvent.h"
#endif
#define YEOSSDK_EEOSAuthEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAuthEvent_h


#define FOREACH_ENUM_EEOSAUTHEVENT(op) \
	op(EEOSAuthEvent::Logedin) \
	op(EEOSAuthEvent::LogedinFailed) \
	op(EEOSAuthEvent::LogedinConfirm) \
	op(EEOSAuthEvent::Logedout) \
	op(EEOSAuthEvent::Connected) \
	op(EEOSAuthEvent::ConnectedAndCreated) \
	op(EEOSAuthEvent::ConnectFailed) \
	op(EEOSAuthEvent::InvalidLinkedUser) \
	op(EEOSAuthEvent::LinkedAccount) \
	op(EEOSAuthEvent::InvalidUser) \
	op(EEOSAuthEvent::Expired) \
	op(EEOSAuthEvent::InvalidAuth) \
	op(EEOSAuthEvent::ConnectLinkAccount) \
	op(EEOSAuthEvent::ConnectLinkAccountFailed) \
	op(EEOSAuthEvent::ConnectUnlinkAccount) \
	op(EEOSAuthEvent::ConnectUnlinkAccountFailed) \
	op(EEOSAuthEvent::ExternalConnected) \
	op(EEOSAuthEvent::ExternalConnectFailed) \
	op(EEOSAuthEvent::InvalidExternalUser) \
	op(EEOSAuthEvent::LinkedAccountFailed) 

enum class EEOSAuthEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAuthEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
