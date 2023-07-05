// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGS2CLIENT_EYGS2Api_generated_h
#error "EYGS2Api.generated.h already included, missing '#pragma once' in EYGS2Api.h"
#endif
#define YGS2CLIENT_EYGS2Api_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_EYGS2Api_h


#define FOREACH_ENUM_EYGS2API(op) \
	op(EYGS2Api::None) \
	op(EYGS2Api::GetInfo) \
	op(EYGS2Api::Ping) \
	op(EYGS2Api::AppAuth) \
	op(EYGS2Api::UserAuth) \
	op(EYGS2Api::RegistUser) \
	op(EYGS2Api::GetSSInfo) \
	op(EYGS2Api::GetPlayerData) \
	op(EYGS2Api::SetPlayerData) \
	op(EYGS2Api::PurchaseHistory) \
	op(EYGS2Api::ConsumeGold) \
	op(EYGS2Api::ConsumeItem) \
	op(EYGS2Api::UserItems) \
	op(EYGS2Api::BattlePass) \
	op(EYGS2Api::UserStats) \
	op(EYGS2Api::RankMatchRecord) \
	op(EYGS2Api::ShopItems) \
	op(EYGS2Api::Events) \
	op(EYGS2Api::SetSSPlayerData) \
	op(EYGS2Api::GetSSPlayerData) \
	op(EYGS2Api::SetSSGameStart) \
	op(EYGS2Api::SetSSGameResult) \
	op(EYGS2Api::SetSSSessionResult) \
	op(EYGS2Api::GetSSMasterData) \
	op(EYGS2Api::Analytics) 

enum class EYGS2Api : uint8;
template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2Api>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
