// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSCommunityJoinType_generated_h
#error "EEOSCommunityJoinType.generated.h already included, missing '#pragma once' in EEOSCommunityJoinType.h"
#endif
#define YEOSSDK_EEOSCommunityJoinType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSCommunityJoinType_h


#define FOREACH_ENUM_EEOSCOMMUNITYJOINTYPE(op) \
	op(EEOSCommunityJoinType::Own) \
	op(EEOSCommunityJoinType::Search) \
	op(EEOSCommunityJoinType::Invite) \
	op(EEOSCommunityJoinType::Other) 

enum class EEOSCommunityJoinType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSCommunityJoinType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
