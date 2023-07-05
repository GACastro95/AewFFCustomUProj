// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSLevelType_generated_h
#error "ESSLevelType.generated.h already included, missing '#pragma once' in ESSLevelType.h"
#endif
#define ABP_200508_ESSLevelType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSLevelType_h


#define FOREACH_ENUM_ESSLEVELTYPE(op) \
	op(ESSLevelType::None) \
	op(ESSLevelType::BaseGame) \
	op(ESSLevelType::SSMainMenu) \
	op(ESSLevelType::SSInGame) \
	op(ESSLevelType::LoadingToBaseGame) \
	op(ESSLevelType::LoadingToSSMainMenu) \
	op(ESSLevelType::LoadingToSSInGame) 

enum class ESSLevelType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSLevelType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
