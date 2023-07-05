// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YDEBUG_EJIRAAccessorEvent_generated_h
#error "EJIRAAccessorEvent.generated.h already included, missing '#pragma once' in EJIRAAccessorEvent.h"
#endif
#define YDEBUG_EJIRAAccessorEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_EJIRAAccessorEvent_h


#define FOREACH_ENUM_EJIRAACCESSOREVENT(op) \
	op(EJIRAAccessorEvent::SearchEnd) \
	op(EJIRAAccessorEvent::SearchFailed) \
	op(EJIRAAccessorEvent::Appended) \
	op(EJIRAAccessorEvent::AppendFailed) \
	op(EJIRAAccessorEvent::Updated) \
	op(EJIRAAccessorEvent::UpdateFailed) \
	op(EJIRAAccessorEvent::Deleted) \
	op(EJIRAAccessorEvent::DeleteFailed) 

enum class EJIRAAccessorEvent : uint8;
template<> YDEBUG_API UEnum* StaticEnum<EJIRAAccessorEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
