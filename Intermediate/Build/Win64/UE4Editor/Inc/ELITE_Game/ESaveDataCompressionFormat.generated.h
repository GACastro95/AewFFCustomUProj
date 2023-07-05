// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ESaveDataCompressionFormat_generated_h
#error "ESaveDataCompressionFormat.generated.h already included, missing '#pragma once' in ESaveDataCompressionFormat.h"
#endif
#define ELITE_GAME_ESaveDataCompressionFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ESaveDataCompressionFormat_h


#define FOREACH_ENUM_ESAVEDATACOMPRESSIONFORMAT(op) \
	op(ESaveDataCompressionFormat::Raw) \
	op(ESaveDataCompressionFormat::Encrypt) 

enum class ESaveDataCompressionFormat : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataCompressionFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
