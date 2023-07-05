// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EBattlePassRankMatchType_generated_h
#error "EBattlePassRankMatchType.generated.h already included, missing '#pragma once' in EBattlePassRankMatchType.h"
#endif
#define ABP_200508_EBattlePassRankMatchType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EBattlePassRankMatchType_h


#define FOREACH_ENUM_EBATTLEPASSRANKMATCHTYPE(op) \
	op(EBattlePassRankMatchType::NONE) \
	op(EBattlePassRankMatchType::ONE_ON_ONE) \
	op(EBattlePassRankMatchType::TAG) \
	op(EBattlePassRankMatchType::THREE_WAY) \
	op(EBattlePassRankMatchType::FOUR_WAY) \
	op(EBattlePassRankMatchType::CASINO_BATTLE_ROYALE) 

enum class EBattlePassRankMatchType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EBattlePassRankMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
