// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSActorType_generated_h
#error "ESSActorType.generated.h already included, missing '#pragma once' in ESSActorType.h"
#endif
#define ABP_200508_ESSActorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSActorType_h


#define FOREACH_ENUM_ESSACTORTYPE(op) \
	op(ESSActorType::Misc) \
	op(ESSActorType::Storm) \
	op(ESSActorType::Character) \
	op(ESSActorType::Vehicle) \
	op(ESSActorType::GunBullet) \
	op(ESSActorType::DestructibleProp) \
	op(ESSActorType::PickupItem) \
	op(ESSActorType::PickupWeapon) \
	op(ESSActorType::PickupShield) \
	op(ESSActorType::WeaponThrowProjectie) \
	op(ESSActorType::WeaponTrapObject) \
	op(ESSActorType::ItemBox) \
	op(ESSActorType::TreasureBox) \
	op(ESSActorType::Gimmick) 

enum class ESSActorType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSActorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
