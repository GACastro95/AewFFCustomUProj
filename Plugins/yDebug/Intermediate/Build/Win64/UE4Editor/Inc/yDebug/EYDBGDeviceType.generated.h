// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YDEBUG_EYDBGDeviceType_generated_h
#error "EYDBGDeviceType.generated.h already included, missing '#pragma once' in EYDBGDeviceType.h"
#endif
#define YDEBUG_EYDBGDeviceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_EYDBGDeviceType_h


#define FOREACH_ENUM_EYDBGDEVICETYPE(op) \
	op(EYDBGDeviceType::Unknown) \
	op(EYDBGDeviceType::Windows) \
	op(EYDBGDeviceType::Mac) \
	op(EYDBGDeviceType::IOS) \
	op(EYDBGDeviceType::Android) \
	op(EYDBGDeviceType::XboxOne) \
	op(EYDBGDeviceType::PS4) \
	op(EYDBGDeviceType::Switch) 

enum class EYDBGDeviceType : uint8;
template<> YDEBUG_API UEnum* StaticEnum<EYDBGDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
