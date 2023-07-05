// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSResult : uint8;
enum class EEOSObjectType : uint8;
class UEOSCommon;
#ifdef YEOSSDK_EOSInternalIssueDispatcherDelegate_generated_h
#error "EOSInternalIssueDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSInternalIssueDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSInternalIssueDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInternalIssueDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSInternalIssueDispatcher_Parms \
{ \
	EEOSResult EOSResult; \
	EEOSObjectType EOSObjectType; \
	const UEOSCommon* EOSCommon; \
	FString File; \
	int32 Line; \
}; \
static inline void FEOSInternalIssueDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSInternalIssueDispatcher, EEOSResult EOSResult, EEOSObjectType EOSObjectType, const UEOSCommon* EOSCommon, const FString& File, int32 Line) \
{ \
	_Script_yEOSSDK_eventEOSInternalIssueDispatcher_Parms Parms; \
	Parms.EOSResult=EOSResult; \
	Parms.EOSObjectType=EOSObjectType; \
	Parms.EOSCommon=EOSCommon; \
	Parms.File=File; \
	Parms.Line=Line; \
	EOSInternalIssueDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInternalIssueDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
