// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionPacketSyncProcType_generated_h
#error "EEOSSessionPacketSyncProcType.generated.h already included, missing '#pragma once' in EEOSSessionPacketSyncProcType.h"
#endif
#define YEOSSDK_EEOSSessionPacketSyncProcType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionPacketSyncProcType_h


#define FOREACH_ENUM_EEOSSESSIONPACKETSYNCPROCTYPE(op) \
	op(EEOSSessionPacketSyncProcType::None) \
	op(EEOSSessionPacketSyncProcType::Update_Request) \
	op(EEOSSessionPacketSyncProcType::Update_Success) \
	op(EEOSSessionPacketSyncProcType::Update_Failed) \
	op(EEOSSessionPacketSyncProcType::Compare_Request) \
	op(EEOSSessionPacketSyncProcType::Compare_Request_Sync) \
	op(EEOSSessionPacketSyncProcType::Compare_Success) \
	op(EEOSSessionPacketSyncProcType::Compare_Failed) \
	op(EEOSSessionPacketSyncProcType::Overwrite_Request) \
	op(EEOSSessionPacketSyncProcType::Overwrite_Success) \
	op(EEOSSessionPacketSyncProcType::Overwrite_Failed) 

enum class EEOSSessionPacketSyncProcType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketSyncProcType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
