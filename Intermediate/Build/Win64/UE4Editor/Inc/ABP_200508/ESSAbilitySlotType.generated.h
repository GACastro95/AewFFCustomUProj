// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAbilitySlotType_generated_h
#error "ESSAbilitySlotType.generated.h already included, missing '#pragma once' in ESSAbilitySlotType.h"
#endif
#define ABP_200508_ESSAbilitySlotType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAbilitySlotType_h


#define FOREACH_ENUM_ESSABILITYSLOTTYPE(op) \
	op(ESSAbilitySlotType::None) \
	op(ESSAbilitySlotType::ItemBox) \
	op(ESSAbilitySlotType::OpponentRader) \
	op(ESSAbilitySlotType::SafeFeild) \
	op(ESSAbilitySlotType::XRaySpecs) \
	op(ESSAbilitySlotType::Max) 

enum class ESSAbilitySlotType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAbilitySlotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
