// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETrainingReversalKind : uint8;
#ifdef ABP_200508_TrainingReversalKindEventDelegate_generated_h
#error "TrainingReversalKindEventDelegate.generated.h already included, missing '#pragma once' in TrainingReversalKindEventDelegate.h"
#endif
#define ABP_200508_TrainingReversalKindEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_TrainingReversalKindEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventTrainingReversalKindEvent_Parms \
{ \
	ETrainingReversalKind Kind; \
}; \
static inline void FTrainingReversalKindEvent_DelegateWrapper(const FMulticastScriptDelegate& TrainingReversalKindEvent, ETrainingReversalKind Kind) \
{ \
	_Script_ABP_200508_eventTrainingReversalKindEvent_Parms Parms; \
	Parms.Kind=Kind; \
	TrainingReversalKindEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_TrainingReversalKindEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
