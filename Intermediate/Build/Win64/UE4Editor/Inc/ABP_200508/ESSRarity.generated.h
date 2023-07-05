// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSRarity_generated_h
#error "ESSRarity.generated.h already included, missing '#pragma once' in ESSRarity.h"
#endif
#define ABP_200508_ESSRarity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSRarity_h


#define FOREACH_ENUM_ESSRARITY(op) \
	op(ESSRarity::None) \
	op(ESSRarity::Common) \
	op(ESSRarity::UnCommon) \
	op(ESSRarity::Rare) \
	op(ESSRarity::Epic) \
	op(ESSRarity::Legendary) \
	op(ESSRarity::Max) 

enum class ESSRarity : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
