// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSUpdateType_generated_h
#error "EEOSUpdateType.generated.h already included, missing '#pragma once' in EEOSUpdateType.h"
#endif
#define YEOSSDK_EEOSUpdateType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSUpdateType_h


#define FOREACH_ENUM_EEOSUPDATETYPE(op) \
	op(EEOSUpdateType::Manual) \
	op(EEOSUpdateType::Tick) \
	op(EEOSUpdateType::BackThread) \
	op(EEOSUpdateType::BackThreadNoSync) 

enum class EEOSUpdateType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
