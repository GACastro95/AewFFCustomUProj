// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSInteractExecute_generated_h
#error "ESSInteractExecute.generated.h already included, missing '#pragma once' in ESSInteractExecute.h"
#endif
#define ABP_200508_ESSInteractExecute_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSInteractExecute_h


#define FOREACH_ENUM_ESSINTERACTEXECUTE(op) \
	op(ESSInteractExecute::None) \
	op(ESSInteractExecute::Finisher) \
	op(ESSInteractExecute::GetOnVehicle) \
	op(ESSInteractExecute::GetOnHorse) \
	op(ESSInteractExecute::OpenTreasureBox) \
	op(ESSInteractExecute::SituationMove) \
	op(ESSInteractExecute::PickupItemInfo) \
	op(ESSInteractExecute::PickupWeaponInfo) \
	op(ESSInteractExecute::OperateVending) \
	op(ESSInteractExecute::OperateSlotMachine) \
	op(ESSInteractExecute::HorseSpawnPoint) \
	op(ESSInteractExecute::HorseSpawnPointWithoutCarrot) 

enum class ESSInteractExecute : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSInteractExecute>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
