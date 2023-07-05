// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EAnimErrType_generated_h
#error "EAnimErrType.generated.h already included, missing '#pragma once' in EAnimErrType.h"
#endif
#define ABP_200508_EAnimErrType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EAnimErrType_h


#define FOREACH_ENUM_EANIMERRTYPE(op) \
	op(EAnimErrType::NoError) \
	op(EAnimErrType::TimeOut) \
	op(EAnimErrType::MissingAnimData) \
	op(EAnimErrType::HitandSyncFailure) \
	op(EAnimErrType::DistanceCheck) \
	op(EAnimErrType::NotHit) 

enum class EAnimErrType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EAnimErrType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
