// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EMomentumStateType_generated_h
#error "EMomentumStateType.generated.h already included, missing '#pragma once' in EMomentumStateType.h"
#endif
#define ABP_200508_EMomentumStateType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EMomentumStateType_h


#define FOREACH_ENUM_EMOMENTUMSTATETYPE(op) \
	op(EMomentumStateType::Neutral) \
	op(EMomentumStateType::Excite) \
	op(EMomentumStateType::StockSpecial) \
	op(EMomentumStateType::Special) \
	op(EMomentumStateType::Calm) \
	op(EMomentumStateType::Danger) 

enum class EMomentumStateType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EMomentumStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
