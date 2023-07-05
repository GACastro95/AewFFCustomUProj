// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerDebug_AutoPlayType_generated_h
#error "ECareerDebug_AutoPlayType.generated.h already included, missing '#pragma once' in ECareerDebug_AutoPlayType.h"
#endif
#define ABP_200508_ECareerDebug_AutoPlayType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerDebug_AutoPlayType_h


#define FOREACH_ENUM_ECAREERDEBUG_AUTOPLAYTYPE(op) \
	op(ECareerDebug_AutoPlayType::None) \
	op(ECareerDebug_AutoPlayType::Random) \
	op(ECareerDebug_AutoPlayType::DataDriven_All) \
	op(ECareerDebug_AutoPlayType::DataDriven_Range) \
	op(ECareerDebug_AutoPlayType::DataDriven_Individual) 

enum class ECareerDebug_AutoPlayType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerDebug_AutoPlayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
