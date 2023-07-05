// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSResult_generated_h
#error "EEOSResult.generated.h already included, missing '#pragma once' in EEOSResult.h"
#endif
#define YEOSSDK_EEOSResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSResult_h


#define FOREACH_ENUM_EEOSRESULT(op) \
	op(EEOSResult::Success) \
	op(EEOSResult::AlreadyStarted) \
	op(EEOSResult::AlreadyStoped) \
	op(EEOSResult::AlreadyContaintsData) \
	op(EEOSResult::AlreadyContaintsUser) \
	op(EEOSResult::AlreadyContaintsInstance) \
	op(EEOSResult::AlreadyRegistered) \
	op(EEOSResult::AlreadyInitialized) \
	op(EEOSResult::AlreadyReleased) \
	op(EEOSResult::ContainsNoData) \
	op(EEOSResult::ContainsNoUser) \
	op(EEOSResult::ContainsNoInstance) \
	op(EEOSResult::WrongHandle) \
	op(EEOSResult::WrongEOSHandle) \
	op(EEOSResult::WrongInstance) \
	op(EEOSResult::WrongArgument) \
	op(EEOSResult::WrongFormat) \
	op(EEOSResult::WrongType) \
	op(EEOSResult::WrongString) \
	op(EEOSResult::WrongTargetUser) \
	op(EEOSResult::WrongInternalStatus) \
	op(EEOSResult::QueryResultIsError) \
	op(EEOSResult::InternalStateError) \
	op(EEOSResult::EOSSDKInternalError) \
	op(EEOSResult::IncommoingNotAcceptSocketID) \
	op(EEOSResult::UnknownChannelID) \
	op(EEOSResult::PermissionDeniedByDevPortal) \
	op(EEOSResult::ConvertStringFailed) \
	op(EEOSResult::InsufficientMemory) \
	op(EEOSResult::NeedsEpicAccountID) \
	op(EEOSResult::NeedsEpicLocalAccountID) \
	op(EEOSResult::NeedsProductUserID) \
	op(EEOSResult::NeedsInvitedID) \
	op(EEOSResult::WrongPermission) \
	op(EEOSResult::TargetUserIsOwn) \
	op(EEOSResult::NotSessionOwner) \
	op(EEOSResult::RequestSendPacketFailed) \
	op(EEOSResult::NeedsImplementation) \
	op(EEOSResult::MaxRetry) \
	op(EEOSResult::LockedTheList) \
	op(EEOSResult::ReplyPacketIsEmpty) \
	op(EEOSResult::FileNotFound) \
	op(EEOSResult::FileIsEmpty) \
	op(EEOSResult::FileOpenFailed) \
	op(EEOSResult::FileReadFailed) \
	op(EEOSResult::FileWriteFailed) \
	op(EEOSResult::CreateDirectoryFailed) \
	op(EEOSResult::FatalError) 

enum class EEOSResult : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
