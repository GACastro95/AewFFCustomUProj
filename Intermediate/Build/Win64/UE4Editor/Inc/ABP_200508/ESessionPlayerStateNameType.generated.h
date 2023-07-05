// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESessionPlayerStateNameType_generated_h
#error "ESessionPlayerStateNameType.generated.h already included, missing '#pragma once' in ESessionPlayerStateNameType.h"
#endif
#define ABP_200508_ESessionPlayerStateNameType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESessionPlayerStateNameType_h


#define FOREACH_ENUM_ESESSIONPLAYERSTATENAMETYPE(op) \
	op(ESessionPlayerStateNameType::Initialize) \
	op(ESessionPlayerStateNameType::Map) \
	op(ESessionPlayerStateNameType::Entrance) \
	op(ESessionPlayerStateNameType::Start) \
	op(ESessionPlayerStateNameType::Match) \
	op(ESessionPlayerStateNameType::Restart) \
	op(ESessionPlayerStateNameType::Assets) \
	op(ESessionPlayerStateNameType::NextMatch) \
	op(ESessionPlayerStateNameType::Widget) \
	op(ESessionPlayerStateNameType::Max) 

enum class ESessionPlayerStateNameType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESessionPlayerStateNameType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
