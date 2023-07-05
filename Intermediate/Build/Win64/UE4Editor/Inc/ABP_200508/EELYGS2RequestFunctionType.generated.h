// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELYGS2RequestFunctionType_generated_h
#error "EELYGS2RequestFunctionType.generated.h already included, missing '#pragma once' in EELYGS2RequestFunctionType.h"
#endif
#define ABP_200508_EELYGS2RequestFunctionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELYGS2RequestFunctionType_h


#define FOREACH_ENUM_EELYGS2REQUESTFUNCTIONTYPE(op) \
	op(EELYGS2RequestFunctionType::Default) \
	op(EELYGS2RequestFunctionType::Read) \
	op(EELYGS2RequestFunctionType::Create) \
	op(EELYGS2RequestFunctionType::Update) \
	op(EELYGS2RequestFunctionType::Delete) \
	op(EELYGS2RequestFunctionType::Cancel) 

enum class EELYGS2RequestFunctionType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELYGS2RequestFunctionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
