// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECharacterValidationResult_generated_h
#error "ECharacterValidationResult.generated.h already included, missing '#pragma once' in ECharacterValidationResult.h"
#endif
#define ABP_200508_ECharacterValidationResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECharacterValidationResult_h


#define FOREACH_ENUM_ECHARACTERVALIDATIONRESULT(op) \
	op(ECharacterValidationResult::Valid) \
	op(ECharacterValidationResult::Invalid) \
	op(ECharacterValidationResult::Released) 

enum class ECharacterValidationResult : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECharacterValidationResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
