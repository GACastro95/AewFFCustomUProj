// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionPacketTypeBP_generated_h
#error "EEOSSessionPacketTypeBP.generated.h already included, missing '#pragma once' in EEOSSessionPacketTypeBP.h"
#endif
#define YEOSSDK_EEOSSessionPacketTypeBP_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionPacketTypeBP_h


#define FOREACH_ENUM_EEOSSESSIONPACKETTYPEBP(op) \
	op(EEOSSessionPacketTypeBP::Sys_General) \
	op(EEOSSessionPacketTypeBP::Sys_SessionEvent) \
	op(EEOSSessionPacketTypeBP::Sys_Connection) \
	op(EEOSSessionPacketTypeBP::Sys_LatencyCheck) \
	op(EEOSSessionPacketTypeBP::Sys_LatencyInfo) \
	op(EEOSSessionPacketTypeBP::Sys_GameClock) \
	op(EEOSSessionPacketTypeBP::Sys_AFMemberInfo) \
	op(EEOSSessionPacketTypeBP::Sys_AFHostMigration) \
	op(EEOSSessionPacketTypeBP::Sys_AFGameFlow) \
	op(EEOSSessionPacketTypeBP::App_GameEvent) \
	op(EEOSSessionPacketTypeBP::Unique_PlayerDataForSetup) \
	op(EEOSSessionPacketTypeBP::Sample_ObjectParam) \
	op(EEOSSessionPacketTypeBP::Sample_ShootingGameControl) 

enum class EEOSSessionPacketTypeBP : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketTypeBP>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
