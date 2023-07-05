// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELPlatformErrorID_generated_h
#error "EELPlatformErrorID.generated.h already included, missing '#pragma once' in EELPlatformErrorID.h"
#endif
#define ABP_200508_EELPlatformErrorID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELPlatformErrorID_h


#define FOREACH_ENUM_EELPLATFORMERRORID(op) \
	op(EELPlatformErrorID::GenericFailure) \
	op(EELPlatformErrorID::RequiredPatchAvailable) \
	op(EELPlatformErrorID::RequiredSystemUpdate) \
	op(EELPlatformErrorID::AgeRestrictionFailure) \
	op(EELPlatformErrorID::AccountTypeFailure) \
	op(EELPlatformErrorID::UserNotFound) \
	op(EELPlatformErrorID::UserNotLoggedIn) \
	op(EELPlatformErrorID::ChatRestriction) \
	op(EELPlatformErrorID::UGCRestriction) \
	op(EELPlatformErrorID::OnlinePlayRestricted) \
	op(EELPlatformErrorID::NetworkConnectionUnavailable) 

enum class EELPlatformErrorID : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELPlatformErrorID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
