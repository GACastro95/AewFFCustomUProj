// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSInteractPriority_generated_h
#error "ESSInteractPriority.generated.h already included, missing '#pragma once' in ESSInteractPriority.h"
#endif
#define ABP_200508_ESSInteractPriority_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSInteractPriority_h


#define FOREACH_ENUM_ESSINTERACTPRIORITY(op) \
	op(ESSInteractPriority::Default) \
	op(ESSInteractPriority::Vehicle) \
	op(ESSInteractPriority::TreasureBox) \
	op(ESSInteractPriority::GimmickInteractable) \
	op(ESSInteractPriority::PickupDefault) \
	op(ESSInteractPriority::PickupWeapon) \
	op(ESSInteractPriority::PickupItem) 

enum class ESSInteractPriority : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSInteractPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
