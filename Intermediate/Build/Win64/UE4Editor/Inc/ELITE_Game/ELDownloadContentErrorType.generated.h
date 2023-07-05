// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ELDownloadContentErrorType_generated_h
#error "ELDownloadContentErrorType.generated.h already included, missing '#pragma once' in ELDownloadContentErrorType.h"
#endif
#define ELITE_GAME_ELDownloadContentErrorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELDownloadContentErrorType_h


#define FOREACH_ENUM_ELDOWNLOADCONTENTERRORTYPE(op) \
	op(ELDownloadContentErrorType::None) \
	op(ELDownloadContentErrorType::ShortageVersion) \
	op(ELDownloadContentErrorType::NotFoundItem) \
	op(ELDownloadContentErrorType::Max) 

enum class ELDownloadContentErrorType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ELDownloadContentErrorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
