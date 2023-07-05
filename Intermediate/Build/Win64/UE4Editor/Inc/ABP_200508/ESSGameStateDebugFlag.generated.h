// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSGameStateDebugFlag_generated_h
#error "ESSGameStateDebugFlag.generated.h already included, missing '#pragma once' in ESSGameStateDebugFlag.h"
#endif
#define ABP_200508_ESSGameStateDebugFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSGameStateDebugFlag_h


#define FOREACH_ENUM_ESSGAMESTATEDEBUGFLAG(op) \
	op(ESSGameStateDebugFlag::None) \
	op(ESSGameStateDebugFlag::AIPlayerAutoKill) \
	op(ESSGameStateDebugFlag::AIPlayerNoDamage) \
	op(ESSGameStateDebugFlag::StartAssemble) \
	op(ESSGameStateDebugFlag::Profiling) \
	op(ESSGameStateDebugFlag::AIAutoInput_MoveForward) \
	op(ESSGameStateDebugFlag::AIAutoInput_MoveRotate) \
	op(ESSGameStateDebugFlag::AIAutoInput_MoveToTarget) \
	op(ESSGameStateDebugFlag::AIAutoInput_Guard) \
	op(ESSGameStateDebugFlag::AIAutoInput_Jump) \
	op(ESSGameStateDebugFlag::AIAutoInput_AirJump) \
	op(ESSGameStateDebugFlag::AIAutoInput_Attack) \
	op(ESSGameStateDebugFlag::AIAutoInput_AirAttack) \
	op(ESSGameStateDebugFlag::CreateSituationForProfiling_TypeA) \
	op(ESSGameStateDebugFlag::CreateSituationForProfiling_TypeB) \
	op(ESSGameStateDebugFlag::CreateSituationForProfiling_TypeC) \
	op(ESSGameStateDebugFlag::TimeoutDurationExtend) \
	op(ESSGameStateDebugFlag::AIDisableAll) \
	op(ESSGameStateDebugFlag::BlockSaveAnalyticsLog) \
	op(ESSGameStateDebugFlag::Max) 

enum class ESSGameStateDebugFlag : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSGameStateDebugFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
