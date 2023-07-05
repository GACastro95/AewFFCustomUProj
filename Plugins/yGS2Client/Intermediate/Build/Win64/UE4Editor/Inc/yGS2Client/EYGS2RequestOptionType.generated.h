// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGS2CLIENT_EYGS2RequestOptionType_generated_h
#error "EYGS2RequestOptionType.generated.h already included, missing '#pragma once' in EYGS2RequestOptionType.h"
#endif
#define YGS2CLIENT_EYGS2RequestOptionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_EYGS2RequestOptionType_h


#define FOREACH_ENUM_EYGS2REQUESTOPTIONTYPE(op) \
	op(EYGS2RequestOptionType::None) \
	op(EYGS2RequestOptionType::AppKey) \
	op(EYGS2RequestOptionType::TitleID) \
	op(EYGS2RequestOptionType::TitleVer) \
	op(EYGS2RequestOptionType::EOSProductID) \
	op(EYGS2RequestOptionType::EOSSandboxID) \
	op(EYGS2RequestOptionType::EOSDeploymentID) \
	op(EYGS2RequestOptionType::EOSClientID) \
	op(EYGS2RequestOptionType::AppAuthKey) \
	op(EYGS2RequestOptionType::AppAuthSecret) \
	op(EYGS2RequestOptionType::UserAuthKey) \
	op(EYGS2RequestOptionType::UserAuthSecret) \
	op(EYGS2RequestOptionType::SessionType) 

enum class EYGS2RequestOptionType : uint8;
template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2RequestOptionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
