// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSDamageSE_generated_h
#error "ESSDamageSE.generated.h already included, missing '#pragma once' in ESSDamageSE.h"
#endif
#define ABP_200508_ESSDamageSE_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSDamageSE_h


#define FOREACH_ENUM_ESSDAMAGESE(op) \
	op(ESSDamageSE::None) \
	op(ESSDamageSE::punch_weak) \
	op(ESSDamageSE::punch_med) \
	op(ESSDamageSE::punch_strong) \
	op(ESSDamageSE::chop_weak) \
	op(ESSDamageSE::chop_med) \
	op(ESSDamageSE::chop_strong) \
	op(ESSDamageSE::kick_weak) \
	op(ESSDamageSE::kick_med) \
	op(ESSDamageSE::kick_strong) \
	op(ESSDamageSE::superkick) \
	op(ESSDamageSE::elbow_weak) \
	op(ESSDamageSE::elbow_med) \
	op(ESSDamageSE::elbow_strong) \
	op(ESSDamageSE::clothesline_weak) \
	op(ESSDamageSE::clothesline_med) \
	op(ESSDamageSE::clothesline_strong) \
	op(ESSDamageSE::knee_weak) \
	op(ESSDamageSE::knee_med) \
	op(ESSDamageSE::knee_strong) \
	op(ESSDamageSE::headbutt_weak) \
	op(ESSDamageSE::headbutt_med) \
	op(ESSDamageSE::headbutt_strong) \
	op(ESSDamageSE::tackle_weak) \
	op(ESSDamageSE::tackle_med) \
	op(ESSDamageSE::tackle_strong) \
	op(ESSDamageSE::face_slap) \
	op(ESSDamageSE::slap_sweetener) \
	op(ESSDamageSE::guard_generic) \
	op(ESSDamageSE::storm_damage) \
	op(ESSDamageSE::golfcart_hit) \
	op(ESSDamageSE::horse_collide) \
	op(ESSDamageSE::weapon_chair_hit_weak) \
	op(ESSDamageSE::weapon_chair_hit_strong) \
	op(ESSDamageSE::weapon_trashcan_hit_weak) \
	op(ESSDamageSE::weapon_trashcan_hit_strong) \
	op(ESSDamageSE::weapon_table_hit_weak) \
	op(ESSDamageSE::weapon_table_hit_strong) \
	op(ESSDamageSE::weapon_championbelt_hit_weak) \
	op(ESSDamageSE::weapon_championbelt_hit_strong) \
	op(ESSDamageSE::weapon_kendostick_hit_weak) \
	op(ESSDamageSE::weapon_kendostick_hit_strong) \
	op(ESSDamageSE::weapon_trashcanlid_hit_weak) \
	op(ESSDamageSE::weapon_trashcanlid_hit_strong) \
	op(ESSDamageSE::weapon_metalbat_hit_weak) \
	op(ESSDamageSE::weapon_metalbat_hit_strong) \
	op(ESSDamageSE::weapon_broom_hit_weak) \
	op(ESSDamageSE::weapon_broom_hit_strong) \
	op(ESSDamageSE::weapon_skateboard_hit_weak) \
	op(ESSDamageSE::weapon_skateboard_hit_strong) \
	op(ESSDamageSE::weapon_barbedwirebat_hit_weak) \
	op(ESSDamageSE::weapon_barbedwirebat_hit_strong) \
	op(ESSDamageSE::weapon_barbedwirebroom_hit_weak) \
	op(ESSDamageSE::weapon_barbedwirebroom_hit_strong) \
	op(ESSDamageSE::weapon_woodbat_hit_weak) \
	op(ESSDamageSE::weapon_woodbat_hit_strong) \
	op(ESSDamageSE::weapon_cricketbat_hit_weak) \
	op(ESSDamageSE::weapon_cricketbat_hit_strong) \
	op(ESSDamageSE::weapon_crowbar_hit_weak) \
	op(ESSDamageSE::weapon_crowbar_hit_strong) \
	op(ESSDamageSE::weapon_extinguisher_hit_weak) \
	op(ESSDamageSE::weapon_extinguisher_hit_strong) \
	op(ESSDamageSE::weapon_fryingpan_hit_weak) \
	op(ESSDamageSE::weapon_fryingpan_hit_strong) \
	op(ESSDamageSE::weapon_golfclub_hit_weak) \
	op(ESSDamageSE::weapon_golfclub_hit_strong) \
	op(ESSDamageSE::weapon_guitar_hit_weak) \
	op(ESSDamageSE::weapon_guitar_hit_strong) \
	op(ESSDamageSE::weapon_hockeystick_hit_weak) \
	op(ESSDamageSE::weapon_hockeystick_hit_strong) \
	op(ESSDamageSE::weapon_pipe_hit_weak) \
	op(ESSDamageSE::weapon_pipe_hit_strong) \
	op(ESSDamageSE::weapon_cuestick_hit_weak) \
	op(ESSDamageSE::weapon_cuestick_hit_strong) \
	op(ESSDamageSE::weapon_shovel_hit_weak) \
	op(ESSDamageSE::weapon_shovel_hit_strong) \
	op(ESSDamageSE::weapon_sledgehammer_hit_weak) \
	op(ESSDamageSE::weapon_sledgehammer_hit_strong) \
	op(ESSDamageSE::weapon_nailbat_hit_weak) \
	op(ESSDamageSE::weapon_nailbat_hit_strong) \
	op(ESSDamageSE::weapon_saftycone_hit_weak) \
	op(ESSDamageSE::weapon_saftycone_hit_strong) \
	op(ESSDamageSE::weapon_signboard_hit_weak) \
	op(ESSDamageSE::weapon_signboard_hit_strong) \
	op(ESSDamageSE::weapon_glassbottle_hit_weak) \
	op(ESSDamageSE::weapon_glassbottle_hit_strong) \
	op(ESSDamageSE::weapon_pizzabox_hit_weak) \
	op(ESSDamageSE::weapon_pizzabox_hit_strong) \
	op(ESSDamageSE::weapon_gastank_hit_weak) \
	op(ESSDamageSE::weapon_gastank_hit_strong) \
	op(ESSDamageSE::weapon_tire_hit_weak) \
	op(ESSDamageSE::weapon_tire_hit_strong) \
	op(ESSDamageSE::weapon_tray_hit_weak) \
	op(ESSDamageSE::weapon_tray_hit_strong) \
	op(ESSDamageSE::weapon_lacrossestick_hit_weak) \
	op(ESSDamageSE::weapon_lacrossestick_hit_strong) \
	op(ESSDamageSE::weapon_tennisracket_hit_weak) \
	op(ESSDamageSE::weapon_tennisracket_hit_strong) \
	op(ESSDamageSE::weapon_football_hit_weak) \
	op(ESSDamageSE::weapon_football_hit_strong) \
	op(ESSDamageSE::strike_punch_weak) \
	op(ESSDamageSE::strike_punch_med) \
	op(ESSDamageSE::strike_punch_strong) \
	op(ESSDamageSE::strike_kick_weak) \
	op(ESSDamageSE::strike_kick_med) \
	op(ESSDamageSE::strike_kick_strong) \
	op(ESSDamageSE::weapon_bazooka_hit) \
	op(ESSDamageSE::Max) 

enum class ESSDamageSE : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSDamageSE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
