// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionHostMigrationType_generated_h
#error "EEOSSessionHostMigrationType.generated.h already included, missing '#pragma once' in EEOSSessionHostMigrationType.h"
#endif
#define YEOSSDK_EEOSSessionHostMigrationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionHostMigrationType_h


#define FOREACH_ENUM_EEOSSESSIONHOSTMIGRATIONTYPE(op) \
	op(EEOSSessionHostMigrationType::None) \
	op(EEOSSessionHostMigrationType::HostQuitGame) \
	op(EEOSSessionHostMigrationType::DisconnectedHost) \
	op(EEOSSessionHostMigrationType::HostMigration) \
	op(EEOSSessionHostMigrationType::HostMigrationError) \
	op(EEOSSessionHostMigrationType::HostMigrationSwitchHost) \
	op(EEOSSessionHostMigrationType::HostMigrationUpdateSession) \
	op(EEOSSessionHostMigrationType::HostMigrationRetry) \
	op(EEOSSessionHostMigrationType::HostMigrationErrorRetry) \
	op(EEOSSessionHostMigrationType::HostMigrationFromClient) \
	op(EEOSSessionHostMigrationType::HostMigrationFromClientRetry) \
	op(EEOSSessionHostMigrationType::RequestUpdateState) 

enum class EEOSSessionHostMigrationType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
