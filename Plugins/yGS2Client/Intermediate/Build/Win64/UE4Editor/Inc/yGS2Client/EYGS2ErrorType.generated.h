// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGS2CLIENT_EYGS2ErrorType_generated_h
#error "EYGS2ErrorType.generated.h already included, missing '#pragma once' in EYGS2ErrorType.h"
#endif
#define YGS2CLIENT_EYGS2ErrorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_EYGS2ErrorType_h


#define FOREACH_ENUM_EYGS2ERRORTYPE(op) \
	op(EYGS2ErrorType::NoRequest) \
	op(EYGS2ErrorType::Requesting) \
	op(EYGS2ErrorType::Processing) \
	op(EYGS2ErrorType::Retrying) \
	op(EYGS2ErrorType::Canceling) \
	op(EYGS2ErrorType::Analyzing) \
	op(EYGS2ErrorType::Responed) \
	op(EYGS2ErrorType::ServerDown) \
	op(EYGS2ErrorType::Maintenance) \
	op(EYGS2ErrorType::WrongRequest) \
	op(EYGS2ErrorType::AccessDenied) \
	op(EYGS2ErrorType::NeedAuth) \
	op(EYGS2ErrorType::NeedRetryAuth) \
	op(EYGS2ErrorType::WrongEnvironment) \
	op(EYGS2ErrorType::WrongApplication) \
	op(EYGS2ErrorType::WrongVersion) \
	op(EYGS2ErrorType::WrongApiVersion) \
	op(EYGS2ErrorType::NeedRegisterUser) \
	op(EYGS2ErrorType::AlreadyRegisterd) \
	op(EYGS2ErrorType::NotFoundUser) \
	op(EYGS2ErrorType::Conflict) \
	op(EYGS2ErrorType::InsufficentServerResource) \
	op(EYGS2ErrorType::WrongInputData) \
	op(EYGS2ErrorType::NotFoundData) \
	op(EYGS2ErrorType::DuplicatedData) \
	op(EYGS2ErrorType::DenyClient) \
	op(EYGS2ErrorType::DataBroken) \
	op(EYGS2ErrorType::NetworkError) \
	op(EYGS2ErrorType::ServerScriptError) \
	op(EYGS2ErrorType::InternalError) \
	op(EYGS2ErrorType::FatalError) \
	op(EYGS2ErrorType::EndRequest) 

enum class EYGS2ErrorType : uint8;
template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2ErrorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
