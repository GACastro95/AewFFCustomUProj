// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NVIDIAGFESDK_EGfeSDKPermission_generated_h
#error "EGfeSDKPermission.generated.h already included, missing '#pragma once' in EGfeSDKPermission.h"
#endif
#define NVIDIAGFESDK_EGfeSDKPermission_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_EGfeSDKPermission_h


#define FOREACH_ENUM_EGFESDKPERMISSION(op) \
	op(EGfeSDKPermission::Granted) \
	op(EGfeSDKPermission::Denied) \
	op(EGfeSDKPermission::MustAsk) \
	op(EGfeSDKPermission::Unknown) 

enum class EGfeSDKPermission : uint8;
template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKPermission>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
