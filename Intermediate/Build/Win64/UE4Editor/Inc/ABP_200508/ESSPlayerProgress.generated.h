// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSPlayerProgress_generated_h
#error "ESSPlayerProgress.generated.h already included, missing '#pragma once' in ESSPlayerProgress.h"
#endif
#define ABP_200508_ESSPlayerProgress_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSPlayerProgress_h


#define FOREACH_ENUM_ESSPLAYERPROGRESS(op) \
	op(ESSPlayerProgress::Nothing) \
	op(ESSPlayerProgress::DoneHotPlayerSetup) \
	op(ESSPlayerProgress::DoneLobby) \
	op(ESSPlayerProgress::DoneMatchPointPay) \
	op(ESSPlayerProgress::DoneUIPrepare) \
	op(ESSPlayerProgress::DoneOpenGamePlayScreen) \
	op(ESSPlayerProgress::DoneDescription) \
	op(ESSPlayerProgress::DoneActorSpawned) \
	op(ESSPlayerProgress::ReadyToNext_FromLoading) \
	op(ESSPlayerProgress::ReadyToNext_FromSetup) \
	op(ESSPlayerProgress::ReadyToNext_FromEntrance) \
	op(ESSPlayerProgress::ReadyToNext_FromOpenGamePlayScreen) \
	op(ESSPlayerProgress::ReadyToNext_FromDescription) \
	op(ESSPlayerProgress::NotifiedFromServer_Dead) 

enum class ESSPlayerProgress : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerProgress>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
