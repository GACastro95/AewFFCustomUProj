// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELSSWebRequestBase;
#ifdef ABP_200508_CreateWebAPISettingDelegate_generated_h
#error "CreateWebAPISettingDelegate.generated.h already included, missing '#pragma once' in CreateWebAPISettingDelegate.h"
#endif
#define ABP_200508_CreateWebAPISettingDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CreateWebAPISettingDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventCreateWebAPISetting_Parms \
{ \
	UELSSWebRequestBase* CreateAPI; \
}; \
static inline void FCreateWebAPISetting_DelegateWrapper(const FMulticastScriptDelegate& CreateWebAPISetting, UELSSWebRequestBase* CreateAPI) \
{ \
	_Script_ABP_200508_eventCreateWebAPISetting_Parms Parms; \
	Parms.CreateAPI=CreateAPI; \
	CreateWebAPISetting.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CreateWebAPISettingDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
