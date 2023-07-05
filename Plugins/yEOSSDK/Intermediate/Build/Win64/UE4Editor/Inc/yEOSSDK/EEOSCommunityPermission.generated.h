// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSCommunityPermission_generated_h
#error "EEOSCommunityPermission.generated.h already included, missing '#pragma once' in EEOSCommunityPermission.h"
#endif
#define YEOSSDK_EEOSCommunityPermission_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSCommunityPermission_h


#define FOREACH_ENUM_EEOSCOMMUNITYPERMISSION(op) \
	op(EEOSCommunityPermission::Public) \
	op(EEOSCommunityPermission::Friends) \
	op(EEOSCommunityPermission::Invite) 

enum class EEOSCommunityPermission : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSCommunityPermission>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
