// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSUserType_generated_h
#error "EEOSUserType.generated.h already included, missing '#pragma once' in EEOSUserType.h"
#endif
#define YEOSSDK_EEOSUserType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSUserType_h


#define FOREACH_ENUM_EEOSUSERTYPE(op) \
	op(EEOSUserType::Local) \
	op(EEOSUserType::Friend) \
	op(EEOSUserType::Lobby) \
	op(EEOSUserType::Session) \
	op(EEOSUserType::Other) 

enum class EEOSUserType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSUserType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
