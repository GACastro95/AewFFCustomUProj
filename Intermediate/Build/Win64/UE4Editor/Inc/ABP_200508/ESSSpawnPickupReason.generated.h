// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSSpawnPickupReason_generated_h
#error "ESSSpawnPickupReason.generated.h already included, missing '#pragma once' in ESSSpawnPickupReason.h"
#endif
#define ABP_200508_ESSSpawnPickupReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSSpawnPickupReason_h


#define FOREACH_ENUM_ESSSPAWNPICKUPREASON(op) \
	op(ESSSpawnPickupReason::None) \
	op(ESSSpawnPickupReason::ItemBox) \
	op(ESSSpawnPickupReason::Gimmick) \
	op(ESSSpawnPickupReason::Attention) 

enum class ESSSpawnPickupReason : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSSpawnPickupReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
