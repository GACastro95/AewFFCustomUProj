// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSNatP2PEvent_generated_h
#error "EEOSNatP2PEvent.generated.h already included, missing '#pragma once' in EEOSNatP2PEvent.h"
#endif
#define YEOSSDK_EEOSNatP2PEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSNatP2PEvent_h


#define FOREACH_ENUM_EEOSNATP2PEVENT(op) \
	op(EEOSNatP2PEvent::GetNatType) \
	op(EEOSNatP2PEvent::GetNatTypeErr) \
	op(EEOSNatP2PEvent::ConfirmConnection) \
	op(EEOSNatP2PEvent::Connection) \
	op(EEOSNatP2PEvent::ConnectionErrSocketID) \
	op(EEOSNatP2PEvent::ConnectionErrUnknownUser) \
	op(EEOSNatP2PEvent::ConnectionErr) \
	op(EEOSNatP2PEvent::Closed) \
	op(EEOSNatP2PEvent::ClosedErr) \
	op(EEOSNatP2PEvent::ClosedSocket) \
	op(EEOSNatP2PEvent::ClosedSocketErr) 

enum class EEOSNatP2PEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSNatP2PEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
