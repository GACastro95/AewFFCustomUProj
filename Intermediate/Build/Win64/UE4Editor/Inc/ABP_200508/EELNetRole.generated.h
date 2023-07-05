// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELNetRole_generated_h
#error "EELNetRole.generated.h already included, missing '#pragma once' in EELNetRole.h"
#endif
#define ABP_200508_EELNetRole_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELNetRole_h


#define FOREACH_ENUM_EELNETROLE(op) \
	op(EELNetRole::ROLE_None) \
	op(EELNetRole::ROLE_Authority) \
	op(EELNetRole::ROLE_TempAuthority) \
	op(EELNetRole::ROLE_AuthorityMask) \
	op(EELNetRole::ROLE_ELMode) \
	op(EELNetRole::ROLE_DisabledRPC) \
	op(EELNetRole::ROLE_ModeMask) 

enum class EELNetRole : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELNetRole>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
