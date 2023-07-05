// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EYGS2DebugMenuCommand_generated_h
#error "EYGS2DebugMenuCommand.generated.h already included, missing '#pragma once' in EYGS2DebugMenuCommand.h"
#endif
#define ABP_200508_EYGS2DebugMenuCommand_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EYGS2DebugMenuCommand_h


#define FOREACH_ENUM_EYGS2DEBUGMENUCOMMAND(op) \
	op(EYGS2DebugMenuCommand::None) \
	op(EYGS2DebugMenuCommand::GetInfo) \
	op(EYGS2DebugMenuCommand::Ping) \
	op(EYGS2DebugMenuCommand::AppAuth) \
	op(EYGS2DebugMenuCommand::UserAuth) \
	op(EYGS2DebugMenuCommand::GetPlayerData) \
	op(EYGS2DebugMenuCommand::GetUserItems) \
	op(EYGS2DebugMenuCommand::PurchaseHistory) \
	op(EYGS2DebugMenuCommand::FindPurchaseHistory) \
	op(EYGS2DebugMenuCommand::CreatePurchaseHistory) \
	op(EYGS2DebugMenuCommand::ConsumeGold) \
	op(EYGS2DebugMenuCommand::ConsumeGoldHistory) \
	op(EYGS2DebugMenuCommand::CreateConsumeGold) \
	op(EYGS2DebugMenuCommand::ConsumeItem) \
	op(EYGS2DebugMenuCommand::ConsumeItemHistory) \
	op(EYGS2DebugMenuCommand::CreateConsumeItem) \
	op(EYGS2DebugMenuCommand::GetBattlePassData) \
	op(EYGS2DebugMenuCommand::UpdateBattlePassData) \
	op(EYGS2DebugMenuCommand::SetUserStats) \
	op(EYGS2DebugMenuCommand::GetUserStats) \
	op(EYGS2DebugMenuCommand::GetShopItems) \
	op(EYGS2DebugMenuCommand::SetUserStats_SampleStruct) \
	op(EYGS2DebugMenuCommand::GetUserStats_SampleStruct) \
	op(EYGS2DebugMenuCommand::AddEvent) \
	op(EYGS2DebugMenuCommand::DBG_SetPlayerData) \
	op(EYGS2DebugMenuCommand::DBG_Reset) \
	op(EYGS2DebugMenuCommand::SetSSPlayerData) \
	op(EYGS2DebugMenuCommand::GetSSPlayerData) \
	op(EYGS2DebugMenuCommand::Max) 

enum class EYGS2DebugMenuCommand : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EYGS2DebugMenuCommand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
