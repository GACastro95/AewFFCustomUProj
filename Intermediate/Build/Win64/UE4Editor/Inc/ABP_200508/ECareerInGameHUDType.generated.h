// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerInGameHUDType_generated_h
#error "ECareerInGameHUDType.generated.h already included, missing '#pragma once' in ECareerInGameHUDType.h"
#endif
#define ABP_200508_ECareerInGameHUDType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerInGameHUDType_h


#define FOREACH_ENUM_ECAREERINGAMEHUDTYPE(op) \
	op(ECareerInGameHUDType::None) \
	op(ECareerInGameHUDType::Victory) \
	op(ECareerInGameHUDType::Defeat) \
	op(ECareerInGameHUDType::Complete) \
	op(ECareerInGameHUDType::TooBad) 

enum class ECareerInGameHUDType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerInGameHUDType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
