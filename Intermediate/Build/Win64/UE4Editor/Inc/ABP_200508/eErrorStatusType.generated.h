// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_eErrorStatusType_generated_h
#error "eErrorStatusType.generated.h already included, missing '#pragma once' in eErrorStatusType.h"
#endif
#define ABP_200508_eErrorStatusType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_eErrorStatusType_h


#define FOREACH_ENUM_EERRORSTATUSTYPE(op) \
	op(eErrorStatusType::eErrorStatusType_None) \
	op(eErrorStatusType::eErrorStatusType_OK) \
	op(eErrorStatusType::eErrorStatusType_AwsSdkException) \
	op(eErrorStatusType::eErrorStatusType_RequestValidationError) \
	op(eErrorStatusType::eErrorStatusType_GameSessionNotActive) \
	op(eErrorStatusType::eErrorStatusType_BuildVersionMissmatch) \
	op(eErrorStatusType::eErrorStatusType_Maintenance) 

enum class eErrorStatusType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<eErrorStatusType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
