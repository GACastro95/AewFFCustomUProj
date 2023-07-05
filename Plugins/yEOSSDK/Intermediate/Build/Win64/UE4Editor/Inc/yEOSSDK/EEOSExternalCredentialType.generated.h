// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSExternalCredentialType_generated_h
#error "EEOSExternalCredentialType.generated.h already included, missing '#pragma once' in EEOSExternalCredentialType.h"
#endif
#define YEOSSDK_EEOSExternalCredentialType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSExternalCredentialType_h


#define FOREACH_ENUM_EEOSEXTERNALCREDENTIALTYPE(op) \
	op(EEOSExternalCredentialType::None) \
	op(EEOSExternalCredentialType::Epic) \
	op(EEOSExternalCredentialType::Steam) \
	op(EEOSExternalCredentialType::PSN) \
	op(EEOSExternalCredentialType::XboxLive) \
	op(EEOSExternalCredentialType::NintendoID) \
	op(EEOSExternalCredentialType::NintendoNSAID) \
	op(EEOSExternalCredentialType::GDK) 

enum class EEOSExternalCredentialType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSExternalCredentialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
