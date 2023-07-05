// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EShopDisplayItemType_generated_h
#error "EShopDisplayItemType.generated.h already included, missing '#pragma once' in EShopDisplayItemType.h"
#endif
#define ELITE_GAME_EShopDisplayItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EShopDisplayItemType_h


#define FOREACH_ENUM_ESHOPDISPLAYITEMTYPE(op) \
	op(EShopDisplayItemType::None) \
	op(EShopDisplayItemType::UnlockableItem) \
	op(EShopDisplayItemType::PossessItem) 

enum class EShopDisplayItemType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EShopDisplayItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
