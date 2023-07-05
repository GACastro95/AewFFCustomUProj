// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELMatchResult_ItemType_generated_h
#error "EELMatchResult_ItemType.generated.h already included, missing '#pragma once' in EELMatchResult_ItemType.h"
#endif
#define ABP_200508_EELMatchResult_ItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELMatchResult_ItemType_h


#define FOREACH_ENUM_EELMATCHRESULT_ITEMTYPE(op) \
	op(EELMatchResult_ItemType::None) \
	op(EELMatchResult_ItemType::Badge) \
	op(EELMatchResult_ItemType::Rematch) \
	op(EELMatchResult_ItemType::NextMatch) \
	op(EELMatchResult_ItemType::QuitMatch) 

enum class EELMatchResult_ItemType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELMatchResult_ItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
