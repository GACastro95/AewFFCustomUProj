// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSRequestVerbType_generated_h
#error "ESSRequestVerbType.generated.h already included, missing '#pragma once' in ESSRequestVerbType.h"
#endif
#define ABP_200508_ESSRequestVerbType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSRequestVerbType_h


#define FOREACH_ENUM_ESSREQUESTVERBTYPE(op) \
	op(ESSRequestVerbType::ESSRequestVerbType_GET) \
	op(ESSRequestVerbType::ESSRequestVerbType_POST) \
	op(ESSRequestVerbType::ESSRequestVerbType_PUT) \
	op(ESSRequestVerbType::ESSRequestVerbType_NUM) 

enum class ESSRequestVerbType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSRequestVerbType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
