// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESessionPlayerStateType_generated_h
#error "ESessionPlayerStateType.generated.h already included, missing '#pragma once' in ESessionPlayerStateType.h"
#endif
#define ABP_200508_ESessionPlayerStateType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESessionPlayerStateType_h


#define FOREACH_ENUM_ESESSIONPLAYERSTATETYPE(op) \
	op(ESessionPlayerStateType::None) \
	op(ESessionPlayerStateType::Invalid) \
	op(ESessionPlayerStateType::Busy) \
	op(ESessionPlayerStateType::Ready) \
	op(ESessionPlayerStateType::Skip) \
	op(ESessionPlayerStateType::Wait) \
	op(ESessionPlayerStateType::Quit) 

enum class ESessionPlayerStateType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESessionPlayerStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
