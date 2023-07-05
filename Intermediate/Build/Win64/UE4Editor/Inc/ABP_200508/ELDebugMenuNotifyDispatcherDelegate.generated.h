// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class FELDebugMenuNotifyType : uint8;
class UELDebugMenuUIBase;
struct FELDebugMenuSimpleUIParam;
#ifdef ABP_200508_ELDebugMenuNotifyDispatcherDelegate_generated_h
#error "ELDebugMenuNotifyDispatcherDelegate.generated.h already included, missing '#pragma once' in ELDebugMenuNotifyDispatcherDelegate.h"
#endif
#define ABP_200508_ELDebugMenuNotifyDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuNotifyDispatcherDelegate_h_9_DELEGATE \
struct _Script_ABP_200508_eventELDebugMenuNotifyDispatcher_Parms \
{ \
	FELDebugMenuNotifyType DebugMenuNotifyType; \
	UELDebugMenuUIBase* DebugMenuUIBase; \
	FString RegistKey; \
	FELDebugMenuSimpleUIParam ELDebugMenuSimpleUIParam; \
}; \
static inline void FELDebugMenuNotifyDispatcher_DelegateWrapper(const FMulticastScriptDelegate& ELDebugMenuNotifyDispatcher, FELDebugMenuNotifyType DebugMenuNotifyType, UELDebugMenuUIBase* DebugMenuUIBase, const FString& RegistKey, FELDebugMenuSimpleUIParam const& ELDebugMenuSimpleUIParam) \
{ \
	_Script_ABP_200508_eventELDebugMenuNotifyDispatcher_Parms Parms; \
	Parms.DebugMenuNotifyType=DebugMenuNotifyType; \
	Parms.DebugMenuUIBase=DebugMenuUIBase; \
	Parms.RegistKey=RegistKey; \
	Parms.ELDebugMenuSimpleUIParam=ELDebugMenuSimpleUIParam; \
	ELDebugMenuNotifyDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuNotifyDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
