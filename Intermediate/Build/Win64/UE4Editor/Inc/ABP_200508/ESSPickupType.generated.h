// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSPickupType_generated_h
#error "ESSPickupType.generated.h already included, missing '#pragma once' in ESSPickupType.h"
#endif
#define ABP_200508_ESSPickupType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSPickupType_h


#define FOREACH_ENUM_ESSPICKUPTYPE(op) \
	op(ESSPickupType::None) \
	op(ESSPickupType::Item) \
	op(ESSPickupType::Shield) \
	op(ESSPickupType::Weapon) \
	op(ESSPickupType::Max) 

enum class ESSPickupType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSPickupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
