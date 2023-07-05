// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSCachedTransferCreateOptionBit_generated_h
#error "EEOSCachedTransferCreateOptionBit.generated.h already included, missing '#pragma once' in EEOSCachedTransferCreateOptionBit.h"
#endif
#define YEOSSDK_EEOSCachedTransferCreateOptionBit_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSCachedTransferCreateOptionBit_h


#define FOREACH_ENUM_EEOSCACHEDTRANSFERCREATEOPTIONBIT(op) \
	op(EEOSCachedTransferCreateOptionBit::None) \
	op(EEOSCachedTransferCreateOptionBit::ManageInstance) \
	op(EEOSCachedTransferCreateOptionBit::ManageSocketID) \
	op(EEOSCachedTransferCreateOptionBit::ManageChannel) \
	op(EEOSCachedTransferCreateOptionBit::ManageAll) 

enum class EEOSCachedTransferCreateOptionBit : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSCachedTransferCreateOptionBit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
