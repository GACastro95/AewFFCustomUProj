// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAttrVariableType_generated_h
#error "EEOSAttrVariableType.generated.h already included, missing '#pragma once' in EEOSAttrVariableType.h"
#endif
#define YEOSSDK_EEOSAttrVariableType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAttrVariableType_h


#define FOREACH_ENUM_EEOSATTRVARIABLETYPE(op) \
	op(EEOSAttrVariableType::Boolean) \
	op(EEOSAttrVariableType::Int64) \
	op(EEOSAttrVariableType::Double) \
	op(EEOSAttrVariableType::String) 

enum class EEOSAttrVariableType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAttrVariableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
