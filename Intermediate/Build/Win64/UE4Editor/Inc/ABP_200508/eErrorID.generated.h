// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_eErrorID_generated_h
#error "eErrorID.generated.h already included, missing '#pragma once' in eErrorID.h"
#endif
#define ABP_200508_eErrorID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_eErrorID_h


#define FOREACH_ENUM_EERRORID(op) \
	op(eErrorID::eErrorID_None) \
	op(eErrorID::eErrorID_HTTP) \
	op(eErrorID::eErrorID_SS) \
	op(eErrorID::eErrorID_YGS2) \
	op(eErrorID::eErrorID_AWS) \
	op(eErrorID::eErrorID_ServerNET) \
	op(eErrorID::eErrorID_EOS) \
	op(eErrorID::eErrorID_Platform) \
	op(eErrorID::eErrorID_Num) 

enum class eErrorID : uint8;
template<> ABP_200508_API UEnum* StaticEnum<eErrorID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
