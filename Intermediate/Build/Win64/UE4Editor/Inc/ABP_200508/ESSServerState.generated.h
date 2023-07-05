// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSServerState_generated_h
#error "ESSServerState.generated.h already included, missing '#pragma once' in ESSServerState.h"
#endif
#define ABP_200508_ESSServerState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSServerState_h


#define FOREACH_ENUM_ESSSERVERSTATE(op) \
	op(ESSServerState::None) \
	op(ESSServerState::Initialize) \
	op(ESSServerState::DownloadTitleStorage) \
	op(ESSServerState::WaitStartGameSession) \
	op(ESSServerState::DataLoading) \
	op(ESSServerState::Matching) \
	op(ESSServerState::WaitSpawnClientActor) \
	op(ESSServerState::InProgress) \
	op(ESSServerState::Closing) \
	op(ESSServerState::Exit) 

enum class ESSServerState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSServerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
