// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSEndGameReason_generated_h
#error "ESSEndGameReason.generated.h already included, missing '#pragma once' in ESSEndGameReason.h"
#endif
#define ABP_200508_ESSEndGameReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSEndGameReason_h


#define FOREACH_ENUM_ESSENDGAMEREASON(op) \
	op(ESSEndGameReason::None) \
	op(ESSEndGameReason::Win) \
	op(ESSEndGameReason::Lose) \
	op(ESSEndGameReason::Leave) \
	op(ESSEndGameReason::YGS2Error) \
	op(ESSEndGameReason::NetworkStatus) \
	op(ESSEndGameReason::EOSSignout) \
	op(ESSEndGameReason::Illegal) \
	op(ESSEndGameReason::NetworkFailure) 

enum class ESSEndGameReason : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSEndGameReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
