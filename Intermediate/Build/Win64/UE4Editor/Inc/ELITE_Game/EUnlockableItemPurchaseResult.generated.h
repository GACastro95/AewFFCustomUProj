// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EUnlockableItemPurchaseResult_generated_h
#error "EUnlockableItemPurchaseResult.generated.h already included, missing '#pragma once' in EUnlockableItemPurchaseResult.h"
#endif
#define ELITE_GAME_EUnlockableItemPurchaseResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EUnlockableItemPurchaseResult_h


#define FOREACH_ENUM_EUNLOCKABLEITEMPURCHASERESULT(op) \
	op(EUnlockableItemPurchaseResult::None) \
	op(EUnlockableItemPurchaseResult::Success) \
	op(EUnlockableItemPurchaseResult::AccessFailureOfCash) \
	op(EUnlockableItemPurchaseResult::InsufficientFundsOfCash) \
	op(EUnlockableItemPurchaseResult::AccessFailureOfGold) \
	op(EUnlockableItemPurchaseResult::InsufficientFundsOfGold) \
	op(EUnlockableItemPurchaseResult::NotFoundItem) \
	op(EUnlockableItemPurchaseResult::NetworkError) \
	op(EUnlockableItemPurchaseResult::SystemError) 

enum class EUnlockableItemPurchaseResult : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EUnlockableItemPurchaseResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
