// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSGuardReactionType_generated_h
#error "ESSGuardReactionType.generated.h already included, missing '#pragma once' in ESSGuardReactionType.h"
#endif
#define ABP_200508_ESSGuardReactionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSGuardReactionType_h


#define FOREACH_ENUM_ESSGUARDREACTIONTYPE(op) \
	op(ESSGuardReactionType::None) \
	op(ESSGuardReactionType::DamageReaction) \
	op(ESSGuardReactionType::Guard1) \
	op(ESSGuardReactionType::Guard2) \
	op(ESSGuardReactionType::Guard3) \
	op(ESSGuardReactionType::Break1) \
	op(ESSGuardReactionType::Break2) \
	op(ESSGuardReactionType::Break3) 

enum class ESSGuardReactionType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSGuardReactionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
