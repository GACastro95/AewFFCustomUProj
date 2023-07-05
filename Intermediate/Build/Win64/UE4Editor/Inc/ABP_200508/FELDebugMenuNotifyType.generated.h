// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_FELDebugMenuNotifyType_generated_h
#error "FELDebugMenuNotifyType.generated.h already included, missing '#pragma once' in FELDebugMenuNotifyType.h"
#endif
#define ABP_200508_FELDebugMenuNotifyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_FELDebugMenuNotifyType_h


#define FOREACH_ENUM_FELDEBUGMENUNOTIFYTYPE(op) \
	op(FELDebugMenuNotifyType::None) \
	op(FELDebugMenuNotifyType::OnSetup) \
	op(FELDebugMenuNotifyType::OnReset) \
	op(FELDebugMenuNotifyType::OnClick) \
	op(FELDebugMenuNotifyType::OnValueChanged) 

enum class FELDebugMenuNotifyType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<FELDebugMenuNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
