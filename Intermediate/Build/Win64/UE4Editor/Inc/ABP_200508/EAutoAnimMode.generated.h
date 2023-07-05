// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EAutoAnimMode_generated_h
#error "EAutoAnimMode.generated.h already included, missing '#pragma once' in EAutoAnimMode.h"
#endif
#define ABP_200508_EAutoAnimMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EAutoAnimMode_h


#define FOREACH_ENUM_EAUTOANIMMODE(op) \
	op(EAutoAnimMode::None) \
	op(EAutoAnimMode::PreviewTest) \
	op(EAutoAnimMode::AllPreviewTest) \
	op(EAutoAnimMode::DistanceTest) 

enum class EAutoAnimMode : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EAutoAnimMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
