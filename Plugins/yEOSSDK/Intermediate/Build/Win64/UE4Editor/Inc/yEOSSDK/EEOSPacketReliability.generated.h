// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSPacketReliability_generated_h
#error "EEOSPacketReliability.generated.h already included, missing '#pragma once' in EEOSPacketReliability.h"
#endif
#define YEOSSDK_EEOSPacketReliability_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSPacketReliability_h


#define FOREACH_ENUM_EEOSPACKETRELIABILITY(op) \
	op(EEOSPacketReliability::UnreliableUnordered) \
	op(EEOSPacketReliability::ReliableUnordered) \
	op(EEOSPacketReliability::ReliableOrdered) 

enum class EEOSPacketReliability : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSPacketReliability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
