// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSControlType_generated_h
#error "EEOSControlType.generated.h already included, missing '#pragma once' in EEOSControlType.h"
#endif
#define YEOSSDK_EEOSControlType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSControlType_h


#define FOREACH_ENUM_EEOSCONTROLTYPE(op) \
	op(EEOSControlType::Unknown) \
	op(EEOSControlType::MouseKeyboard) \
	op(EEOSControlType::GamePad) \
	op(EEOSControlType::Touch) 

enum class EEOSControlType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSControlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
