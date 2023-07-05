// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSSpawnItemCategory_generated_h
#error "ESSSpawnItemCategory.generated.h already included, missing '#pragma once' in ESSSpawnItemCategory.h"
#endif
#define ABP_200508_ESSSpawnItemCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSSpawnItemCategory_h


#define FOREACH_ENUM_ESSSPAWNITEMCATEGORY(op) \
	op(ESSSpawnItemCategory::None) \
	op(ESSSpawnItemCategory::HpItem) \
	op(ESSSpawnItemCategory::ExpItem) \
	op(ESSSpawnItemCategory::ShieldItem) \
	op(ESSSpawnItemCategory::OtherItem) \
	op(ESSSpawnItemCategory::Weapon) \
	op(ESSSpawnItemCategory::Max) 

enum class ESSSpawnItemCategory : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSSpawnItemCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
