// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSLoginErrorType_generated_h
#error "EELEOSLoginErrorType.generated.h already included, missing '#pragma once' in EELEOSLoginErrorType.h"
#endif
#define ABP_200508_EELEOSLoginErrorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSLoginErrorType_h


#define FOREACH_ENUM_EELEOSLOGINERRORTYPE(op) \
	op(EELEOSLoginErrorType::None) \
	op(EELEOSLoginErrorType::Offline) \
	op(EELEOSLoginErrorType::OSS) \
	op(EELEOSLoginErrorType::Auth) \
	op(EELEOSLoginErrorType::Connect) \
	op(EELEOSLoginErrorType::ExternalConnect) \
	op(EELEOSLoginErrorType::Setup) \
	op(EELEOSLoginErrorType::TitleStorage) \
	op(EELEOSLoginErrorType::LinkAccount) 

enum class EELEOSLoginErrorType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSLoginErrorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
