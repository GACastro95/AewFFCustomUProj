// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionHostMigrationClientResultType_generated_h
#error "EEOSSessionHostMigrationClientResultType.generated.h already included, missing '#pragma once' in EEOSSessionHostMigrationClientResultType.h"
#endif
#define YEOSSDK_EEOSSessionHostMigrationClientResultType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionHostMigrationClientResultType_h


#define FOREACH_ENUM_EEOSSESSIONHOSTMIGRATIONCLIENTRESULTTYPE(op) \
	op(EEOSSessionHostMigrationClientResultType::None) \
	op(EEOSSessionHostMigrationClientResultType::LeaveSession) \
	op(EEOSSessionHostMigrationClientResultType::LeaveSessionErr) \
	op(EEOSSessionHostMigrationClientResultType::WaitInvite) \
	op(EEOSSessionHostMigrationClientResultType::WaitInviteErr) \
	op(EEOSSessionHostMigrationClientResultType::JoinSession) \
	op(EEOSSessionHostMigrationClientResultType::JoinSessionErr) \
	op(EEOSSessionHostMigrationClientResultType::WaitMemberInfo) \
	op(EEOSSessionHostMigrationClientResultType::WaitMemberInfoErr) \
	op(EEOSSessionHostMigrationClientResultType::WaitConnection) \
	op(EEOSSessionHostMigrationClientResultType::WaitConnectionErr) \
	op(EEOSSessionHostMigrationClientResultType::WaitExchangeData) \
	op(EEOSSessionHostMigrationClientResultType::WaitExchangeDataErr) \
	op(EEOSSessionHostMigrationClientResultType::EndOfExchangeData) \
	op(EEOSSessionHostMigrationClientResultType::EndOfExchangeDataErr) \
	op(EEOSSessionHostMigrationClientResultType::ReceivedFixed) \
	op(EEOSSessionHostMigrationClientResultType::ForceReset) 

enum class EEOSSessionHostMigrationClientResultType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationClientResultType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
