// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSDataLoadingResult_generated_h
#error "ESSDataLoadingResult.generated.h already included, missing '#pragma once' in ESSDataLoadingResult.h"
#endif
#define ABP_200508_ESSDataLoadingResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSDataLoadingResult_h


#define FOREACH_ENUM_ESSDATALOADINGRESULT(op) \
	op(ESSDataLoadingResult::None) \
	op(ESSDataLoadingResult::Success) \
	op(ESSDataLoadingResult::Failed) 

enum class ESSDataLoadingResult : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSDataLoadingResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
