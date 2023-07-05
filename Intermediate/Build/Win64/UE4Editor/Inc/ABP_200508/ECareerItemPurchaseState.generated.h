// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerItemPurchaseState_generated_h
#error "ECareerItemPurchaseState.generated.h already included, missing '#pragma once' in ECareerItemPurchaseState.h"
#endif
#define ABP_200508_ECareerItemPurchaseState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerItemPurchaseState_h


#define FOREACH_ENUM_ECAREERITEMPURCHASESTATE(op) \
	op(ECareerItemPurchaseState::None) \
	op(ECareerItemPurchaseState::LackMoney_AvailablePurchase) \
	op(ECareerItemPurchaseState::LcakMoney_HasNoEffect) \
	op(ECareerItemPurchaseState::Purchased) \
	op(ECareerItemPurchaseState::HasNoEffect) \
	op(ECareerItemPurchaseState::AvailablePurchase) 

enum class ECareerItemPurchaseState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerItemPurchaseState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
