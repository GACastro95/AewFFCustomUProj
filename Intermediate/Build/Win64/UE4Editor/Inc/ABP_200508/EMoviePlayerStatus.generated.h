// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EMoviePlayerStatus_generated_h
#error "EMoviePlayerStatus.generated.h already included, missing '#pragma once' in EMoviePlayerStatus.h"
#endif
#define ABP_200508_EMoviePlayerStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EMoviePlayerStatus_h


#define FOREACH_ENUM_EMOVIEPLAYERSTATUS(op) \
	op(EMoviePlayerStatus::Stop) \
	op(EMoviePlayerStatus::DecHdr) \
	op(EMoviePlayerStatus::WaitPrep) \
	op(EMoviePlayerStatus::Prep) \
	op(EMoviePlayerStatus::Ready) \
	op(EMoviePlayerStatus::Playing) \
	op(EMoviePlayerStatus::PlayEnd) \
	op(EMoviePlayerStatus::Error) \
	op(EMoviePlayerStatus::StopProcessing) 

enum class EMoviePlayerStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EMoviePlayerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
