// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSTitleStorageEvent_generated_h
#error "EEOSTitleStorageEvent.generated.h already included, missing '#pragma once' in EEOSTitleStorageEvent.h"
#endif
#define YEOSSDK_EEOSTitleStorageEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSTitleStorageEvent_h


#define FOREACH_ENUM_EEOSTITLESTORAGEEVENT(op) \
	op(EEOSTitleStorageEvent::GetFileList) \
	op(EEOSTitleStorageEvent::GetFileListErr) \
	op(EEOSTitleStorageEvent::GetFileListEmpty) \
	op(EEOSTitleStorageEvent::Download) \
	op(EEOSTitleStorageEvent::DownloadErr) \
	op(EEOSTitleStorageEvent::DownloadCanceled) \
	op(EEOSTitleStorageEvent::DownloadProgress) \
	op(EEOSTitleStorageEvent::Pending) 

enum class EEOSTitleStorageEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSTitleStorageEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
