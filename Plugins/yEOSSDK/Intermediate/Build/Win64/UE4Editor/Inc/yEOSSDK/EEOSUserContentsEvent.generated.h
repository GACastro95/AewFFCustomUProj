// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSUserContentsEvent_generated_h
#error "EEOSUserContentsEvent.generated.h already included, missing '#pragma once' in EEOSUserContentsEvent.h"
#endif
#define YEOSSDK_EEOSUserContentsEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSUserContentsEvent_h


#define FOREACH_ENUM_EEOSUSERCONTENTSEVENT(op) \
	op(EEOSUserContentsEvent::GetFileList) \
	op(EEOSUserContentsEvent::GetFileListErr) \
	op(EEOSUserContentsEvent::GetFilListEmpty) \
	op(EEOSUserContentsEvent::Download) \
	op(EEOSUserContentsEvent::DownloadErr) \
	op(EEOSUserContentsEvent::DownloadCanceled) \
	op(EEOSUserContentsEvent::DownloadProgress) \
	op(EEOSUserContentsEvent::Upload) \
	op(EEOSUserContentsEvent::UploadErr) \
	op(EEOSUserContentsEvent::UploadCanceled) \
	op(EEOSUserContentsEvent::UploadProgress) \
	op(EEOSUserContentsEvent::Delete) \
	op(EEOSUserContentsEvent::DeleteErr) \
	op(EEOSUserContentsEvent::Duplicate) \
	op(EEOSUserContentsEvent::DuplicateErr) \
	op(EEOSUserContentsEvent::Pending) 

enum class EEOSUserContentsEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSUserContentsEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
