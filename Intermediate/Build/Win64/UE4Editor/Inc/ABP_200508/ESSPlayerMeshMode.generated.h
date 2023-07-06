// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSPlayerMeshMode_generated_h
#error "ESSPlayerMeshMode.generated.h already included, missing '#pragma once' in ESSPlayerMeshMode.h"
#endif
#define ABP_200508_ESSPlayerMeshMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSPlayerMeshMode_h


#define FOREACH_ENUM_ESSPLAYERMESHMODE(op) \
	op(ESSPlayerMeshMode::Default) \
	op(ESSPlayerMeshMode::CloneForCameraCulling) \
	op(ESSPlayerMeshMode::CloneForDead) 

enum class ESSPlayerMeshMode : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerMeshMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS