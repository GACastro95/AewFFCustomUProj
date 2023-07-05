// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSLoginType_generated_h
#error "EEOSLoginType.generated.h already included, missing '#pragma once' in EEOSLoginType.h"
#endif
#define YEOSSDK_EEOSLoginType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSLoginType_h


#define FOREACH_ENUM_EEOSLOGINTYPE(op) \
	op(EEOSLoginType::None) \
	op(EEOSLoginType::Password) \
	op(EEOSLoginType::ExchangeCode) \
	op(EEOSLoginType::PersistentAuth) \
	op(EEOSLoginType::DeviceCode) \
	op(EEOSLoginType::Developer) \
	op(EEOSLoginType::RefreshToken) \
	op(EEOSLoginType::AccountPortal) \
	op(EEOSLoginType::ExternalAuth) 

enum class EEOSLoginType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSLoginType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
