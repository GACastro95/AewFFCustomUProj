// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ESaveDataAccessorProcMode_generated_h
#error "ESaveDataAccessorProcMode.generated.h already included, missing '#pragma once' in ESaveDataAccessorProcMode.h"
#endif
#define ELITE_GAME_ESaveDataAccessorProcMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ESaveDataAccessorProcMode_h


#define FOREACH_ENUM_ESAVEDATAACCESSORPROCMODE(op) \
	op(ESaveDataAccessorProcMode::None) \
	op(ESaveDataAccessorProcMode::CreateNew) \
	op(ESaveDataAccessorProcMode::Access) \
	op(ESaveDataAccessorProcMode::ReleaseAccess) \
	op(ESaveDataAccessorProcMode::Load) \
	op(ESaveDataAccessorProcMode::Save) \
	op(ESaveDataAccessorProcMode::Load_ForDebug) \
	op(ESaveDataAccessorProcMode::Save_ForDebug) \
	op(ESaveDataAccessorProcMode::Copy) \
	op(ESaveDataAccessorProcMode::Delete) \
	op(ESaveDataAccessorProcMode::Download) \
	op(ESaveDataAccessorProcMode::Upload) \
	op(ESaveDataAccessorProcMode::DeleteOnServer) \
	op(ESaveDataAccessorProcMode::DownloadTitleData) \
	op(ESaveDataAccessorProcMode::ListForLocalData) \
	op(ESaveDataAccessorProcMode::ListForLocalData_ProjDir) \
	op(ESaveDataAccessorProcMode::ListForServerData) \
	op(ESaveDataAccessorProcMode::ListForTitleData) \
	op(ESaveDataAccessorProcMode::CacheLoad) \
	op(ESaveDataAccessorProcMode::GetQuota) \
	op(ESaveDataAccessorProcMode::ConvertPS5FromPS4) \
	op(ESaveDataAccessorProcMode::Import) \
	op(ESaveDataAccessorProcMode::Export) \
	op(ESaveDataAccessorProcMode::CompareHash) 

enum class ESaveDataAccessorProcMode : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataAccessorProcMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
