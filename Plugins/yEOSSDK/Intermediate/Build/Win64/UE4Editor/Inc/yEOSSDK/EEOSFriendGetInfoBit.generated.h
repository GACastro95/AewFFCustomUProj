// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSFriendGetInfoBit_generated_h
#error "EEOSFriendGetInfoBit.generated.h already included, missing '#pragma once' in EEOSFriendGetInfoBit.h"
#endif
#define YEOSSDK_EEOSFriendGetInfoBit_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSFriendGetInfoBit_h


#define FOREACH_ENUM_EEOSFRIENDGETINFOBIT(op) \
	op(EEOSFriendGetInfoBit::None) \
	op(EEOSFriendGetInfoBit::UserInfo) \
	op(EEOSFriendGetInfoBit::Presence) \
	op(EEOSFriendGetInfoBit::ALL) 

enum class EEOSFriendGetInfoBit : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSFriendGetInfoBit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
