// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSOnlineErrorType_generated_h
#error "ESSOnlineErrorType.generated.h already included, missing '#pragma once' in ESSOnlineErrorType.h"
#endif
#define ABP_200508_ESSOnlineErrorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSOnlineErrorType_h


#define FOREACH_ENUM_ESSONLINEERRORTYPE(op) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_None) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_NetworkOffline) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_ServerConnect) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToYGS2) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_HttpRequestToSSMode) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_NetworkError) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_SignOut_EOS) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_SignOut_NX) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_SignOut_XB) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_SignOut_PS) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_Offline_NX) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_Offline_XB) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_Offline_PS) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_NeedsMasterDataUpdate) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_DataDownloadTimeout) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_MatchStopTimeout) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_PlacingTimeout) \
	op(ESSOnlineErrorType::ESSOnlineErrorType_GameResultTimeout) \
	op(ESSOnlineErrorType::ServiceParamIsNull) \
	op(ESSOnlineErrorType::Maintenance) \
	op(ESSOnlineErrorType::MaintenanceStart) \
	op(ESSOnlineErrorType::Closed) \
	op(ESSOnlineErrorType::DisconnectByCheat) \
	op(ESSOnlineErrorType::BlockedByCheat) 

enum class ESSOnlineErrorType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSOnlineErrorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
