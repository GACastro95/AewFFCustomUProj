// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELobbyProcStatus_generated_h
#error "ELobbyProcStatus.generated.h already included, missing '#pragma once' in ELobbyProcStatus.h"
#endif
#define ABP_200508_ELobbyProcStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELobbyProcStatus_h


#define FOREACH_ENUM_ELOBBYPROCSTATUS(op) \
	op(ELobbyProcStatus::STATUS_NONE) \
	op(ELobbyProcStatus::STATUS_PROCESSING) 

enum class ELobbyProcStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELobbyProcStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
