// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAutoFinish_generated_h
#error "ESSAutoFinish.generated.h already included, missing '#pragma once' in ESSAutoFinish.h"
#endif
#define ABP_200508_ESSAutoFinish_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAutoFinish_h


#define FOREACH_ENUM_ESSAUTOFINISH(op) \
	op(ESSAutoFinish::None) \
	op(ESSAutoFinish::ForceWin) \
	op(ESSAutoFinish::ForceLose) \
	op(ESSAutoFinish::Max) 

enum class ESSAutoFinish : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAutoFinish>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
