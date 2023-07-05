// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EOutCome_generated_h
#error "EOutCome.generated.h already included, missing '#pragma once' in EOutCome.h"
#endif
#define ABP_200508_EOutCome_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOutCome_h


#define FOREACH_ENUM_EOUTCOME(op) \
	op(EOutCome::Completed) \
	op(EOutCome::Failed) \
	op(EOutCome::Abandoned) 

enum class EOutCome : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EOutCome>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
