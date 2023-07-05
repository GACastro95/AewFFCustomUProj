// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELNetworkConnectionStatus_generated_h
#error "EELNetworkConnectionStatus.generated.h already included, missing '#pragma once' in EELNetworkConnectionStatus.h"
#endif
#define ABP_200508_EELNetworkConnectionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELNetworkConnectionStatus_h


#define FOREACH_ENUM_EELNETWORKCONNECTIONSTATUS(op) \
	op(EELNetworkConnectionStatus::NoConnection) \
	op(EELNetworkConnectionStatus::Connected) \
	op(EELNetworkConnectionStatus::Maintenance) \
	op(EELNetworkConnectionStatus::ServerDown) \
	op(EELNetworkConnectionStatus::NetworkError) 

enum class EELNetworkConnectionStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELNetworkConnectionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
