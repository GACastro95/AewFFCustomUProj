// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataProcResult : uint8;
#ifdef ELITE_SaveDataLoadedDelegateDelegate_generated_h
#error "SaveDataLoadedDelegateDelegate.generated.h already included, missing '#pragma once' in SaveDataLoadedDelegateDelegate.h"
#endif
#define ELITE_SaveDataLoadedDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_SaveDataLoadedDelegateDelegate_h_6_DELEGATE \
struct _Script_ELITE_eventSaveDataLoadedDelegate_Parms \
{ \
	bool _Successed; \
	ESaveDataProcResult _ProcResult; \
}; \
static inline void FSaveDataLoadedDelegate_DelegateWrapper(const FScriptDelegate& SaveDataLoadedDelegate, bool _Successed, ESaveDataProcResult _ProcResult) \
{ \
	_Script_ELITE_eventSaveDataLoadedDelegate_Parms Parms; \
	Parms._Successed=_Successed ? true : false; \
	Parms._ProcResult=_ProcResult; \
	SaveDataLoadedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_SaveDataLoadedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
