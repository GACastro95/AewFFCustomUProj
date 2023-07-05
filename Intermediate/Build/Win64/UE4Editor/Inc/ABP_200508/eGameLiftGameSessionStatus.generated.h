// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_eGameLiftGameSessionStatus_generated_h
#error "eGameLiftGameSessionStatus.generated.h already included, missing '#pragma once' in eGameLiftGameSessionStatus.h"
#endif
#define ABP_200508_eGameLiftGameSessionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_eGameLiftGameSessionStatus_h


#define FOREACH_ENUM_EGAMELIFTGAMESESSIONSTATUS(op) \
	op(eGameLiftGameSessionStatus::eSTATE_Activating) \
	op(eGameLiftGameSessionStatus::eSTATE_Active) \
	op(eGameLiftGameSessionStatus::eSTATE_Error) \
	op(eGameLiftGameSessionStatus::eSTATE_NotSet) \
	op(eGameLiftGameSessionStatus::eSTATE_Terminating) \
	op(eGameLiftGameSessionStatus::eSTATE_Terminated) \
	op(eGameLiftGameSessionStatus::eSTATE_Not) 

enum class eGameLiftGameSessionStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<eGameLiftGameSessionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
