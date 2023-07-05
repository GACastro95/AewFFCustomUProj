// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YDEBUG_EJIRARequestType_generated_h
#error "EJIRARequestType.generated.h already included, missing '#pragma once' in EJIRARequestType.h"
#endif
#define YDEBUG_EJIRARequestType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_EJIRARequestType_h


#define FOREACH_ENUM_EJIRAREQUESTTYPE(op) \
	op(EJIRARequestType::Search) \
	op(EJIRARequestType::CreateIssue) \
	op(EJIRARequestType::GetIssue) \
	op(EJIRARequestType::UpdateIssue) \
	op(EJIRARequestType::DeleteIssue) 

enum class EJIRARequestType : uint8;
template<> YDEBUG_API UEnum* StaticEnum<EJIRARequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
