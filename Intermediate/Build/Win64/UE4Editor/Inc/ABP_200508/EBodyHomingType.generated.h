// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EBodyHomingType_generated_h
#error "EBodyHomingType.generated.h already included, missing '#pragma once' in EBodyHomingType.h"
#endif
#define ABP_200508_EBodyHomingType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EBodyHomingType_h


#define FOREACH_ENUM_EBODYHOMINGTYPE(op) \
	op(EBodyHomingType::None) \
	op(EBodyHomingType::NoTime) \
	op(EBodyHomingType::Fast) \
	op(EBodyHomingType::Normal) \
	op(EBodyHomingType::LittleSlow) \
	op(EBodyHomingType::Slow) \
	op(EBodyHomingType::QuickStart) \
	op(EBodyHomingType::Attack) 

enum class EBodyHomingType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EBodyHomingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
