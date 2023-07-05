// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAliveStateType_generated_h
#error "ESSAliveStateType.generated.h already included, missing '#pragma once' in ESSAliveStateType.h"
#endif
#define ABP_200508_ESSAliveStateType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAliveStateType_h


#define FOREACH_ENUM_ESSALIVESTATETYPE(op) \
	op(ESSAliveStateType::Default) \
	op(ESSAliveStateType::Ko) \
	op(ESSAliveStateType::Dead) 

enum class ESSAliveStateType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAliveStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
