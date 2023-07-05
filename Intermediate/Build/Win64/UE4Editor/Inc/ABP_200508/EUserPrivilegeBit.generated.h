// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EUserPrivilegeBit_generated_h
#error "EUserPrivilegeBit.generated.h already included, missing '#pragma once' in EUserPrivilegeBit.h"
#endif
#define ABP_200508_EUserPrivilegeBit_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EUserPrivilegeBit_h


#define FOREACH_ENUM_EUSERPRIVILEGEBIT(op) \
	op(EUserPrivilegeBit::None) \
	op(EUserPrivilegeBit::CanPlay) \
	op(EUserPrivilegeBit::CanPlayOnline) \
	op(EUserPrivilegeBit::CanCommunicateOnline) \
	op(EUserPrivilegeBit::CanUseUserGeneratedContent) \
	op(EUserPrivilegeBit::CanUserCrossPlay) \
	op(EUserPrivilegeBit::All) 

enum class EUserPrivilegeBit : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EUserPrivilegeBit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
