// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YDEBUG_EBugReportSupportType_generated_h
#error "EBugReportSupportType.generated.h already included, missing '#pragma once' in EBugReportSupportType.h"
#endif
#define YDEBUG_EBugReportSupportType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_EBugReportSupportType_h


#define FOREACH_ENUM_EBUGREPORTSUPPORTTYPE(op) \
	op(EBugReportSupportType::None) \
	op(EBugReportSupportType::Mail) \
	op(EBugReportSupportType::Mail_JIRA) \
	op(EBugReportSupportType::JIRA) \
	op(EBugReportSupportType::Max) 

enum class EBugReportSupportType : uint8;
template<> YDEBUG_API UEnum* StaticEnum<EBugReportSupportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
