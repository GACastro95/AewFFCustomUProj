// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ESaveDataProcResult_generated_h
#error "ESaveDataProcResult.generated.h already included, missing '#pragma once' in ESaveDataProcResult.h"
#endif
#define ELITE_GAME_ESaveDataProcResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ESaveDataProcResult_h


#define FOREACH_ENUM_ESAVEDATAPROCRESULT(op) \
	op(ESaveDataProcResult::None) \
	op(ESaveDataProcResult::Success) \
	op(ESaveDataProcResult::MajorVersionIsOld) \
	op(ESaveDataProcResult::MinorVersionIsOld) \
	op(ESaveDataProcResult::ValidationError) \
	op(ESaveDataProcResult::ComparationError) \
	op(ESaveDataProcResult::TypeError) \
	op(ESaveDataProcResult::NotFound) \
	op(ESaveDataProcResult::QuotaError_Size) \
	op(ESaveDataProcResult::QuotaError_Disk) \
	op(ESaveDataProcResult::QuotaError_FileLimit) \
	op(ESaveDataProcResult::QuotaError_DirLimit) \
	op(ESaveDataProcResult::Broken) \
	op(ESaveDataProcResult::OverwriteDenied) \
	op(ESaveDataProcResult::PermissionDenied) \
	op(ESaveDataProcResult::InsufficientMemory) \
	op(ESaveDataProcResult::NotImplemented) \
	op(ESaveDataProcResult::SkipedProcess) \
	op(ESaveDataProcResult::Canceled) \
	op(ESaveDataProcResult::RunningBackGroundProcess) \
	op(ESaveDataProcResult::AlreadyRunning) \
	op(ESaveDataProcResult::SystemNotConfigured) \
	op(ESaveDataProcResult::NotInitialized) \
	op(ESaveDataProcResult::ProcessNotConfigured) \
	op(ESaveDataProcResult::WrongArgument) \
	op(ESaveDataProcResult::NoData) \
	op(ESaveDataProcResult::InvalidParameter) \
	op(ESaveDataProcResult::RequestFailed) \
	op(ESaveDataProcResult::IOError) 

enum class ESaveDataProcResult : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataProcResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
