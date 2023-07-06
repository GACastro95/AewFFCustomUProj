// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSConnectionClosedExternalReason_generated_h
#error "EEOSConnectionClosedExternalReason.generated.h already included, missing '#pragma once' in EEOSConnectionClosedExternalReason.h"
#endif
#define YEOSSDK_EEOSConnectionClosedExternalReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSConnectionClosedExternalReason_h


#define FOREACH_ENUM_EEOSCONNECTIONCLOSEDEXTERNALREASON(op) \
	op(EEOSConnectionClosedExternalReason::None) \
	op(EEOSConnectionClosedExternalReason::Blocked) \
	op(EEOSConnectionClosedExternalReason::SessionFull) \
	op(EEOSConnectionClosedExternalReason::SessionAlreadyStarted) \
	op(EEOSConnectionClosedExternalReason::SessionAlreadyEnded) 

enum class EEOSConnectionClosedExternalReason : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSConnectionClosedExternalReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS