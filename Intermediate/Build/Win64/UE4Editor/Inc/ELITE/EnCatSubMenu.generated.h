// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_EnCatSubMenu_generated_h
#error "EnCatSubMenu.generated.h already included, missing '#pragma once' in EnCatSubMenu.h"
#endif
#define ELITE_EnCatSubMenu_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_EnCatSubMenu_h


#define FOREACH_ENUM_ENCATSUBMENU(op) \
	op(EnCatSubMenu::None) \
	op(EnCatSubMenu::Top) \
	op(EnCatSubMenu::TeamSelect) \
	op(EnCatSubMenu::Loadout) \
	op(EnCatSubMenu::Profile) \
	op(EnCatSubMenu::Member) 

enum class EnCatSubMenu : uint8;
template<> ELITE_API UEnum* StaticEnum<EnCatSubMenu>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
