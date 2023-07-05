// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_eSSRequestResultType_generated_h
#error "eSSRequestResultType.generated.h already included, missing '#pragma once' in eSSRequestResultType.h"
#endif
#define ABP_200508_eSSRequestResultType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_eSSRequestResultType_h


#define FOREACH_ENUM_ESSREQUESTRESULTTYPE(op) \
	op(eSSRequestResultType::eSSRequestResultType_Success) \
	op(eSSRequestResultType::eSSRequestResultType_Failed) \
	op(eSSRequestResultType::eSSRequestResultType_ErrDialog) 

enum class eSSRequestResultType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<eSSRequestResultType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
