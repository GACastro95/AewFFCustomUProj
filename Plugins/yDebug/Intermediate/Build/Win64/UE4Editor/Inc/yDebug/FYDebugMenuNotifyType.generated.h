// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YDEBUG_FYDebugMenuNotifyType_generated_h
#error "FYDebugMenuNotifyType.generated.h already included, missing '#pragma once' in FYDebugMenuNotifyType.h"
#endif
#define YDEBUG_FYDebugMenuNotifyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_FYDebugMenuNotifyType_h


#define FOREACH_ENUM_FYDEBUGMENUNOTIFYTYPE(op) \
	op(FYDebugMenuNotifyType::None) \
	op(FYDebugMenuNotifyType::OnSetup) \
	op(FYDebugMenuNotifyType::OnReset) \
	op(FYDebugMenuNotifyType::OnClick) \
	op(FYDebugMenuNotifyType::OnValueChanged) 

enum class FYDebugMenuNotifyType : uint8;
template<> YDEBUG_API UEnum* StaticEnum<FYDebugMenuNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
