// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSButtonHold_generated_h
#error "ESSButtonHold.generated.h already included, missing '#pragma once' in ESSButtonHold.h"
#endif
#define ABP_200508_ESSButtonHold_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSButtonHold_h


#define FOREACH_ENUM_ESSBUTTONHOLD(op) \
	op(ESSButtonHold::Punch) \
	op(ESSButtonHold::Kick) \
	op(ESSButtonHold::Grapple) \
	op(ESSButtonHold::Interact) \
	op(ESSButtonHold::Max) 

enum class ESSButtonHold : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSButtonHold>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
