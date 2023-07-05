// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGS2CLIENT_EYGS2GetInfoStatus_generated_h
#error "EYGS2GetInfoStatus.generated.h already included, missing '#pragma once' in EYGS2GetInfoStatus.h"
#endif
#define YGS2CLIENT_EYGS2GetInfoStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_EYGS2GetInfoStatus_h


#define FOREACH_ENUM_EYGS2GETINFOSTATUS(op) \
	op(EYGS2GetInfoStatus::Unknown) \
	op(EYGS2GetInfoStatus::Retail) \
	op(EYGS2GetInfoStatus::Staging) \
	op(EYGS2GetInfoStatus::QA) \
	op(EYGS2GetInfoStatus::Test_Maintenance) \
	op(EYGS2GetInfoStatus::Maintenance) \
	op(EYGS2GetInfoStatus::Development) 

enum class EYGS2GetInfoStatus : uint8;
template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2GetInfoStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
