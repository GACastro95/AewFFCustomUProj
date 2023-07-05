// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EExternalAccountType_generated_h
#error "EExternalAccountType.generated.h already included, missing '#pragma once' in EExternalAccountType.h"
#endif
#define YEOSSDK_EExternalAccountType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EExternalAccountType_h


#define FOREACH_ENUM_EEXTERNALACCOUNTTYPE(op) \
	op(EExternalAccountType::Unknown) \
	op(EExternalAccountType::Epic) \
	op(EExternalAccountType::Steam) \
	op(EExternalAccountType::PSN) \
	op(EExternalAccountType::XboxLive) \
	op(EExternalAccountType::Nintendo) 

enum class EExternalAccountType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EExternalAccountType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
