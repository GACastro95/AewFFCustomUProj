// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionP2PDataSharingEvent_generated_h
#error "EEOSSessionP2PDataSharingEvent.generated.h already included, missing '#pragma once' in EEOSSessionP2PDataSharingEvent.h"
#endif
#define YEOSSDK_EEOSSessionP2PDataSharingEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionP2PDataSharingEvent_h


#define FOREACH_ENUM_EEOSSESSIONP2PDATASHARINGEVENT(op) \
	op(EEOSSessionP2PDataSharingEvent::None) \
	op(EEOSSessionP2PDataSharingEvent::SyncDataSccuess) \
	op(EEOSSessionP2PDataSharingEvent::SyncDataFailed) \
	op(EEOSSessionP2PDataSharingEvent::SyncDataOverTheRetryLimit) \
	op(EEOSSessionP2PDataSharingEvent::OverwriteDataSccuess) \
	op(EEOSSessionP2PDataSharingEvent::OverwriteDataFailed) \
	op(EEOSSessionP2PDataSharingEvent::OverwriteDataOverTheRetryLimit) \
	op(EEOSSessionP2PDataSharingEvent::CompareDataSccuess) \
	op(EEOSSessionP2PDataSharingEvent::CompareDataFailed) \
	op(EEOSSessionP2PDataSharingEvent::CompareDataOverTheRetryLimit) 

enum class EEOSSessionP2PDataSharingEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PDataSharingEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
