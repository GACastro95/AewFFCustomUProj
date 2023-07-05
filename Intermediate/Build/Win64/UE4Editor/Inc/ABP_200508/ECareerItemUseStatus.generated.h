// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerItemUseStatus_generated_h
#error "ECareerItemUseStatus.generated.h already included, missing '#pragma once' in ECareerItemUseStatus.h"
#endif
#define ABP_200508_ECareerItemUseStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerItemUseStatus_h


#define FOREACH_ENUM_ECAREERITEMUSESTATUS(op) \
	op(ECareerItemUseStatus::NoStock) \
	op(ECareerItemUseStatus::Available) \
	op(ECareerItemUseStatus::CannotBeUsed) 

enum class ECareerItemUseStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerItemUseStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
