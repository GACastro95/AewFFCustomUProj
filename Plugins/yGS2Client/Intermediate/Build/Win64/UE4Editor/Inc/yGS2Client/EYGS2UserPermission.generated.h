// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGS2CLIENT_EYGS2UserPermission_generated_h
#error "EYGS2UserPermission.generated.h already included, missing '#pragma once' in EYGS2UserPermission.h"
#endif
#define YGS2CLIENT_EYGS2UserPermission_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_EYGS2UserPermission_h


#define FOREACH_ENUM_EYGS2USERPERMISSION(op) \
	op(EYGS2UserPermission::None) \
	op(EYGS2UserPermission::Test) \
	op(EYGS2UserPermission::Development) \
	op(EYGS2UserPermission::Development_SS) 

enum class EYGS2UserPermission : uint8;
template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2UserPermission>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
