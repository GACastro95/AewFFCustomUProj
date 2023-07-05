// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESaveDataAccessorEvent_generated_h
#error "ESaveDataAccessorEvent.generated.h already included, missing '#pragma once' in ESaveDataAccessorEvent.h"
#endif
#define ABP_200508_ESaveDataAccessorEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESaveDataAccessorEvent_h


#define FOREACH_ENUM_ESAVEDATAACCESSOREVENT(op) \
	op(ESaveDataAccessorEvent::Encrypted) \
	op(ESaveDataAccessorEvent::Decrypted) \
	op(ESaveDataAccessorEvent::Loaded) \
	op(ESaveDataAccessorEvent::Saved) \
	op(ESaveDataAccessorEvent::Downloaded) \
	op(ESaveDataAccessorEvent::Uploaded) \
	op(ESaveDataAccessorEvent::ConvertPS5FromPS4) 

enum class ESaveDataAccessorEvent : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESaveDataAccessorEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
