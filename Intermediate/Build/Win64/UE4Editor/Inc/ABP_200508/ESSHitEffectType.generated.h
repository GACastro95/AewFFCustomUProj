// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSHitEffectType_generated_h
#error "ESSHitEffectType.generated.h already included, missing '#pragma once' in ESSHitEffectType.h"
#endif
#define ABP_200508_ESSHitEffectType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSHitEffectType_h


#define FOREACH_ENUM_ESSHITEFFECTTYPE(op) \
	op(ESSHitEffectType::None) \
	op(ESSHitEffectType::BareHand_Character) \
	op(ESSHitEffectType::BareHand_Vehicle) \
	op(ESSHitEffectType::BareHand_DestructibleProp) \
	op(ESSHitEffectType::BareHand_ItemBox) \
	op(ESSHitEffectType::BareHand_WeaponTrapObject) \
	op(ESSHitEffectType::WeaponMelee_Character) \
	op(ESSHitEffectType::WeaponMelee_Vehicle) \
	op(ESSHitEffectType::WeaponMelee_DestructibleProp) \
	op(ESSHitEffectType::WeaponMelee_ItemBox) \
	op(ESSHitEffectType::WeaponMelee_WeaponTrapObject) \
	op(ESSHitEffectType::WeaponGun_Character) \
	op(ESSHitEffectType::WeaponGun_Vehicle) \
	op(ESSHitEffectType::WeaponGun_DestructibleProp) \
	op(ESSHitEffectType::WeaponGun_ItemBox) \
	op(ESSHitEffectType::WeaponGun_WeaponTrapObject) \
	op(ESSHitEffectType::WeaponGun_Field) \
	op(ESSHitEffectType::Vehicle_Character) \
	op(ESSHitEffectType::Vehicle_Vehicle) \
	op(ESSHitEffectType::Vehicle_DestructibleProp) \
	op(ESSHitEffectType::Vehicle_ItemBox) \
	op(ESSHitEffectType::Vehicle_WeaponTrapObject) 

enum class ESSHitEffectType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSHitEffectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
