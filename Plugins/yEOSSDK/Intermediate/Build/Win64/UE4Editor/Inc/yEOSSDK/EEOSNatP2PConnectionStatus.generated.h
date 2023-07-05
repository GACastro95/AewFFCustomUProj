// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSNatP2PConnectionStatus_generated_h
#error "EEOSNatP2PConnectionStatus.generated.h already included, missing '#pragma once' in EEOSNatP2PConnectionStatus.h"
#endif
#define YEOSSDK_EEOSNatP2PConnectionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSNatP2PConnectionStatus_h


#define FOREACH_ENUM_EEOSNATP2PCONNECTIONSTATUS(op) \
	op(EEOSNatP2PConnectionStatus::NotConnected) \
	op(EEOSNatP2PConnectionStatus::Connected) \
	op(EEOSNatP2PConnectionStatus::RejectConnection) \
	op(EEOSNatP2PConnectionStatus::ConnectionAPIFailed) \
	op(EEOSNatP2PConnectionStatus::DisconnectionAPIFailed) 

enum class EEOSNatP2PConnectionStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSNatP2PConnectionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
