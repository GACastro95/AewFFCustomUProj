// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSWeaponType_generated_h
#error "ESSWeaponType.generated.h already included, missing '#pragma once' in ESSWeaponType.h"
#endif
#define ABP_200508_ESSWeaponType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSWeaponType_h


#define FOREACH_ENUM_ESSWEAPONTYPE(op) \
	op(ESSWeaponType::None) \
	op(ESSWeaponType::Melee) \
	op(ESSWeaponType::Gun) \
	op(ESSWeaponType::Throw) \
	op(ESSWeaponType::Trap) \
	op(ESSWeaponType::Max) 

enum class ESSWeaponType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
