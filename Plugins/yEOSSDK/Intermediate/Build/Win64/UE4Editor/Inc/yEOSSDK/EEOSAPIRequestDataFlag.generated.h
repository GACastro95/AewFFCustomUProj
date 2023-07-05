// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAPIRequestDataFlag_generated_h
#error "EEOSAPIRequestDataFlag.generated.h already included, missing '#pragma once' in EEOSAPIRequestDataFlag.h"
#endif
#define YEOSSDK_EEOSAPIRequestDataFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAPIRequestDataFlag_h


#define FOREACH_ENUM_EEOSAPIREQUESTDATAFLAG(op) \
	op(EEOSAPIRequestDataFlag::None) \
	op(EEOSAPIRequestDataFlag::Cancelable) \
	op(EEOSAPIRequestDataFlag::Canceled) 

enum class EEOSAPIRequestDataFlag : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAPIRequestDataFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
