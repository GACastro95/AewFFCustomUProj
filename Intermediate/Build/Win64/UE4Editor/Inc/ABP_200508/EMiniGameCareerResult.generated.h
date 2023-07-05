// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EMiniGameCareerResult_generated_h
#error "EMiniGameCareerResult.generated.h already included, missing '#pragma once' in EMiniGameCareerResult.h"
#endif
#define ABP_200508_EMiniGameCareerResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EMiniGameCareerResult_h


#define FOREACH_ENUM_EMINIGAMECAREERRESULT(op) \
	op(EMiniGameCareerResult::NoGame) \
	op(EMiniGameCareerResult::Winner) \
	op(EMiniGameCareerResult::Loser) \
	op(EMiniGameCareerResult::None) 

enum class EMiniGameCareerResult : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EMiniGameCareerResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
