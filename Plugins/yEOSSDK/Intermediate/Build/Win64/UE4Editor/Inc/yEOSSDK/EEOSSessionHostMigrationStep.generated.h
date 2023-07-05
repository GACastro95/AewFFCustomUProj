// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionHostMigrationStep_generated_h
#error "EEOSSessionHostMigrationStep.generated.h already included, missing '#pragma once' in EEOSSessionHostMigrationStep.h"
#endif
#define YEOSSDK_EEOSSessionHostMigrationStep_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionHostMigrationStep_h


#define FOREACH_ENUM_EEOSSESSIONHOSTMIGRATIONSTEP(op) \
	op(EEOSSessionHostMigrationStep::None) \
	op(EEOSSessionHostMigrationStep::BeginMigration) \
	op(EEOSSessionHostMigrationStep::BeforeDestorySession) \
	op(EEOSSessionHostMigrationStep::DestorySession) \
	op(EEOSSessionHostMigrationStep::WaitDestorySession) \
	op(EEOSSessionHostMigrationStep::BeforeCreateSession) \
	op(EEOSSessionHostMigrationStep::CreateSession) \
	op(EEOSSessionHostMigrationStep::WaitCreateSession) \
	op(EEOSSessionHostMigrationStep::MigratePlayers) \
	op(EEOSSessionHostMigrationStep::WaitMigratePlayers) \
	op(EEOSSessionHostMigrationStep::ExchangeData) \
	op(EEOSSessionHostMigrationStep::WaitExchangeData) \
	op(EEOSSessionHostMigrationStep::FixedMigration) \
	op(EEOSSessionHostMigrationStep::Timeout) \
	op(EEOSSessionHostMigrationStep::Canceled) 

enum class EEOSSessionHostMigrationStep : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationStep>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
