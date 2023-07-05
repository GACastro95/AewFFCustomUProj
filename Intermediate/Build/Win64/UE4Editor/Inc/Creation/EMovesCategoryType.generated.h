// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CREATION_EMovesCategoryType_generated_h
#error "EMovesCategoryType.generated.h already included, missing '#pragma once' in EMovesCategoryType.h"
#endif
#define CREATION_EMovesCategoryType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_EMovesCategoryType_h


#define FOREACH_ENUM_EMOVESCATEGORYTYPE(op) \
	op(EMovesCategoryType::None) \
	op(EMovesCategoryType::Special) \
	op(EMovesCategoryType::BaseFight) \
	op(EMovesCategoryType::Dive) \
	op(EMovesCategoryType::Environment) \
	op(EMovesCategoryType::Other) 

enum class EMovesCategoryType : uint8;
template<> CREATION_API UEnum* StaticEnum<EMovesCategoryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
