// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAntiCheatClientViolationType_generated_h
#error "EEOSAntiCheatClientViolationType.generated.h already included, missing '#pragma once' in EEOSAntiCheatClientViolationType.h"
#endif
#define YEOSSDK_EEOSAntiCheatClientViolationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAntiCheatClientViolationType_h


#define FOREACH_ENUM_EEOSANTICHEATCLIENTVIOLATIONTYPE(op) \
	op(EEOSAntiCheatClientViolationType::None) \
	op(EEOSAntiCheatClientViolationType::IntegrityCatalogNotFound) \
	op(EEOSAntiCheatClientViolationType::IntegrityCatalogError) \
	op(EEOSAntiCheatClientViolationType::IntegrityCatalogCertificateRevoked) \
	op(EEOSAntiCheatClientViolationType::IntegrityCatalogMissingMainExecutable) \
	op(EEOSAntiCheatClientViolationType::GameFileMismatch) \
	op(EEOSAntiCheatClientViolationType::RequiredGameFileNotFound) \
	op(EEOSAntiCheatClientViolationType::UnknownGameFileForbidden) \
	op(EEOSAntiCheatClientViolationType::SystemFileUntrusted) \
	op(EEOSAntiCheatClientViolationType::ForbiddenModuleLoaded) \
	op(EEOSAntiCheatClientViolationType::CorruptedMemory) \
	op(EEOSAntiCheatClientViolationType::ForbiddenToolDetected) \
	op(EEOSAntiCheatClientViolationType::InternalAntiCheatViolation) \
	op(EEOSAntiCheatClientViolationType::CorruptedNetworkMessageFlow) \
	op(EEOSAntiCheatClientViolationType::VirtualMachineNotAllowed) \
	op(EEOSAntiCheatClientViolationType::ForbiddenSystemConfiguration) 

enum class EEOSAntiCheatClientViolationType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatClientViolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
