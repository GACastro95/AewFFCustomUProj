// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ESaveDataProcessType_generated_h
#error "ESaveDataProcessType.generated.h already included, missing '#pragma once' in ESaveDataProcessType.h"
#endif
#define ELITE_GAME_ESaveDataProcessType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ESaveDataProcessType_h


#define FOREACH_ENUM_ESAVEDATAPROCESSTYPE(op) \
	op(ESaveDataProcessType::Reader) \
	op(ESaveDataProcessType::Writer) \
	op(ESaveDataProcessType::Uploader) \
	op(ESaveDataProcessType::Downloader) \
	op(ESaveDataProcessType::Deleter) \
	op(ESaveDataProcessType::Encrypter) \
	op(ESaveDataProcessType::Validator) \
	op(ESaveDataProcessType::GetQuota) \
	op(ESaveDataProcessType::Comparator) \
	op(ESaveDataProcessType::ConvertPS5FromPS4) 

enum class ESaveDataProcessType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataProcessType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
