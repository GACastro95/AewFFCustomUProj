// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSItemType_generated_h
#error "ESSItemType.generated.h already included, missing '#pragma once' in ESSItemType.h"
#endif
#define ABP_200508_ESSItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSItemType_h


#define FOREACH_ENUM_ESSITEMTYPE(op) \
	op(ESSItemType::None) \
	op(ESSItemType::Hp) \
	op(ESSItemType::Exp) \
	op(ESSItemType::RecoveryShield) \
	op(ESSItemType::Carrot) 

enum class ESSItemType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
