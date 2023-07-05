// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YDEBUG_EDBGSettingValueType_generated_h
#error "EDBGSettingValueType.generated.h already included, missing '#pragma once' in EDBGSettingValueType.h"
#endif
#define YDEBUG_EDBGSettingValueType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_EDBGSettingValueType_h


#define FOREACH_ENUM_EDBGSETTINGVALUETYPE(op) \
	op(EDBGSettingValueType::Bool) \
	op(EDBGSettingValueType::Int) \
	op(EDBGSettingValueType::Float) \
	op(EDBGSettingValueType::String) 

enum class EDBGSettingValueType : uint8;
template<> YDEBUG_API UEnum* StaticEnum<EDBGSettingValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
