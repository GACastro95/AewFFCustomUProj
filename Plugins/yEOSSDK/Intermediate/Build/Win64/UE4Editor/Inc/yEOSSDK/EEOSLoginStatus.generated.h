// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSLoginStatus_generated_h
#error "EEOSLoginStatus.generated.h already included, missing '#pragma once' in EEOSLoginStatus.h"
#endif
#define YEOSSDK_EEOSLoginStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSLoginStatus_h


#define FOREACH_ENUM_EEOSLOGINSTATUS(op) \
	op(EEOSLoginStatus::NotLoggedin) \
	op(EEOSLoginStatus::LoginLocalProfile) \
	op(EEOSLoginStatus::Loggedin) 

enum class EEOSLoginStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSLoginStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
