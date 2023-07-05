// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_ERequestGoldCheckType_generated_h
#error "ERequestGoldCheckType.generated.h already included, missing '#pragma once' in ERequestGoldCheckType.h"
#endif
#define ELITE_ERequestGoldCheckType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ERequestGoldCheckType_h


#define FOREACH_ENUM_EREQUESTGOLDCHECKTYPE(op) \
	op(ERequestGoldCheckType::NONE) \
	op(ERequestGoldCheckType::INIT) \
	op(ERequestGoldCheckType::PURCHASE) 

enum class ERequestGoldCheckType : uint8;
template<> ELITE_API UEnum* StaticEnum<ERequestGoldCheckType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
