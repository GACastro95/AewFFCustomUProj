// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSLocatorType_generated_h
#error "ESSLocatorType.generated.h already included, missing '#pragma once' in ESSLocatorType.h"
#endif
#define ABP_200508_ESSLocatorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSLocatorType_h


#define FOREACH_ENUM_ESSLOCATORTYPE(op) \
	op(ESSLocatorType::Default) \
	op(ESSLocatorType::PlayerStart) \
	op(ESSLocatorType::ItemBox) \
	op(ESSLocatorType::Vehicle) \
	op(ESSLocatorType::Max) 

enum class ESSLocatorType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSLocatorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
